/*
	Add actions on Market's PNJ
	[this]call life_fnc_npcCopShop;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction["Market",life_fnc_virt_menu,"cop",1.5,true,true,"","true",5]; 
_this addAction["Clothing boutique",life_fnc_clothingMenu,"cop",1.5,true,true,"","true",5]; 
_this addAction ["Weapon Shop", MAV_shop_fnc_initWeaponShop, "cop"];

_this addAction[format ["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "cAir" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "cAir" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"cAir",0,false,false,"",' !license_cop_cAir && playerSide isEqualTo west ',5]; 
_this addAction[format ["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "cg" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "cg" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"cg",0,false,false,"",' !license_cop_cg && playerSide isEqualTo west ',5];