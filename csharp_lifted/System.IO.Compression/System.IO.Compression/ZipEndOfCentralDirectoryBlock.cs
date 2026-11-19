// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.ZipEndOfCentralDirectoryBlock
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000036")]
internal struct ZipEndOfCentralDirectoryBlock
{
	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	public uint Signature;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x4")]
	public ushort NumberOfThisDisk;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x6")]
	public ushort NumberOfTheDiskWithTheStartOfTheCentralDirectory;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x8")]
	public ushort NumberOfEntriesInTheCentralDirectoryOnThisDisk;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0xA")]
	public ushort NumberOfEntriesInTheCentralDirectory;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0xC")]
	public uint SizeOfCentralDirectory;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x10")]
	public uint OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x18")]
	public byte[] ArchiveComment;

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x5F6F220", Offset = "0x5F6E220", VA = "0x5F6F220")]
	public static void WriteBlock(Stream stream, long numberOfEntries, long startOfCentralDirectory, long sizeOfCentralDirectory, byte[] archiveComment)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x5F6E180", Offset = "0x5F6D180", VA = "0x5F6E180")]
	public static bool TryReadBlock(BinaryReader reader, out ZipEndOfCentralDirectoryBlock eocdBlock)
	{
		return default(bool);
	}
}
