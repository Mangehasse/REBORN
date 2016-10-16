#include <macro.h>
/*
	File: fn_gather.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main functionality for gathering.
*/
if(isNil "life_action_gathering") then {life_action_gathering = false;};
private["_gather","_itemWeight","_diff","_itemName","_resourceZones","_zone"];
_resourceZones = ["apple_1","apple_2","apple_3","apple_4","peaches_1","peaches_2","peaches_3","peaches_4","olive_1","olive_2","olive_4","olive_5","strawberry_1","strawberry_2","strawberry_3","strawberry_4","blueberry_1","blueberry_2","blueberry_3","blueberry_4","heroin_1","cocaine_1","weed_1","frog_1","ecstasy_1","mushroom_1","sugar_1","sugar_2","rice_1","rice_2"];
_zone = "";

if(life_action_gathering) exitWith {}; //Action is in use, exit to prevent spamming.
life_action_gathering = true;
//Find out what zone we're near
{
	if(player distance (getMarkerPos _x) < 30) exitWith {_zone = _x;};
} foreach _resourceZones;

if(EQUAL(_zone,"")) exitWith {life_action_inUse = false;};

//Get the resource that will be gathered from the zone name...
switch(true) do {
	case (_zone in ["apple_1","apple_2","apple_3","apple_4"]): {_gather = ["apple",3];};
	case (_zone in ["peaches_1","peaches_2","peaches_3","peaches_4"]): {_gather = ["peach",3];};
	case (_zone in ["olive_1","olive_2","olive_4","olive_5"]): {_gather = ["olive",4];};
	case (_zone in ["strawberry_1","strawberry_2","strawberry_3","strawberry_4"]): {_gather = ["strawberry",4];};
	case (_zone in ["blueberry_1","blueberry_2","blueberry_3","blueberry_4"]): {_gather = ["blueberry",5];};
	case (_zone in ["heroin_1"]): {_gather = ["heroin_unprocessed",2];};
	case (_zone in ["cocaine_1"]): {_gather = ["cocaine_unprocessed",2];};
	case (_zone in ["weed_1"]): {_gather = ["cannabis",2];};
	case (_zone in ["frog_1"]): {_gather = ["frog",2];};
	case (_zone in ["ecstasy_1"]): {_gather = ["ecstasy_unprocessed",2];};
	case (_zone in ["mushroom_1"]): {_gather = ["mushroom_unprocessed",2];};
	case (_zone in ["sugar_1","sugar_2"]): {_gather = ["sugar_unprocessed",2];};
	case (_zone in ["rice_1","rice_2"]): {_gather = ["rice_unprocessed",2];};

	default {""};
};
//gather check??
if(vehicle player != player) exitWith {};

_diff = [SEL(_gather,0),SEL(_gather,1),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(EQUAL(_diff,0)) exitWith {hint localize "STR_NOTF_InvFull"};
life_action_inUse = true;

for "_i" from 0 to 2 do {
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	player say3D "gather";
	sleep 2.5;
};

if(([true,SEL(_gather,0),_diff] call life_fnc_handleInv)) then {
	_itemName = M_CONFIG(getText,"VirtualItems",SEL(_gather,0),"displayName");
	titleText[format[localize "STR_NOTF_Gather_Success",(localize _itemName),_diff],"PLAIN"];
};

life_action_inUse = false;