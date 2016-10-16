#define VITEMMACRO(NAME,DISPLAYNAME,VARNAME,WEIGHT,BUYPRICE,SELLPRICE,ILLEGAL,EDIBLE,ICON) class NAME { \
		variable = VARNAME; \
		weight = WEIGHT; \
		displayName = DISPLAYNAME; \
		buyPrice = BUYPRICE; \
		sellPrice = SELLPRICE; \
		illegal = ILLEGAL; \
		edible = EDIBLE; \
		icon = ICON; \
	};
	
#define LICENSEMACRO(NAME,DISPLAYNAME,VARNAME,PRICE,ILLEGAL,SIDE) class NAME { \
		variable = VARNAME; \
		displayName = DISPLAYNAME; \
		price = PRICE; \
		illegal = ILLEGAL; \
		side = SIDE; \
	};

#define true 1
#define false 0
#include "Config_Clothing.hpp"

/*
	Master settings for various features and functionality	
*/
class Life_Settings {
	/* Persistent Settings */
	save_civ_weapons = true; //Allow civilians to save weapons on them?
	save_virtualItems = true; //Save Virtual items (all sides)?

	/* Revive system settings */
	revive_cops = false; //true to enable cops the ability to revive everyone or false for only medics/ems.
	revive_fee = 15000; //Revive fee that players have to pay and medics / EMS are rewarded
	
	/* House related settings */
	house_limit = 3; //Maximum amount of houses a player can own.

	/* Gang related settings */
	gang_price = 75000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
	gang_upgradeBase = 10000; //The base cost for upgrading slots in a gang
	gang_upgradeMultiplier = 2.5; //Not sure if in use?

	/* Player-related systems */
	enable_fatigue = false; //Set to false to disable the ARMA 3 false system.
	total_maxWeight = 24; //Static variable for the maximum weight allowed without having a backpack
	paycheck_period = 5; //Scaled in minutes
	
	/* Impound Variables */
	impound_car = 7500; //Price for impounding cars
	impound_boat = 12500; //Price for impounding boats
	impound_air = 12500; //Price for impounding helicopters / planes

	/* Car-shop Settings */
	vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F" };

	/* Job-related stuff */
	delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };

	sellArray[] = {
		{"arifle_sdar_F", 0},
		{"hgun_P07_snds_F", 0},
		{"hgun_P07_F", 0},
		{"ItemGPS", 0},
		{"ToolKit", 0},
		{"FirstAidKit", 0},
		{"Medikit", 0},
		{"NVGoggles", 0},
		{"16Rnd_9x21_Mag", 0},
		{"20Rnd_556x45_UW_mag", 0},
		{"ItemMap", 0},
		{"ItemCompass", 0},
		{"Chemlight_blue", 0},
		{"Chemlight_yellow", 0},
		{"Chemlight_green", 0},
		{"Chemlight_red", 0},
		{"hgun_Rook40_F", 0},
		{"arifle_Katiba_F", 0},
		{"30Rnd_556x45_Stanag", 0},
		{"20Rnd_762x51_Mag", 0},
		{"30Rnd_65x39_caseless_green", 0},
		{"DemoCharge_Remote_Mag", 0},
		{"SLAMDirectionalMine_Wire_Mag", 0},
		{"optic_ACO_grn", 0},
		{"acc_flashlight", 0},
		{"srifle_EBR_F", 0},
		{"arifle_TRG21_F", 0},
		{"optic_MRCO", 0},
		{"optic_Aco", 0},
		{"arifle_MX_F", 0},
		{"arifle_MXC_F", 0},
		{"arifle_MXM_F", 0},
		{"MineDetector", 0},
		{"optic_Holosight", 0},
		{"acc_pointer_IR", 0},
		{"arifle_TRG20_F", 0},
		{"SMG_01_F", 0},
		{"arifle_Mk20C_F", 0},
		{"30Rnd_45ACP_Mag_SMG_01", 0},
		{"30Rnd_9x21_Mag", 0}
	};
};

//Virtual Items
class VirtualItems {
	//Misc
	VITEMMACRO(pickaxe, "STR_Item_Pickaxe", "pickaxe", 2, 750, 350, false, -1, "icons\ico_pickaxe.paa")
	VITEMMACRO(fuelEmpty, "STR_Item_FuelE", "fuelEmpty", 2, -1, -1, false, -1, "icons\ico_fuelempty.paa")
	VITEMMACRO(fuelFull, "STR_Item_FuelF", "fuelFull", 5, 850, 500, false, -1, "icons\ico_fuel.paa")
	VITEMMACRO(spikeStrip, "STR_Item_SpikeStrip", "spikeStrip", 15, 2500, 1200, false, -1, "icons\ico_spikestrip.paa")
	VITEMMACRO(lockpick, "STR_Item_Lockpick", "lockpick", 1, 150, 75, false, -1, "icons\ico_lockpick.paa")
	VITEMMACRO(goldbar, "STR_Item_GoldBar", "goldBar", 12, -1, 95000, false, -1, "icons\goldbar.paa")
	VITEMMACRO(blastingcharge, "STR_Item_BCharge", "blastingCharge", 15, 35000, -1, true, -1, "icons\ico_blastingCharge.paa")
	VITEMMACRO(boltcutter, "STR_Item_BCutter", "boltCutter", 5, 7500, -1, true, -1, "icons\ico_boltcutters.paa")
	VITEMMACRO(defusekit, "STR_Item_DefuseKit", "defuseKit", 2, 2500, -1, false, -1, "icons\ico_defusekit.paa")
	VITEMMACRO(storagesmall, "STR_Item_StorageBS", "storageSmall", 5, 75000, -1, false, -1, "icons\ico_storageSmall.paa")
	VITEMMACRO(storagebig, "STR_Item_StorageBL", "storageBig", 10, 150000, -1, false, -1, "icons\ico_storageBig.paa")

	//Mined Items
	VITEMMACRO(oil_unprocessed, "STR_Item_OilU", "oilUnprocessed", 6, -1, -1, false, -1, "icons\oilunprocessed.paa")
	VITEMMACRO(oil_processed, "STR_Item_OilP", "oilProcessed", 4, -1, 3200, false, -1, "icons\oilprocessed.paa")
	VITEMMACRO(copper_unrefined, "STR_Item_CopperOre", "copperUnrefined", 3, -1, -1, false, -1, "icons\coppar_unrefined.paa")
	VITEMMACRO(copper_refined, "STR_Item_CopperIngot", "copperRefined", 2, -1, 1500, false, -1, "icons\coppar_refined.paa")
	VITEMMACRO(iron_unrefined, "STR_Item_IronOre", "ironUnrefined", 4, -1, -1, false, -1, "icons\iron_unrefined.paa")
	VITEMMACRO(iron_refined, "STR_Item_IronIngot", "ironRefined", 3, -1, 3200, false, -1, "icons\iron_refined.paa")
	VITEMMACRO(salt_unrefined, "STR_Item_Salt", "saltUnrefined", 3, -1, -1, false, -1, "icons\salt_unprocessed.paa")
	VITEMMACRO(salt_refined, "STR_Item_SaltR", "saltRefined", 1, -1, 1450, false, -1, "icons\salt_processed.paa")
	VITEMMACRO(sand, "STR_Item_Sand", "sand", 3, -1, -1, false, -1, "icons\sand.paa")
	VITEMMACRO(glass, "STR_Item_Glass", "glass", 1, -1, 1450, false, -1, "icons\glas.paa")
	VITEMMACRO(diamond_uncut, "STR_Item_DiamondU", "diamondUncut", 4, -1, 750, false, -1, "icons\diamond_uncut.paa")
	VITEMMACRO(diamond_cut, "STR_Item_DiamondC", "diamondCut", 2, -1, 2000, false, -1, "icons\diamond_cut.paa")
	VITEMMACRO(rock, "STR_Item_Rock", "rock", 6, -1, -1, false, -1, "icons\rock.paa")
	VITEMMACRO(cement, "STR_Item_CementBag", "cement", 4, -1, 1950, false, -1, "icons\cement.paa")
	VITEMMACRO(sugar_unprocessed, "STR_Item_sugarU", "sugarU", 3, -1, 1950, false, -1, "icons\sugarcane.paa")
	VITEMMACRO(sugar_processed, "STR_Item_sugarP", "sugarp", 1, -1, 1950, false, -1, "icons\sugar.paa")
	VITEMMACRO(rice_unprocessed, "STR_Item_riceu", "riceu", 4, -1, 1950, false, -1, "icons\rice_unprocessed.paa")
	VITEMMACRO(rice_processed, "STR_Item_riceP", "ricep", 3, -1, 1950, false, -1, "icons\rice_processed.paa")
	VITEMMACRO(zinc_unprocessed, "STR_Item_zincU", "zincU", 4, -1, 1950, false, -1, "icons\zinc_unprocessed.paa")
	VITEMMACRO(zinc_processed, "STR_Item_zincP", "zincP", 3, -1, 1950, false, -1, "icons\zinc_processed.paa")
	VITEMMACRO(silver_unprocessed, "STR_Item_silverU", "silveru", 5, -1, 1950, false, -1, "icons\silver_unprocessed.paa")
	VITEMMACRO(silver_processed, "STR_Item_silverP", "silverP", 4, -1, 1950, false, -1, "icons\silver_processed.paa")

	//Drugs
	VITEMMACRO(heroin_unprocessed, "STR_Item_HeroinU", "heroinUnprocessed", 5, -1, -1, true, -1, "icons\heroin_unprocessed.paa")
	VITEMMACRO(heroin_processed, "STR_Item_HeroinP", "heroinProcessed", 4, -1, 2560, true, -1, "icons\heroin_processed.paa")
	VITEMMACRO(cannabis, "STR_Item_Cannabis", "cannabis", 5, -1, -1, true, -1, "icons\weed_unprocessed.paa")
	VITEMMACRO(marijuana, "STR_Item_Marijuana", "marijuana", 4, -1, 2350, true, -1, "icons\weed_processed.paa")
	VITEMMACRO(cocaine_unprocessed, "STR_Item_CocaineU", "cocaineUnprocessed", 6, -1, 3000, true, -1, "icons\cocaine_unprocessed.paa")
	VITEMMACRO(cocaine_processed, "STR_Item_CocaineP", "cocaineProcessed", 4, -1, 5000, true, -1, "icons\cocaine_processed.paa")
	VITEMMACRO(frog, "STR_Item_frog", "frog", 4, -1, 5000, true, -1, "icons\frog.paa")
	VITEMMACRO(LSD, "STR_Item_lsd", "lsd", 3, -1, 5000, true, -1, "icons\lsd.paa")
	VITEMMACRO(ecstasy_unprocessed, "STR_Item_ecstasyU", "ecstasyU", 4, -1, 5000, true, -1, "icons\ecstasyunprocessed.paa")
	VITEMMACRO(ecstasy_processed, "STR_Item_ecstasyP", "ecstasyp", 4, -1, 5000, true, -1, "icons\ecstasyprocessed.paa")
	VITEMMACRO(mushroom_unprocessed, "STR_Item_mushroomU", "mushroomU", 4, 600, 5000, true, -1, "icons\mushroom_unprocessed.paa")
	VITEMMACRO(mushroom_processed, "STR_Item_mushroomP", "mushroomp", 3, -1, 5000, true, -1, "icons\mushroom_processed.paa")

	//Drink
	VITEMMACRO(redgull, "STR_Item_RedGull", "redgull", 1, 750, 200, false, 100, "icons\ico_redgull.paa")
	VITEMMACRO(coffee, "STR_Item_Coffee", "coffee", 1, 75, 5, false, 100, "icons\coffee.paa")
	VITEMMACRO(waterBottle, "STR_Item_WaterBottle", "waterBottle", 1, 75, 5, false, 100, "icons\ico_waterBottle.paa")
	VITEMMACRO(whiskey, "STR_Item_whiskey", "whiskey", 1, 750, 5, false, 100, "icons\whiskey.paa")
	VITEMMACRO(beer, "STR_Item_beer", "beer", 1, 125, 5, false, 100, "icons\beer.paa")
	VITEMMACRO(cider, "STR_Item_cider", "cider", 1, 75, 5, false, 100, "icons\cider.paa")

	//Food
	VITEMMACRO(apple, "STR_Item_Apple", "apple", 1, 75, 50, false, 10, "icons\apple.paa")
	VITEMMACRO(peach, "STR_Item_Peach", "peach", 1, 75, 55, false, 10, "icons\peach.paa")
	VITEMMACRO(tbacon, "STR_Item_TBacon", "tbacon", 1, 75, 25, false, 40, "icons\ico_tbacon.paa")
	VITEMMACRO(donuts, "STR_Item_Donuts", "donuts", 1, 120, 60, false, 30, "icons\ico_donuts.paa")
	VITEMMACRO(rabbit_raw, "STR_Item_Rabbit", "rabbitRaw", 2, -1, 65, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(rabbit, "STR_Item_Rabbit", "rabbit", 1, 150, 115, false, 20, "icons\ico_cookedMeat.paa")
	VITEMMACRO(salema_raw, "STR_Item_Salema", "salemaRaw", 2, -1, 45, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(salema, "STR_Item_Salema", "salema", 1, 75, 55, false, 30, "icons\ico_cookedMeat.paa")
	VITEMMACRO(ornate_raw, "STR_Item_OrnateMeat", "ornateRaw", 2, -1, 40, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(ornate, "STR_Item_Ornate", "ornate", 1, 175, 150, false, 25, "icons\ico_cookedMeat.paa")
	VITEMMACRO(mackerel_raw, "STR_Item_MackerelMeat", "mackerelRaw", 4, -1, 175, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(mackerel, "STR_Item_Mackerel", "mackerel", 2, 250, 200, false, 30, "icons\ico_cookedMeat.paa")
	VITEMMACRO(tuna_raw, "STR_Item_TunaMeat", "tunaRaw", 6, -1, 700, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(tuna, "STR_Item_Tuna", "tuna", 3, 1250, 1000, false, 100, "icons\ico_cookedMeat.paa")
	VITEMMACRO(mullet_raw, "STR_Item_MulletMeat", "mulletRaw", 4, -1, 250, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(mullet, "STR_Item_Mullet", "mullet", 2, 600, 400, false, 80, "icons\ico_cookedMeat.paa")
	VITEMMACRO(catshark_raw, "STR_Item_CatSharkMeat", "catsharkRaw", 6, -1, 300, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(catshark, "STR_Item_CatShark", "catshark", 3, 750, 500, false, 100, "icons\ico_cookedMeat.paa")
	VITEMMACRO(turtle_raw, "STR_Item_TurtleMeat", "turtleRaw", 6, -1, 3000, true, -1, "icons\turtle.paa")
	VITEMMACRO(turtle_soup, "STR_Item_TurtleSoup", "turtleSoup", 2, 2500, 1000, false, 100, "icons\ico_cookedMeat.paa")
	VITEMMACRO(hen_raw, "STR_Item_HenRaw", "henRaw", 1, -1, 35, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(hen, "STR_Item_Hen", "hen", 1, 115, 85, false, 65, "icons\ico_cookedMeat.paa")
	VITEMMACRO(rooster_raw, "STR_Item_RoosterRaw", "roosterRaw", 1, -1, 35, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(rooster, "STR_Item_RoosterGrilled", "rooster", 115, 85, false, 45, "icons\ico_cookedMeat.paa")
	VITEMMACRO(sheep_raw, "STR_Item_SheepRaw", "sheepRaw", 2, -1, 50, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(sheep, "STR_Item_SheepGrilled", "sheep", 2, 155, 115, false, 100, "icons\ico_cookedMeat.paa")
	VITEMMACRO(goat_raw, "STR_Item_GoatRaw", "goatRaw", 2, -1, 75, false, -1, "icons\ico_meat.paa")
	VITEMMACRO(goat, "STR_Item_GoatGrilled", "goat", 2, 175, 135, false, 100, "icons\ico_cookedMeat.paa")
	VITEMMACRO(sandwich, "STR_Item_sandwich", "sandwich", 1, 175, 135, false, 100, "icons\sandwich.paa")
	VITEMMACRO(twister, "STR_Item_twister", "twister", 1, 175, 135, false, 100, "icons\twister.paa")
	VITEMMACRO(Olive, "STR_Item_olive", "Olive", 1, 145, 135, false, 100, "icons\olive.paa")
	VITEMMACRO(Strawberry, "STR_Item_strawberry", "Strawberry", 1, 100, 135, false, 100, "icons\strawberry.paa")
	VITEMMACRO(Blueberry, "STR_Item_blueberry", "Blueberry", 1, 125, 135, false, 100, "icons\blueberry.paa")
};


/*
	Licenses
	
	Params:
	CLASS ENTRY,DisplayName,VariableName,price,illegal,side indicator
*/
class Licenses {
	LICENSEMACRO(driver,"STR_License_Driver","driver",500,false,"civ")
	LICENSEMACRO(boat,"STR_License_Boat","boat",1000,false,"civ")
	LICENSEMACRO(pilot,"STR_License_Pilot","pilot",75000,false,"civ")
	LICENSEMACRO(gun,"STR_License_Firearm","gun",25000,false,"civ")
	LICENSEMACRO(dive,"STR_License_Diving","dive",7500,false,"civ")
	LICENSEMACRO(oil,"STR_License_Oil","oil",10000,false,"civ")
	LICENSEMACRO(cAir,"STR_License_Pilot","cAir",15000,false,"cop")
	LICENSEMACRO(cg,"STR_License_CG","cg",8000,false,"cop")
	LICENSEMACRO(military,"STR_License_Military","military",80000000,false,"cop")
	LICENSEMACRO(heroin,"STR_License_Heroin","heroin",125000,true,"civ")
	LICENSEMACRO(marijuana,"STR_License_Marijuana","marijuana",75000,true,"civ")
	LICENSEMACRO(medmarijuana,"STR_License_Medmarijuana","medmarijuana",15000,false,"civ")
	LICENSEMACRO(rebel,"STR_License_Rebel","rebel",75000000,true,"civ")
	LICENSEMACRO(rebel2,"STR_License_Rebel2","rebel2",75000000,true,"civ")
	LICENSEMACRO(rebel3,"STR_License_Rebel3","rebel3",75000000,true,"civ")
	LICENSEMACRO(trucking,"STR_License_Truck","trucking",20000,false,"civ")
	LICENSEMACRO(smugglarlasse,"STR_License_smugglarlasse","smugglarlasse",20000,false,"civ")
	LICENSEMACRO(diamond,"STR_License_Diamond","diamond",45000,false,"civ")
	LICENSEMACRO(salt,"STR_License_Salt","salt",12000,false,"civ")
	LICENSEMACRO(cocaine,"STR_License_Cocaine","cocaine",30000,false,"civ")
	LICENSEMACRO(sand,"STR_License_Sand","sand",14500,false,"civ")
	LICENSEMACRO(iron,"STR_License_Iron","iron",9500,false,"civ")
	LICENSEMACRO(copper,"STR_License_Copper","copper",8000,false,"civ")
	LICENSEMACRO(cement,"STR_License_Cement","cement",6500,false,"civ")
	LICENSEMACRO(mAir,"STR_License_Pilot","mAir",15000,false,"med")
	LICENSEMACRO(home,"STR_License_Home","home",75000,false,"civ")
	LICENSEMACRO(donator1,"STR_License_donator1","donator1",75000,false,"civ")
	LICENSEMACRO(donator3,"STR_License_donator3","donator3",75000,false,"civ")
	LICENSEMACRO(donator5,"STR_License_donator5","donator5",75000,false,"civ")
	LICENSEMACRO(LSD,"STR_License_lsd","LSD",75000,true,"civ")
	LICENSEMACRO(Ecstasy,"STR_License_ecstasy","Ecstasy",75000,true,"civ")
	LICENSEMACRO(Mushroom,"STR_License_mushroom","Mushroom",35000,true,"civ")
	LICENSEMACRO(sugar,"STR_License_sugar","sugar",7500,false,"civ")
	LICENSEMACRO(rice,"STR_License_rice","rice",12500,false,"civ")
	LICENSEMACRO(zinc,"STR_License_zinc","zinc",7500,false,"civ")
	LICENSEMACRO(silver,"STR_License_silver","silver",7500,false,"civ")
};

class VirtualShops {
	class market {
		name = "STR_Shops_Market";
		items[] = { "waterBottle", "rabbit", "apple", "peach", "redgull", "tbacon", "mushroom_unprocessed", "pickaxe", "fuelFull", "storagesmall", "storagebig" };
	};

	class ikea {
		name = "STR_Shops_ikea";
		items[] = { "storagesmall", "storagebig" };
	};

	class rebel {
		name = "STR_Shops_Rebel";
		items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "spikeStrip", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
	};

	class gang {
		name = "STR_Shops_Gang";
		items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "spikeStrip", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
	};

	class wongs {
		name = "STR_Shops_Wongs";
		items[] = { "turtle_soup", "turtle_raw" };
	};

	class coffee {
		name = "STR_Shops_Coffee";
		items[] = { "coffee", "donuts" };
	};
	
	class drugdealer {
		name = "STR_Shops_DrugDealer";
		items[] = { "cocaine_processed", "heroin_processed", "marijuana", "LSD", "ecstasy_processed", "mushroom_processed", "fuelFull" };
	};

	class oil {
		name = "STR_Shops_Oil";
		items[] = { "oil_processed", "pickaxe", "fuelFull" };
	};

	class fishmarket {
		name = "STR_Shops_FishMarket";
		items[] = { "salema_raw", "ornate_raw", "mackerel_raw", "tuna_raw", "mullet_raw", "catshark_raw" };
	};

	class glass {
		name = "STR_Shops_Glass";
		items[] = { "glass" };
	};

	class iron  {
		name = "STR_Shops_Minerals";
		items[] = { "iron_refined", "copper_refined" };
	};

	class diamond {
		name = "STR_Shops_Diamond";
		items[] = { "diamond_uncut", "diamond_cut" };
	};

	class salt {
		name = "STR_Shops_Salt";
		items[] = { "salt_refined" };
	};

	class cop {
		name = "STR_Shops_Cop";
		items[] = { "donuts", "coffee", "lockpick", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "fuelFull", "defusekit" };
	};

	class cement {
		name = "STR_Shops_Cement";
		items[] = { "cement" };
	};

	class gold {
		name = "STR_Shops_Gold";
		items[] = { "goldbar" };
	};

	class sugar {
		name = "STR_Shops_sugar";
		items[] = { "sugar_processed" };
	};

	class rice {
		name = "STR_Shops_rice";
		items[] = { "rice_processed" };
	};

	class silverzinc {
		name = "STR_Shops_silver";
		items[] = { "silver_processed", "zinc_processed" };
	};

	class hemglass {
		name = "STR_Shops_hemglass";
		items[] = { "twister", "sandwich" };
	};

	class bar {
		name = "STR_Shops_bar";
		items[] = { "whiskey", "beer", "cider" };
	};

	class herbalist {
		name = "STR_Shops_herbalist";
		items[] = { "Olive", "strawberry", "blueberry", "apple", "peach","mushroom_unprocessed", };
	};
};

#include "Config_Vehicles.hpp"