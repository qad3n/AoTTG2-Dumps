// ==================== AoTTG2 cross-reference ====================
// Type: System.UriComponents
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C3")]
[Flags]
public enum UriComponents
{
	[Token(Token = "0x40002B0")]
	Scheme = 1,
	[Token(Token = "0x40002B1")]
	UserInfo = 2,
	[Token(Token = "0x40002B2")]
	Host = 4,
	[Token(Token = "0x40002B3")]
	Port = 8,
	[Token(Token = "0x40002B4")]
	Path = 0x10,
	[Token(Token = "0x40002B5")]
	Query = 0x20,
	[Token(Token = "0x40002B6")]
	Fragment = 0x40,
	[Token(Token = "0x40002B7")]
	StrongPort = 0x80,
	[Token(Token = "0x40002B8")]
	NormalizedHost = 0x100,
	[Token(Token = "0x40002B9")]
	KeepDelimiter = 0x40000000,
	[Token(Token = "0x40002BA")]
	SerializationInfoString = -2147483648,
	[Token(Token = "0x40002BB")]
	AbsoluteUri = Scheme | UserInfo | Host | Port | Path | Query | Fragment,
	[Token(Token = "0x40002BC")]
	HostAndPort = Host | StrongPort,
	[Token(Token = "0x40002BD")]
	StrongAuthority = HostAndPort | UserInfo,
	[Token(Token = "0x40002BE")]
	SchemeAndServer = 0xD,
	[Token(Token = "0x40002BF")]
	HttpRequestUrl = 0x3D,
	[Token(Token = "0x40002C0")]
	PathAndQuery = 0x30
}
