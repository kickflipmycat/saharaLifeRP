/*
	Add actions on Market's PNJ
	[this]call life_fnc_npcCivMarket;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

//_this setObjectTexture [0, ""];
_this addAction["<t color='#8000ff'>[CIV]</t> Market", life_fnc_virt_menu, "market", 1.5, true,true,"","true",5];
