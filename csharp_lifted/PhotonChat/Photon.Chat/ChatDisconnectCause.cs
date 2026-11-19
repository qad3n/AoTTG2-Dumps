// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatDisconnectCause
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatDisconnectCause.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000007")]
public enum ChatDisconnectCause
{
	[Token(Token = "0x4000037")]
	None,
	[Token(Token = "0x4000038")]
	ExceptionOnConnect,
	[Token(Token = "0x4000039")]
	DisconnectByServerLogic,
	[Token(Token = "0x400003A")]
	DisconnectByServerReasonUnknown,
	[Token(Token = "0x400003B")]
	ServerTimeout,
	[Token(Token = "0x400003C")]
	ClientTimeout,
	[Token(Token = "0x400003D")]
	Exception,
	[Token(Token = "0x400003E")]
	InvalidAuthentication,
	[Token(Token = "0x400003F")]
	MaxCcuReached,
	[Token(Token = "0x4000040")]
	InvalidRegion,
	[Token(Token = "0x4000041")]
	OperationNotAllowedInCurrentState,
	[Token(Token = "0x4000042")]
	CustomAuthenticationFailed,
	[Token(Token = "0x4000043")]
	AuthenticationTicketExpired,
	[Token(Token = "0x4000044")]
	DisconnectByClientLogic
}
