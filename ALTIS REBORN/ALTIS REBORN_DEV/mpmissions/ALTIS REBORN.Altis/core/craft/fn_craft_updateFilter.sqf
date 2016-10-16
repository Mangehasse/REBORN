#include <macro.h>
/*
	File: fn_craft_updateFilter.sqf
	Description: Crafting System
	Created by EdgeKiller
    Coder: EdgeKiller
*/

disableSerialization;
private["_inv","_mats","_itemFilter","_struct","_str","_itemInfo","_config","_item","_matsNeed","_invSize","_matsNum"];
_inv = CONTROL(666,669);
_mats = CONTROL(666,672);
_itemFilter = CONTROL_DATA(673);

lbClear _inv;
_struct = "";

_config = [_itemFilter] call life_fnc_craftCfg;
{
	if(EQUAL(_itemFilter,"item")) then
	{
		_str = ITEM_NAME(_x select 0);
		_icon = M_CONFIG(getText,"VirtualItems",(_x select 0),"icon");
		_inv lbAdd format["%1",_str]; 
		_inv lbSetData[(lbSize _inv)-1,_x select 0];
		_inv lbSetPicture[(lbSize _inv)-1,_icon];
	} else {
		_itemInfo = [_x select 0] call life_fnc_fetchCfgDetails;
		_inv lbAdd format["%1",_itemInfo select 1];
		_inv lbSetData[(lbSize _inv)-1,_itemInfo select 0];
		_inv lbSetPicture[(lbSize _inv)-1,_itemInfo select 2];
	};
} forEach (_config);


_inv lbSetCurSel 0;
_item = CONTROL_DATA(669);

_config = [_itemFilter] call life_fnc_craftCfg;
{

	if(EQUAL(_item,(_x select 0)))then
	{
		_matsNeed = _x select 1;
		_invSize = count _matsNeed;
		for [{_i = 0},{_i < _invSize - 1},{_i = _i + 2}] do 
		{
			_str = ITEM_NAME(_matsNeed select _i);
			_matsNum = _matsNeed select _i+1;
			_struct = _struct + format["%1x %2<br/>",_matsNum,_str];
		};
	};
} forEach (_config);


_mats ctrlSetStructuredText parseText format["
<t size='0.8px'>
%1
</t>
",_struct];
