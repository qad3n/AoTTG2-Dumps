// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.SecurityProtocolType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002BE")]
[Flags]
public enum SecurityProtocolType
{
	[Token(Token = "0x4000A43")]
	SystemDefault = 0,
	[Token(Token = "0x4000A44")]
	Ssl3 = 0x30,
	[Token(Token = "0x4000A45")]
	Tls = 0xC0,
	[Token(Token = "0x4000A46")]
	Tls11 = 0x300,
	[Token(Token = "0x4000A47")]
	Tls12 = 0xC00,
	[Token(Token = "0x4000A48")]
	Tls13 = 0x3000
}
