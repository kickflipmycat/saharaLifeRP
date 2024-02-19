/*
	Add actions on Market's PNJ
	[this]call life_fnc_npcMedShop;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction["Market",life_fnc_virt_menu,"med_market",1.5,false,false,"",' isNull objectParent player && player distance _target < 5 && playerSide isEqualTo independent ',5]; 

_this addAction["Clothing boutique",life_fnc_clothingMenu,"med_clothing",1.5,true,true,"","true",5];

_this addAction["Medical Store", MAV_shop_fnc_initWeaponShop, "med_basic"];

_this addAction[format ["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "mAir" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "mAir" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"mAir",0,false,false,"",' !license_med_mAir && playerSide isEqualTo independent ',5]; 
