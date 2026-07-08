using Il2CppDummyDll;

namespace System.Security.Authentication;

[Token(Token = "0x20000DF")]
[Flags]
public enum SslProtocols
{
	[Token(Token = "0x4000413")]
	None = 0,
	[Token(Token = "0x4000414")]
	Ssl2 = 0xC,
	[Token(Token = "0x4000415")]
	Ssl3 = 0x30,
	[Token(Token = "0x4000416")]
	Tls = 0xC0,
	[Token(Token = "0x4000417")]
	[System.MonoTODO("unsupported")]
	Tls11 = 0x300,
	[Token(Token = "0x4000418")]
	[System.MonoTODO("unsupported")]
	Tls12 = 0xC00,
	[Token(Token = "0x4000419")]
	Tls13 = 0x3000,
	[Token(Token = "0x400041A")]
	Default = 0xF0
}
