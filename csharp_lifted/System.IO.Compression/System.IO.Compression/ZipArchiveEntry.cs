// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.ZipArchiveEntry
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200002A")]
public class ZipArchiveEntry
{
	[Token(Token = "0x200002B")]
	private sealed class DirectToArchiveWriterStream : Stream
	{
		[Token(Token = "0x40000F7")]
		[FieldOffset(Offset = "0x28")]
		private long _position;

		[Token(Token = "0x40000F8")]
		[FieldOffset(Offset = "0x30")]
		private CheckSumAndSizeWriteStream _crcSizeStream;

		[Token(Token = "0x40000F9")]
		[FieldOffset(Offset = "0x38")]
		private bool _everWritten;

		[Token(Token = "0x40000FA")]
		[FieldOffset(Offset = "0x39")]
		private bool _isDisposed;

		[Token(Token = "0x40000FB")]
		[FieldOffset(Offset = "0x40")]
		private ZipArchiveEntry _entry;

		[Token(Token = "0x40000FC")]
		[FieldOffset(Offset = "0x48")]
		private bool _usedZip64inLH;

		[Token(Token = "0x40000FD")]
		[FieldOffset(Offset = "0x49")]
		private bool _canWrite;

		[Token(Token = "0x17000038")]
		public override long Length
		{
			[Token(Token = "0x6000142")]
			[Address(RVA = "0x5F72340", Offset = "0x5F71340", VA = "0x5F72340", Slot = "11")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x17000039")]
		public override long Position
		{
			[Token(Token = "0x6000143")]
			[Address(RVA = "0x5F72420", Offset = "0x5F71420", VA = "0x5F72420", Slot = "12")]
			get
			{
				return default(long);
			}
			[Token(Token = "0x6000144")]
			[Address(RVA = "0x5F72430", Offset = "0x5F71430", VA = "0x5F72430", Slot = "13")]
			set
			{
			}
		}

		[Token(Token = "0x1700003A")]
		public override bool CanRead
		{
			[Token(Token = "0x6000145")]
			[Address(RVA = "0x5F72480", Offset = "0x5F71480", VA = "0x5F72480", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700003B")]
		public override bool CanSeek
		{
			[Token(Token = "0x6000146")]
			[Address(RVA = "0x5F72490", Offset = "0x5F71490", VA = "0x5F72490", Slot = "8")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700003C")]
		public override bool CanWrite
		{
			[Token(Token = "0x6000147")]
			[Address(RVA = "0x5F724A0", Offset = "0x5F714A0", VA = "0x5F724A0", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000141")]
		[Address(RVA = "0x5F71730", Offset = "0x5F70730", VA = "0x5F71730")]
		public DirectToArchiveWriterStream(CheckSumAndSizeWriteStream crcSizeStream, ZipArchiveEntry entry)
		{
		}

		[Token(Token = "0x6000148")]
		[Address(RVA = "0x5F72390", Offset = "0x5F71390", VA = "0x5F72390")]
		private void ThrowIfDisposed()
		{
		}

		[Token(Token = "0x6000149")]
		[Address(RVA = "0x5F724B0", Offset = "0x5F714B0", VA = "0x5F724B0", Slot = "33")]
		public override int Read(byte[] buffer, int offset, int count)
		{
			return default(int);
		}

		[Token(Token = "0x600014A")]
		[Address(RVA = "0x5F72500", Offset = "0x5F71500", VA = "0x5F72500", Slot = "31")]
		public override long Seek(long offset, SeekOrigin origin)
		{
			return default(long);
		}

		[Token(Token = "0x600014B")]
		[Address(RVA = "0x5F72550", Offset = "0x5F71550", VA = "0x5F72550", Slot = "32")]
		public override void SetLength(long value)
		{
		}

		[Token(Token = "0x600014C")]
		[Address(RVA = "0x5F725A0", Offset = "0x5F715A0", VA = "0x5F725A0", Slot = "36")]
		public override void Write(byte[] buffer, int offset, int count)
		{
		}

		[Token(Token = "0x600014D")]
		[Address(RVA = "0x5F72730", Offset = "0x5F71730", VA = "0x5F72730", Slot = "21")]
		public override void Flush()
		{
		}

		[Token(Token = "0x600014E")]
		[Address(RVA = "0x5F72760", Offset = "0x5F71760", VA = "0x5F72760", Slot = "20")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x200002C")]
	[Flags]
	private enum BitFlagValues : ushort
	{
		[Token(Token = "0x40000FF")]
		DataDescriptor = 8,
		[Token(Token = "0x4000100")]
		UnicodeFileName = 0x800
	}

	[Token(Token = "0x200002D")]
	internal enum CompressionMethodValues : ushort
	{
		[Token(Token = "0x4000102")]
		Stored = 0,
		[Token(Token = "0x4000103")]
		Deflate = 8,
		[Token(Token = "0x4000104")]
		Deflate64 = 9,
		[Token(Token = "0x4000105")]
		BZip2 = 12,
		[Token(Token = "0x4000106")]
		LZMA = 14
	}

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x10")]
	private ZipArchive _archive;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _originallyInArchive;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int _diskNumberStart;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x20")]
	private readonly ZipVersionMadeByPlatform _versionMadeByPlatform;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x22")]
	private ZipVersionNeededValues _versionMadeBySpecification;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x24")]
	private ZipVersionNeededValues _versionToExtract;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x26")]
	private BitFlagValues _generalPurposeBitFlag;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x28")]
	private CompressionMethodValues _storedCompressionMethod;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x30")]
	private DateTimeOffset _lastModified;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x40")]
	private long _compressedSize;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x48")]
	private long _uncompressedSize;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x50")]
	private long _offsetOfLocalHeader;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x58")]
	private long? _storedOffsetOfCompressedData;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x68")]
	private uint _crc32;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x70")]
	private byte[][] _compressedBytes;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x78")]
	private MemoryStream _storedUncompressedData;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x80")]
	private bool _currentlyOpenForWrite;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x81")]
	private bool _everOpenedForWrite;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x88")]
	private Stream _outstandingWriteStream;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x90")]
	private uint _externalFileAttr;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x98")]
	private string _storedEntryName;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0xA0")]
	private byte[] _storedEntryNameBytes;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0xA8")]
	private List<ZipGenericExtraField> _cdUnknownExtraFields;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0xB0")]
	private List<ZipGenericExtraField> _lhUnknownExtraFields;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0xB8")]
	private byte[] _fileComment;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0xC0")]
	private CompressionLevel? _compressionLevel;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_allowLargeZipArchiveEntriesInUpdateMode;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x1")]
	internal static readonly ZipVersionMadeByPlatform CurrentZipPlatform;

	[Token(Token = "0x17000034")]
	public string FullName
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x5F6F5A0", Offset = "0x5F6E5A0", VA = "0x5F6F5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x5F6F450", Offset = "0x5F6E450", VA = "0x5F6F450")]
		private set
		{
		}
	}

	[Token(Token = "0x17000035")]
	private long OffsetOfCompressedData
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x5F6FFB0", Offset = "0x5F6EFB0", VA = "0x5F6FFB0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000036")]
	private MemoryStream UncompressedData
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x5F702B0", Offset = "0x5F6F2B0", VA = "0x5F702B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000037")]
	private CompressionMethodValues CompressionMethod
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x5F70540", Offset = "0x5F6F540", VA = "0x5F70540")]
		get
		{
			return default(CompressionMethodValues);
		}
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x5F6F3B0", Offset = "0x5F6E3B0", VA = "0x5F6F3B0")]
		set
		{
		}
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x5F6D750", Offset = "0x5F6C750", VA = "0x5F6D750")]
	internal ZipArchiveEntry(ZipArchive archive, ZipCentralDirectoryFileHeader cd)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x5F6E7A0", Offset = "0x5F6D7A0", VA = "0x5F6E7A0")]
	public void Delete()
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x5F6F820", Offset = "0x5F6E820", VA = "0x5F6F820")]
	public Stream Open()
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x5F6FFA0", Offset = "0x5F6EFA0", VA = "0x5F6FFA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x5F6F400", Offset = "0x5F6E400", VA = "0x5F6F400")]
	private string DecodeEntryName(byte[] entryNameBytes)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x5F6F5B0", Offset = "0x5F6E5B0", VA = "0x5F6F5B0")]
	private byte[] EncodeEntryName(string entryName, out bool isUTF8)
	{
		return null;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x5F6E8D0", Offset = "0x5F6D8D0", VA = "0x5F6E8D0")]
	internal void WriteAndFinishLocalEntry()
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x5F6E940", Offset = "0x5F6D940", VA = "0x5F6E940")]
	internal void WriteCentralDirectoryFileHeader()
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x5F6E460", Offset = "0x5F6D460", VA = "0x5F6E460")]
	internal bool LoadLocalHeaderExtraFieldAndCompressedBytesIfNeeded()
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x5F6D6F0", Offset = "0x5F6C6F0", VA = "0x5F6D6F0")]
	internal void ThrowIfNotOpenable(bool needToUncompress, bool needToLoadIntoMemory)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x5F71420", Offset = "0x5F70420", VA = "0x5F71420")]
	private CheckSumAndSizeWriteStream GetDataCompressor(Stream backingStream, bool leaveBackingStreamOpen, EventHandler onClose)
	{
		return null;
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x5F71600", Offset = "0x5F70600", VA = "0x5F71600")]
	private Stream GetDataDecompressor(Stream compressedStreamToRead)
	{
		return null;
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x5F6F910", Offset = "0x5F6E910", VA = "0x5F6F910")]
	private Stream OpenInReadMode(bool checkOpenable)
	{
		return null;
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x5F6FA60", Offset = "0x5F6EA60", VA = "0x5F6FA60")]
	private Stream OpenInWriteMode()
	{
		return null;
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x5F6FD20", Offset = "0x5F6ED20", VA = "0x5F6FD20")]
	private Stream OpenInUpdateMode()
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x5F711A0", Offset = "0x5F701A0", VA = "0x5F711A0")]
	private bool IsOpenable(bool needToUncompress, bool needToLoadIntoMemory, out string message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x5F708C0", Offset = "0x5F6F8C0", VA = "0x5F708C0")]
	private bool SizesTooLarge()
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x5F718F0", Offset = "0x5F708F0", VA = "0x5F718F0")]
	private bool WriteLocalFileHeader(bool isEmptyFile)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x5F70570", Offset = "0x5F6F570", VA = "0x5F70570")]
	private void WriteLocalFileHeaderAndDataIfNeeded()
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x5F71D80", Offset = "0x5F70D80", VA = "0x5F71D80")]
	private void WriteCrcAndSizesInLocalHeader(bool zip64HeaderUsed)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x5F720D0", Offset = "0x5F710D0", VA = "0x5F720D0")]
	private void WriteDataDescriptor()
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x5F6F7D0", Offset = "0x5F6E7D0", VA = "0x5F6F7D0")]
	private void UnloadStreams()
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x5F70550", Offset = "0x5F6F550", VA = "0x5F70550")]
	private void CloseStreams()
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x5F6F7B0", Offset = "0x5F6E7B0", VA = "0x5F6F7B0")]
	private void VersionToExtractAtLeast(ZipVersionNeededValues value)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x5F6F8B0", Offset = "0x5F6E8B0", VA = "0x5F6F8B0")]
	private void ThrowIfInvalidArchive()
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x5F721F0", Offset = "0x5F711F0", VA = "0x5F721F0")]
	private static string GetFileName_Windows(string path)
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x5F72260", Offset = "0x5F71260", VA = "0x5F72260")]
	private static string GetFileName_Unix(string path)
	{
		return null;
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x5F6F680", Offset = "0x5F6E680", VA = "0x5F6F680")]
	internal static string ParseFileName(string path, ZipVersionMadeByPlatform madeByPlatform)
	{
		return null;
	}
}
