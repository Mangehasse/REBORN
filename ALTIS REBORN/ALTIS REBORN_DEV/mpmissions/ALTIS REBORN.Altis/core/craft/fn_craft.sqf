#include <macro.h>
/*
	File: fn_craft.sqf
	Description: Crafting System
	Created by EdgeKiller
    Coder: EdgeKiller
*/
private["_inv","_filter"];

if(!dialog) then {createDialog "Life_craft";};

disableSerialization;

_inv = CONTROL(666,669);
lbClear _inv;
_filter = CONTROL(666,673);

_filter lbAdd localize "STR_CRAFT_FILTER_PWeapon";
_filter lbSetData[(lbSize _filter)-1,"primweapon"];

_filter lbAdd localize "STR_CRAFT_FILTER_HWeapon";
_filter lbSetData[(lbSize _filter)-1,"hgweapon"];

_filter lbAdd localize "STR_CRAFT_FILTER_Ammo";
_filter lbSetData[(lbSize _filter)-1,"ammo"];

_filter lbAdd localize "STR_CRAFT_FILTER_Uniform";
_filter lbSetData[(lbSize _filter)-1,"uniform"];

_filter lbAdd localize "STR_CRAFT_FILTER_Vest";
_filter lbSetData[(lbSize _filter)-1,"vest"];

_filter lbAdd localize "STR_CRAFT_FILTER_Backpack";
_filter lbSetData[(lbSize _filter)-1,"backpack"];

_filter lbAdd localize "STR_CRAFT_FILTER_Item";
_filter lbSetData[(lbSize _filter)-1,"item"];

_filter lbSetCurSel 0;