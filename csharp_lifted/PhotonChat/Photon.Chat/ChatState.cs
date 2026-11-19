// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatState.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000010")]
public enum ChatState
{
	[Token(Token = "0x40000A4")]
	Uninitialized,
	[Token(Token = "0x40000A5")]
	ConnectingToNameServer,
	[Token(Token = "0x40000A6")]
	ConnectedToNameServer,
	[Token(Token = "0x40000A7")]
	Authenticating,
	[Token(Token = "0x40000A8")]
	Authenticated,
	[Token(Token = "0x40000A9")]
	DisconnectingFromNameServer,
	[Token(Token = "0x40000AA")]
	ConnectingToFrontEnd,
	[Token(Token = "0x40000AB")]
	ConnectedToFrontEnd,
	[Token(Token = "0x40000AC")]
	DisconnectingFromFrontEnd,
	[Token(Token = "0x40000AD")]
	QueuedComingFromFrontEnd,
	[Token(Token = "0x40000AE")]
	Disconnecting,
	[Token(Token = "0x40000AF")]
	Disconnected,
	[Token(Token = "0x40000B0")]
	ConnectWithFallbackProtocol
}
