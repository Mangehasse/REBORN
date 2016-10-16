#include <macro.h>
/*
	File: fn_craftAction.sqf
	Author: EdgeKiller

	Description:
	Master handling for crafting an item.
*/
if(vehicle player != player) exitWith {};
if(life_is_processing) exitWith {};
if(life_action_gathering) exitWith {};
if(life_action_inUse) exitWith {};

private["_item","_itemInfo","_itemFilter","_allMaterial","_matsNeed","_config","_invSize","_str","_matsNum","_weight","_oldItem","_newItem","_itemName","_upp","_removeItemSuccess","_handledItem","_question","_caisse"];

disableSerialization;

if(EQUAL((lbCurSel 669),-1)) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(669);
_itemFilter = CONTROL_DATA(673);

_allMaterial = true;
_matsNeed = 0;

_config = [_itemFilter] call life_fnc_craftCfg;
{
	if(EQUAL(_item,(_x select 0)))then
	{
		_matsNeed = _x select 1;
		_invSize = count _matsNeed;
		for [{_i=0},{_i<_invSize-1},{_i=_i+2}] do 
		{
			_str = ITEM_NAME(_matsNeed select _i);
			_matsNum = _matsNeed select _i+1;
			if((ITEM_VALUE(_matsNeed select _i)) < _matsNum) exitWith {_allMaterial = false;};
		};
	};
} forEach (_config);

if(!_allMaterial) exitWith {hint localize "STR_PM_NoMaterial";};

//Some checks
if(EQUAL((count _matsNeed),0)) exitWith {};

_weight = 0;
if(EQUAL(_itemFilter,"item")) then 
{
	_weight = ([_item] call life_fnc_itemWeight);
};

if(_itemFilter == "item" && (life_carryWeight + _weight) > life_maxWeight) exitWith {hint localize "STR_NOTF_NoRoom";};

_oldItem = _matsNeed;
_newItem = _item;

if(EQUAL(_itemFilter,"item")) then 
{
	_itemName = ITEM_NAME(_newItem);
} else {
	_itemInfo = [_newItem] call life_fnc_fetchCfgDetails;
	_itemName = _itemInfo select 1;
};

_upp = format["Crafting - %1",_itemName];
closeDialog 0;

5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

_removeItemSuccess = true;
_invSize = count _oldItem;
for [{_i=0},{_i<_invSize-1},{_i=_i+2}] do 
{

	_handledItem = ITEM_VARNAME(_oldItem select _i);
	if(!([false,_handledItem,_oldItem select _i+1] call life_fnc_handleInv)) exitWith {_removeItemSuccess = false;};
};

if(!_removeItemSuccess) exitWith {5 cutText ["","PLAIN"]; life_is_processing = false;};
[] call life_fnc_p_updateMenu;

life_is_processing = true;

while{true} do
{
	sleep 0.3;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_istazed) exitWith {};
    if(life_interrupted) exitWith {};
    if((player GVAR["restrained",false])) exitWith {};
};

5 cutText ["","PLAIN"];
player playActionNow "stop";

if(EQUAL(_itemFilter,"item")) then
{
	_handledItem = ITEM_VARNAME(_newItem);
	[true,_handledItem,1] call life_fnc_handleInv;
};

if(EQUAL(_itemFilter,"backpack")) then
{
	if(EQUAL((backpack player),"")) then
	{
		player addBackpack _newItem;
	} else {
		_question = [(localize "STR_CRAFT_AR_Backpack"), (localize "STR_CRAFT_AR_Question"), (localize "STR_Global_Yes"), (localize "STR_Global_No")] call BIS_fnc_guiMessage;
		if(_question) then 
		{
		    removeBackpack player;
			player addBackpack _newItem;
		} else {
		    _caisse = nearestObject [player,"Box_NATO_Grenades_F"];
		    if(!isNull _caisse) then {_caisse addBackpackCargoGlobal [_newItem,1];};
		};
		life_is_processing = false;
	};
};

if(EQUAL(_itemFilter,"uniform")) then
{
	if(EQUAL((uniform player),"")) then
	{
		player addUniform _newItem;
	} else {
	    _question = [(localize "STR_CRAFT_AR_Uniform"), (localize "STR_CRAFT_AR_Question"), (localize "STR_Global_Yes"), (localize "STR_Global_No")] call BIS_fnc_guiMessage;
		if(_question) then
		{
		    removeUniform player;
			player forceAddUniform _newItem;
		} else {
		    _caisse = nearestObject [player,"Box_NATO_Grenades_F"];
		    if(!isNull _caisse) then {_caisse addItemCargoGlobal [_newItem,1];};
		}; 
		life_is_processing = false;
	};
};

if(EQUAL(_itemFilter,"vest")) then
{
	if(EQUAL((vest player),"")) then
	{
		player addVest _newItem;
	} else {
	    _question = [(localize "STR_CRAFT_AR_Vest"), (localize "STR_CRAFT_AR_Question"), (localize "STR_Global_Yes"), (localize "STR_Global_No")] call BIS_fnc_guiMessage;
		if(_question) then
		{
		    removeVest player;
			player addVest _newItem;
		} else {
		    _caisse = nearestObject [player,"Box_NATO_Grenades_F"];
		    if(!isNull _caisse) then {_caisse addItemCargoGlobal [_newItem,1];};
		}; 
		life_is_processing = false;
	};
};

if(EQUAL(_itemFilter,"ammo")) then
{
	if(player canAdd _newItem) then
	{
		player addMagazine _newItem;
	} else {
		_caisse = nearestObject [player,"Box_NATO_Grenades_F"];
		if(!isNull _caisse) then {_caisse addMagazineCargoGlobal [_newItem,1];};
	    hint "Vous n'avez plus d'espace libre dans votre inventaire, l'objet a été stocké dans la caisse juste devant";
	};
    life_is_processing = false;
};

if(EQUAL(_itemFilter,"primweapon")) then 
{
	if(EQUAL(RIFLE,"")) then
	{
		player addWeapon _newItem;
	} else {
		_question = [(localize "STR_CRAFT_AR_PWeapon"), (localize "STR_CRAFT_AR_Question"), (localize "STR_Global_Yes"), (localize "STR_Global_No")] call BIS_fnc_guiMessage;
		if(_question) then 
		{
            player removeWeapon (primaryWeapon player);
            player addWeapon _newItem;
		} else {
		    _caisse = nearestObject [player,"Box_NATO_Grenades_F"];
		    if(!isNull _caisse) then {_caisse addWeaponCargoGlobal [_newItem,1];};
		};
		life_is_processing = false;
	};
};

if(EQUAL(_itemFilter,"hgweapon")) then 
{
	if(EQUAL(PISTOL,"")) then
	{
		player addWeapon _newItem;
	} else {
		_question = [(localize "STR_CRAFT_AR_HWeapon"), (localize "STR_CRAFT_AR_Question"), (localize "STR_Global_Yes"), (localize "STR_Global_No")] call BIS_fnc_guiMessage;
		if(_question) then 
		{
            player removeWeapon (handgunWeapon player);
            player addWeapon _newItem;
		} else {
		    _caisse = nearestObject [player,"Box_NATO_Grenades_F"];
		    if(!isNull _caisse) then {_caisse addWeaponCargoGlobal [_newItem,1];};
		};
		life_is_processing = false;
	};
};

titleText[format[localize "STR_CRAFT_Process",_itemName],"PLAIN"];

life_is_processing = false;
