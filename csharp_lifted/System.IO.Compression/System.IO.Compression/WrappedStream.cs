// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.WrappedStream
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000037")]
internal sealed class WrappedStream : Stream
{
	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x28")]
	private readonly Stream _baseStream;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x30")]
	private readonly bool _closeBaseStream;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x38")]
	private readonly Action<ZipArchiveEntry> _onClosed;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x40")]
	private readonly ZipArchiveEntry _zipArchiveEntry;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x48")]
	private bool _isDisposed;

	[Token(Token = "0x17000045")]
	public override long Length
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x5F74050", Offset = "0x5F73050", VA = "0x5F74050", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000046")]
	public override long Position
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x5F74110", Offset = "0x5F73110", VA = "0x5F74110", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x5F74140", Offset = "0x5F73140", VA = "0x5F74140", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public override bool CanRead
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x5F74240", Offset = "0x5F73240", VA = "0x5F74240", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public override bool CanSeek
	{
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x5F74270", Offset = "0x5F73270", VA = "0x5F74270", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000049")]
	public override bool CanWrite
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x5F742A0", Offset = "0x5F732A0", VA = "0x5F742A0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x5F717C0", Offset = "0x5F707C0", VA = "0x5F717C0")]
	internal WrappedStream(Stream baseStream, bool closeBaseStream)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x5F73FB0", Offset = "0x5F72FB0", VA = "0x5F73FB0")]
	private WrappedStream(Stream baseStream, bool closeBaseStream, ZipArchiveEntry entry, Action<ZipArchiveEntry> onClosed)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x5F71850", Offset = "0x5F70850", VA = "0x5F71850")]
	internal WrappedStream(Stream baseStream, ZipArchiveEntry entry, Action<ZipArchiveEntry> onClosed)
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x5F74080", Offset = "0x5F73080", VA = "0x5F74080")]
	private void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x5F742D0", Offset = "0x5F732D0", VA = "0x5F742D0")]
	private void ThrowIfCantRead()
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x5F74330", Offset = "0x5F73330", VA = "0x5F74330")]
	private void ThrowIfCantWrite()
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x5F741E0", Offset = "0x5F731E0", VA = "0x5F741E0")]
	private void ThrowIfCantSeek()
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x5F74390", Offset = "0x5F73390", VA = "0x5F74390", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x5F74440", Offset = "0x5F73440", VA = "0x5F74440", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x5F744E0", Offset = "0x5F734E0", VA = "0x5F744E0", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x5F745D0", Offset = "0x5F735D0", VA = "0x5F745D0", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x5F74680", Offset = "0x5F73680", VA = "0x5F74680", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x5F74710", Offset = "0x5F73710", VA = "0x5F74710", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}
}
