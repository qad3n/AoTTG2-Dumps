// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x200022F")]
public enum WebSocketState
{
	[Token(Token = "0x4000C6E")]
	None,
	[Token(Token = "0x4000C6F")]
	Connecting,
	[Token(Token = "0x4000C70")]
	Open,
	[Token(Token = "0x4000C71")]
	CloseSent,
	[Token(Token = "0x4000C72")]
	CloseReceived,
	[Token(Token = "0x4000C73")]
	Closed,
	[Token(Token = "0x4000C74")]
	Aborted
}
