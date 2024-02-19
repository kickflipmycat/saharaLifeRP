class LicenseShop {
	idd = 5546;
	name= "life_license_shop";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "uiNamespace setVariable [""LicenseShop"", _this select 0];";
	objects[] = { };
	class controls {
			 
		class RscTitleBackground : Life_RscText
		{
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			text = "Licenses"; //--- ToDo: Localize;
			x = 0.0499999;
			y = 0.2;
			w = 0.825;
			h = 0.04;
		};
		 
		class Mainbackground : Life_RscText
		{
			colorBackground[] = {0,0,0,0.8};
			idc = -1;
			x = 0.0499999;
			y = 0.244;
			w = 0.825;
			h = 0.52;
		};
		class listbox: Life_RscListBox
		{
			idc = 55126;
			sizeEx = 0.04;
			x = 0.0625;
			y = 0.3;
			w = 0.45;
			h = 0.4;
			font = PuristaMedium;
		};
		class ShowLicenseslistbox: Life_RscListBox
		{
			idc = 55131;
			sizeEx = 0.04;
			x = 0.5375;
			y = 0.3;
			w = 0.325;
			h = 0.44;
		};
		class MyLicenses : Life_RscText
		{
			idc = 55130;
			text = "Available "; //--- ToDo: Localize;
			x = 0.2125;
			y = 0.24;
			w = 0.1375;
			h = 0.04;
		};
		class ShowLicenses : Life_RscText
		{
			idc = 55129;
			text = "My licenses"; //--- ToDo: Localize;
			x = 0.625;
			y = 0.24;
			w = 0.1625;
			h = 0.04;
		};
		class buybutton: Life_RscButtonMenu
		{
			idc = 55127;
			text = "BUY";
			x = 0.2;
			y = 0.72;
			w = 0.15;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			action = "if( (lbData[55126,lbCurSel (55126)] != """") ) then { [false, false, false, lbData[55126,lbCurSel (55126)]] call life_fnc_buyLicense; closeDialog 0; };";
		};
        class ButtonClose : Life_RscButtonMenu {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "CLOSE";
            onButtonClick = "closeDialog 0;";
            x = 0.05;
			y = 0.76;
			w = 0.13;
			h = 0.04;

        };
	};
};