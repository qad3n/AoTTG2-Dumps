// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000668")]
[Flags]
public enum FileAttributes
{
	[Token(Token = "0x40019C4")]
	ReadOnly = 1,
	[Token(Token = "0x40019C5")]
	Hidden = 2,
	[Token(Token = "0x40019C6")]
	System = 4,
	[Token(Token = "0x40019C7")]
	Directory = 0x10,
	[Token(Token = "0x40019C8")]
	Archive = 0x20,
	[Token(Token = "0x40019C9")]
	Device = 0x40,
	[Token(Token = "0x40019CA")]
	Normal = 0x80,
	[Token(Token = "0x40019CB")]
	Temporary = 0x100,
	[Token(Token = "0x40019CC")]
	SparseFile = 0x200,
	[Token(Token = "0x40019CD")]
	ReparsePoint = 0x400,
	[Token(Token = "0x40019CE")]
	Compressed = 0x800,
	[Token(Token = "0x40019CF")]
	Offline = 0x1000,
	[Token(Token = "0x40019D0")]
	NotContentIndexed = 0x2000,
	[Token(Token = "0x40019D1")]
	Encrypted = 0x4000,
	[Token(Token = "0x40019D2")]
	IntegrityStream = 0x8000,
	[Token(Token = "0x40019D3")]
	NoScrubData = 0x20000
}
