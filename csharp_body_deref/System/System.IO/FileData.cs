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
	[Address(RVA = "0x45C4EB0", Offset = "0x45C4EB0", VA = "0x45C4EB0")]
	public FileData()
	{
	}
}
