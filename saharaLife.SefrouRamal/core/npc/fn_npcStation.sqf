/*
	Add actions on Station's PNJ
	[this]call life_fnc_npcStation;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

//_this setObjectTexture [0, ""];
_this addAction["<t color='#00ff00'>[CIV]</t> ATM",life_fnc_weaponShopMenu,"f_station_store",1.5,true,true,"","true",5];
_this addAction[localize"STR_Shop_Station_Coffee",life_fnc_virt_menu,"f_station_coffee",1.5,true,true,"","true",5];

_this addAction["<t color='#ff0000'>[CIV]</t> Voler la station", life_fnc_robstore];
