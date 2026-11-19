// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.ZipArchive
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Text;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000029")]
public class ZipArchive : IDisposable
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x10")]
	private Stream _archiveStream;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x18")]
	private ZipArchiveEntry _archiveStreamOwner;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x20")]
	private BinaryReader _archiveReader;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x28")]
	private ZipArchiveMode _mode;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x30")]
	private List<ZipArchiveEntry> _entries;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x38")]
	private ReadOnlyCollection<ZipArchiveEntry> _entriesCollection;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, ZipArchiveEntry> _entriesDictionary;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x48")]
	private bool _readEntries;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x49")]
	private bool _leaveOpen;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x50")]
	private long _centralDirectoryStart;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x58")]
	private bool _isDisposed;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x5C")]
	private uint _numberOfThisDisk;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x60")]
	private long _expectedNumberOfEntries;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x68")]
	private Stream _backingStream;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x70")]
	private byte[] _archiveComment;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x78")]
	private Encoding _entryNameEncoding;

	[Token(Token = "0x1700002E")]
	public ReadOnlyCollection<ZipArchiveEntry> Entries
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x5F6C3E0", Offset = "0x5F6B3E0", VA = "0x5F6C3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002F")]
	public ZipArchiveMode Mode
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x5F6C500", Offset = "0x5F6B500", VA = "0x5F6C500")]
		get
		{
			return default(ZipArchiveMode);
		}
	}

	[Token(Token = "0x17000030")]
	internal BinaryReader ArchiveReader
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x5F6CB60", Offset = "0x5F6BB60", VA = "0x5F6CB60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000031")]
	internal Stream ArchiveStream
	{
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x5F6CB70", Offset = "0x5F6BB70", VA = "0x5F6CB70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	internal uint NumberOfThisDisk
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x5F6CB80", Offset = "0x5F6BB80", VA = "0x5F6CB80")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000033")]
	internal Encoding EntryNameEncoding
	{
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x5F6CB90", Offset = "0x5F6BB90", VA = "0x5F6CB90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x5F6BB10", Offset = "0x5F6AB10", VA = "0x5F6BB10")]
		private set
		{
		}
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x5F6BA70", Offset = "0x5F6AA70", VA = "0x5F6BA70")]
	public ZipArchive(Stream stream, ZipArchiveMode mode)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x5F6BA80", Offset = "0x5F6AA80", VA = "0x5F6BA80")]
	public ZipArchive(Stream stream, ZipArchiveMode mode, bool leaveOpen, Encoding entryNameEncoding)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x5F6C510", Offset = "0x5F6B510", VA = "0x5F6C510", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x5F6CAF0", Offset = "0x5F6BAF0", VA = "0x5F6CAF0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x5F6CBA0", Offset = "0x5F6BBA0", VA = "0x5F6CBA0")]
	private void AddEntry(ZipArchiveEntry entry)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x5F6CCA0", Offset = "0x5F6BCA0", VA = "0x5F6CCA0")]
	internal void ReleaseArchiveStream(ZipArchiveEntry entry)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x5F6CCC0", Offset = "0x5F6BCC0", VA = "0x5F6CCC0")]
	internal void RemoveEntry(ZipArchiveEntry entry)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x5F6C460", Offset = "0x5F6B460", VA = "0x5F6C460")]
	internal void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x5F6CD40", Offset = "0x5F6BD40", VA = "0x5F6CD40")]
	private void CloseStreams()
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x5F6C4E0", Offset = "0x5F6B4E0", VA = "0x5F6C4E0")]
	private void EnsureCentralDirectoryRead()
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x5F6BBE0", Offset = "0x5F6ABE0", VA = "0x5F6BBE0")]
	private void Init(Stream stream, ZipArchiveMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x5F6CDA0", Offset = "0x5F6BDA0", VA = "0x5F6CDA0")]
	private void ReadCentralDirectory()
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x5F6D070", Offset = "0x5F6C070", VA = "0x5F6D070")]
	private void ReadEndOfCentralDirectory()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x5F6C5B0", Offset = "0x5F6B5B0", VA = "0x5F6C5B0")]
	private void WriteFile()
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x5F6EF40", Offset = "0x5F6DF40", VA = "0x5F6EF40")]
	private void WriteArchiveEpilogue(long startOfCentralDirectory, long sizeOfCentralDirectory)
	{
	}
}
