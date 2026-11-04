// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsResultState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000934")]
public enum AottgCreditsResultState
{
	[Token(Token = "0x4002DC4")]
	LoadingNoCache,
	[Token(Token = "0x4002DC5")]
	ReadyFresh,
	[Token(Token = "0x4002DC6")]
	ReadyStaleRefreshing,
	[Token(Token = "0x4002DC7")]
	FailedNoCache,
	[Token(Token = "0x4002DC8")]
	FailedRefreshStale
}
