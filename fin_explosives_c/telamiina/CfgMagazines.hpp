class CfgMagazines {
	class CA_Magazine;
	class telamiina_mag: CA_Magazine {
		author="Finmod";
		scope=2;
		scopeArsenal=2;
		mass=80;
		displayName="Telamiina";
		descriptionUse="Telamiina";
		picture="\FinMod\addons\fin_explosives\TM 65 77\Data\UI\telamiina_ca.paa";
		model="\FinMod\addons\fin_explosives\TM 65 77\telamiina";
		useAction=1;
		useActionTitle="$STR_ACTION_PUTBOMB";
		type="2*		256";
		allowedSlots[]={901};
		value=5;
		ammo="telamiina_ammo";
		nameSoundWeapon="mine";
		nameSound="mine";
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		descriptionShort="Telamiina";
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
	};
};