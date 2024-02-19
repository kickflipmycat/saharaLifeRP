/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {

    class SefrouRamal {
        class Civilian {
            class AlMahbes {
                displayName = "Al Mahbes";
                spawnMarker = "civ_spawn_1";
                icon 		= "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions 	= "!license_civ_rebel";
            };

            class RebelE {
                displayName = $STR_SP_Reb_E;
                spawnMarker = "Rebelop_2";
                icon 		= "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
                conditions 	= "license_civ_rebel";
            };
        };

        class Cop {
            class un {
                displayName = "UN HQ";
                spawnMarker = "UNBase";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
        };

        class Medic {
            class Kavala {
                displayName = "Medic HQ";
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
        };
    };
};
