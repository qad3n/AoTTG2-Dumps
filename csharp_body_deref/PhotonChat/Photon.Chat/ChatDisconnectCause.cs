using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000009")]
public enum ChatDisconnectCause
{
	[Token(Token = "0x400003C")]
	None,
	[Token(Token = "0x400003D")]
	ExceptionOnConnect,
	[Token(Token = "0x400003E")]
	DisconnectByServerLogic,
	[Token(Token = "0x400003F")]
	DisconnectByServerReasonUnknown,
	[Token(Token = "0x4000040")]
	ServerTimeout,
	[Token(Token = "0x4000041")]
	ClientTimeout,
	[Token(Token = "0x4000042")]
	Exception,
	[Token(Token = "0x4000043")]
	InvalidAuthentication,
	[Token(Token = "0x4000044")]
	MaxCcuReached,
	[Token(Token = "0x4000045")]
	InvalidRegion,
	[Token(Token = "0x4000046")]
	OperationNotAllowedInCurrentState,
	[Token(Token = "0x4000047")]
	CustomAuthenticationFailed,
	[Token(Token = "0x4000048")]
	AuthenticationTicketExpired,
	[Token(Token = "0x4000049")]
	DisconnectByClientLogic
}
