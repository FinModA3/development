
	class fin_rk_rifle_base : Rifle_Base_F
	{

		magazines[] = {fin_30Rnd_rk_mag, fin_30Rnd_rk_mag_Tracer};
		ACE_barrelTwist = 185;	// unit: mm
		ACE_barrelLength = 418;

		//Animations
		reloadAction = "GestureReloadRK"; 	// check rk_animations.hpp
		handanim[] ={"OFP2_ManSkeleton","FinMod\addons\fin_rk_rifles\anim\HandAnim_rk62.rtm"};	
		selectionFireAnim = "zasleh";
		
		//Deploy and bipod
		deployedPivot = "deploypoint";
		hasBipod = false;
		
		//Iron sights
		weaponInfoType = "RscWeaponZeroing";	/// display with zeroing is good for iron sight
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		
		drySound[]={"FinMod\addons\fin_rk_rifles\sounds\RK_Dry.wav", db-5, 1, 20}; //	empty weapon
		reloadMagazineSound[]={"FinMod\addons\fin_rk_rifles\sounds\rk_reload_done.wav",1,1,30};

		changeFiremodeSound[] = {"FinMod\addons\fin_rk_rifles\sounds\RK_firemode.wav",0.56234133,1,20};	// selector

		//BIS sounds on bullet hit on ground etc. ?
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.25118864,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.25118864,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.25118864,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.25118864,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		
		//muzzles[] = {this};
		modes[] = {Single, FullAuto, fullauto_medium, single_medium_optics1, single_far_optics2}; /// Includes fire modes for AI
		class Single: Mode_SemiAuto
		{
			sounds[] = 
			{
				StandardSound
			};	//,"SilencedSound
			class StandardSound
			{
				soundSetShot[] = 
				{
					fin_RK62_Shot_SoundSet,
					fin_RK_Tail_SoundSet
				};
			};

			reloadTime = 0.096;											// Fire rate
			dispersion = 0.00093;										// this is bit over 3 minute of angle

				
			minRange = 2; minRangeProbab = 0.3; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 250; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 400; maxRangeProbab = 0.04; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};
			
		class FullAuto: Mode_FullAuto
		{
			sounds[] = 
			{
				StandardSound
			};	//,"SilencedSound
			class StandardSound
			{
				soundSetShot[] =
				{
					fin_RK62_Shot_SoundSet,
					fin_RK_Tail_SoundSet
				};
			};
			
			reloadTime = 0.096;
			dispersion = 0.00093;
			
			minRange = 0; 		minRangeProbab = 0.9;
			midRange = 15; 		midRangeProbab = 0.7;
			maxRange = 30; 		maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
		};
		class fullauto_medium: FullAuto /// Pew, pew, pew only for AI
		{
			showToPlayer = 0;
			burst = 3;
			
			minRange = 2; 		minRangeProbab = 0.5;
			midRange = 75; 		midRangeProbab = 0.7;
			maxRange = 150; 	maxRangeProbab = 0.05; 
			
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
			
			aiDispersionCoefY = 10; /// AI should have some degree of greater dispersion for initial shoots
			aiDispersionCoefX = 8; /// AI should have some degree of greater dispersion for initial shoots
	};