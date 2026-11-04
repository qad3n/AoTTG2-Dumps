// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogResultState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x2000940")]
public enum AottgChangelogResultState
{
	[Token(Token = "0x4002DF1")]
	LoadingNoCache,
	[Token(Token = "0x4002DF2")]
	ReadyFresh,
	[Token(Token = "0x4002DF3")]
	ReadyStaleRefreshing,
	[Token(Token = "0x4002DF4")]
	FailedNoCache,
	[Token(Token = "0x4002DF5")]
	FailedRefreshStale
}
