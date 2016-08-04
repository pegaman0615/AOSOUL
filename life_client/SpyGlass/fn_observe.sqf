/*
    File: fn_observe.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    This is the observation part of SPY-GLASS, it reports to the RPT log
    of unusual activity by the player.
*/
private["_pName","_pUID","_pReason"];
params [
  ["_pName","",[""]],
  ["_pUID","",[""]],
  ["_pReason","",[""]]
];

if (_pName isEqualTo "" || _pUID isEqualTo "" || _pReason isEqualTo "") exitWith {}; //Bad params passed..

diag_log format["||SPY-GLASS Observes|| Name: %1 | UID: %2 | Reason: %3",_pName,_pUID,_pReason]; //Outputs to RPT for external programs to parse,log,react to.