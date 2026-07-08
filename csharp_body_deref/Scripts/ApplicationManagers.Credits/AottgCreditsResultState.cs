using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200075A")]
public enum AottgCreditsResultState
{
	[Token(Token = "0x4002397")]
	LoadingNoCache,
	[Token(Token = "0x4002398")]
	ReadyFresh,
	[Token(Token = "0x4002399")]
	ReadyStaleRefreshing,
	[Token(Token = "0x400239A")]
	FailedNoCache,
	[Token(Token = "0x400239B")]
	FailedRefreshStale
}
