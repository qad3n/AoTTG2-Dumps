// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x20003C7")]
public enum WebSocketState
{
	[Token(Token = "0x40010C1")]
	None,
	[Token(Token = "0x40010C2")]
	Connecting,
	[Token(Token = "0x40010C3")]
	Open,
	[Token(Token = "0x40010C4")]
	CloseSent,
	[Token(Token = "0x40010C5")]
	CloseReceived,
	[Token(Token = "0x40010C6")]
	Closed,
	[Token(Token = "0x40010C7")]
	Aborted
}
