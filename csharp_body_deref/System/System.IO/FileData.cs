// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200027E")]
internal class FileData
{
	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x10")]
	public string Directory;

	[Token(Token = "0x40008D1")]
	[FieldOffset(Offset = "0x18")]
	public FileAttributes Attributes;

	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x1C")]
	public bool NotExists;

	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x20")]
	public DateTime CreationTime;

	[Token(Token = "0x40008D4")]
	[FieldOffset(Offset = "0x28")]
	public DateTime LastWriteTime;

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public FileData()
	{
	}
}
