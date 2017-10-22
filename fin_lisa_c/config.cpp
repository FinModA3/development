#include "../fin_main/nameMacros.hpp"
class CfgPatches
{
	class fin_mpl15_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Weapons_F","fin_main", "fin_mpl15" };
	};
};

class CfgWeapons {
	class Laserdesignator;	// External class reference	
	class fin_mpl15 : LaserDesignator {
		public = 2;
		AuthNameMacro(fin_mpl15)
		model = "\FinMod\addons\fin_lisa\lisa.p3d";
		modelOptics = "\FinMod\addons\fin_lisa\lisa_optic.p3d";
		picture = "\FinMod\addons\fin_lisa\data\ui\lisa_CA.paa";
		discretefov[] = { 0.079, 0.026 };
		discreteInitIndex = 0;
	};
};