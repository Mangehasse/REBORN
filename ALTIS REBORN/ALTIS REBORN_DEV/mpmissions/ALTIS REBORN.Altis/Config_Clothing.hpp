/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

    class donator1 {
		title = "STR_Shops_C_donor";
		license = "donator1";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_OG_Guerilla2_1", "", 1550, { "", "", -1 } },
			{ "U_NikosBody", "", 550, { "", "", -1 } },
			{ "U_NikosAgedBody", "", 550, { "", "", -1 } }
			
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class donator3 {
		title = "STR_Shops_C_donor";
		license = "donator3";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_OG_Guerilla2_1", "", 1550, { "", "", -1 } },
			{ "U_NikosBody", "", 550, { "", "", -1 } },
			{ "U_NikosAgedBody", "", 550, { "", "", -1 } },
			{ "U_B_PilotCoveralls", "", 75000, { "", "", -1 } },
			{ "U_OG_Guerilla1_1", "", 125000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_MilCap_blue", "", 25000, { "", "", -1 } },
			{ "H_MilCap_gry", "", 25000, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 25000, { "", "", -1 } },
			{ "H_MilCap_ocamo", "", 25000, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Chestrig_oli", "", 45000, { "", "", -1 } },
			{ "V_Chestrig_blk", "", 45000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 45000, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 45000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class donator5 {
		title = "STR_Shops_C_donor";
		license = "donator5";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_OG_Guerilla2_1", "", 1550, { "", "", -1 } },
			{ "U_NikosBody", "", 550, { "", "", -1 } },
			{ "U_NikosAgedBody", "", 550, { "", "", -1 } },
			{ "U_B_PilotCoveralls", "", 75000, { "", "", -1 } },
			{ "U_OG_Guerilla1_1", "", 125000, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "", 45000, { "", "", -1 } },
			{ "U_IG_Guerilla3_2", "", 45000, { "", "", -1 } }
			
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Shemag_olive", "", 25000, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 25000, { "", "", -1 } },
			{ "H_MilCap_blue", "", 17500, { "", "", -1 } },
			{ "H_MilCap_gry", "", 17500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 17500, { "", "", -1 } },
			{ "H_MilCap_ocamo", "", 17500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Chestrig_oli", "", 45000, { "", "", -1 } },
			{ "V_Chestrig_blk", "", 45000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 45000, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 45000, { "", "", -1 } },
			{ "V_TacVest_khk", "", 225000, { "", "", -1 } },
			{ "V_TacVest_brn", "", 225000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_BG_Guerilla2_1", "Cadet Uniform", 25, { "", "", -1 } },
			{ "U_B_CTRG_1", "Police Uniform", 350, { "life_coplevel", "SCALAR", 2 } },
			{ "U_B_CTRG_3", "Police Uniform (Rolled-Up)", 350, { "life_coplevel", "SCALAR", 2 } },
			{ "U_B_Wetsuit", "Wetsuit", 350, { "life_coplevel", "SCALAR", 2 } },
			{ "U_OG_Guerilla3_1", "Undercover Clothes", 550, { "life_coplevel", "SCALAR", 5 } },
			{ "U_OG_Guerilla2_3", "Undercover Clothes", 550, { "life_coplevel", "SCALAR", 5 } },
			{ "U_OG_Guerilla2_2", "Undercover Clothes", 550, { "life_coplevel", "SCALAR", 5 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Beret_blk_POLICE", "Beret [Police]", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Beret_02", "Beret [NATO]", 100, { "life_coplevel", "SCALAR", 3 } },
			{ "H_Beret_red", "Beret [RED]", 100, { "life_coplevel", "SCALAR", 3 } },
			{ "H_Beret_Colonel", "Beret [General]", 100, { "life_coplevel", "SCALAR", 6 } },
			{ "H_Cap_police", "Cap [Police]", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Watchcap_blk", "Beanie", 75, { "life_coplevel", "SCALAR", 4 } },
			{ "H_Watchcap_camo", "Beanie [Green]", 75, { "life_coplevel", "SCALAR", 4 } },
			{ "H_Watchcap_cbr", "Beanie [Coyote]", 75, { "life_coplevel", "SCALAR", 4 } },
			{ "H_Watchcap_blk", "Beanie [Black]", 75, { "life_coplevel", "SCALAR", 2 } },
			{ "H_MilCap_gry", "Beanie [Black]", 1000, { "life_coplevel", "SCALAR", 3 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_I_Diving", "", 75, { "life_coplevel", "SCALAR", 3 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 100, { "", "", -1 } },
			{ "V_TacVest_blk_POLICE", "", 7500, { "life_coplevel", "SCALAR", 2 } },
			{ "V_PlateCarrier1_blk", "", 15000, { "life_coplevel", "SCALAR", 4 } },
			{ "V_PlateCarrierIA2_dgtl", "", 30000, { "life_coplevel", "SCALAR", 4 } },
			{ "V_RebreatherB", "", 7500, { "life_coplevel", "SCALAR", 3 } },
			{ "V_BandollierB_blk", "", 1000, { "life_coplevel", "SCALAR", 1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 1000, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 1000, { "", "", -1 } }
		};
	};

	class military {
		title = "STR_Shops_C_Military";
		license = "military";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_BG_Guerilla2_1", "Police Uniform", 150, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_CombatUniform_mcam", "Military Uniform", 350, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_CombatUniform_mcam_vest", "Military Uniform (Rolled-Up)", 350, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_Wetsuit", "Wetsuit", 1750, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_GhillieSuit", "Ghillie Suit [Special Occasions ONLY]", 750000, { "life_coplevel", "SCALAR", 1 } },
			{ "U_I_GhillieSuit", "Ghillie Suit [Special Occasions ONLY]", 750000, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_FullGhillie_lsh", "Ghillie Suit [Special Occasions ONLY]", 1250000, { "life_coplevel", "SCALAR", 1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Beret_blk_POLICE", "Beret [Police]", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Beret_02", "Beret [NATO]", 100, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Cap_police", "Cap [Police]", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Watchcap_blk", "Beanie", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Watchcap_camo", "Beanie [Green]", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Watchcap_cbr", "Beanie [Coyote]", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_MilCap_ocamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_MilCap_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } }
			
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 100, { "", "", -1 } },
			{ "V_TacVest_blk_POLICE", "", 7500, { "life_coplevel", "SCALAR", 1 } },
			{ "V_I_G_resistanceLeader_F", "", 7500, { "life_coplevel", "SCALAR", 1 } },
			{ "V_PlateCarrier1_blk", "", 15000, { "life_coplevel", "SCALAR", 1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_sgg", "", 1000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 1000, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 5000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 3500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class bandit {
		title = "STR_Shops_C_Bandit";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 75000, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 75000, { "", "", -1 } },
			{ "U_I_pilotCoveralls", "", 225000, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "", 225000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_3_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_4_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_3_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_5_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_1_F", "", 55000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_4_F", "", 55000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Shemag_olive", "", 35000, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 35000, { "", "", -1 } },
			{ "H_MilCap_blue", "", 17500, { "", "", -1 } },
			{ "H_MilCap_gry", "", 17500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 17500, { "", "", -1 } },
			{ "H_MilCap_ocamo", "", 17500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_HarnessOGL_brn", "", 45000, { "", "", -1 } },
			{ "V_Chestrig_oli", "", 75000, { "", "", -1 } },
			{ "V_Chestrig_blk", "", 75000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 75000, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 75000, { "", "", -1 } },
			{ "V_TacVest_khk", "", 225000, { "", "", -1 } },
			{ "V_TacVest_brn", "", 225000, { "", "", -1 } },
			{ "V_TacVest_brn", "", 225000, { "", "", -1 } },
			{ "V_TacVest_oli", "", 225000, { "", "", -1 } },
			{ "V_TacVest_blk", "", 225000, { "", "", -1 } },
			{ "V_TacVest_camo", "", 225000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class gang_clothing {
		title = "STR_Shops_C_gangclothing";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 150000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_3_F", "", 75000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_4_F", "", 75000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "", 75000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_3_F", "", 75000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_5_F", "", 75000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_1_F", "", 75000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_4_F", "", 75000, { "", "", -1 } },
			{ "U_BG_Guerilla1_1", "", 80000, { "", "", -1 } }



		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 5000, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CTRG_3", "FIA Uniform", 1000, {"", "", -1} },
			{ "U_I_CombatUniform", "FIA Uniform", 1000, {"", "", -1} },
			{ "U_O_Wetsuit", "Wetsuit", 1000, {"", "", -1} },
			{ "U_BG_Guerilla3_1", "", 1000, {"", "", -1} },
			{ "U_BG_leader", "Sale Only", 11000, {"", "", -1} },
			{ "U_OG_Guerilla1_1", "Sale Only", 11000, {"", "", -1} }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Shemag_tan", "", 1500, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 1500, { "", "", -1 } },
			{ "H_Beret_red", "", 750, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 2000, { "", "", -1 } },
			{ "H_Watchcap_sgg", "", 2000, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 750, { "", "", -1 } },
			{ "H_Cap_headphones", "", 750, { "", "", -1 } },
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_blk", "", 17500, { "", "", -1 } },
			{ "V_TacVest_oli", "", 17500, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 14500, { "", "", -1 } },
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 4500, { "", "", -1 } }
		};
	};
	
	class reb2 {
		title = "STR_Shops_C_Rebel";
		license = "rebel2";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CTRG_3", "FIA Uniform", 1000, {"", "", -1} },
			{ "U_I_CombatUniform", "FIA Uniform", 1000, {"", "", -1} },
			{ "U_O_Wetsuit", "Wetsuit", 1000, {"", "", -1} },
			{ "U_BG_Guerilla3_1", "", 1000, {"", "", -1} },
			{ "U_BG_leader", "Sale Only", 11000, {"", "", -1} },
			{ "U_OG_Guerilla1_1", "Sale Only", 11000, {"", "", -1} }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Shemag_tan", "", 1500, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 1500, { "", "", -1 } },
			{ "H_Beret_red", "", 750, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 2000, { "", "", -1 } },
			{ "H_Watchcap_sgg", "", 2000, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 750, { "", "", -1 } },
			{ "H_Cap_headphones", "", 750, { "", "", -1 } },
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_blk", "", 17500, { "", "", -1 } },
			{ "V_TacVest_oli", "", 17500, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 14500, { "", "", -1 } },
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 4500, { "", "", -1 } }
		};
	};
	
	class reb3 {
		title = "STR_Shops_C_Rebel";
		license = "rebel3";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CTRG_3", "FIA Uniform", 1000, {"", "", -1} },
			{ "U_I_CombatUniform", "FIA Uniform", 1000, {"", "", -1} },
			{ "U_O_Wetsuit", "Wetsuit", 1000, {"", "", -1} },
			{ "U_BG_Guerilla3_1", "", 1000, {"", "", -1} },
			{ "U_BG_leader", "Sale Only", 11000, {"", "", -1} },
			{ "U_OG_Guerilla1_1", "Sale Only", 11000, {"", "", -1} }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Shemag_tan", "", 1500, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 1500, { "", "", -1 } },
			{ "H_Beret_red", "", 750, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 2000, { "", "", -1 } },
			{ "H_Watchcap_sgg", "", 2000, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 750, { "", "", -1 } },
			{ "H_Cap_headphones", "", 750, { "", "", -1 } },
			{ "H_Beret_Colonel", "General", 750, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 30, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_blk", "", 17500, { "", "", -1 } },
			{ "V_TacVest_oli", "", 17500, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 14500, { "", "", -1 } },
			{ "V_PlateCarrier1_blk", "General", 125000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 4500, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 2000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 2000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 2000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 2000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 2000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 2000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};