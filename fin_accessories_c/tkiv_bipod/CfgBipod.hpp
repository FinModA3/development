	class fin_TKiv2000_Bipod: ItemCore
	{
		scope = 2;
		AuthNameMacro(fin_TKiv2000_Bipod)
		model = "FinMod\addons\fin_tkiv2000\tkiv2000Bipod.p3d";
		picture = "FinMod\addons\fin_tkiv2000\data\ui\tkiv2000_bipod_ca.paa";
		
		class ItemInfo: InventoryUnderItem_Base_F
        {
            deployedPivot = "bipod"; // what point should be used to be on surface while unfolded
			hasBipod = true; // bipod obviously has a bipod
			mass = 10; // what is the mass of the object
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",db-3, 1, 20}; /// what sound should be played during unfolding
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",db-3, 1, 20}; /// what sound should be played during folding			
        };
		
		inertia = 0.2; // how much does the bipod add to inertia of the weapon
	};