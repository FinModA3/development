class fin_Rk95 : fin_rk_rifle_base
{
	scope = 2;
	AuthNameMacro(fin_Rk95)
	model = "FinMod\addons\fin_rk_rifles\rk95.p3d";
	picture = "\FinMod\addons\fin_rk_rifles\data\UI\gear_rk95_ca.paa"; /// different accessories have M, S, T instead of X

	ACE_barrelLength = 420;
	class Library
	{
		libTextDesc = "Standard issue assault rifle of Finnish Defence Forces, Rk 95 TP (assault rifle 95 folding stock) is chambered in 7.62x39mm";
	};
	class WeaponSlotsInfo
	{
		mass = 81.57; //8.16 lb == 3.7 kg
		allowedSlots[] = { 901 };

		class CowsSlot : asdg_OpticRail1913_short /// Top slot
		{
			iconPosition[] = { 0.5498046875, 0.25390625 };
			iconScale = 0.15;												/// scale of icon described in iconPicture
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa"; 	/// icon for selected slot
			iconPinpoint = "Center"; 										/// top, bottom, left, right, center alignment of the icon on snap point
		};
		//class CowsSlot : asdg_OpticRail1913_short {};
		class UnderBarrelSlot : asdg_UnderSlot {};
		//class MuzzleSlot : asdg_MuzzleSlot_762R {};
	};
	inertia = 0.5;
	dexterity = 1.8;

	recoil = "recoil_rk95";
	// Size of recoil sway of the cursor
	maxRecoilSway = 0.0125;
	// Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
	swayDecaySpeed = 1.25;

	discreteDistance[] = { 150,300 };
	discreteDistanceInitIndex = 0;
	distanceZoomMin = 150;
	distanceZoomMax = 300;

	class Single : Single
	{
		soundSetShot[] =
		{
			fin_RK95_Shot_SoundSet,
			fin_RK_Tail_SoundSet
		};
	};
	class FullAuto : FullAuto
	{
		soundSetShot[] =
		{
			fin_RK95_Shot_SoundSet,
			fin_RK_Tail_SoundSet
		};
	};
	class single_medium_optics1 : Single
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
	class single_far_optics2 : single_medium_optics1
	{
		requiredOpticType = 2;
	};
	class fullauto_medium : FullAuto /// Pew, pew, pew only for AI
	{
		showToPlayer = 0;
		burst = 3;

		minRange = 2; 		minRangeProbab = 0.5;
		midRange = 75; 		midRangeProbab = 0.7;
		maxRange = 150; 	maxRangeProbab = 0.05;

		aiRateOfFire = 2.0;
		aiRateOfFireDistance = 200;
	};
};
/**** SLOTABLE WEAPONS ****/
class fin_rk95_ta11 : fin_Rk95
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "fin_TA11_3d";
		};
	};
};

class fin_rk95_aimpoint2009 : fin_Rk95
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "fin_pp09";
		};
	};
};

class fin_rk95_aimpoint2004 : fin_Rk95
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "fin_pp04";
		};
	};
};