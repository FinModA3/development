

class CfgMovesBasic // This defines the animation names so they may be retrieved by scripts.
{
	class Default;
	class DefaultDie;
	class ManActions
 	{
 		GestureReloadPKM = "GestureReloadPKM";
 	};
	
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadPKM[] = {"GestureReloadPKM", "Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadPKM[] = {"GestureReloadPKM_Prone", "Gesture"};

		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadPKM[] = {"GestureReloadPKM_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadPKM[] = {"GestureReloadPKM_Context","Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadPKM[] = {"GestureReloadPKM_Context","Gesture"};
		};
	};
 };

 
  class CfgGesturesMale // This defines what file the animation is and the specifics
{
	class Default;
	skeletonName = "OFP2_ManSkeleton";
 	class States
 	{
 		class GestureReloadPKM : Default
 		{
 			file = "FinMod\addons\fin_mgs\PKM\anim\reload\PKM_reload_valmis_v7.rtm";
			speed = 0.2;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger = 0;
			rightHandIKBeg = true;
			rightHandIKCurve[] =
			{
				// time, phase
				0  , 1,
				0.5525291828793774 , 1,
				0.56 , 0,
				1  , 0
			};
			rightHandIKEnd = false;
			
			leftHandIKBeg = false;
			leftHandIKCurve[] =
			{
				// time, phase
				0  , 0,
				0.5525291828793774 , 0,
				0.56 , 1,
				1   , 1
			};
			leftHandIKEnd = true;

 		};
		class GestureReloadPKM_prone : Default
 		{
 			file = "FinMod\addons\fin_mgs\PKM\anim\reload\PKM_reload_prone_valmis_v4.rtm";
			speed = 0.2;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger = 0;
			rightHandIKBeg = true;
			rightHandIKCurve[] =
			{
				// time, phase
				0  , 1,
				0.5525291828793774 , 1,
				0.56 , 0,
				1  , 0
			};
			rightHandIKEnd = false;
			
			leftHandIKBeg = false;
			leftHandIKCurve[] =
			{
				// time, phase
				0  , 0,
				0.5525291828793774 , 0,
				0.56 , 1,
				1   , 1
			};
			leftHandIKEnd = true;
			
 		};
	};
};


