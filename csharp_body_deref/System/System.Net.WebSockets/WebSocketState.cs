// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x2000383")]
public enum WebSocketState
{
	[Token(Token = "0x4000FD9")]
	None,
	[Token(Token = "0x4000FDA")]
	Connecting,
	[Token(Token = "0x4000FDB")]
	Open,
	[Token(Token = "0x4000FDC")]
	CloseSent,
	[Token(Token = "0x4000FDD")]
	CloseReceived,
	[Token(Token = "0x4000FDE")]
	Closed,
	[Token(Token = "0x4000FDF")]
	Aborted
}
