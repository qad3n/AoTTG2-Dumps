// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x20003C3")]
public enum WebSocketError
{
	[Token(Token = "0x40010AC")]
	Success,
	[Token(Token = "0x40010AD")]
	InvalidMessageType,
	[Token(Token = "0x40010AE")]
	Faulted,
	[Token(Token = "0x40010AF")]
	NativeError,
	[Token(Token = "0x40010B0")]
	NotAWebSocket,
	[Token(Token = "0x40010B1")]
	UnsupportedVersion,
	[Token(Token = "0x40010B2")]
	UnsupportedProtocol,
	[Token(Token = "0x40010B3")]
	HeaderError,
	[Token(Token = "0x40010B4")]
	ConnectionClosedPrematurely,
	[Token(Token = "0x40010B5")]
	InvalidState
}
