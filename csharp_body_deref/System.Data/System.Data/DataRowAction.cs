using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002C")]
[Flags]
public enum DataRowAction
{
	[Token(Token = "0x4000097")]
	Nothing = 0,
	[Token(Token = "0x4000098")]
	Delete = 1,
	[Token(Token = "0x4000099")]
	Change = 2,
	[Token(Token = "0x400009A")]
	Rollback = 4,
	[Token(Token = "0x400009B")]
	Commit = 8,
	[Token(Token = "0x400009C")]
	Add = 0x10,
	[Token(Token = "0x400009D")]
	ChangeOriginal = 0x20,
	[Token(Token = "0x400009E")]
	ChangeCurrentAndOriginal = 0x40
}
