// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200068E")]
[Flags]
public enum FileAttributes
{
	[Token(Token = "0x4001A5E")]
	ReadOnly = 1,
	[Token(Token = "0x4001A5F")]
	Hidden = 2,
	[Token(Token = "0x4001A60")]
	System = 4,
	[Token(Token = "0x4001A61")]
	Directory = 0x10,
	[Token(Token = "0x4001A62")]
	Archive = 0x20,
	[Token(Token = "0x4001A63")]
	Device = 0x40,
	[Token(Token = "0x4001A64")]
	Normal = 0x80,
	[Token(Token = "0x4001A65")]
	Temporary = 0x100,
	[Token(Token = "0x4001A66")]
	SparseFile = 0x200,
	[Token(Token = "0x4001A67")]
	ReparsePoint = 0x400,
	[Token(Token = "0x4001A68")]
	Compressed = 0x800,
	[Token(Token = "0x4001A69")]
	Offline = 0x1000,
	[Token(Token = "0x4001A6A")]
	NotContentIndexed = 0x2000,
	[Token(Token = "0x4001A6B")]
	Encrypted = 0x4000,
	[Token(Token = "0x4001A6C")]
	IntegrityStream = 0x8000,
	[Token(Token = "0x4001A6D")]
	NoScrubData = 0x20000
}
