using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000361")]
internal enum FileAction
{
	[Token(Token = "0x4000F62")]
	Added = 1,
	[Token(Token = "0x4000F63")]
	Removed,
	[Token(Token = "0x4000F64")]
	Modified,
	[Token(Token = "0x4000F65")]
	RenamedOldName,
	[Token(Token = "0x4000F66")]
	RenamedNewName
}
