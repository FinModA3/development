
class CfgSoundShaders
{
	class fin_RK_Closure_SoundShader
	{
		samples[]=
		{
			
			{ 
				"FinMod\addons\fin_rk_rifles\sounds\rk_slide.wav", 
				1 
			}
		
			
		};
		volume = 0.5;
		range = 5;
	};	


	// Standart shot ---------------------------------------------------------------------------------------------------------------------------

	class fin_RK62_closeShot_SoundShader
	{
		samples[] = // array of actual samples with probability weight, engine will randomly select one sample with no immediate repeat within SoundShader
		{
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_close\rk62_1.wav",1 },
			
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_close\rk62_2.wav",1 },

			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_close\rk62_3.wav",1 }
			
		};	
		
		volume = 2; // basic sound level value in dBFS (or actual sound level value) db6~2, db-6~0.5, simple expressions with sound controllers can be used
		range = 175; // maximum range in meters where sound is played
		rangeCurve = closeShotCurve;
		
		 	
	};

	class fin_RK62_midShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_1.wav", 1 },
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_2.wav", 1 },
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_3.wav", 1 }
		};
		volume = 3;
		range = 3000;
		rangeCurve[]=
		{
			{0, 0},
			{300, 1},
			{500, 0.75},
			{1500, 0.25},
			{3000, 0}
		};
	};
	class fin_RK62_distShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_1.wav", 1 },
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_2.wav", 1 },
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_3.wav", 1 }
		};
		volume = 6;
		range = 3000;
		rangeCurve[] =
		{
			{0, 0},
			{300, 0},
			{500, 0.25},
			{1500, 1},
			{3000, 1}
		
		};
	};
	class fin_RK95_closeShot_SoundShader
	{
		samples[] = // array of actual samples with probability weight, engine will randomly select one sample with no immediate repeat within SoundShader
		{
			{ 
				"FinMod\addons\fin_rk_rifles\sounds\RK95\shots_close\rk95_1.wav", 
				1 
			},
			
			{ 
				"FinMod\addons\fin_rk_rifles\sounds\RK95\shots_close\rk95_2.wav", 
				1 
			}

			
		};
		volume = 2; // basic sound level value in dBFS (or actual sound level value) db6~2, db-6~0.5, simple expressions with sound controllers can be used
		range = 175; // maximum range in meters where sound is played
		rangeCurve = closeShotCurve;
		
			
							// curve class name (CfgSoundCurves) or specific curve definition (array of points)
							// note that curve is stretched to region <0;range>
	};

	class fin_RK95_midShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_1.wav", 1 },
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_2.wav", 1 },
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_mid\rk_mid_3.wav", 1 }
		};
		volume = 4;
		range = 3000;
		rangeCurve[]=
		{
			{0, 0},
			{300, 1},
			{500, 0.75},
			{1500, 0.25},
			{3000, 0}
		};
	};
	class fin_RK95_distShot_SoundShader
	{
		samples[] =
		{
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_1.wav", 1 },
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_2.wav", 1 },
			{ "FinMod\addons\fin_rk_rifles\sounds\RK62\shots_distant\rk_dist_3.wav", 1 }
		};
		volume = 6;
		range = 3000;
		rangeCurve[] =
		{
			{0, 0},
			{300, 0},
			{500, 0.25},
			{1500, 1},
			{3000, 1}
		};
	};

	// Reflection Tails ---------------------------------------------------------------------------------------------------------------------------
	// Näitä ei taida olla erikseen tehty, siis: etsitään kiva vanilla pyssy joka about yhtä voimakas ja käyttetään sen ääniä
	// Katso sounds_f config.cpp, siellä esim. autocannon 30mm yms. muuta geneeristä myös
	// Limitation: säästetään prosessointitehoa, kun vain voimakkaimmat äänet soitetaan. Jos limitation = true (1), niin mukana tässä vertailussa (SoundShadersLimit = max soitettavat äänet). Esim. tässä sisätilojen kaiku soi aina vaikkei olisi äänekkäin, muut kaiut mukana vertailussa
	class fin_RK_tailInterior_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailInterior.wss", 1 } };
		volume = interior;
		range = 75;
		limitation = 0; // this SoundShader will always be played if interior>0
	};

	class fin_RK_tailTrees_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailTrees.wss", 1 } };
		volume = (1 - interior / 1.4)*trees / 3;
		range = 300;
		limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};

	class fin_RK_tailForest_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailForest.wss", 1 } };
		volume = (1 - interior / 1.4)*forest / 3;
		range = 300;
		limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};

	class fin_RK_tailMeadows_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailMeadows.wss", 1 } };
		volume = (1 - interior / 1.4)*(meadows / 2 max sea / 2) / 3;
		range = 1000;
		limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};

	class fin_RK_tailHouses_SoundShader
	{
		samples[] = { { "\a3\sounds_f\arsenal\weapons\Rifles\TRG20\TRG20_tailHouses.wss", 1 } };
		volume = (1 - interior / 1.4)*houses / 3;
		range = 300;
		limitation = 1; // this SoundShader belongs to the group of limited SoundShaders
	};

};

class CfgSoundSets
{
	class fin_RK62_Shot_SoundSet
	{
		// Ampuessa pelaajille soi näitten ääni shaderien yhteiskikkare, 
		// array of SoundShaders to be played together with 100% synchronization
		// note that not all SoundShaders will necessarily play, it depends on their specific configuration and also on soundShadersLimit parameter
		soundShaders[] =
		{
			"fin_RK_Closure_SoundShader",
			"fin_RK62_closeShot_SoundShader",
			"fin_RK62_midShot_SoundShader",
			"fin_RK62_distShot_SoundShader"
		};

		volumeFactor = 1.35; // volume multiplicator factor
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType = "fin_RK_Shot3DProcessingType"; // sound processing type class name (CfgSound3DProcessors)
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter"; // class name of custom distance frequency attenuation filter (CfgDistanceFilters)
		// spatial aina (ACEn sydämentykytys -> false, me ei tehdä varmaan yhtään ei spatial ääntä) edit: paitsi ehkä ajoneuvon sisällä äänet
		spatial = 1; // is sound considered as positional
		// nopeasti liikkuville asioille doppler = true, paitsi jos ääni liian nopea (luoti, itse *viuuh* äänessä on doppler mukana)
		doppler = 0; // doppler effect simulation
		// loop = false: "This is WIP, not sure how it works, will add information as soon as the feature becomes more prevalent." -Wiki
		loop = 0;
		
	};
	class fin_RK95_Shot_SoundSet
	{
		// Ampuessa pelaajille soi näitten ääni shaderien yhteiskikkare, 
		// array of SoundShaders to be played together with 100% synchronization
		// note that not all SoundShaders will necessarily play, it depends on their specific configuration and also on soundShadersLimit parameter
		soundShaders[] =
		{
			"fin_RK_Closure_SoundShader",
			"fin_RK95_closeShot_SoundShader",
			"fin_RK95_midShot_SoundShader",
			"fin_RK95_distShot_SoundShader"
		};

		volumeFactor = 1.35; // volume multiplicator factor
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType = "fin_RK_Shot3DProcessingType"; // sound processing type class name (CfgSound3DProcessors)
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter"; // class name of custom distance frequency attenuation filter (CfgDistanceFilters)
																   // spatial aina (ACEn sydämentykytys -> false, me ei tehdä varmaan yhtään ei spatial ääntä) edit: paitsi ehkä ajoneuvon sisällä äänet
		spatial = 1; // is sound considered as positional
						// nopeasti liikkuville asioille doppler = true, paitsi jos ääni liian nopea (luoti, itse *viuuh* äänessä on doppler mukana)
		doppler = 0; // doppler effect simulation
						 // loop = false: "This is WIP, not sure how it works, will add information as soon as the feature becomes more prevalent." -Wiki
		loop = 0;
		
	};
	class fin_RK_Tail_SoundSet
	{
		soundShaders[] =
		{
			"fin_RK_tailInterior_SoundShader",
			"fin_RK_tailTrees_SoundShader",
			"fin_RK_tailForest_SoundShader",
			"fin_RK_tailMeadows_SoundShader",
			"fin_RK_tailHouses_SoundShader"
		};

		soundShadersLimit = 2;		// Kuinka monta ääntä tarvitaan maksimissa kuulumaan? (sisätila-, metsä-, yms. kaiut samaan aikaan)
									// engine will play only soundShadersLimit number of SoundShaders with highest volume value (including calculation of rangeCurve) from the group of SoundShaders which has limitation parameter set to true plus all the others

		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 1;
		sound3DProcessingType = "fin_RK_ShotTail3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		
	};
};

// https://community.bistudio.com/wiki/Arma_3_Sound:_cfgSound3DProcessors
class cfgSound3DProcessors
{
	class fin_RK_Shot3DProcessingType
	{
		type = "panner"; // type od sound processor
		innerRange = 0; // below this range provessor is 100% applied
		range = 5; // above this range, sound behaves ase usual 3D sound - mono, 100% positional
		rangeCurve = LinearCurve; // transition curve used for interpolation between innerRange and range
	};
	class fin_RK_ShotTail3DProcessingType
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
	class fin_RK_ShotDistanceFreqAttenuationFilter
	{
		// Alipäästösuodatin leikkaa korkeita taajuuksia (alipäästö->alhaiset pääsee, lue Wikipedia t. sähköinsinööri). Etäisyyksillä ei tarvinne muita. Jos äänet suunniteltu ottamaan taajuudet huomioon, käytä distanceFilter = "none"; soundSetissä
		type = "lowPassFilter"; // type of filter
		minCutoffFrequency = 300; // cutoff frequency is constantly falling with the distance to minCutoffFrequency value
		qFactor = 1.5; // https://en.wikipedia.org/wiki/Q_factor
		innerRange = 10; // below this range no filter is applied
		range = 2000; // above this range filter is static at minCutoffFrequency frequency
		powerFactor = 28; // parameter of function which describes relationship between distance and cutoff frequency, higher value means sooner attenuation of higher frequencies
	};

	class fin_RK_ShotTailDistanceFreqAttenuationFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 450;
		qFactor = 1.5;
		innerRange = 10;
		range = 1400;
		powerFactor = 28;
	};
};