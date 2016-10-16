#include "..\..\script_macros.hpp"
/* By Scotty */

private["_pos","_time"];
//waitUntil{!isNull life_corpse};
_pos = getposATL life_corpse;

if (life_is_arrested) exitWith{};


_time = time;

while{time - _time < (60 * 15)} do

{
	if(player distance _pos < 1000) then {
	
		if(!dialog) then {
			cutText["","PLAIN"];
			cutText["You are trying to break the new life rule. Respawning...","PLAIN"];
			sleep 5;
			[] spawn life_fnc_spawnMenu;
		};
	};
	sleep 10;
}