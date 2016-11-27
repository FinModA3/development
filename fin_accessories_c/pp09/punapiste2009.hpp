class fin_pp09 : ItemCore
{
		scope = 2;
		AuthNameMacro(fin_pp2009)
		picture = "\FinMod\addons\fin_accessories\fin_pp09\data\UI\punapiste2009_ca.paa";
		model = "\FinMod\addons\fin_accessories\fin_pp09\pp09.p3d";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class aim
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
		};
	inertia = 0.1;
};