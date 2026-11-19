// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000641")]
[Flags]
public enum FileOptions
{
	[Token(Token = "0x4001906")]
	None = 0,
	[Token(Token = "0x4001907")]
	WriteThrough = -2147483648,
	[Token(Token = "0x4001908")]
	Asynchronous = 0x40000000,
	[Token(Token = "0x4001909")]
	RandomAccess = 0x10000000,
	[Token(Token = "0x400190A")]
	DeleteOnClose = 0x4000000,
	[Token(Token = "0x400190B")]
	SequentialScan = 0x8000000,
	[Token(Token = "0x400190C")]
	Encrypted = 0x4000
}
