#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)


class life_spawn_selection {
	idd = 38500;
	movingEnable = 0;
	enableSimulation = 1;

	class controlsBackground {

		class MainBackground: Life_RscText {
			idc = -1;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};

		};

		class Title: Life_RscTitle {
			idc = -1;
			text = "Spawn Selection"; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class SpawnPointTitle: Title {
			idc = 38501;
			style = 1;

			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class MapView : Life_RscMapControl {
			idc = 38502;
			maxSatelliteAlpha = 0.75;
			alphaFadeStartScale = 1.15;
			alphaFadeEndScale = 1.29;

			x = 12.4 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 27 * GUI_GRID_W;
			h = 23 * GUI_GRID_H;
		};
	};

	class controls {
		class SpawnPointList: Life_RscListNBox {
			idc = 38510;
			coloumns[] = {0,0,0.9};
			drawSideArrows = 0;
			idcLeft = -1;
			idcRight = -1;
			rowHeight = 0.05;
			onLBSelChanged = "_this call life_fnc_spawnPointSelected;";

			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 20 * GUI_GRID_H;
		};

		class spawnButton: Life_RscButtonMenu {
			onButtonClick = "[] call life_fnc_spawnConfirm";
			idc = 1006;
			text = "Spawn"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};

		};

		class backtolobby: Life_RscButtonMenu {
			idc = 24640;
			text = "Back to Lobby"; //--- ToDo: Localize;
			onButtonClick = endMission "LOSER";
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
	};
};