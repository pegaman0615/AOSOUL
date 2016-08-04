#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
private "_end";
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

if (FETCH_CONST(life_coplevel) < 1 ) exitWith {
    ["Notwhitelisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

if (!(str(player) in ["cop_6","cop_7","cop_8"])) then {
    if ((FETCH_CONST(life_coplevel)) < 2 ) then {
        ["NotWhitelisted",false,true] call BIS_fnc_endMission;
        sleep 30;
    };
};


player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

[] execVM "Custom\FlareGun.sqf";  //SuperFlare