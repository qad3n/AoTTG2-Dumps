// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000566")]
[Flags]
public enum FileAttributes
{
	[Token(Token = "0x4001680")]
	ReadOnly = 1,
	[Token(Token = "0x4001681")]
	Hidden = 2,
	[Token(Token = "0x4001682")]
	System = 4,
	[Token(Token = "0x4001683")]
	Directory = 0x10,
	[Token(Token = "0x4001684")]
	Archive = 0x20,
	[Token(Token = "0x4001685")]
	Device = 0x40,
	[Token(Token = "0x4001686")]
	Normal = 0x80,
	[Token(Token = "0x4001687")]
	Temporary = 0x100,
	[Token(Token = "0x4001688")]
	SparseFile = 0x200,
	[Token(Token = "0x4001689")]
	ReparsePoint = 0x400,
	[Token(Token = "0x400168A")]
	Compressed = 0x800,
	[Token(Token = "0x400168B")]
	Offline = 0x1000,
	[Token(Token = "0x400168C")]
	NotContentIndexed = 0x2000,
	[Token(Token = "0x400168D")]
	Encrypted = 0x4000,
	[Token(Token = "0x400168E")]
	IntegrityStream = 0x8000,
	[Token(Token = "0x400168F")]
	NoScrubData = 0x20000
}
