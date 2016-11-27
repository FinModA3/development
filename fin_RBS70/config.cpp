class CfgPatches {
	class fin_ITO05M {
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"Extended_Eventhandlers"};
	};
};

#include "moves.hpp"
#include "CfgVehicles.hpp"
#include "CfgWAM.hpp"

class Extended_Init_Eventhandlers {
    class fin_ITO05M {
        class TB_alfr_Rbs70_init {
            init = "tb_alfr_bolidePFH = compile preprocessFileLineNumbers '\FinMod\addons\fin_RBS70\BolidePFH.sqf'";
        };
    };
};

class Extended_FiredBIS_Eventhandlers {
    class fin_ITO05M {
        class TB_alfr_Rbs70_firedEH {
            firedBIS = "_this call tb_alfr_bolidePFH";
        };
    };
};
