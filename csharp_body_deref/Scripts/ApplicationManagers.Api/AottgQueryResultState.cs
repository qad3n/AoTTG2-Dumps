// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryResultState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000960")]
public enum AottgQueryResultState
{
	[Token(Token = "0x4002E5C")]
	LoadingNoCache,
	[Token(Token = "0x4002E5D")]
	ReadyFresh,
	[Token(Token = "0x4002E5E")]
	ReadyStaleRefreshing,
	[Token(Token = "0x4002E5F")]
	FailedNoCache,
	[Token(Token = "0x4002E60")]
	FailedRefreshStale
}
