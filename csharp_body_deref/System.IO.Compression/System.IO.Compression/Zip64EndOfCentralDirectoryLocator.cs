// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.Zip64EndOfCentralDirectoryLocator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000032")]
internal struct Zip64EndOfCentralDirectoryLocator
{
	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x0")]
	public uint NumberOfDiskWithZip64EOCD;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x8")]
	public ulong OffsetOfZip64EOCD;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x10")]
	public uint TotalNumberOfDisks;

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x5F6E2A0", Offset = "0x5F6D2A0", VA = "0x5F6E2A0")]
	public static bool TryReadBlock(BinaryReader reader, out Zip64EndOfCentralDirectoryLocator zip64EOCDLocator)
	{
		return default(bool);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x5F6F160", Offset = "0x5F6E160", VA = "0x5F6F160")]
	public static void WriteBlock(Stream stream, long zip64EOCDRecordStart)
	{
	}
}
