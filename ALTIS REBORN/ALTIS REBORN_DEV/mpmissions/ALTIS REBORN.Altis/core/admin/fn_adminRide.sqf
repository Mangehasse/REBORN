#include <macro.h>
/*
	File: fn_adminTpHere.sqf
	Author: ColinM9991
	
	Description:
	Teleport selected player to you.
*/
closeDialog 0;
if(FETCH_CONST(life_adminlevel) < 5) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};
_toSpawn = "C_Hatchback_01_sport_F" createVehicle position player;	