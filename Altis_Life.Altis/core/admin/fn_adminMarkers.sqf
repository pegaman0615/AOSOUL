#include "..\..\script_macros.hpp"
/*
	File: fn_adminMarkers.sqf
	Author: NiiRoZz
	Description:
	Display markers for all players
*/
private["_PlayerMarkers","_pSee"];
if(FETCH_CONST(life_adminlevel) < 4) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

if (!life_markers) then {
	life_markers = true;
	hint localize "STR_ANOTF_MEnabled";
} else {
	life_markers = false;
	hint localize "STR_ANOTF_MDisabled";
};

_PlayerMarkers = [];
while {life_markers} do
{
	{
		if !(_x in playableUnits) then {
			deleteMarkerLocal str _x;
		};
	} forEach _PlayerMarkers;
	{
		if(alive _x && side _x == west) then {
			deleteMarkerLocal str _x;
			_pSee = createMarkerLocal [str _x,getPos _x];
			_pSee setMarkerTypeLocal "mil_triangle";
			_pSee setMarkerPosLocal getPos _x;
			_pSee setMarkerSizeLocal [1,1];
			_pSee setMarkerTextLocal format['%1',_x getVariable["realname",name _x]];
			_pSee setMarkerColorLocal ("ColorBLUFOR");
			if !(_x in _PlayerMarkers) then {
				_PlayerMarkers pushback _x;
			};
		};

		if(alive _x && side _x == independent) then {
			deleteMarkerLocal str _x;
			_pSee = createMarkerLocal [str _x,getPos _x];
			_pSee setMarkerTypeLocal "mil_triangle";
			_pSee setMarkerPosLocal getPos _x;
			_pSee setMarkerSizeLocal [1,1];
			_pSee setMarkerTextLocal format['%1',_x getVariable["realname",name _x]];
			_pSee setMarkerColorLocal ("ColorIndependent");
			if !(_x in _PlayerMarkers) then {
				_PlayerMarkers pushback _x;
			};
		};
		if(alive _x && side _x == civilian) then {
			deleteMarkerLocal str _x;
			_pSee = createMarkerLocal [str _x,getPos _x];
			_pSee setMarkerTypeLocal "mil_triangle";
			_pSee setMarkerPosLocal getPos _x;
			_pSee setMarkerSizeLocal [1,1];
			_pSee setMarkerTextLocal format['%1',_x getVariable["realname",name _x]];
			_pSee setMarkerColorLocal ("ColorCivilian");
			if !(_x in _PlayerMarkers) then {
				_PlayerMarkers pushback _x;
			};
		};
	} forEach playableUnits;
	sleep 0.5;
};

{
	deleteMarkerLocal str _x;
} forEach _PlayerMarkers;
