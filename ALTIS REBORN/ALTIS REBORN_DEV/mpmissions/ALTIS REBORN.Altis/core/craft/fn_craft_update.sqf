#include <macro.h>
/*
	File: fn_craft_update.sqf
	Description: Crafting System
	Created by EdgeKiller
    Coder: EdgeKiller
*/
private["_mats","_item","_itemFilter","_struct","_config","_matsNeed","_invSize","_str","_matsNum"];
disableSerialization;
  
_mats = CONTROL(666,672);
if(EQUAL((lbCurSel 669),-1)) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(669);
_itemFilter = CONTROL_DATA(673);

_struct = "";

_config = [_itemFilter] call life_fnc_craftCfg;
{
	if(EQUAL(_item,(_x select 0))) then
	{
		_matsNeed = _x select 1;
		_invSize = count _matsNeed;
		for [{_i = 0},{_i < _invSize - 1},{_i = _i + 2}] do 
		{
			_str = ITEM_NAME(_matsNeed select _i);;
			_matsNum = _matsNeed select _i+1;
			_struct = _struct + format["%1x %2<br/>",_matsNum,_str];
		};
	};
} forEach (_config);

if(_struct == "") then {_struct = "No materials needed";};

_mats ctrlSetStructuredText parseText format["
<t size='0.8px'>
%1
</t>
",_struct];
