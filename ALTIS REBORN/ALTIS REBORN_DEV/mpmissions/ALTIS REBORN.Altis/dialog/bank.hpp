class Life_atm_management {
	idd = 2700;
	name= "life_atm_menu";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText 
		{
		    colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		    idc = -1;
		    x = 0.2375;
		    y = 0.17;
		    w = 0.45;
		    h = 0.04;
		};
		
		class MainBackground:Life_RscText 
		{
		    colorBackground[] = {0, 0, 0, 0.7};
		    idc = -1;
		    x = 0.2375;
		    y = 0.22;
		    w = 0.45;
		    h = 0.48;
		};
	};
	
	class controls {

		class CashTitle : Life_RscStructuredText
		{
		    idc = 2701;
		    text = "";
		    x = 0.25;
		    y = 0.24;
		    w = 0.425;
		    h = 0.16;
		};
		
		class Title : Life_RscTitle 
		{
		    colorBackground[] = {0, 0, 0, 0};
		    idc = -1;
		    text = "$STR_ATM_Title";
		    x = 0.2375;
		    y = 0.17;
		    w = 0.45;
		    h = 0.04;
		};
		
		class WithdrawButton : life_RscButtonMenu 
		{
	        idc = -1;
		    text = "$STR_ATM_Withdraw";
		    colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
		    onButtonClick = "[] call life_fnc_bankWithdraw";
		    x = 0.25;
		    y = 0.46;
		    w = 0.175;
		    h = 0.04;
		};
		
		class DepositButton : life_RscButtonMenu 
		{
		    idc = -1;
		    text = "$STR_ATM_Deposit";
		    colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
		    onButtonClick = "[] call life_fnc_bankDeposit";
	        x = 0.25;
		    y = 0.52; 
		    w = 0.175;
		    h = 0.04;
		};
		
		class DepositAllButton : life_RscButtonMenu 
		{
		    idc = -1;
		    text = "$STR_ATM_DepositAll";
		    colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
		    onButtonClick = "[] call life_fnc_bankDepositAll";
		    x = 0.25;
		    y = 0.58;
		    w = 0.175;
		    h = 0.04;
		};
		
		class moneyEdit : Life_RscEdit 
		{
		    idc = 2702;
		    text = "1";
		    sizeEx = 0.030;
		    x = 0.25; 
		    y = 0.42;
		    w = 0.425; 
		    h = 0.03;
		};
		
		class PlayerList : Life_RscCombo 
		{
		    idc = 2703;
		    x = 0.45; 
		    y = 0.46;
		    w = 0.225; 
		    h = 0.04;
		};
		
		class TransferButton : life_RscButtonMenu 
		{
		    idc = -1;
		    text = "$STR_ATM_Transfer";
		    colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
		    onButtonClick = "[] call life_fnc_bankTransfer";
		    x = 0.475;
		    y = 0.52;
		    w = 0.175;
		    h = 0.04;
		};
		
		class GangDeposit : life_RscButtonMenu
		{
		    idc = 2705;
		    text = "$STR_pInAct_DepositToGang";
		    colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
		    onButtonClick = "[] call life_fnc_gangDeposit";
		    x = 0.475;
		    y = 0.58; 
		    w = 0.175;
		    h = 0.04;
		};
		
		/*class HoldUp : life_RscButtonMenu 
		{
		    idc = 2704;
		    text = "Rob";
		    colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
		    onButtonClick = "[] spawn life_fnc_atmRob;";
		    x = 0.475;
		    y = 0.64;
		    w = 0.175;
		    h = 0.04;
		};*/
		
		class CloseButtonKey : Life_RscButtonMenu 
		{
		    idc = -1;
		    text = "$STR_Global_Close";
		    onButtonClick = "closeDialog 0;";
		    x = 0.2375;
		    y = 0.71;
		    w = 0.1125;
		    h = 0.04;
		};
	};
};
