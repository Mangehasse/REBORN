#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Blah blah.
*/
private["_group","_hideout","_action","_cpRate","_cP","_progressBar","_title","_titleText","_ui","_flagTexture","_markername","_gangname2"];
_hideout = (nearestObjects[getPosATL player,["Land_u_Barracks_V2_F","Land_i_Barracks_V2_F"],25]) select 0; //Barracks
_group = _hideout getVariable ["gangOwner",grpNull];

_captureDistance = 25;

if({side _x == west} count playableUnits < 5) exitWith
	{ 
		["There aren't enough A.P.D online to capture the bandit zone."] spawn BIS_fnc_dynamicText;
	};

if(isNil {(group player) getVariable "gang_name"}) exitWith {titleText[localize "STR_GNOTF_CreateGang","PLAIN"];};
if(_group == (group player)) exitWith {titleText[localize "STR_GNOTF_Controlled","PLAIN"]};
if((_hideout getVariable ["inCapture",FALSE])) exitWith {hint localize "STR_GNOTF_Captured";};
if(!isNull _group) then {
	_gangName = _group getVariable ["gang_name",""];
	_action = [
		format[localize "STR_GNOTF_AlreadyControlled",_gangName],
		localize "STR_GNOTF_CurrentCapture",
		localize "STR_Global_Yes",
		localize "STR_Global_No"
	] call BIS_fnc_guiMessage;
	
	_cpRate = 0.01;
} else {
	_cpRate = 0.01;
};

if(!isNil "_action" && {!_action}) exitWith {titleText[localize "STR_GNOTF_CaptureCancel","PLAIN"];};
//life_action_inUse = true;

//Setup the progress bar

disableSerialization;
_title = localize "STR_GNOTF_CapturingBandit";
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;
[[0,1,2],format["The %1 are taking over the Bandit Zone",(group player) getVariable "gang_name" ]] remoteExec ["life_fnc_broadcast",0];

[format["Capturing..stay within %1 m.",_captureDistance]] spawn BIS_fnc_dynamicText;

while {true} do
{
	sleep 15;
		if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = uiNamespace GVAR "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + _cpRate;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	_hideout SVAR["inCapture",true,true];
	if(_cP >= 1 OR !alive player) exitWith {_hideout SVAR["inCapture",false,true];};
	if(life_istazed) exitWith {_hideout SVAR["inCapture",false,true];};
	if(player distance _hideout >= _captureDistance) exitWith {_hideout SVAR["inCapture",false,true]; life_interrupted = true;};
	if(vehicle player != player) exitWith{_hideout SVAR["inCapture",false,true];};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(!alive player OR life_istazed) exitWith {life_action_inUse = false;_hideout setVariable["inCapture",false,true];};
if((player getVariable["restrained",false])) exitWith {life_action_inUse = false;_hideout setVariable["inCapture",false,true];};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_GNOTF_CaptureCancel","PLAIN"]; life_action_inUse = false;_hideout setVariable["inCapture",false,true];};
life_action_inUse = false;

titleText["District has been captured.","PLAIN"];
/*_flagTexture = [
		"\A3\Data_F\Flags\Flag_red_CO.paa",
		"\A3\Data_F\Flags\Flag_green_CO.paa",
		"\A3\Data_F\Flags\Flag_blue_CO.paa",
		"\A3\Data_F\Flags\Flag_white_CO.paa",
		"\A3\Data_F\Flags\flag_fd_red_CO.paa",
		"\A3\Data_F\Flags\flag_fd_green_CO.paa",
		"\A3\Data_F\Flags\flag_fd_blue_CO.paa",
		"\A3\Data_F\Flags\flag_fd_orange_CO.paa"
	] call BIS_fnc_selectRandom;*/
_this select 0 setFlagTexture "\A3\Data_F\Flags\Flag_red_CO.paa";
[[0,1],"STR_GNOTF_CaptureBanditSuccess",true,[name player,(group player) getVariable "gang_name"]] remoteExec ["life_fnc_broadcast",0];

// CREATE MARKER AT MAP BY Pictureclass
 
//_markername = str(getPos _hideout);
_gangname2 = formatText["Bandit Zone Captured by: %1",(group player) getVariable "gang_name"];
/*
if (getMarkerColor _markername == "") then 
{
	gang_owner_marker = createMarker [_markername, position player]; 
	_markername setMarkerShape "ICON"; 
	_markername setMarkerType "hd_warning"; 
	_markername setMarkerColor "ColorBlue"; 
	_markername setMarkerText str(_gangname2);
	gang_owner_marker = "";
}
else 
{
	_markername setMarkerText str(_gangname2);
};
*/
"gang_area_3" setMarkerColor "ColorBlack";
"gang_area_3" setMarkerText str(_gangname2);

_hideout setVariable["inCapture",false,true];
_hideout setVariable["gangOwner",(group player),true];
