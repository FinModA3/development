class fin_Apilas: Launcher_Base_F
{
	scope = 2;
	AuthNameMacro(fin_Apilas)
	fin_disposable_launcher = 1;
	fin_used_launcher = "fin_Apilas_Used";
	model = "FinMod\addons\fin_launchers\Apilas\apilas.p3d";
	picture = "\FinMod\addons\fin_launchers\Apilas\data\UI\gear_apilas_ca.paa";
	handAnim[] = {"OFP2_ManSkeleton","\FinMod\addons\fin_launchers\Apilas\anim\rkses112_apilas_handanim_mk3_v13.rtm"};	//TODO   "fin_launchers\Apilas\anim\apilas_handanim.rtm"
	reloadAction = "GestureReloadApilas";	//TODO		-> optic on and remove covers anim
	
	magazines[] = {"fin_apilas_mag"};
	initSpeed = -1;
	
	drySound[] = {"A3\sounds_f\weapons\other\dry6",0.17782794,1,15};
	reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",1.0,1,10};	//TODO
	soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.56234133,1.5,700};
	changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.56234133,1,20};	
	
	recoil = "recoil_single_titan";
	sounds[] = {StandardSound};
	class StandardSound
	{
		weaponSoundEffect = "DefaultRifle";
		begin1[] = {"FinMod\addons\fin_launchers\Apilas\sound\Apilas_fire_wip.wav",db0,1,1000};		//TODO
		soundBegin[] = {"begin1",1};	//TODO
	};

	aiRateOfFire = 10.0;
	aiRateOfFireDistance = 300;
	minRange = 15;
	minRangeProbab = 0.3;
	midRange = 300;
	midRangeProbab = 0.58;
	maxRange = 600;
	maxRangeProbab = 0.04;
	
	modelOptics = "FinMod\addons\fin_launchers\Apilas\optic_apilas";
	weaponInfoType = "RscWeaponZeroing";
	class OpticsModes
	{
		class optic
		{
			opticsID = 1;
			useModelOptics = 1;
			opticsZoomMin = 0.1875;
			opticsZoomMax = 0.1875;
			opticsZoomInit = 0.1875;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			memoryPointCamera = "eye";
			opticsFlare = 1;
			opticsDisablePeripherialVision = 1;
			//cameraDir = "look";
			visionMode[] = {"Normal"};
			opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur3"};
		};
	};
	//cameraDir = "look";
	class GunParticles
	{
		class effect1
		{
			positionName = "Backblast_pos";
			directionName = "Backblast_dir";
			effectName =   "RocketBackEffectsRPGNT";
		};
	};	
	inertia = 1.0;
	
	class WeaponSlotsInfo
	{
		mass = 199;
		allowedSlots[] = {};
	};
	class ItemInfo
	{
		priority = 3;
	};

	class Library
	{
		libTextDesc = "112 RsKES APILAS is a disposable anti-tank rocket launcher used by Finnish Defence Forces anti-tank specialists";
	};
};
class fin_Apilas_Used : fin_Apilas
{
	scope=1;
	fin_disposable_launcher = 0;
	magazines[] = {"fin_dummy_mag"};
	AuthNameMacro(fin_Apilas_Used)
	//descriptionMacro(fin_Apilas_Used)
	model = "FinMod\addons\fin_launchers\Apilas\apilas_used.p3d";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 104;
	};
};