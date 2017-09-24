class fin_PKM : Rifle_Base_F
{
	scope = 2;
	public = 2;
	AuthNameMacro(fin_PKM)
	model = "\FinMod\addons\fin_mgs\PKM\pkm.p3d";
	picture = "\FinMod\addons\fin_mgs\PKM\data\UI\pkm_x_ca.paa";
	maxRecoilSway = 0.015;
	swayDecaySpeed = 1.25;
	opticsZoomMin = 0.25;
	opticsZoomMax = 1;
	opticsZoomInit = 0.75;
	mass = 99.2;
	recoil = "recoil_pkm";
	magazines[] = {"fin_100Rnd_pkm_mag","fin_100Rnd_pkm_mag_Tracer"};
	ACE_barrelLength = 605;
	reloadTime = 0.09230769230769230769230769230769;
	dispersion = 0.00093;
	class WeaponSlotsInfo
	{
		mass = 99.2; //8.16 lb == 3.7 kg
		allowedSlots[] = { 901 };
		class CowsSlot : asdg_OpticRail1913_long 
		{
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			iconPinpoint = "Center";
			iconScale = 0.2;
			iconPosition[] = { 0.5, 0.2 };
		};
	};
	inertia = 0.85;
	dexterity = 1.0;
	deployedPivot = "bipod";
	hasBipod = true;
	// Size of recoil sway of the cursor
	// Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)

	
	cameraDir = "eye_look";
	memoryPointCamera = "eye";
	
	discreteDistance[] = { 100,200,300,400,500,600,700,800 };
	discreteDistanceInitIndex = 0;
	discreteDistanceCameraPoint[] = { "eye1","eye2","eye3","eye4","eye5","eye6","eye7","eye8" };
	distanceZoomMin = 100;
	distanceZoomMax = 1500;
	
	reloadAction = "GestureReloadPKM"; 	// check PKM_animations.hpp
	handanim[] ={"OFP2_ManSkeleton","FinMod\addons\fin_mgs\PKM\anim\PKM.Handanim_v1.rtm"};	
	selectionFireAnim = "muzzleFlash";

	drySound[] = { "FinMod\addons\fin_mgs\PKM\sounds\pkm_dry.wav", db - 5, 1, 20 }; //	empty weapon
	reloadMagazineSound[] = { "FinMod\addons\fin_mgs\pkm\sounds\PKM-Reload_finmod.wav",1,1,30 };
	changeFiremodeSound[] = { "FinMod\addons\fin_mgs\pkm\sounds\RK_firemode.wav",0.56234133,1,20 };	// selector
	modes[] = {FullAuto, fullauto_medium}; /// Includes fire modes for AI
		/*class Single : Mode_SemiAuto
		{
			sounds[] = 
			{
				StandardSound
			};	//,"SilencedSound
			class StandardSound
			{
				soundSetShot[] = 
				{
					fin_PKM_Shot_SoundSet,
					fin_PKM_Tail_SoundSet
				};
			};
		};*/
		class FullAuto : Mode_FullAuto
		{
			sounds[] = 
			{
				StandardSound
			};	//,"SilencedSound
			class StandardSound
			{
				soundSetShot[] =
				{
					fin_PKM_Shot_SoundSet,
					fin_PKM_Tail_SoundSet
				};
			};
		};
		class fullauto_medium : FullAuto // Pew, pew, pew only for AI
		{
		showToPlayer = 0;
		burst = 5;
		minRange = 5; 		minRangeProbab = 0.5;
		midRange = 300; 	midRangeProbab = 0.7;
		maxRange = 800; 	maxRangeProbab = 0.2;

		aiRateOfFire = 2.0;
		aiRateOfFireDistance = 200;
		};
};
/**** SLOTABLE WEAPONS ****/