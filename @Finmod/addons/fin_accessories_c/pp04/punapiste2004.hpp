class fin_pp04: ItemCore
	{
		scope = 2;
        AuthNameMacro(fin_pp2004)
		picture = "\FinMod\addons\fin_accessories\fin_pp04\data\AimPointCS_ui_ca.paa";
		model = "\FinMod\addons\fin_accessories\fin_pp04\AimPointCS.p3d";
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
					memoryPointCamera = "opticView";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 150;
					distanceZoomMax = 150;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
				/*class aimcqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
				*/
			};
		};
                inertia = 0.1;
	};
	
	/*class fin_pp04: fin_pp04
	{
		scope = 2;
        AuthNameMacro(fin_pp2004)
		picture = "\FinMod\addons\fin_accessories\fin_pp04\data\AimPointCS_ui_ca.paa";
		model = "\FinMod\addons\fin_accessories\fin_pp04\AimPointCS.p3d";
		weaponInfoType = "RscWeaponZeroing";
	};
	*/