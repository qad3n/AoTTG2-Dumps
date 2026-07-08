using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000084")]
[Flags]
public enum UriComponents
{
	[Token(Token = "0x40001E0")]
	Scheme = 1,
	[Token(Token = "0x40001E1")]
	UserInfo = 2,
	[Token(Token = "0x40001E2")]
	Host = 4,
	[Token(Token = "0x40001E3")]
	Port = 8,
	[Token(Token = "0x40001E4")]
	Path = 0x10,
	[Token(Token = "0x40001E5")]
	Query = 0x20,
	[Token(Token = "0x40001E6")]
	Fragment = 0x40,
	[Token(Token = "0x40001E7")]
	StrongPort = 0x80,
	[Token(Token = "0x40001E8")]
	NormalizedHost = 0x100,
	[Token(Token = "0x40001E9")]
	KeepDelimiter = 0x40000000,
	[Token(Token = "0x40001EA")]
	SerializationInfoString = int.MinValue,
	[Token(Token = "0x40001EB")]
	AbsoluteUri = 0x7F,
	[Token(Token = "0x40001EC")]
	HostAndPort = 0x84,
	[Token(Token = "0x40001ED")]
	StrongAuthority = 0x86,
	[Token(Token = "0x40001EE")]
	SchemeAndServer = 0xD,
	[Token(Token = "0x40001EF")]
	HttpRequestUrl = 0x3D,
	[Token(Token = "0x40001F0")]
	PathAndQuery = 0x30
}
