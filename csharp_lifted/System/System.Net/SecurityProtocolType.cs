// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.SecurityProtocolType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200027F")]
[Flags]
public enum SecurityProtocolType
{
	[Token(Token = "0x4000974")]
	SystemDefault = 0,
	[Token(Token = "0x4000975")]
	Ssl3 = 0x30,
	[Token(Token = "0x4000976")]
	Tls = 0xC0,
	[Token(Token = "0x4000977")]
	Tls11 = 0x300,
	[Token(Token = "0x4000978")]
	Tls12 = 0xC00,
	[Token(Token = "0x4000979")]
	Tls13 = 0x3000
}
