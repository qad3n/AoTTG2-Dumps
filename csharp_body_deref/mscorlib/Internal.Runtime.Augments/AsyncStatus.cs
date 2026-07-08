using Il2CppDummyDll;

namespace Internal.Runtime.Augments;

[Token(Token = "0x2000060")]
internal enum AsyncStatus
{
	[Token(Token = "0x4000191")]
	Started,
	[Token(Token = "0x4000192")]
	Completed,
	[Token(Token = "0x4000193")]
	Canceled,
	[Token(Token = "0x4000194")]
	Error
}
