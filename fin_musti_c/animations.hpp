class CfgMovesBasic {
	class DefaultDie;
	class ManActions {Fin_musti_anim = "Fin_musti_anim";};
};

class CfgMovesMaleSdr: CfgMovesBasic 
{
	class States 
	{
		class Crew;
		class KIA_TB_RBS70: DefaultDie
		{
			actions="DeadActions";
			file="FinMod\addons\fin_RBS70\Anim\KIA_TB_RBS70.rtm";
			speed=1;
			looped="false";
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class Fin_musti_anim: Crew
		{
			file="FinMod\addons\fin_musti\anim\Musti_anim_v2.rtm";
			speed=0.30000001;
			equivalentTo="Fin_musti_anim";
		};
	};
};