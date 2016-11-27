// bolt action rifle cycling animation
class DefaultDie;

class ManActions
{
	GestureFireLRR = "GestureFireLRR";
};

class Actions
{
	class NoActions: ManActions
	{
		GestureFireLRR[] = {"GestureFireLRR","Gesture"};
	};
	
	class RifleBaseStandActions;
	
	class RifleProneActions: RifleBaseStandActions
	{
		GestureFireLRR[] = {"GestureFireLRR_prone","Gesture"};
	};
	
	class RifleAdjustProneBaseActions;
	
	class RifleAdjustRProneActions: RifleAdjustProneBaseActions
	{
		GestureFireLRR[] = {"GestureFireLRR","Gesture"};
	};
	
	class RifleAdjustLProneActions: RifleAdjustProneBaseActions
	{
		GestureFireLRR[] = {"GestureFireLRR","Gesture"};

	};
	
	class RifleAdjustFProneActions: RifleAdjustProneBaseActions
	{
		GestureFireLRR[] = {"GestureFireLRR","Gesture"};
	};
};

class CfgGestutesMale
{
	class Default;
	skeletonName = "OFP2_ManSkeleton";
	class States
	{

		class GestureFireLRR : Default
		{
			file = "\FinMod\addons\fin_tkiv2000\anim\TRG_bolting_v1.rtm";
			speed = 0.23;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {};
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = false;
			canPullTrigger = 0;
		};
		class GestureFireLRR_prone : Default
		{
			file = "\FinMod\addons\fin_tkiv2000\anim\TRG_bolting_v2_prone.rtm";
			speed = 0.23;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {};
			leftHandIKBeg = false;
			leftHandIKCurve[] = {};
			leftHandIKEnd = false;
			canPullTrigger = 0;
		};
		class GestureFireLRR_Context : Default
		{
			mask = "handsWeapon_context";
		};
	};	
};