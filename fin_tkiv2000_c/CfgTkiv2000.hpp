// TKiv 2000
//class srifle_EBR_F;
class fin_TKiv2000 : Rifle_Long_Base_F
{
	scope = 2; 
	AuthNameMacro(fin_TKiv2000)
	
	model = "\FinMod\addons\fin_tkiv2000\tkiv2000.p3d"; // path to model
	selectionFireAnim = "muzzleFlash"; // muzzle flash selection name
	
	picture = "\FinMod\addons\fin_tkiv2000\data\ui\tkiv2000_ca.paa";
	UiPicture = "\FinMod\addons\fin_tkiv2000\data\ui\tkiv2000_ca.paa";
	
	class Library
	{
		libTextDesc = "TKIV 2000 library description"; // library description
	};
	
	handAnim[] = {"OFP2_ManSkeleton", "\FinMod\addons\fin_tkiv2000\anim\TRG_handanim_v17.rtm"};
	reloadAction = "GestureReloadLRR";
	magazines[] = {"fin_5Rnd_TKiv2000_mag"};
	dexterity = 1.2;
	initSpeed = 910;
	inertia = 0.5;
	recoil = "recoil_tkiv2000";
	maxRecoilSway = 0.0125; // Size of recoil sway of the cursor
	swayDecaySpeed = 1.25; // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
	opticsZoomMin = 0.375;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	cursor = "srifle";
	opticsPPEffects[] = {};
	opticsFlare = 0;
	opticsDisablePeripherialVision = 0;
	
	class GunParticles
	{
		class FirstEffect
		{
			effectName = "SniperCloud";
			positionName = "Usti hlavne";
			directionName = "Konec hlavne";
		};
	};
	
	bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 25};
	bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 25};
	bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 25};
	bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 25};
	bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 25};
	bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 25};
	bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 25};
	bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 25};
	bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 25};
	bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 25};
	bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 25};
	bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 25};
	
	soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
	
	reloadMagazineSound[] = {"A3\Sounds_F\weapons\M320\M320_reload", 0.501187, 1, 10};
	drySound[] = {"A3\sounds_f\weapons\Other\dry_1", 0.501187, 1, 20};
	
	class ItemInfo
	{
		priority = 1;
	};
	
	class WeaponSlotsInfo
	{
		mass = 140;
		allowedSlots[] = {901};
		
		class MuzzleSlot: MuzzleSlot // Muzzle slot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; 			// this can be set, but having some common helps a bit
			compatibleItems[] = {}; 										// A custom made suppressor for this weapon
			iconPosition[] = {0.0, 0.45};									// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
			iconScale = 0.2;												// scale of icon described in iconPicture
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa"; 	// icon for selected slot
			iconPinpoint = "Center"; 										// top, bottom, left, right, center alignment of the icon on snap point
		};
		class CowsSlot: CowsSlot // Top slot
		{
			compatibleItems[] = {"fin_TKiv2000_Scope"};
			iconPosition[] = {0.5, 0.35};
			iconScale = 0.2;
		};
		class PointerSlot: PointerSlot // Side slot
		{
			compatibleItems[] = {};
			iconPosition[] = {0.20, 0.45};
			iconScale = 0.25;
		};
		class UnderBarrelSlot: UnderBarrelSlot // Underbarrel slot
		{
			compatibleItems[] = {"fin_TKiv2000_Bipod"};
			iconPosition[] = {0.2, 0.7};
			iconScale = 0.2;
		};	
	};
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "fin_TKiv2000_Scope";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "fin_TKiv2000_Bipod";
		};
	};
	/*
class fin_tkiv_scopebipod : fin_TKiv2000
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "fin_TKiv2000_Scope";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "fin_TKiv2000_Bipod";
		};
	};
};
	*/
	
	modes[] = {"Single", "far_optic1", "medium_optic2", "far_optic2"};
	
	class Single : Mode_SemiAuto
	{
		dispersion = 0.00018;
		reloadTime = 1.8;
		
		sounds[] = {StandardSound, SilencedSound}; // the new parameter to distinguish muzzle accessories type

		class BaseSoundModeType
		{
			weaponSoundEffect  = "DefaultRifle";

			closure1[]={"A3\sounds_f\weapons\closure\closure_rifle_6", db3, 1,10};
			closure2[]={"A3\sounds_f\weapons\closure\closure_rifle_7", db3, 1,10};
			soundClosure[]={closure1,0.5, closure2,0.5};
		};

		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\MX\mx-st-full-1", db3, 1,1200};
			begin2[] = {"A3\sounds_f\weapons\MX\mx-st-full-2", db3, 1,1200};
			soundBegin[] = {begin1,0.5, begin2,0.5};
		};

		class SilencedSound: BaseSoundModeType
		{
			begin1[]={"A3\sounds_f\weapons\silenced\silent-18", db-2, 1,100};
			begin2[]={"A3\sounds_f\weapons\silenced\silent-19", db-2, 1,100};
			begin3[]={"A3\sounds_f\weapons\silenced\silent-11", db-2, 1,100};
			soundBegin[]={begin1,0.333, begin2,0.333, begin3,0.333};
		};
		
		soundContinuous = 0;
		
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 350;
		maxRangeProbab = 0.05;
		
		aiRateOfFire = 3;	// delay between shots at given distance
		aiRateOfFireDistance = 500;
	};
	
	class far_optic1 : Single
	{
		showToPlayer = 0;
		
		minRange = 150;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.3;
		
		aiRateOfFire = 5;	// delay between shots at given distance
		aiRateOfFireDistance = 700;
		
		requiredOpticType = 1;
	};
	
	class far_optic2 : far_optic1
	{
		minRange = 500;
		minRangeProbab = 0.1;
		midRange = 1050;
		midRangeProbab = 0.7;
		maxRange = 2000;
		maxRangeProbab = 0.3;
		
		aiRateOfFire = 8;	// delay between shots at given distance
		aiRateOfFireDistance = 2000;
		
		requiredOpticType = 2;
	};
	
	class medium_optic2 : Single
	{
		showToPlayer = 0;
		
		minRange = 250;
		minRangeProbab = 0.1;
		midRange = 750;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.3;
		aiRateOfFire = 6.0;	// delay between shots at given distance
		aiRateOfFireDistance = 1000;
		
		requiredOpticType = 2;
	};
	
	
	
	// for Weapon Eventhandler Framework
	class bg_weaponparameters 
	{
		class onFired_Action
		{
			HandAction = "GestureFireLRR";
			Actiondelay = 0;
			Sound = "";
			Sound_Location = "RightHandMiddle1";
			hasOptic = 0;
		};
		
		class onEmpty
		{
			Sound = "";
			Sound_Location = "RightHandMiddle1";
		};
	};
};