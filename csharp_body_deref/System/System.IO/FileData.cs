// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200035D")]
internal class FileData
{
	[Token(Token = "0x4000F58")]
	[FieldOffset(Offset = "0x10")]
	public string Directory;

	[Token(Token = "0x4000F59")]
	[FieldOffset(Offset = "0x18")]
	public FileAttributes Attributes;

	[Token(Token = "0x4000F5A")]
	[FieldOffset(Offset = "0x1C")]
	public bool NotExists;

	[Token(Token = "0x4000F5B")]
	[FieldOffset(Offset = "0x20")]
	public DateTime CreationTime;

	[Token(Token = "0x4000F5C")]
	[FieldOffset(Offset = "0x28")]
	public DateTime LastWriteTime;

	[Token(Token = "0x6001699")]
	[Address(RVA = "0x48E9FB0", Offset = "0x48E9FB0", VA = "0x48E9FB0")]
	public FileData()
	{
	}
}
