/*
	File: fn_varHandle.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master handler for getting a variables name, short name, etc.
*/
private["_var","_mode"];
_var = [_this,0,"",[""]] call BIS_fnc_param;
_mode = [_this,1,-1,[0]] call BIS_fnc_param;
if(_var == "" OR _mode == -1) exitWith {""};

switch (_mode) do
{
	case 0:
	{
		switch (_var) do
		{
			case "oilu": {"life_inv_oilu"};
			case "oilp": {"life_inv_oilp"};
			case "heroinu": {"life_inv_heroinu"};
			case "heroinp": {"life_inv_heroinp"};
			case "cannabis": {"life_inv_cannabis"};
			case "marijuana": {"life_inv_marijuana"};
			case "apple": {"life_inv_apple"};
			case "water": {"life_inv_water"};
			case "rabbit": {"life_inv_rabbit"};
			case "salema": {"life_inv_salema"};
			case "salemaraw": {"life_inv_salemaraw"};
			case "ornate": {"life_inv_ornate"};
			case "ornateraw": {"life_inv_ornateraw"};
			case "mackerel": {"life_inv_mackerel"};
			case "mackerelraw": {"life_inv_mackerelraw"};
			case "tuna": {"life_inv_tuna"};
			case "tunaraw": {"life_inv_tunaraw"};
			case "mullet": {"life_inv_mullet"};
			case "mulletraw": {"life_inv_mulletraw"};
			case "catshark": {"life_inv_catshark"};
			case "catsharkraw": {"life_inv_catsharkraw"};
			case "turtle": {"life_inv_turtle"};
			case "fishing": {"life_inv_fishingpoles"};
			case "coffee": {"life_inv_coffee"};
			case "turtlesoup": {"life_inv_turtlesoup"};
			case "donuts": {"life_inv_donuts"};
			case "fuelE": {"life_inv_fuelE"};
			case "fuelF": {"life_inv_fuelF"};
			case "money": {"life_cash"};
			case "pickaxe": {"life_inv_pickaxe"};
			case "copperore": {"life_inv_copperore"};
			case "ironore": {"life_inv_ironore"};
			case "iron_r": {"life_inv_ironr"};
			case "copper_r": {"life_inv_copperr"};
			case "salt": {"life_inv_salt"};
			case "salt_r": {"life_inv_saltr"};
			case "sand": {"life_inv_sand"};
			case "glass": {"life_inv_glass"};
			case "tbacon": {"life_inv_tbacon"};
			case "lockpick": {"life_inv_lockpick"};
			case "redgull": {"life_inv_redgull"};
			case "peach": {"life_inv_peach"};
			case "diamond": {"life_inv_diamond"};
			case "diamondc": {"life_inv_diamondr"};
			case "cocaine": {"life_inv_coke"};
			case "cocainep": {"life_inv_cokep"};
			case "spikeStrip": {"life_inv_spikeStrip"};
			case "cement": {"life_inv_cement"};
			case "rock": {"life_inv_rock"};
			case "goldbar": {"life_inv_goldbar"};
			case "blastingcharge": {"life_inv_blastingcharge"};
			case "boltcutter": {"life_inv_boltcutter"};
			case "defusekit": {"life_inv_defusekit"};
			case "storagesmall": {"life_inv_storagesmall"};
			case "storagebig": {"life_inv_storagebig"};
			case "frog": {"life_inv_frog"};
			case "LSD": {"life_inv_LSD"};
			case "ecstasyu": {"life_inv_ecstasyu"};
			case "ecstasyp": {"life_inv_ecstasyp"};
			case "mushroomu": {"life_inv_mushroomu"};
			case "mushroomp": {"life_inv_mushroomp"};
			case "sugaru": {"life_inv_sugaru"};
			case "sugarp": {"life_inv_sugarp"};
			case "riceu": {"life_inv_riceu"};
			case "ricep": {"life_inv_ricep"};
			case "zincu": {"life_inv_zincu"};
			case "zincp": {"life_inv_zincp"};
			case "silveru": {"life_inv_silveru"};
			case "silverp": {"life_inv_silverp"};
			case "sandwich": {"life_inv_sandwich"};
			case "twister": {"life_inv_twister"};
			case "whiskey": {"life_inv_whiskey"};
			case "beer": {"life_inv_beer"};
			case "cider": {"life_inv_cider"};
			case "olive": {"life_inv_olive"};
			case "strawberry": {"life_inv_strawberry"};
			case "blueberry": {"life_inv_blueberry"};
		};
	};
	
	case 1:
	{
		switch (_var) do
		{
			case "life_inv_oilu": {"oilu"};
			case "life_inv_oilp": {"oilp"};
			case "life_inv_heroinu": {"heroinu"};
			case "life_inv_heroinp": {"heroinp"};
			case "life_inv_cannabis": {"cannabis"};
			case "life_inv_marijuana": {"marijuana"};
			case "life_inv_apple": {"apple"};
			case "life_inv_water": {"water"};
			case "life_inv_rabbit": {"rabbit"};
			case "life_inv_salema": {"salema"};
			case "life_inv_ornate": {"ornate"};
			case "life_inv_mackerel": {"mackerel"};
			case "life_inv_tuna": {"tuna"};
			case "life_inv_mullet": {"mullet"};
			case "life_inv_catshark": {"catshark"};
			case "life_inv_turtle": {"turtle"};
			case "life_inv_fishingpoles": {"fishing"};
			case "life_inv_coffee": {"coffee"};
			case "life_inv_turtlesoup": {"turtlesoup"};
			case "life_inv_donuts": {"donuts"};
			case "life_inv_fuelE": {"fuelE"};
			case "life_inv_fuelF": {"fuelF"};
			case "life_cash": {"money"};
			case "life_inv_pickaxe": {"pickaxe"};
			case "life_inv_copperore": {"copperore"};
			case "life_inv_ironore": {"ironore"};
			case "life_inv_ironr": {"iron_r"};
			case "life_inv_copperr": {"copper_r"};
			case "life_inv_sand": {"sand"};
			case "life_inv_salt": {"salt"};
			case "life_inv_glass": {"glass"};
			case "life_inv_redgull": {"redgull"};
			case "life_inv_lockpick": {"lockpick"};
			case "life_inv_tbacon": {"tbacon"};
			case "life_inv_peach": {"peach"};
			case "life_inv_diamond": {"diamond"};
			case "life_inv_diamondr": {"diamondc"};
			case "life_inv_saltr": {"salt_r"};
			case "life_inv_coke": {"cocaine"};
			case "life_inv_cokep": {"cocainep"};
			case "life_inv_spikeStrip": {"spikeStrip"};
			case "life_inv_cement": {"cement"};
			case "life_inv_rock": {"rock"};
			case "life_inv_goldbar": {"goldbar"};
			case "life_inv_blastingcharge": {"blastingcharge"};
			case "life_inv_boltcutter": {"boltcutter"};
			case "life_inv_defusekit": {"defusekit"};
			case "life_inv_storagesmall": {"storagesmall"};
			case "life_inv_storagebig": {"storagebig"};
			case "life_inv_frog": {"frog"};
			case "life_inv_LSD": {"LSD"};
			case "life_inv_ecstasyu": {"ecstasyu"};
			case "life_inv_ecstasyp": {"ecstasyp"};
			case "life_inv_mushroomu": {"mushroomu"};
			case "life_inv_mushroomp": {"mushroomp"};
			case "life_inv_riceu": {"riceu"};
			case "life_inv_ricep": {"ricep"};
			case "life_inv_zincu": {"zincu"};
			case "life_inv_zincp": {"zincp"};
			case "life_inv_silveru": {"silveru"};
			case "life_inv_silverp": {"silverp"};
			case "life_inv_sugaru": {"sugaru"};
			case "life_inv_sugarp": {"sugarp"};
			case "life_inv_sandwich": {"sandwich"};
			case "life_inv_twister": {"twister"};
			case "life_inv_whiskey": {"whiskey"};
			case "life_inv_beer": {"beer"};
			case "life_inv_cider": {"cider"};
			case "life_inv_olive": {"olive"};
			case "life_inv_strawberry": {"strawberry"};
			case "life_inv_blueberry": {"blueberry"};
		};
	};
};
