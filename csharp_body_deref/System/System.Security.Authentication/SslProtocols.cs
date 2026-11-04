// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Authentication.SslProtocols
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Authentication;

[Token(Token = "0x200011F")]
[Flags]
public enum SslProtocols
{
	[Token(Token = "0x40004E5")]
	None = 0,
	[Token(Token = "0x40004E6")]
	Ssl2 = 0xC,
	[Token(Token = "0x40004E7")]
	Ssl3 = 0x30,
	[Token(Token = "0x40004E8")]
	Tls = 0xC0,
	[Token(Token = "0x40004E9")]
	[System.MonoTODO("unsupported")]
	Tls11 = 0x300,
	[Token(Token = "0x40004EA")]
	[System.MonoTODO("unsupported")]
	Tls12 = 0xC00,
	[Token(Token = "0x40004EB")]
	Tls13 = 0x3000,
	[Token(Token = "0x40004EC")]
	Default = Ssl3 | Tls
}
