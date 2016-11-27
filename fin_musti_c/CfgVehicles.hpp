class Optics_Armored;
class Optics_Commander_01 : Optics_Armored {
	class Wide;
	class Medium;
	class Narrow;
};

class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle	{
		class Turrets;
		class MainTurret;
	};

	class fin_musti: StaticWeapon {
		//AuthNameMaco(fin_musti)
		author = "$STR_FinMod_Author";
		displayName = "Musti";
		gunnercansee = "2+4+8+32";
		scope = 2;
		model = "FinMod\addons\fin_musti\musti.p3d";		
		mapsize = 2.8;
		class Library { };
		picture = "FinMod\addons\fin_RBS70\data\picture_rbs70_CA.paa";
		icon = "FinMod\addons\fin_RBS70\data\icon_rbs70_CA.paa";
		side = 2;
		faction = "fin_faction_fdf";
		crew = "fin_Rifleman_RK95";
		editorPreview = "FinMod\addons\fin_RBS70\data\edenpreviews\fin_ito05m.jpg";

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				minTurn=-360;
				maxTurn=360;
				gunneraction = "Fin_musti_anim";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;				
				maxelev = 40;
				memorypointsgetingunner = "pos_gunner";
				memorypointsgetingunnerdir = "pos_gunner_dir";
				minelev = -10;			
				gunnerOpticsModel = "FinMod\addons\fin_RBS70\2D_optics.p3d";
				gunnerOpticsEffect[] = {
					"TankCommanderOptics1",
					"BWTV"				
				};
				weapons[] = {"fin_musti_weapon"};
				magazines[] = {
					"fin_musti_HEAT_mag","fin_musti_HEAT_mag",
					"fin_musti_HEAT_mag","fin_musti_HEAT_mag",
					"fin_musti_HEAT_mag","fin_musti_HEAT_mag",					
					"fin_musti_HEAT_mag","fin_musti_HEAT_mag"
				};
				class ViewOptics {
					initanglex = 0;
					initangley = 0;
					initfov = 0.155;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 0.155;
					minanglex = -30;
					minangley = -100;
					minfov = 0.047;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};	
				};	
				class OpticsIn : Optics_Commander_01 {
					class Wide : Wide {
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;	
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};	
						gunnerOpticsModel = "FinMod\addons\fin_RBS70\2D_optics.p3d";						
					};
					class Medium : Medium {
						initFov = 0.101;
						minFov = 0.101;
						maxFov = 0.101;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};	
						gunnerOpticsModel = "FinMod\addons\fin_RBS70\2D_optics.p3d";												
					};
					class Narrow : Narrow {
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};	
						gunnerOpticsModel = "FinMod\addons\fin_RBS70\2D_optics.p3d";												
					};
				};
			};
		};
		class AssembleInfo {
		    primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {
				"fin_musti_cluBag",
				"fin_musti_standBag"
			};
			displayName = "";
		};	
	};
	class Bag_Base;
	class Weapon_Bag_Base : Bag_Base {
		class assembleInfo;
	};
	class fin_musti_cluBag : Weapon_Bag_Base {
		author = "$STR_FinMod_Author";
		scope = 2;
		displayName = "ITO05M launcher";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {
			"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oli_co.paa"
		};
		picture = "\A3\weapons_f_beta\ammoboxes\bags\data\ui\icon_B_Tortila_oli_ca.paa";
		faction = "tb_alfr_1bn";
		mass = 180;
		class assembleInfo : assembleInfo {
			displayName = "ITO05M";
			assembleTo = "fin_musti";
			base[] = {
				"fin_musti_standBag"
			};
		};
	};	
	class fin_musti_standBag: Bag_Base {
		author = "$STR_FinMod_Author";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {
			"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oli_co.paa"
		};
		picture = "\A3\weapons_f_beta\ammoboxes\bags\data\ui\icon_B_Tortila_oli_ca.paa";
		displayName = "ITO05M stand";
		maximumLoad = 0;
		mass = 180;
		faction = "tb_alfr_1bn";
		class assembleInfo {
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = { };
			displayName = "";
		};
	};		
};