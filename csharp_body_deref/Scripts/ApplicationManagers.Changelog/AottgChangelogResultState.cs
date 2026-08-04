// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogResultState
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20007B5")]
public enum AottgChangelogResultState
{
	[Token(Token = "0x4002523")]
	LoadingNoCache,
	[Token(Token = "0x4002524")]
	ReadyFresh,
	[Token(Token = "0x4002525")]
	ReadyStaleRefreshing,
	[Token(Token = "0x4002526")]
	FailedNoCache,
	[Token(Token = "0x4002527")]
	FailedRefreshStale
}
