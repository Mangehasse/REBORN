#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Handles various different ammo types being fired.
*/
private["_ammoType","_projectile"];
_ammoType = SEL(_this,4); 
_projectile = SEL(_this,6);


if((playerside == civilian)  && safezone) then {

 deleteVehicle _projectile;

};

if(EQUAL(_ammoType,"GrenadeHand_stone")) then {
	_projectile spawn {
		private "_position";
		while {!isNull _this} do {
			_position = ASLtoATL (visiblePositionASL _this);
			sleep 0.1;
		};
		[_position] remoteExec ["life_fnc_flashbang",RSERV];
	};
};