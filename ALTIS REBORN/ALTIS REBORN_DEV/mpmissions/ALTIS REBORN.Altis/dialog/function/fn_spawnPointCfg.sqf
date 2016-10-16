/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","Kavala HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","Pyrgos HQ","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_4","Airfield HQ","\a3\ui_f\data\map\Markers\NATO\b_air.paa"],
			["cop_spawn_3","Paros HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
			["cop_spawn_5","Sofia HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]
		];
		
	    if(license_cop_military && playerSide == west) then {
		_return = _return +[["military_spawn_2","Military HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],["military_spawn_1","Military Base","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],["military_spawn_3","Military Backup","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"]];
		};
	};
	
	case civilian:
	{
		_return = [
			["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
		
		if(license_civ_donator1 && playerSide == civilian) then {
		_return = _return +[["donor_spawn_1","Donator HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]];
		};

		if(license_civ_donator3 && playerSide == civilian) then {
		_return = _return +[["donor_spawn_1","Donator HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]];
		};

		if(license_civ_donator5 && playerSide == civilian) then {
		_return = _return +[["donor_spawn_1","Donator HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]];
		};
			
		if(license_civ_rebel && playerSide == civilian) then {
		_return = _return +[["reb_spawn_1","F.I.A HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
		["reb_spawn_2","F.I.A Checkpoint","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
		["reb_spawn_4","F.I.A Island Outpost","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
		["reb_spawn_3","F.I.A Outpost","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"]];
		};

		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","Kavala Hospital HQ","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Athira Field Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","Pygros Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;