// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryResultState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009C7")]
public enum AottgQueryResultState
{
	[Token(Token = "0x400310A")]
	LoadingNoCache,
	[Token(Token = "0x400310B")]
	ReadyFresh,
	[Token(Token = "0x400310C")]
	ReadyStaleRefreshing,
	[Token(Token = "0x400310D")]
	FailedNoCache,
	[Token(Token = "0x400310E")]
	FailedRefreshStale
}
