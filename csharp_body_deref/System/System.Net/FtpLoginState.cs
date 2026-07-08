using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000126")]
internal enum FtpLoginState : byte
{
	[Token(Token = "0x40005AD")]
	NotLoggedIn,
	[Token(Token = "0x40005AE")]
	LoggedIn,
	[Token(Token = "0x40005AF")]
	LoggedInButNeedsRelogin,
	[Token(Token = "0x40005B0")]
	ReloginFailed
}
