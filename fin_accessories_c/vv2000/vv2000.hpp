class fin_vv2000_sidemount : ItemCore
	{
		AuthNameMacro(fin_vv2000_sidemount)
		scope = 2;
		model = "\FinMod\addons\fin_accessories\fin_vv2000\vv2000_sidemount.p3d";
		picture = "\FinMod\addons\fin_accessories\fin_vv2000\data\ui\vv2000_gear_ca.paa";

		class ItemInfo : InventoryOpticsItem_Base_F
		{
			opticType = 0;
			mass = 4;
			RMBhint = "vv2000";
			optics = 1;
			modelOptics = "\FinMod\addons\fin_accessories\fin_vv2000\vv2000_scope.p3d";

			class OpticsModes
			{
				class NVS
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
					opticsZoomMin = 0.75;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticView";
					visionMode[] = { "NVG" };
					ACE_NightVision_grain = 0.75;	// GEN 3, korjaa ACE yhteensopivuus, t‰‰ ei toiminu
					ACE_NightVision_blur = 0.055;
					ACE_NightVision_radBlur = 0.001;
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};