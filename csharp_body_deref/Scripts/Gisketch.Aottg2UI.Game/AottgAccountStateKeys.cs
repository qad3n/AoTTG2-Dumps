using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000138")]
public static class AottgAccountStateKeys
{
	[Token(Token = "0x400071A")]
	public const string Ready = "account.ready";

	[Token(Token = "0x400071B")]
	public const string LoggedIn = "account.loggedIn";

	[Token(Token = "0x400071C")]
	public const string LoggedOut = "account.loggedOut";

	[Token(Token = "0x400071D")]
	public const string OfflineMode = "account.offlineMode";

	[Token(Token = "0x400071E")]
	public const string OnlineMode = "account.onlineMode";

	[Token(Token = "0x400071F")]
	public const string AuthLoading = "account.auth.loading";

	[Token(Token = "0x4000720")]
	public const string IdentityLoading = "account.identity.loading";

	[Token(Token = "0x4000721")]
	public const string IdentityReady = "account.identity.ready";

	[Token(Token = "0x4000722")]
	public const string AuthOperation = "account.auth.operation";

	[Token(Token = "0x4000723")]
	public const string Busy = "account.auth.busy";

	[Token(Token = "0x4000724")]
	public const string NotBusy = "account.auth.idle";

	[Token(Token = "0x4000725")]
	public const string LoadingMessage = "account.auth.message";

	[Token(Token = "0x4000726")]
	public const string LoginCta = "account.loginCta";

	[Token(Token = "0x4000727")]
	public const string RegisterCta = "account.registerCta";

	[Token(Token = "0x4000728")]
	public const string ForgotCta = "account.forgotCta";

	[Token(Token = "0x4000729")]
	public const string LogoutCta = "account.logoutCta";

	[Token(Token = "0x400072A")]
	public const string RefreshCta = "account.refreshCta";

	[Token(Token = "0x400072B")]
	public const string GoOfflineCta = "account.goOfflineCta";

	[Token(Token = "0x400072C")]
	public const string GoOnlineCta = "account.goOnlineCta";

	[Token(Token = "0x400072D")]
	public const string InGameDisplayName = "account.ingameDisplayName";

	[Token(Token = "0x400072E")]
	public const string AuthDisplayName = "account.authDisplayName";

	[Token(Token = "0x400072F")]
	public const string CanEmailPassword = "account.canEmailPassword";

	[Token(Token = "0x4000730")]
	public const string CanDiscord = "account.canDiscord";

	[Token(Token = "0x4000731")]
	public const string CanGoogle = "account.canGoogle";

	[Token(Token = "0x4000732")]
	public const string ShowLoginDivider = "account.showLoginDivider";

	[Token(Token = "0x4000733")]
	public const string NoMethods = "account.noMethods";

	[Token(Token = "0x4000734")]
	public const string MethodsUnavailable = "account.methodsUnavailable";
}
