// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatState.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000012")]
public enum ChatState
{
	[Token(Token = "0x40000A9")]
	Uninitialized,
	[Token(Token = "0x40000AA")]
	ConnectingToNameServer,
	[Token(Token = "0x40000AB")]
	ConnectedToNameServer,
	[Token(Token = "0x40000AC")]
	Authenticating,
	[Token(Token = "0x40000AD")]
	Authenticated,
	[Token(Token = "0x40000AE")]
	DisconnectingFromNameServer,
	[Token(Token = "0x40000AF")]
	ConnectingToFrontEnd,
	[Token(Token = "0x40000B0")]
	ConnectedToFrontEnd,
	[Token(Token = "0x40000B1")]
	DisconnectingFromFrontEnd,
	[Token(Token = "0x40000B2")]
	QueuedComingFromFrontEnd,
	[Token(Token = "0x40000B3")]
	Disconnecting,
	[Token(Token = "0x40000B4")]
	Disconnected,
	[Token(Token = "0x40000B5")]
	ConnectWithFallbackProtocol
}
