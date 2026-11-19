// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsResultState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200099B")]
public enum AottgCreditsResultState
{
	[Token(Token = "0x4003072")]
	LoadingNoCache,
	[Token(Token = "0x4003073")]
	ReadyFresh,
	[Token(Token = "0x4003074")]
	ReadyStaleRefreshing,
	[Token(Token = "0x4003075")]
	FailedNoCache,
	[Token(Token = "0x4003076")]
	FailedRefreshStale
}
