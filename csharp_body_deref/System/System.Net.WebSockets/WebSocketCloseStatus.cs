// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebSockets.WebSocketCloseStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x200037E")]
public enum WebSocketCloseStatus
{
	[Token(Token = "0x4000FB9")]
	NormalClosure = 1000,
	[Token(Token = "0x4000FBA")]
	EndpointUnavailable = 1001,
	[Token(Token = "0x4000FBB")]
	ProtocolError = 1002,
	[Token(Token = "0x4000FBC")]
	InvalidMessageType = 1003,
	[Token(Token = "0x4000FBD")]
	Empty = 1005,
	[Token(Token = "0x4000FBE")]
	InvalidPayloadData = 1007,
	[Token(Token = "0x4000FBF")]
	PolicyViolation = 1008,
	[Token(Token = "0x4000FC0")]
	MessageTooBig = 1009,
	[Token(Token = "0x4000FC1")]
	MandatoryExtension = 1010,
	[Token(Token = "0x4000FC2")]
	InternalServerError = 1011
}
