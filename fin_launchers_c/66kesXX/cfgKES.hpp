class fin_66kes_base : Launcher_Base_F
{
	scope = 1;
	fin_disposable_launcher = 1;

	drySound[] = { "A3\sounds_f\weapons\other\dry6",0.0316228,1,10 };
	reloadMagazineSound[] = { "A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50 };
	soundFly[] = { "A3\sounds_f\weapons\rockets\rocket_fly_1",0.316228,1.5,700 };
	changeFiremodeSound[] = { "A3\sounds_f\dummysound",0.56234133,1,20 };
	handAnim[] = { "OFP2_ManSkeleton","FinMod\addons\fin_launchers\66kesXX\anim\KES_Handanim_v1.rtm" };	//TODO

	recoil = "recoil_single_law";
	initSpeed = -1;

	sounds[] = { StandardSound };
	class StandardSound
	{
		soundSetShot[] =
		{
			fin_66KES88_Shot_SoundSet/*,
			fin_66KES88_Tail_SoundSet*/
		};
	};

	aiRateOfFire = 10.0;
	aiRateOfFireDistance = 300;
	minRange = 10;
	minRangeProbab = 0.9;
	midRange = 100;
	midRangeProbab = 0.7;
	maxRange = 250;
	maxRangeProbab = 0.1;

	weaponInfoType = "fin_rsc_disposable";
	modelOptics = "-";
	optics = 0;
	opticsID = 2;

	opticsPPEffects[] =
	{
		"OpticsCHAbera1",
		"OpticsBlur1"
	};

	useModelOptics = 0;
	opticsFlare = 0;
	opticsDisablePeripherialVision = 0;
	opticsZoomMin = 0.275;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	visionMode = "";
	cameraDir = "eye_look";
	memoryPointCamera = "eye";

	inertia = 1.0;
	class GunParticles
	{
		class effect1
		{
			positionName = "Backblast_pos";
			directionName = "Backblast_dir";
			effectName = "RocketBackEffectsRPGNT";
		};
	};
	class ItemInfo
	{
		priority = 3;
	};
};

class fin_66kes88: fin_66kes_base
{
	AuthNameMacro(fin_66kes88)
	LibraryMacro(fin_66kes88)
	scope = 2;
	fin_used_launcher = "fin_66kes88_Used";
	model = "FinMod\addons\fin_launchers\66kesXX\kes88";
	picture = "\FinMod\addons\fin_launchers\66kesXX\data\UI\gear_66kes88_ca.paa";
	handAnim[] = { "OFP2_ManSkeleton","\FinMod\addons\fin_launchers\66kesXX\anim\KES_Handanim_v1.rtm" };
	reloadAction = "ReloadRPG";	//TODO		-> optic on and remove covers anim
	magazines[] = { "fin_66kes88_mag" };

	discreteDistanceInitIndex = 0;
	discreteDistance[] = { 100,150,200,250,300 };// 50?
	discreteDistanceCameraPoint[] = { "eye1","eye2","eye3","eye4","eye5" };//,"eye6" };
	distanceZoomMin = 100;
	distanceZoomMax = 100;

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 72.1;		//3.27 kg - rocket weight 4 lbs		//79 pounds - http://www.smallarmsreview.com/display.article.cfm?idarticles=1240
	};
};
class fin_66kes88_Used : fin_66kes88
{
	AuthNameMacro(fin_66kes88_Used)
	scope = 1;
	fin_disposable_launcher = 0;
	magazines[] = { "fin_dummy_mag" };
	model = "FinMod\addons\fin_launchers\66kesXX\kes88_used.p3d";
	class WeaponSlotsInfo
	{
		mass = 50.1;		// -22
	};
};

class fin_66kes12 : fin_66kes_base
{
	AuthNameMacro(fin_66kes12)
	LibraryMacro(fin_66kes12)
	scope = 2;
	fin_used_launcher = "fin_66kes12_Used";
	model = "FinMod\addons\fin_launchers\66kesXX\kes12";
	picture = "\FinMod\addons\fin_launchers\66kesXX\data\UI\gear_66kes12_ca.paa";
	handAnim[] = { "OFP2_ManSkeleton","\FinMod\addons\fin_launchers\66kesXX\anim\KES_Handanim_v1.rtm" };
	reloadAction = "ReloadRPG";	//TODO		-> optic on and remove covers anim

	magazines[] = { "fin_66kes12_mag" };

	aiRateOfFire = 10.0;
	aiRateOfFireDistance = 300;
	minRange = 10;
	minRangeProbab = 0.9;
	midRange = 100;
	midRangeProbab = 0.7;
	maxRange = 250;
	maxRangeProbab = 0.1;

	discreteDistanceInitIndex = 0;
	discreteDistance[] = { 100,150,200,250,300 };
	discreteDistanceCameraPoint[] = { "eye1","eye2","eye3","eye4","eye5" };
	distanceZoomMin = 100;
	distanceZoomMax = 100;

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 70.5;		//3.4 kg - rocket weight x lbs // TODO
	};
};

class fin_66kes12_rak : fin_66kes12
{
	AuthNameMacro(fin_66kes12_rak)
	LibraryMacro(fin_66kes12_rak)
	magazines[] = { "fin_66kes12_rak_mag" };
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 77.2;		//3.7 kg - rocket weight x lbs // TODO
	};
};

class fin_66kes12_Used : fin_66kes12
{
	AuthNameMacro(fin_66kes12_Used)
	scope = 1;
	fin_disposable_launcher = 0;
	magazines[] = { "fin_dummy_mag" };
	model = "FinMod\addons\fin_launchers\66kesXX\kes12_used.p3d";
	class WeaponSlotsInfo
	{
		mass = 48.5;		// -x		// TODO
	};
};
/*
class fin_66kes12_rak_Used : fin_66kes12
{
	AuthNameMacro(fin_66kes12_rak_Used)
	scope = 1;
	magazines[] = { "fin_dummy_mag" };
	model = "FinMod\addons\fin_launchers\66kesXX\kes12_used.p3d";
	class WeaponSlotsInfo
	{
		mass = 55.2;		// -x		// TODO
	};
};
*/
