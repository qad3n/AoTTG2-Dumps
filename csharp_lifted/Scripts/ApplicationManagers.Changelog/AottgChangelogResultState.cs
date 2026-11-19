// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogResultState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20009A7")]
public enum AottgChangelogResultState
{
	[Token(Token = "0x400309F")]
	LoadingNoCache,
	[Token(Token = "0x40030A0")]
	ReadyFresh,
	[Token(Token = "0x40030A1")]
	ReadyStaleRefreshing,
	[Token(Token = "0x40030A2")]
	FailedNoCache,
	[Token(Token = "0x40030A3")]
	FailedRefreshStale
}
