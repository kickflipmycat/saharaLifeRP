/*
	Add actions on Market's PNJ
	[this]call life_fnc_npcCivLicense;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

//_this setObjectTexture [0, ""];
_this addAction["<t color='#8000ff'>[CIV]</t> Licenses Shop", life_fnc_licenses, ["driver",
"boat",
"trucking",
"pilot",
"home",
"gun",
"trucking",
"oil",
"diamond",
"salt",
"sand",
"iron",
"copper",
"cement"
],0,true,true,"",' playerSide isEqualTo civilian '];
