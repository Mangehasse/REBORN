#include "..\..\script_macros.hpp"
/*
	File: fn_onPlayerRespawn.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Does something but I won't know till I write it...
*/
private["_unit","_corpse","_containers"];
_unit = SEL(_this,0);
_corpse = SEL(_this,1);
life_corpse = _corpse;

//Set some vars on our new body.
_unit SVAR ["restrained",FALSE,TRUE];
_unit SVAR ["Escorting",FALSE,TRUE];
_unit SVAR ["transporting",FALSE,TRUE]; //Again why the fuck am I setting this? Can anyone tell me?
_unit SVAR ["steam64id",steamid,true]; //Reset the UID.
_unit SVAR ["realname",profileName,true]; //Reset the players name.

_unit addRating 1e12; //Set our rating to a high value, this is for a ARMA engine thing.
player playMoveNow "amovppnemstpsraswrfldnon";

[] call life_fnc_setupActions;
[_unit,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),0)) then {player enableFatigue false;};
