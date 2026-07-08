using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200053F")]
[Flags]
public enum FileOptions
{
	[Token(Token = "0x40015C2")]
	None = 0,
	[Token(Token = "0x40015C3")]
	WriteThrough = int.MinValue,
	[Token(Token = "0x40015C4")]
	Asynchronous = 0x40000000,
	[Token(Token = "0x40015C5")]
	RandomAccess = 0x10000000,
	[Token(Token = "0x40015C6")]
	DeleteOnClose = 0x4000000,
	[Token(Token = "0x40015C7")]
	SequentialScan = 0x8000000,
	[Token(Token = "0x40015C8")]
	Encrypted = 0x4000
}
