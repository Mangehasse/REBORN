/*
	File: fn_craftCfg.sqf
	Author: EdgeKiller
*/
private["_craft","_return"];
_craft = [_this,0,"",[""]] call BIS_fnc_param;
if(_craft == "") exitWith {closeDialog 0};

switch(_craft) do
{
	case "primweapon":
	{
		_return = 
		[
          ["arifle_Katiba_F",["gunbarrel",2,"iron_refined",2]]   //[Objekt classname, ["item" #1,"quantity item" #1,"item" #2,quantity item #2]]
		];
	};
	
	case "hgweapon":
	{
		_return = 
		[
			//[Objekt classname, [item #1,quantity item #1,item #2,quantity item #2]]
		];
	};
	
	case "ammo":
	{
		_return = 
		[
			//[Objekt classname, [item #1,quantity item #1,item #2,quantity item #2]]
		];
	};
	
	case "uniform":
	{
		_return = 
		[
			//[Objekt classname, [item #1,quantity item #1,item #2,quantity item #2]]
		];
	};
	
	case "vest":
	{
		_return = 
		[
			//[Objekt classname, [item #1,quantity item #1,item #2,quantity item #2]]
		];
	};

	case "backpack":
	{
		_return = 
		[
			//[Objekt classname, [item #1,quantity item #1,item #2,quantity item #2]]
		];
	};
	
	case "item":
	{
		_return = 
		[
		    //[Item classname, [item #1,quantity item #1,item #2,quantity item #2]]
		];
	};
};

_return; 