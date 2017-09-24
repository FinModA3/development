class fin_ta11_3d : ItemCore
{
	AuthNameMacro(fin_ta11_3d)
	scope = 2;
	picture = "\finmod\addons\fin_accessories\fin_ta11\data\ui\ta11_ca.paa";
	model = "finmod\addons\fin_accessories\fin_ta11\fin_ta11.p3d";
	weaponInfoType = "RscWeaponZeroing";
	class ItemInfo : InventoryOpticsItem_Base_F
	{
		mass = 8;
		opticType = 1;
		optics = 1;
		modelOptics = "\A3\Weapons_F\empty";
		class OpticsModes
		{
			class Scope
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = { "OpticsCHAbera5","OpticsBlur5" };
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				memoryPointCamera = "opticView";
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
			class Cqb
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = { "" };
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 200;
				distanceZoomMax = 200;
			};
		};
	};
	inertia = 0.1;
};

class fin_ta11_2d : fin_ta11_3d
{
	AuthNameMacro(fin_ta11_2d)
	class ItemInfo : ItemInfo
	{
		modelOptics = "finmod\addons\fin_accessories\fin_ta11\fin_ta11_2d_optic.p3d";
		class OpticsModes
		{
			class Scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = { "OpticsCHAbera5","OpticsBlur5" };
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				memoryPointCamera = "opticView";
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
			class Cqb
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = { "" };
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 200;
				distanceZoomMax = 200;
			};
		};
	};
};