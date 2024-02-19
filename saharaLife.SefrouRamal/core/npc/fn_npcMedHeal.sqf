/*
	Add actions on Market's PNJ
	[this]call life_fnc_npcMedHeal;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};
_this addAction ["<t color='#ff0080'>[HEAL]</t>", life_fnc_healHospital, "", 1.5, false, false, "", 'isNull objectParent player && player distance _target < 5', 5];