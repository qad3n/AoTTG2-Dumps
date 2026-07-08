using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000088")]
[Flags]
internal enum UnescapeMode
{
	[Token(Token = "0x4000209")]
	CopyOnly = 0,
	[Token(Token = "0x400020A")]
	Escape = 1,
	[Token(Token = "0x400020B")]
	Unescape = 2,
	[Token(Token = "0x400020C")]
	EscapeUnescape = 3,
	[Token(Token = "0x400020D")]
	V1ToStringFlag = 4,
	[Token(Token = "0x400020E")]
	UnescapeAll = 8,
	[Token(Token = "0x400020F")]
	UnescapeAllOrThrow = 0x18
}
