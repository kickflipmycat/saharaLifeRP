/*
	Add actions on Market's PNJ
	[this]call life_fnc_npcAtm;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this enableSimulation false; 
_this allowDamage false; 

_this addAction["<t color='#8000ff'>[SERVICE]</t> ATM",life_fnc_atmMenu,"",0,false,false,"",' isNull objectParent player && player distance _target < 4 '];