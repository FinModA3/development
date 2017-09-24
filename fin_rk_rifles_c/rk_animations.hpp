
class CfgMovesBasic // This defines the animation names so they may be retrieved by scripts.
{
	class Default;
	class DefaultDie;
	class ManActions
 	{
 		GestureReloadRK = "GestureReloadRK";
 	};
	
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadRK[] = {"GestureReloadRK", "Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadRK[] = {"GestureReloadRK_Prone", "Gesture"};

		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadRK[] = {"GestureReloadRK_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadRK[] = {"GestureReloadRK_Context","Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadRK[] = {"GestureReloadRK_Context","Gesture"};
		};
	};
 };
//class CfgGesturesMale
//{
//	class States
//	{
//		class RHS_GestureReloadAK;
//		class RHS_GestureReloadAK_Prone;
//		class RHS_GestureReloadAK_Context;
//		class GestureReloadRK : RHS_GestureReloadAK{};				// Otetaan väliaikaisesti RHS
//		class GestureReloadRK_prone : RHS_GestureReloadAK_Prone{};
//		class GestureReloadRK_Context : RHS_GestureReloadAK_Context{};
//	};
//};

  class CfgGesturesMale // This defines what file the animation is and the specifics
{
	class Default;
	skeletonName = "OFP2_ManSkeleton";
 	class States
 	{
 		class GestureReloadRK : Default
 		{
 			file = "FinMod\addons\fin_rk_rifles\anim\reload\RK_Reload_v4.rtm";
			speed = 0.34;
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
				1  , 1
			};
			rightHandIKEnd = true;
			
			leftHandIKBeg = false;
			leftHandIKCurve[] =
			{
				// time, phase
				0  , 0,
				1   , 0
			};
			leftHandIKEnd = false;
			
 		};
 	
		class GestureReloadRK_prone: Default
		{
			file = "FinMod\addons\fin_rk_rifles\anim\reload\RK_Reload_prone_v1.rtm";
			speed = 0.34;
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
				1  , 1
			};
			rightHandIKEnd = true;
			
			leftHandIKBeg = false;
			leftHandIKCurve[] =
			{
				// time, phase
				0  , 0,
				1   , 0
			};
			leftHandIKEnd = false;
			
 		};
		class GestureReloadRK_Context: GestureReloadRK
		{
			mask = "handsWeapon_context";
		};
	};
};