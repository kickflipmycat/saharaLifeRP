/*
    Add actions on Licenses's PNJ
	[this]call life_fnc_npcCapDouane;
*/

private["_this"];

_this = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _this) exitWith {};

//_this setObjectTexture [0, "textures\armalife.paa"];
_this setVariable["realname","Douane"]; 
_this addAction ["Attaquer la douane"	,life_fnc_attackDouane,	"""",0,false,false,"""",' vehicle player == player && player distance _target < 5 '];   
_this addAction ["Sécuriser la douane"	,life_fnc_secuDouane,	"""",0,false,false,"""",' vehicle player == player && player distance _target < 5 '];

