using Il2CppDummyDll;

namespace System.Net.WebSockets;

[Token(Token = "0x200022F")]
public enum WebSocketState
{
	[Token(Token = "0x4000C6E")]
	None,
	[Token(Token = "0x4000C6F")]
	Connecting,
	[Token(Token = "0x4000C70")]
	Open,
	[Token(Token = "0x4000C71")]
	CloseSent,
	[Token(Token = "0x4000C72")]
	CloseReceived,
	[Token(Token = "0x4000C73")]
	Closed,
	[Token(Token = "0x4000C74")]
	Aborted
}
