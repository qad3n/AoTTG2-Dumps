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
