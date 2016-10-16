/*
    File: fn_weed.sqf
    Author: Whiskey

    Description:
    Marijuana effects
*/
[false,"ecstasy_processed",1] call life_fnc_handleInv;

//Close inventory
closeDialog 0;
    
PP_wetD = ppEffectCreate ["WetDistortion",300];
PP_wetD ppEffectEnable true;
PP_wetD ppEffectAdjust [-3.716,0.204,0.053,0.931,-3.592,1.534,-2.235,-0.01,-0.04,0.1,0.01,0.02,0.05,1,1];
PP_wetD ppEffectCommit 1;
sleep 2.25;    

private["_force"];
for "_i" from 0 to 44 do {
    	PP_wetD = ppEffectCreate ["WetDistortion",300];
	PP_wetD ppEffectEnable true;
	PP_wetD ppEffectAdjust [-3.716,0.204,0.053,0.931,-3.592,1.534,-2.235,-0.01,-0.04,0.1,0.01,0.02,0.05,1,1];
	PP_wetD ppEffectCommit 1;    
    sleep 2.25;
};

PP_wetD ppEffectEnable false;

sleep 1800;