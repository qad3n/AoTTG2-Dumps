// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.Zip64EndOfCentralDirectoryRecord
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000033")]
internal struct Zip64EndOfCentralDirectoryRecord
{
	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x0")]
	public ulong SizeOfThisRecord;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x8")]
	public ushort VersionMadeBy;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0xA")]
	public ushort VersionNeededToExtract;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0xC")]
	public uint NumberOfThisDisk;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x10")]
	public uint NumberOfDiskWithStartOfCD;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x18")]
	public ulong NumberOfEntriesOnThisDisk;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x20")]
	public ulong NumberOfEntriesTotal;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x28")]
	public ulong SizeOfCentralDirectory;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x30")]
	public ulong OffsetOfCentralDirectory;

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x5F6E330", Offset = "0x5F6D330", VA = "0x5F6E330")]
	public static bool TryReadBlock(BinaryReader reader, out Zip64EndOfCentralDirectoryRecord zip64EOCDRecord)
	{
		return default(bool);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x5F6F010", Offset = "0x5F6E010", VA = "0x5F6F010")]
	public static void WriteBlock(Stream stream, long numberOfEntries, long startOfCentralDirectory, long sizeOfCentralDirectory)
	{
	}
}
