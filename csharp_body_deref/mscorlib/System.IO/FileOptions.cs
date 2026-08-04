// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
