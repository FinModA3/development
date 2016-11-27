/*	Vehicle classes	*/
class CfgVehicles 
{
	/*	Base class	*/
	// Include as many unique defines and classes common for all your vehicle classes as possible.
	class fin_leopard_base: Tank_F 
	{
		// Basic defines: vehicle class in editor, name displayed, knowledge required to recognize this type of target
		vehicleClass = fin_vehclass_tank;
		side = 2;
		faction = fin_faction_fdf;
		crew = "O_crew_F";
		typicalCargo[] = { "O_crew_F" };

		accuracy = 0.3;
		// Model and look defines: paths to model, squad picture and map icon
		icon =	"\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";

	//	#include "sounds.hpp"	// not covered by this tutorial
		#include "physx.hpp"

		// AI references
		cost = 1500000;
		damageResistance = 0.02;
		crewVulnerable = false;

		// Damage setup
		armor = 500;
		armorStructural = 6;	// Two hulls of same type should take same amount of damage. Use armorStructural to counter the effect of vehicle size on its armor.

		//	Weak spots parameters
			// 	name: selection in HitPoints LOD - create selections first!
			// 	radius: radius of weak spot spheres generated around vertices in HitPoints LOD, tweak before armor
			// 	armor: multiplier of total vehicle armor required to destroy given component, tweak after radius
			// 	explosionShielding: multiplier of damage caused by explosive rounds, tweak after armor
			//	minimalHit: minimum hit required to receive damage, tweak after explosionSielding
			// 	passThrough: how much damage is passed to total vehicle damage
			// 	visual: section in Resource LODs and CfgModels section of model.cfg
			// 	material: unneeded, leave at -1
			
			// The values are sample. Every vehicle needs to be finetuned separately.
		class HitPoints: HitPoints 
		{
			class HitHull: HitHull 
			{	// Handle internal damage
				armor=0.8;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit = 0.14;
				explosionShielding = 2.0;
				radius = 0.25;
			};
			class HitEngine: HitEngine 
			{
				armor=1;
				material=-1;
				name="motor";
				passThrough=0.8;
				minimalHit = 0.24;
				explosionShielding = 1;
				radius = 0.33;
			};
			class HitLTrack: HitLTrack 
			{
				armor=0.5;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack 
			{
				armor=0.5;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
		};
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets 
				{
					class CommanderOptics: CommanderOptics 
					{
						// Animation class
						body = "obsTurret";
						gun = "obsGun";
						
						// Animation source
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						
						// Servos
						maxHorizontalRotSpeed = 1.8;	// 1 = 45°/sec
						maxVerticalRotSpeed = 1.8;		// 1 = 45°/sec
						stabilizedInAxes = StabilizedInAxesBoth;
						soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};
						minElev=-05;
						maxElev=+60;
						initElev=0;
						minTurn=-360;
						maxTurn=+360;
						initTurn=0;
						
						// Weapon and magazines
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = {HMG_NSVT, SmokeLauncher};	// you may need different weapon class to provide firing effects emit from proper position.
						magazines[] = {450Rnd_127x108_Ball, 450Rnd_127x108_Ball, SmokeLauncherMag};
						
						
						// FCS
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;
						
						// Optics view
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics= "commanderview";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";	// leave "" to disable optics view
						gunnerOpticsEffect[] = {};	// post processing effets
						gunnerHasFlares = 1;	// flare visual effect when looking at light source
						class ViewOptics: ViewOptics 
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=+30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=+100;
							// Field of view values: 1 = 120°
							initFov=0.155;
							minFov=0.034;
							maxFov=0.155;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {0,1};
						};
						
						// Gunner operations
						gunnerAction = mbt2_slot2b_out;
						gunnerInAction = mbt2_slot2b_in;
						gunnerGetInAction = GetInHigh;
						gunnerGetOutAction = GetOutHigh;
						startEngine = 0;	// Turning this turret should not turn engine on.
						viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
						outGunnerMayFire = 1;	// Turn off to make player able to look around freely outside optics view.
						inGunnerMayFire = 1;	// Turn off to make player able to look around freely outside optics view.
						
						class HitPoints 
						{
							class HitTurret	
							{
								armor = 0.3;
								material = -1;
								name = "vezVelitele";
								visual="vezVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
							class HitGun
							{
								armor = 0.3;
								material = -1;
								name = "zbranVelitele";
								visual="zbranVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
						};
						selectionFireAnim = "zasleh3";
					};
				};
				
				// Coaxial gun
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				
				// Main gun
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				
				// Weapons and magazines
				weapons[]={cannon_120mm,LMG_M200};
				magazines[]={32Rnd_120mm_APFSDS_shells_Tracer_Red, 16Rnd_120mm_HE_shells_Tracer_Red, 2000Rnd_65x39_belt};
				
				class AnimationSources:AnimationSources
				{
					class muzzle_rot_cannon {source = "ammorandom"; weapon = "cannon_120mm";};
					class muzzle_rot_coax {source = "ammorandom"; weapon = "LMG_M200";};
					class muzzle_rot_HMG {source = "ammorandom"; weapon = "HMG_NSVT";};
					class recoil_source {source = "reload"; weapon = "cannon_120mm";};
				};
				
				// Turret servos
				minElev=-5;
				maxElev=+20;
				initElev=10;
				soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};

				// FCS
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = 
				{
					100,200,300,400,500,600,700,800,
					900,1000,1100,1200,1300,1400,1500,1600,
					1700,1800,1900,2000,2100,2200,2300,2400
				};
				discreteDistanceInitIndex = 5;	// start at 600 meters
				
				// Optics view
				memoryPointGunnerOptics= "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				
				// Field of view values: 1 = 120°
				class OpticsIn 
				{
					class Wide: ViewOptics 
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=+30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=+100;
						initFov=0.3;
						minFov=0.3;
						maxFov=0.3;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {4,5}; //red hot chilli
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide 
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide 
					{
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
						initFov=0.028;
						minFov=0.028;
						maxFov=0.028;
					};
				};
				
				// Gunner operations and animations
				gunnerAction = mbt2_slot2a_out;
				gunnerInAction = mbt2_slot2a_in;
				forceHideGunner = 0;
				inGunnerMayFire = 1;	// set to 0 to let gunner look around the internal compartment if modeled
				viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
				
				class HitPoints 
				{
					class HitTurret	
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual="vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual="";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
			};
		};
		/* RETEXTURABILITY	*/
		/*
		hiddenSelections[] ={"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa"};
		*/
		
		// Damage textures - for sections: zbytek, vez, zbran, vezVelitele, zbranVelitele,
		class Damage 
		{
			tex[] = {};
			mat[] = {
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_destruct.rvmat",

				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_destruct.rvmat",

				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_destruct.rvmat",

				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_destruct.rvmat",

				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat",
			};
		};

		smokeLauncherGrenadeCount = 8; //Number of smoke shells launched at once
		smokeLauncherVelocity = 14; //Velocity which smoke shells are launched at
		smokeLauncherOnTurret = 1; //0 if smoke launchers are on hull, 1 if on turret
		smokeLauncherAngle = 120; //Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)

		class ViewOptics: ViewOptics 
		{
			visionMode[] = {"Normal","NVG"};
		};

		class Exhausts 
		{
			class Exhaust1 
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankBack";
			};
		};

		class Reflectors 
		{
			class Left 
			{
				color[] 	= {1900, 1300, 950};
				ambient[]	= {5,5,5};
				position 	= "Light_L";
				direction 	= "Light_L_end";
				hitpoint 	= "Light_L";
				selection	= "Light_L";
				size 		= 1;
				innerAngle 	= 100;
				outerAngle 	= 179;
				coneFadeCoef = 10;
				intensity 	= 1; //17.5
				useFlare 	= 0;
				dayLight 	= 0;
				flareSize 	= 1.0;
				class Attenuation 
				{
					start 		= 1.0;
					constant 	= 0;
					linear 		= 0;
					quadratic 	= 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left 
			{
				position 	= "Light_R";
				direction 	= "Light_R_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			class Right2: Right 
			{
				position 	= "light_R_flare";
				useFlare 	= 1;
			};
			class Left2: Left 
			{
				position 	= "light_L_flare";
				useFlare 	= 1;
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
	};
};