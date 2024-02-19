/*
	Add actions on Market's PNJ
	[this]call life_fnc_npcCopCar;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

_this addAction[localize"STR_MAR_W_E_Vehicle Shop",life_fnc_vehicleShopMenu,["cop_car",west,"cop_car_1","cop","250 District"],1.5,true,true,"","true",5]; 

_this addAction[localize"STR_Garage_Title",  {   if (life_HC_isActive) then {    [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["HC_fnc_getVehicles",HC_Life]; } else { [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];};  createDialog "Life_impound_menu";  disableSerialization;  ctrlSetText[2802,"Fetching Vehicles...."];  life_garage_sp = "cop_car_1"; life_garage_type = "Car"; },"",0,false,false,"",'playerSide isEqualTo west',5]; 

_this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store',5]; 

_this setVariable ["realname","Cop Vehicle Store"]; 
