class Sounds : Sounds
{
	class RainExt
	{
		sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.7782794,1.0,100};
		frequency = 1;
		volume = "camPos * rain * (speed factor[50, 0])";
	};
	class RainInt
	{
		sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
		frequency = 1;
		volume = "(1-camPos) * rain * (speed factor[50, 0])";
	};
};