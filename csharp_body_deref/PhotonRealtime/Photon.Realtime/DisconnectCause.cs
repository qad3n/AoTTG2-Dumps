using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200000D")]
public enum DisconnectCause
{
	[Token(Token = "0x4000068")]
	None,
	[Token(Token = "0x4000069")]
	ExceptionOnConnect,
	[Token(Token = "0x400006A")]
	DnsExceptionOnConnect,
	[Token(Token = "0x400006B")]
	ServerAddressInvalid,
	[Token(Token = "0x400006C")]
	Exception,
	[Token(Token = "0x400006D")]
	SendException,
	[Token(Token = "0x400006E")]
	ReceiveException,
	[Token(Token = "0x400006F")]
	ServerTimeout,
	[Token(Token = "0x4000070")]
	ClientTimeout,
	[Token(Token = "0x4000071")]
	DisconnectByServerLogic,
	[Token(Token = "0x4000072")]
	DisconnectByServerReasonUnknown,
	[Token(Token = "0x4000073")]
	InvalidAuthentication,
	[Token(Token = "0x4000074")]
	CustomAuthenticationFailed,
	[Token(Token = "0x4000075")]
	AuthenticationTicketExpired,
	[Token(Token = "0x4000076")]
	MaxCcuReached,
	[Token(Token = "0x4000077")]
	InvalidRegion,
	[Token(Token = "0x4000078")]
	OperationNotAllowedInCurrentState,
	[Token(Token = "0x4000079")]
	DisconnectByClientLogic,
	[Token(Token = "0x400007A")]
	DisconnectByOperationLimit,
	[Token(Token = "0x400007B")]
	DisconnectByDisconnectMessage,
	[Token(Token = "0x400007C")]
	ApplicationQuit
}
