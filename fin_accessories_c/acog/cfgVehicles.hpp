class fin_ta11_3d : Item_Base_F
{
	scope = 2;
	scopeCurator = 2;
	AuthNameMacro(fin_ta11_3d)
	vehicleClass = "WeaponAccessories";
	class TransportItems
	{
		class fin_ta11_3d
		{
			name = "fin_ta11_3d";
			count = 1;
		};
	};
};
class fin_ta11_2d : fin_ta11_3d
{
	class TransportItems
	{
		class fin_ta11_2d
		{
			name = "fin_ta11_2d";
			count = 1;
		};
	};
};