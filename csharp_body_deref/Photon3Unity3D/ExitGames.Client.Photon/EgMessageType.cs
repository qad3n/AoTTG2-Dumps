using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000020")]
internal enum EgMessageType : byte
{
	[Token(Token = "0x40000DB")]
	Init,
	[Token(Token = "0x40000DC")]
	InitResponse,
	[Token(Token = "0x40000DD")]
	Operation,
	[Token(Token = "0x40000DE")]
	OperationResponse,
	[Token(Token = "0x40000DF")]
	Event,
	[Token(Token = "0x40000E0")]
	DisconnectReason,
	[Token(Token = "0x40000E1")]
	InternalOperationRequest,
	[Token(Token = "0x40000E2")]
	InternalOperationResponse,
	[Token(Token = "0x40000E3")]
	Message,
	[Token(Token = "0x40000E4")]
	RawMessage
}
