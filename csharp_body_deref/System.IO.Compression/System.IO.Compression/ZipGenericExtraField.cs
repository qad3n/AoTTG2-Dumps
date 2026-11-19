// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.ZipGenericExtraField
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000030")]
internal struct ZipGenericExtraField
{
	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x0")]
	private ushort _tag;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x2")]
	private ushort _size;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x8")]
	private byte[] _data;

	[Token(Token = "0x1700003D")]
	public ushort Tag
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x5F72A30", Offset = "0x5F71A30", VA = "0x5F72A30")]
		get
		{
			return default(ushort);
		}
	}

	[Token(Token = "0x1700003E")]
	public ushort Size
	{
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x5F72A40", Offset = "0x5F71A40", VA = "0x5F72A40")]
		get
		{
			return default(ushort);
		}
	}

	[Token(Token = "0x1700003F")]
	public byte[] Data
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x5F72A50", Offset = "0x5F71A50", VA = "0x5F72A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x5F72A60", Offset = "0x5F71A60", VA = "0x5F72A60")]
	public void WriteBlock(Stream stream)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x5F72B00", Offset = "0x5F71B00", VA = "0x5F72B00")]
	public static bool TryReadBlock(BinaryReader reader, long endExtraField, out ZipGenericExtraField field)
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x5F72C00", Offset = "0x5F71C00", VA = "0x5F72C00")]
	public static List<ZipGenericExtraField> ParseExtraField(Stream extraFieldData)
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x5F70A60", Offset = "0x5F6FA60", VA = "0x5F70A60")]
	public static int TotalSize(List<ZipGenericExtraField> fields)
	{
		return default(int);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x5F70D20", Offset = "0x5F6FD20", VA = "0x5F70D20")]
	public static void WriteAllBlocks(List<ZipGenericExtraField> fields, Stream stream)
	{
	}
}
