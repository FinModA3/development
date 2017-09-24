
class CfgPatches
{
	class fin_lisa_c
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F","fin_main", "fin_lisa"};
	};
};


class CfgWeapons {
	class Laserdesignator;	// External class reference	
	class fin_lisa : LaserDesignator {
		public = 2;
		author = $STR_FinMod_Author;
		displayName = $STR_fin_lisa;
		descriptionShort = $STR_fin_lisa_desc;
		model = "\FinMod\addons\fin_lisa\lisa.p3d";
		modelOptics = "\FinMod\addons\fin_lisa\lisa_optic.p3d";
		picture = "\FinMod\addons\fin_lisa\data\ui\lisa_CA.paa";
		discretefov[] = {0.079, 0.026};
		discreteInitIndex = 0;
	};
};