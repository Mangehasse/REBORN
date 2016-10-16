class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "" }, 
			{ "C_Hatchback_01_F", 14500, "driver" }, 
			{ "C_Offroad_01_F", 13000, "driver" },
			{ "C_SUV_01_F", 35000, "driver" },
			{ "C_Hatchback_01_sport_F", 220000, "driver" },
			{ "C_Van_01_transport_F", 52000, "driver" },
			{ "C_Offroad_02_unarmed_F", 50000, "driver" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000, "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "C_Offroad_01_F", 7000, "" },
			{ "C_Van_01_box_F", 55000, "" },
			{ "C_Hatchback_01_sport_F", 35000, "" },
			{ "C_SUV_01_F", 22000, "" }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, "mAir" },
			{ "O_Heli_Light_02_unarmed_F", 200000, "mAir" },
			{ "O_Heli_Transport_04_medevac_F", 400000, "mAir", { "life_medlevel", 4 } }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_box_F", 100000, "trucking" },
			{ "I_Truck_02_transport_F", 140000, "trucking" },
			{ "I_Truck_02_covered_F", 770000, "trucking" },
			{ "B_Truck_01_transport_F", 652000, "trucking" },
			{ "B_Truck_01_box_F", 1600000, "trucking" },
			{ "O_Truck_03_device_F", 2200000, "trucking" }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "rebel" },
			{ "C_Offroad_01_F", 15000, "rebel" },
			{ "C_Hatchback_01_sport_F", 75000, "rebel" },
			{ "B_G_Offroad_01_armed_F", 300000, "rebel" },
			{ "C_SUV_01_F", 20000, "rebel" },
			{ "O_MRAP_02_F", 200000, "rebel" },
			{ "I_Truck_02_covered_F", 100000, "rebel" },
			{ "B_Truck_01_box_F", 1600000, "rebel" },
			{ "O_Truck_03_device_F", 2200000, "rebel" },
			{ "B_Heli_Light_01_F", 100000, "rebel" },
			{ "I_Heli_light_03_unarmed_F", 350000, "rebel" },
			{ "O_Heli_Transport_04_box_F", 5000000, "rebel" },
			{ "I_Heli_Transport_02_F", 5000000, "rebel" },
			{ "O_LSV_02_unarmed_f", 55000, "rebel" }
		};
	};

	class donor1 {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "donator1" },
			{ "C_Hatchback_01_F", 14000, "donator1" },
			{ "C_Offroad_01_F", 10000, "donator1" },
			{ "C_SUV_01_F", 25000, "donator1" },
			{ "C_Hatchback_01_sport_F", 100000, "donator1" },
			{ "C_Van_01_transport_F", 40000, "donator1" },
			{ "C_Van_01_box_F", 92000, "donator1" },
			{ "I_Truck_02_covered_F", 500000, "donator1" },
			{ "I_Truck_02_transport_F", 120000, "donator1" },
			{ "B_Truck_01_transport_F", 552000, "donator1" },
			{ "B_Truck_01_box_F", 1400000, "donator1" },
			{ "O_Truck_03_device_F", 2000000, "donator1" }
		};
	};

	class donor3 {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "donator3" },
			{ "C_Hatchback_01_F", 14000, "donator3" },
			{ "C_Offroad_01_F", 10000, "donator3" },
			{ "C_SUV_01_F", 25000, "donator3" },
			{ "C_Hatchback_01_sport_F", 100000, "donator3" },
			{ "C_Van_01_transport_F", 40000, "donator3" },
			{ "C_Van_01_box_F", 92000, "donator3" },
			{ "I_Truck_02_covered_F", 500000, "donator3" },
			{ "I_Truck_02_transport_F", 120000, "donator3" },
			{ "B_Truck_01_transport_F", 552000, "donator3" },
			{ "B_Truck_01_box_F", 1400000, "donator3" },
			{ "O_Truck_03_device_F", 2000000, "donator3" }
		};
	};

	class donor5 {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "donator5" },
			{ "C_Hatchback_01_F", 14000, "donator5" },
			{ "C_Offroad_01_F", 10000, "donator5" },
			{ "C_SUV_01_F", 25000, "donator5" },
			{ "C_Hatchback_01_sport_F", 100000, "donator5" },
			{ "C_Van_01_transport_F", 40000, "donator5" },
			{ "C_Van_01_box_F", 92000, "donator5" },
			{ "I_Truck_02_covered_F", 500000, "donator5" },
			{ "I_Truck_02_transport_F", 120000, "donator5" },
			{ "B_Truck_01_transport_F", 552000, "donator5" },
			{ "B_Truck_01_box_F", 1400000, "donator5" },
			{ "O_Truck_03_device_F", 2000000, "donator5" }
		};
	};

	class donor_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 200000, "pilot" },
			{ "I_Heli_light_03_unarmed_F", 1000000, "pilot" },
			{ "I_Heli_Transport_02_F", 4000000, "pilot" },
			{ "O_Heli_Transport_04_box_F", 4000000, "pilot" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "C_Offroad_01_F", 5000, ""},
			{ "C_SUV_01_F", 20000, "", { "life_coplevel", 1 } },
			{ "C_Hatchback_01_sport_F", 50000, "", { "life_coplevel", 2 } },
			{ "B_MRAP_01_F", 55000, "", { "life_coplevel", 4 } },
			{ "B_Truck_01_ammo_F", 250000, "", { "life_coplevel", 5 } },
			{ "B_LSV_01_unarmed_black_F", 55000, "", { "life_coplevel", 5 } }
		};
	};

	class military_car {
		side = "cop";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "military" },
			{ "C_Hatchback_01_sport_F", 40000, "military" },
			{ "C_Offroad_01_F", 40000, "military" },
			{ "C_SUV_01_F", 40000, "military" },
			{ "B_MRAP_01_F", 30000, "military" },
			{ "B_Truck_01_ammo_F", 250000, "military" }
		};
	};

	class military_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, ""},
			{ "B_Heli_Transport_01_F", 75000, "" },
			{ "B_Heli_Transport_01_camo_F", 75000, "" },
			{ "I_Heli_light_03_unarmed_F", 60000, "" }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "C_Heli_Light_01_civil_F", 300000, "pilot" },
			{ "B_Heli_Light_01_F", 300000, "pilot" },
			{ "I_Heli_light_03_unarmed_F", 1000000, "pilot" },
			{ "I_Heli_Transport_02_F", 5000000, "pilot" },
			{ "O_Heli_Transport_04_box_F", 5000000, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir"},
			{ "B_Heli_Transport_01_F", 300000, "cAir", { "life_coplevel", 3 } },
			{ "B_Heli_Transport_01_camo_F", 300000, "cAir", { "life_coplevel", 4 } },
			{ "I_Heli_light_03_unarmed_F", 150000, "cAir" },
			{ "B_Heli_Transport_03_black_F", 500000, "cAir", { "life_coplevel", 4 } }
			
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "cg" },
			{ "C_Boat_Civil_01_police_F", 20000, "cg" },
			{ "C_Boat_Transport_02_F", 75000, "cg" },
			{ "B_SDV_01_F", 100000, "cg" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "C_Boat_Transport_02_F", 45000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class O_MRAP_02_F {
        vItemSpace = 75;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 50000;
        textures[] = {
        	{ "FIA Skin", "civ", {
                "textures\rebel\vehicle\ifrit2.jpg",
                "textures\rebel\vehicle\ifrit1.jpg"
            } }
	    };
    };

	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 0, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Polis", "cop", {
	                "textures\police\vehicle\PoliceOffroad.jpg"
            } },
            { "Hello Kitty", "civ", {
	                "textures\civilian\vehicle\OffroadKitty.jpg"
            } },
            { "Nyan Cat", "civ", {
	                "textures\civilian\vehicle\OffroadNyanCat.jpg"
            } },
            { "Medic", "med", {
	                "textures\medic\vehicle\MedicOffroad.jpg"
            } },
            { "Rebel", "reb", {
	                "textures\rebel\vehicle\RebelOffroad.jpg"
            } }
		};
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 0;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = { };
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 0, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 55000;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Polis", "cop", {
	                "textures\police\vehicle\PoliceHatchback.jpg"
            } },
            { "Monster", "civ", {
	                "textures\civilian\vehicle\SportMonster.jpg"
            } },
            { "Rockstar", "civ", {
	                "textures\civilian\vehicle\SportRockstar.jpg"
            } },
            { "Repsol", "civ", {
	                "textures\civilian\vehicle\SportRepsol.jpg"
            } },
            { "RedBull", "civ", {
	                "textures\civilian\vehicle\SportRedbull.jpg"
            } },
            { "Shark", "civ", {
	                "textures\civilian\vehicle\SportShark.jpg"
            } },
            { "RedGull", "civ", {
	                "textures\civilian\vehicle\SportRedGull.jpg"
            } },
            { "Rebel", "reb", {
	                "textures\rebel\vehicle\RebelHatchback.jpg"
            } },
            { "Medic", "med", {
	                "textures\medic\vehicle\MedicHatchback.jpg"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Medic", "med", {
                "textures\medic\vehicle\MedicQuadbike.jpg"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 300;
        storageFee[] = { 7500, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Rebel", "reb", {
                "textures\rebel\vehicle\RebelZamakFram.jpg",
                "textures\rebel\vehicle\RebelZamakBak.jpg"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 7500, 0, 0, 0 };
		garageSell[] = { 0, 3500, 0, 0 };
	};

	class O_Truck_03_covered_F {
		vItemSpace = 0;
		storageFee[] = { 7500, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
        textures[] = { };
    };

	class C_Hatchback_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Repsol", "civ", {
	                "textures\civilian\vehicle\SportRepsol.jpg"
            } },
			{ "Shark", "civ", {
	                "textures\civilian\vehicle\SportShark.jpg"
            } },
			{ "RedGull", "civ", {
	                "textures\civilian\vehicle\SportRedGull.jpg"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

	class C_SUV_01_F {
        vItemSpace = 75;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Black", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Rebel", "reb", {
	                "textures\rebel\vehicle\RebelSUV.jpg"
            } },
            { "Ferrari", "civ", {
	                "textures\civilian\vehicle\SuvFerrari.jpg"
            } },
            { "Snake Skin", "civ", {
	                "textures\civilian\vehicle\SuvSnakeSkin.jpg"
            } },
            { "Flames", "civ", {
	                "textures\civilian\vehicle\SuvFlames.jpg"
            } },
            { "Fireball", "civ", {
	                "textures\civilian\vehicle\SuvFireball.jpg"
            } },
            { "Polis", "cop", {
	                "textures\police\vehicle\PoliceSUV.jpg"
            } },
            { "Medic", "med", {
	                "textures\medic\vehicle\MedicSuv.jpg"
            } },
            { "Rebel", "reb", {
	                "textures\rebel\vehicle\RebelSuv.jpg"
            } },
            { "Black (r4)", "cop", {
	                "textures\police\vehicle\PoliceSUVBlack.jpg"
            } }
	    };
    };

	class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 7500, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 7500, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 50000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
            { "Medic", "med", {
                "textures\medic\vehicle\MedicTruckFram.jpg",
                "textures\medic\vehicle\MedicTruckBak.jpg"
            } },
            { "Glassbil", "civ", {
                "textures\civilian\vehicle\GlassbilFram.jpg",
                "textures\civilian\vehicle\GlassbilBak.jpg"
            } }
        };
    };
    
	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Black", "cop", {
	                "textures\police\vehicle\PoliceHunterBlack.jpg"
            } },
            { "Blue", "cop", {
	                "textures\police\vehicle\PoliceHunterBlue.jpg"
            } },
            { "Black", "military", {
	                "textures\military\vehicle\ArmyHunterBlack.jpg"
            } },
            { "Camo", "military", {
	                "textures\military\vehicle\ArmyHunterCamo.jpg"
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 75;
        storageFee[] = { 2500, 2500, 0, 0 };
		garageSell[] = { 0, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = {
			{ "Black", "military", {
	                "textures\military\vehicle\ArmyHummingbird.jpg"
            } },
            { "Blue", "cop", {
	                "textures\police\vehicle\PolisHummingbird.jpg"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Medic", "med", {
					"textures\medic\vehicle\MedicHumming.jpg"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 0;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Medic", "med", {
					"textures\medic\vehicle\MedicOrca.jpg"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 400;
        storageFee[] = { 2500, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class O_Heli_Transport_04_medevac_F {
        vItemSpace = 100;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 250;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 300;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 500;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 500000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 500;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 500000;
        textures[] = { };
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
         textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Heli_Light_01_civil_F {
        vItemSpace = 75;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class O_Heli_Transport_04_F {
        vItemSpace = 300;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class O_Heli_Transport_04_box_F {
        vItemSpace = 350;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 120;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_camo_F {
        vItemSpace = 120;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 175;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 0;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_SDV_01_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Transport_02_F {
        vItemSpace = 75;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Truck_01_ammo_F { 
        vItemSpace = 500;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 50000;
        textures[] = { };
    };

    class C_Rubberboat { 
        vItemSpace = 45;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F { 
        vItemSpace = 45;
        storageFee[] = { 2500, 0, 2500, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };
	
	class B_LSV_01_unarmed_black_F {
		vItemSpace = 45;
		storageFee[] = { 3000, 0, 0, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
		insurance = 2500;
		chopShop = 30000;
		textures[] = { };
	};
	
	class O_LSV_02_unarmed_f {
		vItemSpace = 45;
		storageFee[] = { 3000, 0, 0, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
		insurance = 2500;
		chopShop = 30000;
		textures[] = { };
	};
	
	class C_Offroad_02_unarmed_F {
		vItemSpace = 45;
		storageFee[] = { 3000, 0, 0, 0 };
		garageSell[] = { 0, 0, 30000, 0 };
		insurance = 2500;
		chopShop = 25000;
		textures[] = { };
	};
};
