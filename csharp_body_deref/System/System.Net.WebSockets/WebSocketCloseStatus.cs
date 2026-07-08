using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x200022A")]
public enum WebSocketCloseStatus
{
	[Token(Token = "0x4000C4E")]
	NormalClosure = 1000,
	[Token(Token = "0x4000C4F")]
	EndpointUnavailable = 1001,
	[Token(Token = "0x4000C50")]
	ProtocolError = 1002,
	[Token(Token = "0x4000C51")]
	InvalidMessageType = 1003,
	[Token(Token = "0x4000C52")]
	Empty = 1005,
	[Token(Token = "0x4000C53")]
	InvalidPayloadData = 1007,
	[Token(Token = "0x4000C54")]
	PolicyViolation = 1008,
	[Token(Token = "0x4000C55")]
	MessageTooBig = 1009,
	[Token(Token = "0x4000C56")]
	MandatoryExtension = 1010,
	[Token(Token = "0x4000C57")]
	InternalServerError = 1011
}
