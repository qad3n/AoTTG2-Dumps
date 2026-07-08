using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000540")]
[Flags]
public enum FileShare
{
	[Token(Token = "0x40015CA")]
	None = 0,
	[Token(Token = "0x40015CB")]
	Read = 1,
	[Token(Token = "0x40015CC")]
	Write = 2,
	[Token(Token = "0x40015CD")]
	ReadWrite = 3,
	[Token(Token = "0x40015CE")]
	Delete = 4,
	[Token(Token = "0x40015CF")]
	Inheritable = 0x10
}
