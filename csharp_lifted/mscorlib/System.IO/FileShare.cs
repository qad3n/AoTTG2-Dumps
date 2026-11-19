// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileShare
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000642")]
[Flags]
public enum FileShare
{
	[Token(Token = "0x400190E")]
	None = 0,
	[Token(Token = "0x400190F")]
	Read = 1,
	[Token(Token = "0x4001910")]
	Write = 2,
	[Token(Token = "0x4001911")]
	ReadWrite = Read | Write,
	[Token(Token = "0x4001912")]
	Delete = 4,
	[Token(Token = "0x4001913")]
	Inheritable = 0x10
}
