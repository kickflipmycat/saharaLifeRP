/*
	Add actions on Market's PNJ
	[this]call life_fnc_npcCivClothing;
*/
private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

//_this setObjectTexture [0, ""];
_this addAction["<t color='#8000ff'>[CIV]</t> Clothing boutique", life_fnc_clothingMenu,"bruce",1.5,true,true,"","true",5];
