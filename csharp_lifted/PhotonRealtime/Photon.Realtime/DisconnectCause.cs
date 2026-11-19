// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.DisconnectCause
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200000B")]
public enum DisconnectCause
{
	[Token(Token = "0x4000063")]
	None,
	[Token(Token = "0x4000064")]
	ExceptionOnConnect,
	[Token(Token = "0x4000065")]
	DnsExceptionOnConnect,
	[Token(Token = "0x4000066")]
	ServerAddressInvalid,
	[Token(Token = "0x4000067")]
	Exception,
	[Token(Token = "0x4000068")]
	SendException,
	[Token(Token = "0x4000069")]
	ReceiveException,
	[Token(Token = "0x400006A")]
	ServerTimeout,
	[Token(Token = "0x400006B")]
	ClientTimeout,
	[Token(Token = "0x400006C")]
	DisconnectByServerLogic,
	[Token(Token = "0x400006D")]
	DisconnectByServerReasonUnknown,
	[Token(Token = "0x400006E")]
	InvalidAuthentication,
	[Token(Token = "0x400006F")]
	CustomAuthenticationFailed,
	[Token(Token = "0x4000070")]
	AuthenticationTicketExpired,
	[Token(Token = "0x4000071")]
	MaxCcuReached,
	[Token(Token = "0x4000072")]
	InvalidRegion,
	[Token(Token = "0x4000073")]
	OperationNotAllowedInCurrentState,
	[Token(Token = "0x4000074")]
	DisconnectByClientLogic,
	[Token(Token = "0x4000075")]
	DisconnectByOperationLimit,
	[Token(Token = "0x4000076")]
	DisconnectByDisconnectMessage,
	[Token(Token = "0x4000077")]
	ApplicationQuit
}
