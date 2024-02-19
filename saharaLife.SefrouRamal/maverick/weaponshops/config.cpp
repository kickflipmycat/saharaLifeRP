/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

	cashVar = "life_cash";								//--- Cash Variable
	cashSymbol = "$"; 									//--- Currency Symbol
	rotationSpeed = 2; 									//--- Rotation speed for item in preview (1 - 10)
	saveFunction = "[] call SOCK_fnc_updateRequest"; 	//--- Function to save gear etc. once items are purchased

	class localization {
		//--- localization for hints etc.
		msgParamEmpty =						"Shop Parameter is empty!";
		msgInVehicle =						"You cannot be in a Vehicle!";
		msgShopExists =						"Shop doesn't Exist!";
		msgCondition =						"Not permitted to access this Shop!";
		msgCashOnHand =						"Cash on Hand - %1%2";
		msgCartTotal =						"Your Cart - %1%2";
		msgInfoTooltip =					"--> HOLD YOUR LEFT MOUSE BUTTON DOWN WHILE MOVING MOUSE TO ROTATE WEAPON.\n--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgInfoTooltip2 = 					"--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgEmptyShop = 						"Nothing Found...";
		msgInfoText	=						"<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
		msgCartFull	=						"Cart is Full";
		msgCartEmpty =						"Cart is Empty";
		msgNotEnoughCash =					"Not enough Cash for this Transaction";
		msgOverrideAlert =					"Use the override feature to override gear!";
		msgTransactionComplete =			"Purchase completed for %1%2";
		msgNotEnoughSpace =				 	"You didn't have enough space for all the items. You however only paid for those you had space for!";
		msgClear =							"Clear";
		msgSearch =							"Search";

		//--- localization for dialogs
		#define dialogTabWeapon				"Weapon"
		#define dialogTabMagazines			"Magazines"
		#define dialogTabAttachments		"Attachments"
		#define dialogTabOther				"Other"
		#define dialogAddBtn				"Add"
		#define dialogOverrideTooltip		"Override Gear"
		#define dialogCompleteBtn			"Complete"
		#define dialogCloseBtn 				"Close"
	};

	class shops {
		class example_shop {
			title = "Example Shop"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"srifle_DMR_01_F", 500, "true", "Test"},
				{"srifle_EBR_F", 600, "true", "EBR"},
				{"launch_RPG32_F", 500, "true", ""},
				{"srifle_LRR_F", 600, "true", ""},
				{"hgun_Pistol_heavy_01_MRD_F", 1300, "true", ""}
			};

			magazines[] = {
				{"10Rnd_762x54_Mag", 10, "true", "Test Mag"},
				{"20Rnd_762x51_Mag", 20, "true", "EBR Mag"}
			};

			attachments[] = {
				{"optic_SOS", 50, "true", "Test Scope"},
				{"muzzle_snds_B", 1500, "true", ""}
			};
			
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles", 100, "true", ""}, //--- NV goggles won't be shown on preview
				{"U_O_GhillieSuit", 100, "true", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
			};
		};
		
		class genstore {
			title = "General Store"; 	//--- Title of Shop
			condition = "true"; 		//--- Condition to meet to access shop
			simple = 1; 				//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 999; 				//--- Max Amount of Items in Shopping Cart

			weapons[] = {};

			magazines[] = {};

			attachments[] = {};
			
			items[] = {
				{"Rangefinder", 150, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ToolKit", 5000, "true", ""},
				{"FirstAidKit", 150, "true", ""},
				{"NVGoggles", 2000, "true", ""},
				{"NVGoggles_INDEP", 2000, "true", ""},
				{"ItemRadio", 500, "true", ""},
				{"Chemlight_red", 300, "true", ""},
				{"Chemlight_yellow", 300, "true", ""},
				{"Chemlight_green", 300, "true", ""},
				{"Chemlight_blue", 300, "true", ""}
			};
		};
		
		
		class cop {
			title = "Police"; 							//--- Title of Shop
			condition = "call life_coplevel >= 1"; 			//--- Condition to meet to access shop
			simple = 0; 								//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 999; 								//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"hgun_P07_snds_F", 2000, "true", "Tazer"},
				{"hgun_P07_F", 5000, "true", ""},
				{"arifle_MX_F", 75000, "true", ""}, //MX
				{"arifle_MX_GL_F", 100000, "true", ""}, //Mx GL
				
				{"SMG_02_F", 50000, "true", ""}, //sting
				{"SMG_05_F", 50000, "true", ""}, //protector
				{"arifle_CTAR_blk_F", 70000, "true", ""}, //car 95
				{"arifle_SDAR_F", 50000, "true", ""}, //sdar
				{"arifle_Mk20_F", 80000, "true", ""}, //mk20
				{"arifle_Mk20_GL_F", 80000, "true", ""}, //MK20 GL black
				{"SmokeShell", 1000, "true", ""},
				{"SmokeShellRed", 1000, "true", ""},
				{"SmokeShellGreen", 1000, "true", ""},
				{"arifle_SPAR_01_blk_F", 90000, "call life_coplevel >= 2", ""}, //spar16 Black
				{"arifle_SPAR_01_snd_F", 90000, "call life_coplevel >= 2", ""}, //spar16 sable
				{"arifle_SPAR_01_GL_blk_F", 100000, "call life_coplevel >= 2", ""}, //Spar 16 GL Black
				{"arifle_SPAR_01_GL_snd_F", 100000, "call life_coplevel >= 2", ""}, //Spar 16 Gl sable
				{"arifle_SPAR_02_blk_F", 100000, "call life_coplevel >= 2", ""}, //spar16s Black
				{"arifle_SPAR_02_snd_F", 100000, "call life_coplevel >= 2", ""}, //spar16s sable
				{"arifle_MXC_F", 100000, "call life_coplevel >= 2", ""}, //MXC
				{"arifle_MXM_F", 100000, "call life_coplevel >= 2", ""}, //MX
				{"arifle_MX_SW_F", 100000, "call life_coplevel >= 2", ""}, //MX-SW
				{"LMG_03_F", 90000, "call life_coplevel >= 2", ""}, //LIM 5.56
				
				{"arifle_MXC_F", 100000, "call life_coplevel >= 2", ""}, //MXC
				{"arifle_MXM_F", 100000, "call life_coplevel >= 2", ""}, //MX
				{"arifle_MX_SW_F", 100000, "call life_coplevel >= 2", ""}, //MX-SW
				{"arifle_ARX_blk_F", 100000, "call life_coplevel >= 2", ""}, //type 115
				{"srifle_DMR_07_blk_F", 130000, "call life_coplevel >= 3", ""}, //cmr 76
				{"LMG_Mk200_F", 200000, "call life_coplevel >= 3", ""}, //mk200
				{"srifle_DMR_03_tan_F", 160000, "call life_coplevel >= 3", ""}, //mk-1
				{"srifle_DMR_03_F", 160000, "license_cop_swat", ""}, //mk-1 noir
				{"srifle_DMR_03_woodland_F", 160000, "license_cop_swat", ""}, //mk-1 camo
				{"srifle_DMR_06_olive_F", 160000, "call life_coplevel >= 3", ""}, //mk14
				{"srifle_EBR_F", 200000, "call life_coplevel >= 3", ""}, //mk18
				{"arifle_SPAR_03_snd_F", 160000, "call life_coplevel >= 3 || license_cop_swat", ""}, //spar-17
				{"HandGrenade_Stone", 2000, "call life_coplevel >= 4 || license_cop_swat", "Flash Bang"},
				{"UGL_FlareYellow_F", 2000, "call life_coplevel >= 4 || license_cop_swat", "Flash Bang GL"}, // Flash bang GL
				{"arifle_SPAR_03_blk_F", 160000, "call life_coplevel >= 6 || license_cop_swat", ""}, //spar-17
				{"hgun_PDW2000_F", 20000, "call life_coplevel >= 6", ""}, //PDW
				{"LMG_Zafir_F", 250000, "call life_coplevel >= 4", ""}, //zafir
				
				{"1Rnd_Smoke_Grenade_shell", 1000, "call life_coplevel >= 4", "Smoke GL-W"}, // Smoke GL Police
				{"srifle_DMR_02_F", 1000000, "call life_coplevel >= 5", ""}, 
				{"srifle_GM6_F", 1000000, "call life_coplevel >= 5", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 100, "true", "Tazer x16"}, //tazer
				{"30Rnd_9x21_Mag", 150, "true", "Tazer x30"}, //tazer
				{"16Rnd_9x21_Mag", 100, "true", "Pistolet/PDW x16"}, //pistolet
				{"30Rnd_9x21_Mag", 150, "true", "Pistolet/PDW x30"}, //pistolet
				{"30Rnd_9x21_Mag_SMG_02", 100, "true", ""}, //protector + sting
				{"30Rnd_580x42_Mag_F", 200, "true", ""}, //car 95
				{"30Rnd_556x45_Stanag", 300, "true", ""}, //Spar 16 + mk20 + SDAR
				{"20Rnd_556x45_UW_mag", 200, "true", "Chargeur SDAR sous-marin"}, //sdar sous l'eau
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 300, "call life_coplevel >= 2", ""}, //spar16s
				{"200Rnd_556x45_Box_F", 2000, "call life_coplevel >= 2", ""}, //LIM
				{"30Rnd_65x39_caseless_mag", 100, "true", ""}, //MX
				{"100Rnd_65x39_caseless_mag", 250, "call life_coplevel >= 2", ""}, //MX-SW 100
				{"30Rnd_65x39_caseless_green", 300, "call life_coplevel >= 2", ""}, //type 115
				{"20Rnd_650x39_Cased_Mag_F", 100, "call life_coplevel >= 3", ""}, //cmr 76
				{"200Rnd_65x39_cased_Box", 2000, "call life_coplevel >= 3", ""}, //Mk200
				{"20Rnd_762x51_Mag", 100, "call life_coplevel >= 3", ""}, //spar-17 + mk1 + mk18 + mk14
				{"150Rnd_762x54_Box", 1500, "call life_coplevel >= 4", ""}, //zafir
				{"5Rnd_127x108_Mag", 1700, "call life_coplevel >= 4", ""}, //mk1 + mk14 + mk18
				{"10Rnd_338_Mag", 3000, "call life_coplevel >= 4", ""}
			};

			attachments[] = {
				{"muzzle_snds_L", 2500, "true", "Silencieux 9 mm"},
				{"muzzle_snds_58_blk_F", 2500, "true", "Silenc. 5.8 mm"},
				{"muzzle_snds_M", 2500, "true", "Silenc. 5.56 mm"},
				{"muzzle_snds_H", 2500, "true", "Silenc. 6.5mm"},
				{"muzzle_snds_H_MG", 2500, "true", "Silenc. 6.5mm"},
				{"muzzle_snds_65_TI_blk_F", 2500, "true", "Silenc. 6.5mm"},
				{"muzzle_snds_B", 2500, "true", "Silenc. 7.62mm"},
				{"muzzle_snds_B_khk_F", 2500, "true", "Silenc. 7.62mm"},
				{"optic_Holosight", 5000, "true", ""},
				{"optic_ACO_grn_smg", 5000, "true", ""},
				{"optic_Aco_smg", 5000, "true", ""},
				{"optic_ACO_grn", 5000, "true", ""},
				{"optic_Aco", 5000, "true", ""},
				{"optic_MRCO", 7500, "true", ""},
				{"optic_Hamr", 7500, "call life_coplevel >= 2", ""},
				{"optic_Arco", 7500, "call life_coplevel >= 2", ""},
				{"optic_ERCO_blk_F", 8000, "call life_coplevel >= 3", ""},
				{"optic_ERCO_snd_F", 8000, "call life_coplevel >= 3", ""},
				{"optic_DMS", 10000, "call life_coplevel >= 3", ""},
				{"optic_SOS", 20000, "call life_coplevel >= 3", ""},
				{"optic_SOS_khk_F", 20000, "call life_coplevel >= 6 || life_cop_bse", ""},
				{"optic_DMS_ghex_F", 10000, "call life_coplevel >= 6 || life_cop_bse", ""},
				{"bipod_01_F_snd", 1000, "call life_coplevel >= 2", ""},
				{"bipod_03_F_oli", 1000, "call life_coplevel >= 6 || life_cop_bse", ""},
				{"bipod_02_F_blk", 1000, "call life_coplevel >= 6 || life_cop_seal || license_cop_swat", ""}
			};
			
			items[] = {
				{"B_UavTerminal", 10000, "call life_coplevel >= 6 || life_cop_bse || license_cop_swat", ""},
				{"acc_flashlight", 200, "true", ""},
				{"ItemCompass", 500, "true", ""},
				{"ItemMap", 500, "true", ""},
				{"ItemWatch", 5000, "true", ""},
				{"ItemRadio", 250, "true", "Téléphone"},
				{"Rangefinder", 150, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ToolKit", 5000, "true", ""},
				{"FirstAidKit", 150, "true", ""},
				{"NVGoggles_OPFOR", 2000, "true", ""},
				{"O_NVGoggles_urb_F", 2000, "call life_coplevel >= 6 || license_cop_swat || life_cop_seal", ""}
			};
		};
		
	};
};

#include "gui\weapon_gui_master.cpp"
