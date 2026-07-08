using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001B7")]
internal enum ReadState
{
	[Token(Token = "0x40008CC")]
	None,
	[Token(Token = "0x40008CD")]
	Status,
	[Token(Token = "0x40008CE")]
	Headers,
	[Token(Token = "0x40008CF")]
	Content,
	[Token(Token = "0x40008D0")]
	Aborted
}
