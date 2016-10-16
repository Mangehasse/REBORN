#include <macro.h>
/*
	File: fn_bankDepositAll.sqf
	Author: Ppgtjmad - CvGaming.net
	
	Description:
	Deposit All
*/
if(CASH == 0) exitWith {hint "You don't have any money to deposit!"};

private "_pockets";

_pockets = CASH;

ADD(BANK,_pockets);
SUB(CASH,_pockets);

hint format[localize "STR_ATM_DepositAllSuccess"];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;
