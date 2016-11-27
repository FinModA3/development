class fin_KVKK : Rifle_Base_F
{
	scope = 2;
	public = 2;
	AuthNameMacro(fin_KVKK)
	model = "\FinMod\addons\fin_mgs\KVKK\KVKK.p3d";
	//picture = "\FinMod\addons\fin_mgs\KVKK\data\UI\KVKK_x_ca.paa"; /// different accessories have M, S, T instead of X
	maxRecoilSway = 0.015;
	swayDecaySpeed = 1.25;
	opticsZoomMin = 0.25;
	opticsZoomMax = 1;
	opticsZoomInit = 0.75;
	mass = 99.2;
	recoil = "recoil_KVKK";
	magazines[] = {"fin_100Rnd_KVKK_mag","fin_100Rnd_KVKK_mag_Tracer"};
	ACE_barrelLength = 605;
	reloadTime = 0.09230769230769230769230769230769;
	dispersion = 0.00093;
	class WeaponSlotsInfo
	{
		mass = 99.2; //8.16 lb == 3.7 kg
		allowedSlots[] = { 901 };
		class CowsSlot : asdg_OpticRail1913_long {};
	};
	inertia = 0.85;
	dexterity = 1.0;
	deployedPivot = "bipod";
	hasBipod = true;
	// Size of recoil sway of the cursor
	// Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)

	discreteDistance[] = { 100,200,300,400,420,500,600,700,800,900,1000,1100,1200,1300,1400,1500 };
	discreteDistanceInitIndex = 0;
	distanceZoomMin = 100;
	distanceZoomMax = 1500;
	
	reloadAction = "GestureReloadKVKK"; 	// check KVKK_animations.hpp
	handanim[] ={"OFP2_ManSkeleton","FinMod\addons\fin_mgs\KVKK\anim\KVKK_Handanim_v6.rtm"};	
	selectionFireAnim = "muzzleFlash";

	drySound[] = { "FinMod\addons\fin_mgs\PKM\sounds\pkm_dry.wav", db - 5, 1, 20 }; //	empty weapon
	reloadMagazineSound[] = { "FinMod\addons\fin_mgs\pkm\sounds\rk_reload_done.wav",1,1,30 };
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
					fin_KVKK_Shot_SoundSet,
					fin_KVKK_Tail_SoundSet
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