using Il2CppDummyDll;

namespace Unity.Profiling;

[Token(Token = "0x200001E")]
public enum ProfilerMarkerDataUnit : byte
{
	[Token(Token = "0x4000033")]
	Undefined,
	[Token(Token = "0x4000034")]
	TimeNanoseconds,
	[Token(Token = "0x4000035")]
	Bytes,
	[Token(Token = "0x4000036")]
	Count,
	[Token(Token = "0x4000037")]
	Percent,
	[Token(Token = "0x4000038")]
	FrequencyHz
}
