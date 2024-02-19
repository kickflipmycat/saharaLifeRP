/*
	Add actions on Market's PNJ
	[this]call life_npcMedAthira;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction["Concessionnaire",life_fnc_vehicleShopMenu,["med_shop",independent,"med_car_athira","med","Athira Hospital"],1.5,true,true,"","true",5]; 

_this addAction["Magasin d'hélicoptères", life_fnc_vehicleShopMenu,["med_air",independent,"medic_spawn_athira","med","Kavala Hospital"],1.5,true,true,"","true",5]; 

_this addAction["Garage",  {   if (life_HC_isActive) then {    [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life]; } else { [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];};  createDialog "Life_impound_menu";  disableSerialization;  ctrlSetText[2802,"Fetching Vehicles...."];  life_garage_sp = "med_car_athira"; life_garage_type = "Car"; },"",0,false,false,"",'playerSide isEqualTo independent',5]; 

_this addAction["Garage Hélicoptères",  {   if (life_HC_isActive) then {    [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life]; } else { [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["TON_fnc_getVehicles",2];};  createDialog "Life_impound_menu";  disableSerialization;  ctrlSetText[2802,"Fetching Vehicles...."];  life_garage_sp = "medic_spawn_athira"; life_garage_type = "Air"; },"",0,false,false,"",'playerSide isEqualTo independent ',5]; 


_this addAction["Ranger le véhicule",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store',5]; 
