class CfgVehicles 
{
	class NATO_Box_Base;
	class RK_Ammo_box: NATO_Box_Base 
	{
		scope = 2;
		vehicleClass = "Ammo";
		AuthNameMacro(RK_Ammo_box)
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems
		{
			class _xx_fin_30Rnd_rk_mag
			{
				name = "fin_30Rnd_rk_mag";
				count = 100; //Item Count Here
			};
		};
	};
	class RK_Weap_box: NATO_Box_Base 
	{
		scope = 2;
		vehicleClass = "Ammo";
		AuthNameMacro(RK_Weap_box)
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems
		{
			class _xx_fin_rk95
			{
				name = "fin_rk95";
				count = 20; //Item Count Here
			};
			class _xx_fin_Rk62
			{
				name = "fin_Rk62";
				count = 20; //Item Count Here
			};
		};
	};
};