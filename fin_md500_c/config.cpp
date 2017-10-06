class CfgPatches {
	class fin_md500 {
		units[] = {"fin_md500"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
};
#include "../fin_main/nameMacros.hpp"
class CfgVehicles {
	class C_Heli_Light_01_civil_F;
	class fin_md500 : C_Heli_Light_01_civil_F
	{
		AuthNameMacro(fin_md500)
		faction = fin_faction_fdf;
		side=2;
		//displayname="MD 500";
		crew = "I_helipilot_F";
		animationList[] = {"AddDoors",1,"AddBackseats",1,"AddTread_Short",0,"AddTread",0};
		hiddenSelectionsTextures[] = {"\FinMod\addons\fin_md500_c\data\md500_fdf_co.paa"};
		hiddenSelectionsMaterials[] = {"a3\air_f\heli_light_01\data\heli_light_01_ext.rvmat"};
		textureList[] = {};
	};
};