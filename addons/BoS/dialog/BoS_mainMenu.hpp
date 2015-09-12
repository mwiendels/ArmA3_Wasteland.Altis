// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
#define BoS_Menu_dialog 17000
#define BoS_Menu_option 17001

class BoS_Menu
{
	idd = BoS_Menu_dialog;
	movingEnable=1;
	onLoad = "uiNamespace setVariable ['BoS_Menu', _this select 0]";

	class controlsBackground {

		class BoS_Menu_background: IGUIBack
		{
			idc=-1;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0, 0, 0, 0.6};
			x=0.28;
			y=0.10;
			w=0.3505;
			h=0.70;
		};

		class TopBar: IGUIBack
		{
			idc = -1;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {A3W_UICOLOR_R, A3W_UICOLOR_G, A3W_UICOLOR_B, 0.8};

			x=0.28;
			y=0.10;
			w=0.3505;
			h=0.05;
		};

		class BoS_Menu_Title:w_RscText
		{
			idc=-1;
			text="Base Menu";
			x=0.29;
			y=0.108;
			w=0.088;
			h=0.035;
		};
	};

	class controls {

		class BoS_Menu_options:w_Rsclist
		{
			idc = BoS_Menu_option;
			x=0.30;
			y=0.18;
			w=0.31;
			h=0.49;
		};

		class BoS_Menu_activate:w_RscButton
		{
			idc=-1;
			text="Select";
			onButtonClick = "[1] execVM 'addons\BoS\BoS_optionSelect.sqf'";
			x=0.345;
			y=0.70;
			w=0.22;
			h=0.071;
		};
	};
};

