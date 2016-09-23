class fin_Rk62: fin_rk_rifle_base
{		
	scope = 2;
	AuthNameMacro(fin_Rk62)

	model = "FinMod\addons\fin_rk_rifles\rk62.p3d";
	picture = "\FinMod\addons\fin_rk_rifles\data\UI\gear_rk62_x_ca.paa"; /// different accessories have M, S, T instead of X
	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	class Library
	{
		libTextDesc = "Standard issue assault rifle of Finnish Defence Forces, Rk 62 (assault rifle 62) is chambered in 7.62x39mm";
	};
	class WeaponSlotsInfo
	{
		allowedSlots[] = { 901 };
		class CowsSlot : SlotInfo /// default accessories for this slot
		{
			iconPosition[] = { 0.5, 0.35 };
			iconScale = 0.2;
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			compatibleItems[] = { "fin_vv2000_sidemount" };
		};
	};
	mass = 77.16; // 3.6 kg empty
	inertia = 0.5;
	dexterity = 1.8;

	recoil = "recoil_rk62";
	// Size of recoil sway of the cursor
	maxRecoilSway=0.0125;
	// Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
	swayDecaySpeed=1.25;
	
	discreteDistance[] = {100,150,200,300,400,500,600};
	discreteDistanceInitIndex = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 600;
};
	
class fin_rk62_vv2000 : fin_Rk62
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "fin_vv2000_sidemount";
		};
		//class LinkedItemsAcc
		//{
		//	slot = "PointerSlot";
		//	item = "acc_pointer_IR";
		//};
	};
};
