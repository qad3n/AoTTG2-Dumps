using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000771")]
public enum AottgQueryResultState
{
	[Token(Token = "0x40023EC")]
	LoadingNoCache,
	[Token(Token = "0x40023ED")]
	ReadyFresh,
	[Token(Token = "0x40023EE")]
	ReadyStaleRefreshing,
	[Token(Token = "0x40023EF")]
	FailedNoCache,
	[Token(Token = "0x40023F0")]
	FailedRefreshStale
}
