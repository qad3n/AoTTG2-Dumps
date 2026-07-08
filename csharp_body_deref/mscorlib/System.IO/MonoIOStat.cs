using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200057C")]
internal struct MonoIOStat
{
	[Token(Token = "0x4001716")]
	[FieldOffset(Offset = "0x0")]
	public FileAttributes fileAttributes;

	[Token(Token = "0x4001717")]
	[FieldOffset(Offset = "0x8")]
	public long Length;

	[Token(Token = "0x4001718")]
	[FieldOffset(Offset = "0x10")]
	public long CreationTime;

	[Token(Token = "0x4001719")]
	[FieldOffset(Offset = "0x18")]
	public long LastAccessTime;

	[Token(Token = "0x400171A")]
	[FieldOffset(Offset = "0x20")]
	public long LastWriteTime;
}
