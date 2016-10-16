StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v3.1.5";
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\noVoice.sqf";
[] execVM "scripts\removesnakes.sqf";
[] execVM "scripts\fn_statusBar.sqf";
[] spawn life_fnc_showDirectVON;

StartProgress = true;