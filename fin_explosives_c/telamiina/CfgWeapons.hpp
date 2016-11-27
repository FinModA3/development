class CfgWeapons
{
	class Default;
	class Put: Default
	{
		muzzles[]=
		{
			"MineMuzzle"
		};
		displayName="$STR_A3_CfgWeapons_Put0";
		class PutMuzzle;
		class MineMuzzle: PutMuzzle
		{
			autoreload=0;
			enableAttack=1;
			magazines[]=
			{
				"telamiina_mag"
			};
			displayName="$STR_A3_cfgMagazines_Mine0";
			picture="\A3\Weapons_F\Data\clear_empty.paa";
			showToPlayer=0;
		};
	};
};