
class CfgSoundShaders
{
	class fin_PKM_Closure_SoundShader
	{
		samples[]=
		{
			
			{ 
				"FinMod\addons\fin_mgs\PKM\sounds\pkm_closure.wav", 
				1 
			}
		
			
		};
		volume = 0;
		range = 5;
	};	


	// Standart shot ---------------------------------------------------------------------------------------------------------------------------

	class fin_PKM_closeShot_SoundShader
	{
		samples[] = // array of actual samples with probability weight, engine will randomly select one sample with no immediate repeat within SoundShader
		{
			{ "FinMod\addons\fin_mgs\PKM\sounds\close\pkm_shot_rev3_1.wav", 1 },
			{ "FinMod\addons\fin_mgs\PKM\sounds\close\pkm_shot_rev3_2.wav", 1 },
			{ "FinMod\addons\fin_mgs\PKM\sounds\close\pkm_shot_rev3_3.wav", 1 }
		};
		volume = 1.5; // basic sound level value in dBFS (or actual sound level value) db6~2, db-6~0.5, simple expressions with sound controllers can be used
		range = 175; // maximum range in meters where sound is played
		rangeCurve = closeShotCurve;
		
			
							// curve class name (CfgSoundCurves) or specific curve definition (array of points)
							// note that curve is stretched to region <0;range>
	};

	class fin_PKM_midShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_mgs\PKM\sounds\mid\pkm_rev2_mid1.wav", 1 },
			{ "FinMod\addons\fin_mgs\PKM\sounds\mid\pkm_rev2_mid2.wav", 1 }
		
		
		};
		volume = 3;
		range = 3000;
		rangeCurve[]=
		{
			{0, 0},
			{150, 1},
			{350, 0.5},
			{500, 0.25},
			{3000, 0}
		};
	};
	class fin_PKM_distShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_mgs\PKM\sounds\dist\pkm_dist1.wav", 1 },
			{ "FinMod\addons\fin_mgs\PKM\sounds\dist\pkm_dist2.wav", 1 },
			{ "FinMod\addons\fin_mgs\PKM\sounds\dist\pkm_dist3.wav", 1 },
			{ "FinMod\addons\fin_mgs\PKM\sounds\dist\pkm_dist6.wav", 1 }
			
		};
		volume = 6;
		range = 3000;
		rangeCurve[] =
		{
			{0, 0},
			{200, 0},
			{350, 0.2},
			{500, 0.4},
			{750, 0.8} 
			{1500, 1}
		};
	};
	class fin_PKM_farShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_mgs\PKM\sounds\far\pkm_far4.wav", 1 },
			{ "FinMod\addons\fin_mgs\PKM\sounds\far\pkm_far5.wav", 1 }
			
		};
		volume = 6;
		range = 3000;
		rangeCurve[] =
		{
			{0, 0},
			{200, 0},
			{350, 0},
			{750, 0.25},
			{1500, 0.75},
			{3000, 1}
			};
	};

	

	// Reflection Tails ---------------------------------------------------------------------------------------------------------------------------
	// Näitä ei taida olla erikseen tehty, siis: etsitään kiva vanilla pyssy joka about yhtä voimakas ja käyttetään sen ääniä
	// Katso sounds_f config.cpp, siellä esim. autocannon 30mm yms. muuta geneeristä myös
	// Limitation: säästetään prosessointitehoa, kun vain voimakkaimmat äänet soitetaan. Jos limitation = true (1), niin mukana tässä vertailussa (SoundShadersLimit = max soitettavat äänet). Esim. tässä sisätilojen kaiku soi aina vaikkei olisi äänekkäin, muut kaiut mukana vertailussa
	class fin_PKM_tailInterior_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailInterior.wss", 1 } };
		volume = interior;
		range = 75;
		limitation = 0; // this SoundShader will always be played if interior>0
	};

	class fin_PKM_tailTrees_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailTrees.wss", 1 } };
		volume = (1 - interior / 1.4)*trees / 3;
		range = 300;
		limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};

	class fin_PKM_tailForest_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailForest.wss", 1 } };
		volume = (1 - interior / 1.4)*forest / 3;
		range = 300;
		limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};

	class fin_PKM_tailMeadows_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailMeadows.wss", 1 } };
		volume = (1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3;
		range = 1000;
		limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};

	class fin_PKM_tailHouses_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Machineguns\Zafir\Zafir_tailHouses.wss", 1 } };
		volume = (1 - interior / 1.4)*houses / 3;
		range = 300;
		limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};

};

class CfgSoundSets
{
	class fin_PKM_Shot_SoundSet
	{
		// Ampuessa pelaajille soi näitten ääni shaderien yhteiskikkare, 
		// array of SoundShaders to be played together with 100% synchronization
		// note that not all SoundShaders will necessarily play, it depends on their specific configuration and also on soundShadersLimit parameter
		soundShaders[] =
		{
			"fin_PKM_Closure_SoundShader",
			"fin_PKM_closeShot_SoundShader",
			"fin_PKM_midShot_SoundShader",
			"fin_PKM_distShot_SoundShader",
			"fin_PKM_farShot_SoundShader"
		};

		volumeFactor = 1.35;
		volumeCurve = "inverseSquare3Curve";	// volume multiplicator factor
		sound3DProcessingType = "fin_PKM_Shot3DProcessingType"; // sound processing type class name (CfgSound3DProcessors)
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter"; // class name of custom distance frequency attenuation filter (CfgDistanceFilters)
																   // spatial aina (ACEn sydämentykytys -> false, me ei tehdä varmaan yhtään ei spatial ääntä) edit: paitsi ehkä ajoneuvon sisällä äänet
		spatial = 1; // is sound considered as positional
						// nopeasti liikkuville asioille doppler = true, paitsi jos ääni liian nopea (luoti, itse *viuuh* äänessä on doppler mukana)
		doppler = 0; // doppler effect simulation
						 // loop = false: "This is WIP, not sure how it works, will add information as soon as the feature becomes more prevalent." -Wiki
		loop = 0;
		speedOfSound = 1;
	};
	class fin_PKM_Tail_SoundSet
	{
		soundShaders[] =
		{
			"fin_PKM_tailInterior_SoundShader",
			"fin_PKM_tailTrees_SoundShader",
			"fin_PKM_tailForest_SoundShader",
			"fin_PKM_tailMeadows_SoundShader",
			"fin_PKM_tailHouses_SoundShader"
		};

		soundShadersLimit = 6;		// Kuinka monta ääntä tarvitaan maksimissa kuulumaan? (sisätila-, metsä-, yms. kaiut samaan aikaan)
									// engine will play only soundShadersLimit number of SoundShaders with highest volume value (including calculation of rangeCurve) from the group of SoundShaders which has limitation parameter set to true plus all the others

		volumeFactor = 1.05;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizerMin = 0.01; // parameters for randomization of frequency to avoid flanging effect when the same sounds are playing in high rate
									   // Ylempi varmistaa, että kaksi samaa ääntä (2 laukausta) erotettavissa (eri taajuus == eri ääni)
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "fin_PKM_ShotTail3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		speedOfSound = 1;
	};
};

// https://community.bistudio.com/wiki/Arma_3_Sound:_cfgSound3DProcessors
class cfgSound3DProcessors
{
	class fin_PKM_Shot3DProcessingType
	{
		type = "panner"; // type od sound processor
		innerRange = 0; // below this range provessor is 100% applied
		range = 5; // above this range, sound behaves ase usual 3D sound - mono, 100% positional
		rangeCurve = LinearCurve; // transition curve used for interpolation between innerRange and range
	};
	class fin_PKM_ShotTail3DProcessingType
	{
		type = "panner";
		innerRange = 5;
		range = 160;
		rangeCurve = InverseSquare1Curve;
	};
};

class cfgDistanceFilters
{
	// Pitkällä matkalla äänestä katoaa korkeita taajuuksia, tämä hoitaa tuon tempun
	class fin_PKM_ShotDistanceFreqAttenuationFilter
	{
		// Alipäästösuodatin leikkaa korkeita taajuuksia (alipäästö->alhaiset pääsee, lue Wikipedia t. sähköinsinööri). Etäisyyksillä ei tarvinne muita. Jos äänet suunniteltu ottamaan taajuudet huomioon, käytä distanceFilter = "none"; soundSetissä
		type = "lowPassFilter"; // type of filter
		minCutoffFrequency = 300; // cutoff frequency is constantly falling with the distance to minCutoffFrequency value
		qFactor = 1.5; // https://en.wikipedia.org/wiki/Q_factor
		innerRange = 10; // below this range no filter is applied
		range = 2000; // above this range filter is static at minCutoffFrequency frequency
		powerFactor = 32; // parameter of function which describes relationship between distance and cutoff frequency, higher value means sooner attenuation of higher frequencies
	};

	class fin_PKM_ShotTailDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 500;
		qFactor = 1.5;
		innerRange = 10;
		range = 1400;
		powerFactor = 32;
	};
};