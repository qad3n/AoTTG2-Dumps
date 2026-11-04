// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherAction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherEvent.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Weather;

[Token(Token = "0x2000037")]
public enum WeatherAction
{
	[Token(Token = "0x4000115")]
	BeginSchedule,
	[Token(Token = "0x4000116")]
	EndSchedule,
	[Token(Token = "0x4000117")]
	RepeatNext,
	[Token(Token = "0x4000118")]
	BeginRepeat,
	[Token(Token = "0x4000119")]
	EndRepeat,
	[Token(Token = "0x400011A")]
	SetDefaultAll,
	[Token(Token = "0x400011B")]
	SetDefault,
	[Token(Token = "0x400011C")]
	SetValue,
	[Token(Token = "0x400011D")]
	SetTargetDefaultAll,
	[Token(Token = "0x400011E")]
	SetTargetDefault,
	[Token(Token = "0x400011F")]
	SetTargetValue,
	[Token(Token = "0x4000120")]
	SetTargetTimeAll,
	[Token(Token = "0x4000121")]
	SetTargetTime,
	[Token(Token = "0x4000122")]
	Wait,
	[Token(Token = "0x4000123")]
	Goto,
	[Token(Token = "0x4000124")]
	Label,
	[Token(Token = "0x4000125")]
	Return,
	[Token(Token = "0x4000126")]
	LoadSkybox
}
