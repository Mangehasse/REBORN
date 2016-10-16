#include <macro.h>
/*
	File: fn_adminTpHere.sqf
	Author: ColinM9991
	
	Description:
	Teleport you to selected player.
*/
if(FETCH_CONST(life_adminlevel) < 5) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

private["_target"];
_target = lbData[2902,lbCurSel (2902)];
_target = call compile format["%1", _target];
if(isNil "_target") exitwith {};
if(isNull _target) exitWith {};

player setPos (getPos _target);
hint format["You have teleported to %1",_target getVariable["realname",name _target]];