/*
	Add actions on Market's PNJ
	[this]call life_fnc_npcCivGenstore;
*/

private["_this"];

_this = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction["<t color='#8000ff'>[CIV]</t> General Market", MAV_shop_fnc_initWeaponShop, "genstore"];
//_this setVariable["realname", "Fourniture générales"];
