// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.CookieVariant
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002B3")]
internal enum CookieVariant
{
	[Token(Token = "0x4000A67")]
	Unknown = 0,
	[Token(Token = "0x4000A68")]
	Plain = 1,
	[Token(Token = "0x4000A69")]
	Rfc2109 = 2,
	[Token(Token = "0x4000A6A")]
	Rfc2965 = 3,
	[Token(Token = "0x4000A6B")]
	Default = Rfc2109
}
