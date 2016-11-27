 class CfgGesturesMale // This defines what file the animation is and the specifics
{
	class Default;
	skeletonName = "OFP2_ManSkeleton";
 	class States
 	{
 		class GestureReloadApilas : Default
 		{
 			file = "\FinMod\addons\fin_launchers\Apilas\anim\rkses112_apilas_reload_mk3_v1.rtm";
			speed = 0.22;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[] = {1};
			leftHandIKBeg = false;
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
			leftHandIKEnd = false;
			canPullTrigger = 0;
 		};
		class GestureReloadApilas_prone: Default
		{
			file = "\FinMod\addons\fin_launchers\Apilas\anim\rkses112_apilas_reload_mk3_v1.rtm";
            speed=0.23;
			looped = false;
			mask = "handsWeapon";
			headBobStrength=0.02;
            headBobMode=2;
			rightHandIKCurve[] = {1};
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = false;
			canPullTrigger = 0;
		};
		class GestureReloadRK_Context: Default
		{
			mask = "handsWeapon_context";
		};
	};
};