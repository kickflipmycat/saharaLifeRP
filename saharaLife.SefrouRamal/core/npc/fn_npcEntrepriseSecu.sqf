/*
	Add actions on Station's PNJ
	[this]call life_fnc_npcEntrepriseSecu;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction ["<t color='#00ff00'>[Entreprise]</t> ATM",life_fnc_atmMenu,"",0,false,false,"",' isNull objectParent player && player distance _target < 4 '];
_this addAction ["<t color='#00ff00'>[Entreprise]</t> (Ouvert/Fermé sur la carte)",{["entreprise_3"] spawn Entreprise_fnc_entrepriseMarker}];