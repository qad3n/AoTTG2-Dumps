using Il2CppDummyDll;

namespace POpusCodec.Enums;

[Token(Token = "0x200000D")]
public enum Delay
{
	[Token(Token = "0x400003C")]
	Delay2dot5ms = 5,
	[Token(Token = "0x400003D")]
	Delay5ms = 10,
	[Token(Token = "0x400003E")]
	Delay10ms = 20,
	[Token(Token = "0x400003F")]
	Delay20ms = 40,
	[Token(Token = "0x4000040")]
	Delay40ms = 80,
	[Token(Token = "0x4000041")]
	Delay60ms = 120
}
