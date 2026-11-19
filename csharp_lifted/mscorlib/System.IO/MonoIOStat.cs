// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.MonoIOStat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200067E")]
internal struct MonoIOStat
{
	[Token(Token = "0x4001A57")]
	[FieldOffset(Offset = "0x0")]
	public FileAttributes fileAttributes;

	[Token(Token = "0x4001A58")]
	[FieldOffset(Offset = "0x8")]
	public long Length;

	[Token(Token = "0x4001A59")]
	[FieldOffset(Offset = "0x10")]
	public long CreationTime;

	[Token(Token = "0x4001A5A")]
	[FieldOffset(Offset = "0x18")]
	public long LastAccessTime;

	[Token(Token = "0x4001A5B")]
	[FieldOffset(Offset = "0x20")]
	public long LastWriteTime;
}
