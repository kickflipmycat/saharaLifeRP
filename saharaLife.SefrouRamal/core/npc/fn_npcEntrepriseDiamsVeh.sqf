/*
	Add actions on Station's PNJ
	[this]call life_fnc_npcEntrepriseDiamsVeh;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction["<t color='#00ff00'>[Entreprise]</t>Garage",  {   if (life_HC_isActive) then {    [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life]; } else { [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];};  createDialog "Life_impound_menu";  disableSerialization;  ctrlSetText[2802,"Fetching Vehicles...."];  life_garage_sp = "diamond_spCar"; life_garage_type = "Car"; },"",0,false,false,"",'playerSide isEqualTo civilian',5];     
    
_this addAction["<t color='#00ff00'>[Entreprise]</t>Ranger le véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store',5];    
 
_this addAction["<t color='#00ff00'>[Entreprise]</t>Concessionnaire",life_fnc_vehicleShopMenu,["diams_car",civilian,"diamond_spCar","civ","ENTREPRISE DIAMSCORP"],1.5,true,true,"","true",5]; 
_this addAction["<t color='#00ff00'>[Entreprise]</t> Vêtements", life_fnc_clothingMenu,"cloth_Diams",1.5,true,true,"","true",5];

_this setVariable ["realname", "Entreprise DiamsCorp"];
 
 