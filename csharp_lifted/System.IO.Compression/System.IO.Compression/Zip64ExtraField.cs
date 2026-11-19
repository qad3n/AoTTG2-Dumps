// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.Zip64ExtraField
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000031")]
internal struct Zip64ExtraField
{
	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x0")]
	private ushort _size;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x8")]
	private long? _uncompressedSize;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x18")]
	private long? _compressedSize;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x28")]
	private long? _localHeaderOffset;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x38")]
	private int? _startDiskNumber;

	[Token(Token = "0x17000040")]
	public ushort TotalSize
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x5F70A50", Offset = "0x5F6FA50", VA = "0x5F70A50")]
		get
		{
			return default(ushort);
		}
	}

	[Token(Token = "0x17000041")]
	public long? UncompressedSize
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x5F72E90", Offset = "0x5F71E90", VA = "0x5F72E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x5F70960", Offset = "0x5F6F960", VA = "0x5F70960")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public long? CompressedSize
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x5F72F10", Offset = "0x5F71F10", VA = "0x5F72F10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x5F708E0", Offset = "0x5F6F8E0", VA = "0x5F708E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public long? LocalHeaderOffset
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x5F72F20", Offset = "0x5F71F20", VA = "0x5F72F20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x5F709E0", Offset = "0x5F6F9E0", VA = "0x5F709E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public int? StartDiskNumber
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x5F72F30", Offset = "0x5F71F30", VA = "0x5F72F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x5F72EA0", Offset = "0x5F71EA0", VA = "0x5F72EA0")]
	private void UpdateSize()
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x5F72F40", Offset = "0x5F71F40", VA = "0x5F72F40")]
	public static Zip64ExtraField GetJustZip64Block(Stream extraFieldStream, bool readUncompressedSize, bool readCompressedSize, bool readLocalHeaderOffset, bool readStartDiskNumber)
	{
		return default(Zip64ExtraField);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x5F731E0", Offset = "0x5F721E0", VA = "0x5F731E0")]
	private static bool TryGetZip64BlockFromGenericExtraField(ZipGenericExtraField extraField, bool readUncompressedSize, bool readCompressedSize, bool readLocalHeaderOffset, bool readStartDiskNumber, out Zip64ExtraField zip64Block)
	{
		return default(bool);
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x5F737D0", Offset = "0x5F727D0", VA = "0x5F737D0")]
	public static Zip64ExtraField GetAndRemoveZip64Block(List<ZipGenericExtraField> extraFields, bool readUncompressedSize, bool readCompressedSize, bool readLocalHeaderOffset, bool readStartDiskNumber)
	{
		return default(Zip64ExtraField);
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x5F73C90", Offset = "0x5F72C90", VA = "0x5F73C90")]
	public static void RemoveZip64Blocks(List<ZipGenericExtraField> extraFields)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x5F70B90", Offset = "0x5F6FB90", VA = "0x5F70B90")]
	public void WriteBlock(Stream stream)
	{
	}
}
