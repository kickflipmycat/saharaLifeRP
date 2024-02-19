/*
	Add actions on Station's PNJ
	[this]call life_fnc_npcRebelle;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction ["<t color='#C82400'>Marché rebel</t>",life_fnc_virt_menu,"rebel",1.5,true,true,"","true",5]; 

_this addAction ["<t color='#C82400'>Vêtements</t>",life_fnc_clothingMenu,"reb",0,false,false,"",' license_civ_rebel && playerSide isEqualTo civilian',5]; 

_this addAction ["<t color='#C82400'>Armurerie rebelle</t>", MAV_shop_fnc_initWeaponShop, "rebel",0,false,false,"",' license_civ_rebel && playerSide isEqualTo civilian',5];

_this addAction[format ["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "rebel" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "rebel" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"rebel",0,false,false,"",' !license_civ_rebel && playerSide isEqualTo civilian ',5]; 

_this addAction[localize"STR_NOTF_ATM",life_fnc_atmMenu,"",0,false,false,"",' isNull objectParent player && player distance _target < 4 ',5];