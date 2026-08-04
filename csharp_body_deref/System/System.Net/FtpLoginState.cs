// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpLoginState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000126")]
internal enum FtpLoginState : byte
{
	[Token(Token = "0x40005AD")]
	NotLoggedIn,
	[Token(Token = "0x40005AE")]
	LoggedIn,
	[Token(Token = "0x40005AF")]
	LoggedInButNeedsRelogin,
	[Token(Token = "0x40005B0")]
	ReloginFailed
}
