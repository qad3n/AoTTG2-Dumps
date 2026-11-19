// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherAction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherEvent.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Weather;

[Token(Token = "0x2000036")]
public enum WeatherAction
{
	[Token(Token = "0x400011C")]
	BeginSchedule,
	[Token(Token = "0x400011D")]
	EndSchedule,
	[Token(Token = "0x400011E")]
	RepeatNext,
	[Token(Token = "0x400011F")]
	BeginRepeat,
	[Token(Token = "0x4000120")]
	EndRepeat,
	[Token(Token = "0x4000121")]
	SetDefaultAll,
	[Token(Token = "0x4000122")]
	SetDefault,
	[Token(Token = "0x4000123")]
	SetValue,
	[Token(Token = "0x4000124")]
	SetTargetDefaultAll,
	[Token(Token = "0x4000125")]
	SetTargetDefault,
	[Token(Token = "0x4000126")]
	SetTargetValue,
	[Token(Token = "0x4000127")]
	SetTargetTimeAll,
	[Token(Token = "0x4000128")]
	SetTargetTime,
	[Token(Token = "0x4000129")]
	Wait,
	[Token(Token = "0x400012A")]
	Goto,
	[Token(Token = "0x400012B")]
	Label,
	[Token(Token = "0x400012C")]
	Return,
	[Token(Token = "0x400012D")]
	LoadSkybox
}
