// ==================== AoTTG2 cross-reference ====================
// Type: System.UriComponents
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000084")]
[Flags]
public enum UriComponents
{
	[Token(Token = "0x40001E1")]
	Scheme = 1,
	[Token(Token = "0x40001E2")]
	UserInfo = 2,
	[Token(Token = "0x40001E3")]
	Host = 4,
	[Token(Token = "0x40001E4")]
	Port = 8,
	[Token(Token = "0x40001E5")]
	Path = 0x10,
	[Token(Token = "0x40001E6")]
	Query = 0x20,
	[Token(Token = "0x40001E7")]
	Fragment = 0x40,
	[Token(Token = "0x40001E8")]
	StrongPort = 0x80,
	[Token(Token = "0x40001E9")]
	NormalizedHost = 0x100,
	[Token(Token = "0x40001EA")]
	KeepDelimiter = 0x40000000,
	[Token(Token = "0x40001EB")]
	SerializationInfoString = -2147483648,
	[Token(Token = "0x40001EC")]
	AbsoluteUri = Scheme | UserInfo | Host | Port | Path | Query | Fragment,
	[Token(Token = "0x40001ED")]
	HostAndPort = Host | StrongPort,
	[Token(Token = "0x40001EE")]
	StrongAuthority = HostAndPort | UserInfo,
	[Token(Token = "0x40001EF")]
	SchemeAndServer = 0xD,
	[Token(Token = "0x40001F0")]
	HttpRequestUrl = 0x3D,
	[Token(Token = "0x40001F1")]
	PathAndQuery = 0x30
}
