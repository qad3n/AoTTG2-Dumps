using Il2CppDummyDll;

namespace POpusCodec.Enums;

[Token(Token = "0x200000F")]
public enum OpusApplicationType
{
	[Token(Token = "0x4000047")]
	Voip = 2048,
	[Token(Token = "0x4000048")]
	Audio = 2049,
	[Token(Token = "0x4000049")]
	RestrictedLowDelay = 2051
}
