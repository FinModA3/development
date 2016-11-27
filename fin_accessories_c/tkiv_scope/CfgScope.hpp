	class fin_TKiv2000_Scope: ItemCore
	{
		scope = 2;
		author = "Finmod team";
		model = "\FinMod\addons\fin_tkiv2000\tkiv2000Scope.p3d";
		picture = "\FinMod\addons\fin_tkiv2000\data\ui\tkiv2000_scope_ca.paa";
		displayName = "TKiv 2000 Scope";
		descriptionShort = "Scope for TKiv 2000";
		
		weaponInfoType = "RscWeaponZeroing";

		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			optics = 1;
			
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			
			mass = 10;
			
			class OpticsModes
			{
				class Scope
				{
					opticsID = 1;
					opticsDisplayName = "";
					
					useModelOptics = 1;
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_sniper_F", "\A3\Weapons_F\acc\reticle_sniper_z_F"};
					
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					
					opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.04;
					opticsZoomInit = 0.04;
					
					discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300};
					discreteDistanceInitIndex = 2;
					
					distanceZoomMin = 300;
					distanceZoomMax = 2300;
					discretefov[] = {0.04, 0.01};
					discreteInitIndex = 0;
					
					memoryPointCamera = "opticView";
					
					visionMode[] = {"Normal"};
				};
				
				class Iron : Scope
				{
					opticsID = 2;
					opticsDisplayName = "";
					
					useModelOptics = 0;
					
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					
					discretefov[] = {};
					
					memoryPointCamera = "eye";
					
					visionMode[] = {};
				};
			};
		};
		
		inertia = 0.1;
	};