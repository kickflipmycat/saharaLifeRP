/*
	Author: Snipes Murphy
*/

class Life_Vehicle_Shop_v2_3D {
    idd = 2300;
    name="life_vehicle_shop";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "call life_fnc_3dPreviewInit; ctrlShow [2330,false];";
    onUnLoad = "call life_fnc_3dPreviewExit;";
	//onLoad﻿ = "call life_fnc_3dPreviewInit; ctrlShow [2330,false];";
    //onUnLoad = "call life_fnc_3dPreviewExit;";

    class controlsBackground {
        class MainBackground: Life_RscText {
            colorBackground[] = {0.098,0.098,0.098,1};
            idc = -1;
          	x = 0.025625 * safezoneW + safezoneX;
          	y = 0.1414 * safezoneH + safezoneY;
          	w = 0.170156 * safezoneW;
          	h = 0.462 * safezoneH;
        };

        class RedHighlightLeftSelection: Life_RscText {
            colorBackground[] = {0.098,0.098,0.098,1};
            idc = -1;
            x = 0.025625 * safezoneW + safezoneX;
          	y = 0.1414 * safezoneH + safezoneY;
          	w = 0.004125 * safezoneW;
          	h = 0.462 * safezoneH;
        };

        class MainBackground2: Life_RscText {
            colorBackground[] = {0.098,0.098,0.098,1};
            idc = -1;
          	x = 0.025625 * safezoneW + safezoneX;
          	y = 0.6122 * safezoneH + safezoneY;
          	w = 0.170156 * safezoneW;
          	h = 0.033 * safezoneH;
        };

        class RedHighlightLeftSelection2: Life_RscText {
            colorBackground[] = {0.098,0.098,0.098,1};
            idc = -1;
          	x = 0.025625 * safezoneW + safezoneX;
          	y = 0.6122 * safezoneH + safezoneY;
          	w = 0.004125 * safezoneW;
          	h = 0.033 * safezoneH;
        };

        class MainBackground3: Life_RscText {
           colorBackground[] = {0.098,0.098,0.098,1};
            idc = -1;
          	x = 0.025629 * safezoneW + safezoneX;
          	y = 0.654 * safezoneH + safezoneY;
          	w = 0.170156 * safezoneW;
          	h = 0.0638 * safezoneH;
        };

        class RedHighlightLeftSelection3: Life_RscText {
            colorBackground[] = {0.098,0.098,0.098,1};
            idc = -1;
          	x = 0.025625 * safezoneW + safezoneX;
          	y = 0.654 * safezoneH + safezoneY;
          	w = 0.004125 * safezoneW;
          	h = 0.0638 * safezoneH;
        };

        class RedHighlightTitle: Life_RscText {
            colorBackground[] = {0.705882,0.027451,0.027451,1};
            idc = -1;
          	x = 0.025625 * safezoneW + safezoneX;
          	y = 0.0864 * safezoneH + safezoneY;
          	w = 0.170156 * safezoneW;
          	h = 0.044 * safezoneH;
        };

        class SecondBackground: Life_RscText {
            colorBackground[] = {0.1,0.1,0.1,0.5};
            idc = -1;
            x = 0.809375 * safezoneW + safezoneX;
          	y = 0.1414 * safezoneH + safezoneY;
          	w = 0.170156 * safezoneW;
          	h = 0.462 * safezoneH;
        };

        class RedHighlightLeftInfo: Life_RscText {
            colorBackground[] = {0.705882,0.027451,0.027451,1};
            idc = -1;
            x = 0.809375 * safezoneW + safezoneX;
          	y = 0.1414 * safezoneH + safezoneY;
          	w = 0.004125 * safezoneW;
          	h = 0.462 * safezoneH;
        };

        class Title: Life_RscTitle {
            idc = 2301;
            text = "";
          	x = 0.025625 * safezoneW + safezoneX;
          	y = 0.0864 * safezoneH + safezoneY;
          	w = 0.170156 * safezoneW;
          	h = 0.044 * safezoneH;
        };

        class VehicleInfoHeader: Life_RscText {
            idc = 2330;
            text = "$STR_GUI_VehInfo";
            colorBackground[] = {0.705882,0.027451,0.027451,1};
            x = 0.809375 * safezoneW + safezoneX;
          	y = 0.0864 * safezoneH + safezoneY;
          	w = 0.170156 * safezoneW;
          	h = 0.044 * safezoneH;
        };

        class CloseBtn: Life_RscButtonMenu {
            idc = -1;
            text = "Close";
            onButtonClick = "closeDialog 0;";
          	x = 0.0318123 * safezoneW + safezoneX;
          	y = 0.6892 * safezoneH + safezoneY;
          	w = 0.161891 * safezoneW;
          	h = 0.0242 * safezoneH;
        };

        class RentCar: Life_RscButtonMenu {
            idc = -1;
            text = "Rent";
            onButtonClick = "[false] spawn life_fnc_vehicleShopBuy;";
          	x = 0.11453 * safezoneW + safezoneX;
          	y = 0.6584 * safezoneH + safezoneY;
          	w = 0.0794062 * safezoneW;
          	h = 0.0242 * safezoneH;
        };

        class BuyCar: Life_RscButtonMenu {
            idc = 2309;
            text = "Buy";
            onButtonClick = "[true] spawn life_fnc_vehicleShopBuy;";
          	x = 0.0318123 * safezoneW + safezoneX;
          	y = 0.6584 * safezoneH + safezoneY;
          	w = 0.0794062 * safezoneW;
          	h = 0.0242 * safezoneH;
        };
    };

    class controls {
        class VehicleList: Life_RscListBox {
            idc = 2302;
            text = "";
			rowHeight = "1.4 *       ( (  ( ( safezoneW / safezoneH ) min 1.2 ) / 1.2 ) / 25 )";
			sizeEx = "0.8 *       ( (  ( ( safezoneW / safezoneH ) min 1.2 ) / 1.2 ) / 25 )";
            onLBSelChanged = "_this call life_fnc_vehicleShopLBChange";
          	x = 0.0318586 * safezoneW + safezoneX;
          	y = 0.1458 * safezoneH + safezoneY;
          	w = 0.161891 * safezoneW;
          	h = 0.4532 * safezoneH;
			colorBackground[] = {0.098,0.098,0.098,1};
        };

        class ColorList: Life_RscCombo {
            idc = 2304;
            onLBSelChanged = "[] call life_fnc_vehicleColor3DRefresh;";
          	x = 0.0297498 * safezoneW + safezoneX;
          	y = 0.6122 * safezoneH + safezoneY;
          	w = 0.166031 * safezoneW;
          	h = 0.033 * safezoneH;
        };

        class vehicleInfomationList: Life_RscStructuredText {
            idc = 2303;
            text = "";
            sizeEx = 0.035;
            x = 0.819688 * safezoneW + safezoneX;
          	y = 0.142 * safezoneH + safezoneY;
            w = 0.175313 * safezoneW;
            h = 0.275 * safezoneH;
        };
    };
};