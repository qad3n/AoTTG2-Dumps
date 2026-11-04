// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketCloseStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x20003C2")]
public enum WebSocketCloseStatus
{
	[Token(Token = "0x40010A1")]
	NormalClosure = 1000,
	[Token(Token = "0x40010A2")]
	EndpointUnavailable = 1001,
	[Token(Token = "0x40010A3")]
	ProtocolError = 1002,
	[Token(Token = "0x40010A4")]
	InvalidMessageType = 1003,
	[Token(Token = "0x40010A5")]
	Empty = 1005,
	[Token(Token = "0x40010A6")]
	InvalidPayloadData = 1007,
	[Token(Token = "0x40010A7")]
	PolicyViolation = 1008,
	[Token(Token = "0x40010A8")]
	MessageTooBig = 1009,
	[Token(Token = "0x40010A9")]
	MandatoryExtension = 1010,
	[Token(Token = "0x40010AA")]
	InternalServerError = 1011
}
