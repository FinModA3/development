
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
 			file = "FinMod\addons\fin_rk_rifles\anim\reload\ReloadAnim_rk.rtm";
			speed = 0.22;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[] = {1};
			leftHandIKBeg = false;
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
			leftHandIKEnd = true;
			canPullTrigger = 0;
 		};
		class GestureReloadRK_prone: Default
		{
			file = "FinMod\addons\fin_rk_rifles\anim\reload\ReloadAnim_rk_prone.rtm";
            speed=0.22;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.02;
            headBobMode=2;
			rightHandIKCurve[] = {1};
			leftHandIKBeg = false;
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
			leftHandIKEnd = true;
			canPullTrigger = 0;
		};
		class GestureReloadRK_Context: Default
		{
			mask = "handsWeapon_context";
		};
	};
};