// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x200022B")]
public enum WebSocketError
{
	[Token(Token = "0x4000C59")]
	Success,
	[Token(Token = "0x4000C5A")]
	InvalidMessageType,
	[Token(Token = "0x4000C5B")]
	Faulted,
	[Token(Token = "0x4000C5C")]
	NativeError,
	[Token(Token = "0x4000C5D")]
	NotAWebSocket,
	[Token(Token = "0x4000C5E")]
	UnsupportedVersion,
	[Token(Token = "0x4000C5F")]
	UnsupportedProtocol,
	[Token(Token = "0x4000C60")]
	HeaderError,
	[Token(Token = "0x4000C61")]
	ConnectionClosedPrematurely,
	[Token(Token = "0x4000C62")]
	InvalidState
}
