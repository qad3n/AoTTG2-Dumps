using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x20001FD")]
public enum SocketAsyncOperation
{
	[Token(Token = "0x4000ABB")]
	None,
	[Token(Token = "0x4000ABC")]
	Accept,
	[Token(Token = "0x4000ABD")]
	Connect,
	[Token(Token = "0x4000ABE")]
	Disconnect,
	[Token(Token = "0x4000ABF")]
	Receive,
	[Token(Token = "0x4000AC0")]
	ReceiveFrom,
	[Token(Token = "0x4000AC1")]
	ReceiveMessageFrom,
	[Token(Token = "0x4000AC2")]
	Send,
	[Token(Token = "0x4000AC3")]
	SendPackets,
	[Token(Token = "0x4000AC4")]
	SendTo
}
