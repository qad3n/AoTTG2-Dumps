using Il2CppDummyDll;

namespace Weather;

[Token(Token = "0x2000037")]
public enum WeatherAction
{
	[Token(Token = "0x400010A")]
	BeginSchedule,
	[Token(Token = "0x400010B")]
	EndSchedule,
	[Token(Token = "0x400010C")]
	RepeatNext,
	[Token(Token = "0x400010D")]
	BeginRepeat,
	[Token(Token = "0x400010E")]
	EndRepeat,
	[Token(Token = "0x400010F")]
	SetDefaultAll,
	[Token(Token = "0x4000110")]
	SetDefault,
	[Token(Token = "0x4000111")]
	SetValue,
	[Token(Token = "0x4000112")]
	SetTargetDefaultAll,
	[Token(Token = "0x4000113")]
	SetTargetDefault,
	[Token(Token = "0x4000114")]
	SetTargetValue,
	[Token(Token = "0x4000115")]
	SetTargetTimeAll,
	[Token(Token = "0x4000116")]
	SetTargetTime,
	[Token(Token = "0x4000117")]
	Wait,
	[Token(Token = "0x4000118")]
	Goto,
	[Token(Token = "0x4000119")]
	Label,
	[Token(Token = "0x400011A")]
	Return,
	[Token(Token = "0x400011B")]
	LoadSkybox
}
