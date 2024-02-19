/*
	Add actions on Station's PNJ
	[this]call life_fnc_npcEntrepriseElect;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction["<t color='#00ff00'>[Entreprise]</t> Fabrication d'ordinateur",life_fnc_processAction,"ordinateur",0,false,false,"",'life_inv_fils > 0 && life_inv_plastique > 0 && !life_is_processing && !life_action_inUse && license_civ_entrepriseElect',5]; 
_this addAction ["<t color='#00ff00'>[Entreprise]</t> (Ouvert/Fermé sur la carte)", {["entreprise_2"] spawn Entreprise_fnc_entrepriseMarker}];