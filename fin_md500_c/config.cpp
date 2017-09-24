class CfgPatches {
	class fin_md500 {
		units[] = {"ffp_md500"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
};
class CfgVehicles {
	class C_Heli_Light_01_civil_F;
	class fin_md500 : C_Heli_Light_01_civil_F
	{
		dlc="ffp";
		faction = fin_faction_fdf;
		side=2;
		displayname="MD 500";
		crew = "I_helipilot_F";
		animationList[] = {"AddDoors",1,"AddBackseats",1,"AddTread_Short",0,"AddTread",0};
		hiddenSelectionsTextures[] = {"\fin_md500_c\data\md500_fdf_co.paa"};
		hiddenSelectionsMaterials[] = {"a3\air_f\heli_light_01\data\heli_light_01_ext.rvmat"};
		textureList[] = {};
	};
};