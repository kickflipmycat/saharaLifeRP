/*
	Add actions on Station's PNJ
	[this]call life_fnc_npcEntrepriseDiams;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction["<t color='#00ff00'>[Entreprise]</t> Traitement de diamant",life_fnc_processAction,"diamondPolis",0,false,false,"",'life_inv_diamondcut > 0 && !life_is_processing && !life_action_inUse && license_civ_entrepriseDiams',5]; 

_this addAction ["<t color='#00ff00'>[Entreprise]</t> (Ouvert/Fermé sur la carte)", {["entreprise_1"] spawn Entreprise_fnc_entrepriseMarker}];
