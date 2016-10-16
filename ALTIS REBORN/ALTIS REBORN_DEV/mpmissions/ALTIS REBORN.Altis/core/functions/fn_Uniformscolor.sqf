#include <macro.h>
/*
	COP UNIFORM SCRIPT
	Edited: by maximum for better handling of actual uniforms
	Created for www.altisliferpg.com
*/

if(side player == independent) then {
	if ((uniform player) == "U_IG_Guerilla2_3") then {
		player setObjectTextureGlobal [0, "textures\medic\clothing\MedicGuerilla.jpg"];
	};
	if ((uniform player) == "U_B_Wetsuit") then {
		player setObjectTextureGlobal [0, "textures\medic\clothing\MedicDiver.jpg"];
	};
	if (backpack player == "B_Bergen_sgg") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\medic\clothing\MedicBergen.jpg"];
	};
	if (backpack player == "B_Carryall_oli") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\medic\clothing\MedicCarryall.jpg"];
	};
	if (backpack player == "B_Kitbag_mcamo") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\medic\clothing\MedicKitbag.jpg"];
	};
};

if(side player == WEST) then {
	if (uniform player == "U_BG_Guerilla2_1" && (FETCH_CONST(life_coplevel) >= 1)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r1.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) == 2)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r2.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 3)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r3.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 4)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r4.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 5)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r5.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 6)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r6.jpg"]; 
	};
	if (uniform player in ["U_B_CTRG_3","U_B_CTRG_1"] && (FETCH_CONST(life_coplevel) >= 7)) then {
		player setObjectTextureGlobal [0, "textures\police\clothing\r7.jpg"]; 
	};
	if (backpack player == "B_Carryall_cbr" && (FETCH_CONST(life_coplevel) >= 1)) then {
		backpackContainer player setObjectTextureGlobal [0, "textures\police\clothing\carryall.jpg"]; 
	};
	if (backpack player == "B_Kitbag_cbr" && (FETCH_CONST(life_coplevel) >= 1)) then {
		backpackContainer player setObjectTextureGlobal [0, "textures\police\clothing\kitbag.jpg"]; 
	};
};

if(side player == WEST && license_cop_military) then {
	if (uniform player == "U_B_CombatUniform_mcam") then {
		player setObjectTextureGlobal [0, "textures\military\clothing\CTRG.jpg"]; 
	};
	if (uniform player == "U_B_CombatUniform_mcam_vest") then {
		player setObjectTextureGlobal [0, "textures\military\clothing\CTRG.jpg"]; 
	};
	if (backpack player == "B_Carryall_khk" && (FETCH_CONST(life_coplevel) >= 1)) then {
		backpackContainer player setObjectTextureGlobal [0, ""]; 
	};
	if (backpack player == "B_Kitbag_sgg" && (FETCH_CONST(life_coplevel) >= 1)) then {
		backpackContainer player setObjectTextureGlobal [0, ""]; 
	};
};

if(side player == civilian) then {
	if(side player == civilian && uniform player == "U_C_Scientist") then {
		player setObjectTextureGlobal [0, "textures\civilian\clothing\prisoner.jpg"];
	};
};

if(side player == civilian && license_civ_rebel) then {
	if(side player == civilian && uniform player == "U_B_CTRG_3") then {
		player setObjectTextureGlobal [0, "textures\rebel\clothing\CTRG.jpg"];
	};
	if(side player == civilian && uniform player == "U_I_CombatUniform") then {
		player setObjectTextureGlobal [0, "textures\rebel\clothing\aff.jpg"];
	};
	if(side player == civilian && backpack player == "B_Carryall_cbr") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\rebel\clothing\carryall.jpg"];
	};
	if(side player == civilian && backpack player == "B_Kitbag_cbr") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\rebel\clothing\kitbag.jpg"];
	};
};