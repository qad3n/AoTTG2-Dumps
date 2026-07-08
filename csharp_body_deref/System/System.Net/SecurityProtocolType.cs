using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000136")]
[Flags]
public enum SecurityProtocolType
{
	[Token(Token = "0x400062D")]
	SystemDefault = 0,
	[Token(Token = "0x400062E")]
	Ssl3 = 0x30,
	[Token(Token = "0x400062F")]
	Tls = 0xC0,
	[Token(Token = "0x4000630")]
	Tls11 = 0x300,
	[Token(Token = "0x4000631")]
	Tls12 = 0xC00,
	[Token(Token = "0x4000632")]
	Tls13 = 0x3000
}
