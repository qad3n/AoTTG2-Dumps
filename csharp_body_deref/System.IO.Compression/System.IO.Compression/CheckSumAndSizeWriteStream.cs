// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.CheckSumAndSizeWriteStream
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000039")]
internal sealed class CheckSumAndSizeWriteStream : Stream
{
	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x28")]
	private readonly Stream _baseStream;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x30")]
	private readonly Stream _baseBaseStream;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x38")]
	private long _position;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x40")]
	private uint _checksum;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x44")]
	private readonly bool _leaveOpenOnClose;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x45")]
	private bool _canWrite;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x46")]
	private bool _isDisposed;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x47")]
	private bool _everWritten;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x48")]
	private long _initialPosition;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x50")]
	private readonly ZipArchiveEntry _zipArchiveEntry;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x58")]
	private readonly EventHandler _onClose;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x60")]
	private readonly Action<long, long, uint, Stream, ZipArchiveEntry, EventHandler> _saveCrcAndSizes;

	[Token(Token = "0x1700004F")]
	public override long Length
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x5F74DA0", Offset = "0x5F73DA0", VA = "0x5F74DA0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000050")]
	public override long Position
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x5F74E80", Offset = "0x5F73E80", VA = "0x5F74E80", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x5F74E90", Offset = "0x5F73E90", VA = "0x5F74E90", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public override bool CanRead
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x5F74EE0", Offset = "0x5F73EE0", VA = "0x5F74EE0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000052")]
	public override bool CanSeek
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x5F74EF0", Offset = "0x5F73EF0", VA = "0x5F74EF0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000053")]
	public override bool CanWrite
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x5F74F00", Offset = "0x5F73F00", VA = "0x5F74F00", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x5F74CB0", Offset = "0x5F73CB0", VA = "0x5F74CB0")]
	public CheckSumAndSizeWriteStream(Stream baseStream, Stream baseBaseStream, bool leaveOpenOnClose, ZipArchiveEntry entry, EventHandler onClose, Action<long, long, uint, Stream, ZipArchiveEntry, EventHandler> saveCrcAndSizes)
	{
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x5F74DF0", Offset = "0x5F73DF0", VA = "0x5F74DF0")]
	private void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x5F74F10", Offset = "0x5F73F10", VA = "0x5F74F10", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x5F74F60", Offset = "0x5F73F60", VA = "0x5F74F60", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x5F74FB0", Offset = "0x5F73FB0", VA = "0x5F74FB0", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x5F75000", Offset = "0x5F74000", VA = "0x5F75000", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x5F75290", Offset = "0x5F74290", VA = "0x5F75290", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x5F752C0", Offset = "0x5F742C0", VA = "0x5F752C0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}
}
