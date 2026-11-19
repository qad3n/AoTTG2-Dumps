// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.ZipCentralDirectoryFileHeader
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000035")]
internal struct ZipCentralDirectoryFileHeader
{
	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x0")]
	public byte VersionMadeByCompatibility;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x1")]
	public byte VersionMadeBySpecification;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x2")]
	public ushort VersionNeededToExtract;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x4")]
	public ushort GeneralPurposeBitFlag;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x6")]
	public ushort CompressionMethod;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x8")]
	public uint LastModified;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0xC")]
	public uint Crc32;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x10")]
	public long CompressedSize;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x18")]
	public long UncompressedSize;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x20")]
	public ushort FilenameLength;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x22")]
	public ushort ExtraFieldLength;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x24")]
	public ushort FileCommentLength;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x28")]
	public int DiskNumberStart;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x2C")]
	public ushort InternalFileAttributes;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x30")]
	public uint ExternalFileAttributes;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x38")]
	public long RelativeOffsetOfLocalHeader;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x40")]
	public byte[] Filename;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x48")]
	public byte[] FileComment;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x50")]
	public List<ZipGenericExtraField> ExtraFields;

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x5F6D980", Offset = "0x5F6C980", VA = "0x5F6D980")]
	public static bool TryReadBlock(BinaryReader reader, bool saveExtraFieldsAndComments, out ZipCentralDirectoryFileHeader header)
	{
		return default(bool);
	}
}
