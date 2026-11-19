// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x200037F")]
public enum WebSocketError
{
	[Token(Token = "0x4000FC4")]
	Success,
	[Token(Token = "0x4000FC5")]
	InvalidMessageType,
	[Token(Token = "0x4000FC6")]
	Faulted,
	[Token(Token = "0x4000FC7")]
	NativeError,
	[Token(Token = "0x4000FC8")]
	NotAWebSocket,
	[Token(Token = "0x4000FC9")]
	UnsupportedVersion,
	[Token(Token = "0x4000FCA")]
	UnsupportedProtocol,
	[Token(Token = "0x4000FCB")]
	HeaderError,
	[Token(Token = "0x4000FCC")]
	ConnectionClosedPrematurely,
	[Token(Token = "0x4000FCD")]
	InvalidState
}
