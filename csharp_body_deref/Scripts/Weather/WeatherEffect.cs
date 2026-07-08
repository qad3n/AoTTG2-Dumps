using Il2CppDummyDll;

namespace Weather;

[Token(Token = "0x2000038")]
public enum WeatherEffect
{
	[Token(Token = "0x400011D")]
	None,
	[Token(Token = "0x400011E")]
	Daylight,
	[Token(Token = "0x400011F")]
	DaylightIntensity,
	[Token(Token = "0x4000120")]
	DaylightDirection,
	[Token(Token = "0x4000121")]
	AmbientLight,
	[Token(Token = "0x4000122")]
	Skybox,
	[Token(Token = "0x4000123")]
	SkyboxColor,
	[Token(Token = "0x4000124")]
	Flashlight,
	[Token(Token = "0x4000125")]
	FogDensity,
	[Token(Token = "0x4000126")]
	FogColor,
	[Token(Token = "0x4000127")]
	Rain,
	[Token(Token = "0x4000128")]
	Thunder,
	[Token(Token = "0x4000129")]
	Snow,
	[Token(Token = "0x400012A")]
	Wind,
	[Token(Token = "0x400012B")]
	WindDirection,
	[Token(Token = "0x400012C")]
	RainForce,
	[Token(Token = "0x400012D")]
	SnowForce,
	[Token(Token = "0x400012E")]
	WindForce
}
