class TKiv2000_Ammo_box: NATO_Box_Base 
{
	scope = 2;
	
	vehicleClass = "Ammo";
	displayName = "TKiv 2000 Ammo box";
	
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	icon = "iconCrateWpns";
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems
	{
		class _xx_fin_5Rnd_TKiv2000_mag
		{
			name = "fin_5Rnd_TKiv2000_mag";
			count = 100; //Item Count Here
		};
	};
};

class TKiv2000_Weap_box: NATO_Box_Base 
{
	scope = 2;
	
	vehicleClass = "Ammo";
	displayName = "TKiv 2000 Weapon box";
	
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	icon = "iconCrateWpns";
	
	class TransportWeapons {};
	
	class TransportMagazines {};
	
	class TransportItems
	{
		class _xx_fin_tkiv2000
		{
			name = "fin_TKiv2000";
			count = 20; //Item Count Here
		};
	};
};