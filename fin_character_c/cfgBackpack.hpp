class fin_m05_backpack_small: B_FieldPack_oli
{
	scope = 2;
	model = "FinMod\addons\fin_character\fin_m05_backpack_small.p3d";
	AuthNameMacro(fin_m05_backpack_small)
    picture = "FinMod\addons\fin_character\data\UI\ui_m05_backpack_small.paa";
	hiddenSelections[] = {};	/// no changeable selections by default

};
class fin_MG_backpack: fin_m05_backpack_small
{
	scope = 1;
	class TransportMagazines
		{
			class _xx_fin_100Rnd_pkm_mag
			{
				magazine="fin_100Rnd_pkm_mag";
				count=2;
			};
		};
};
class fin_MGa_backpack: fin_m05_backpack_small
{
	scope = 1;
	class TransportMagazines
		{
			class _xx_fin_100Rnd_pkm_mag
			{
				magazine="fin_100Rnd_pkm_mag";
				count=3;
			};
		};
};



