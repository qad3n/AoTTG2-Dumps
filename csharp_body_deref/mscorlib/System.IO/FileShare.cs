// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileShare
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
