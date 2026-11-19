// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.DeflateStream
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000254")]
public class DeflateStream : Stream
{
	[Token(Token = "0x2000255")]
	private delegate int ReadMethod(byte[] array, int offset, int count);

	[Token(Token = "0x2000256")]
	private delegate void WriteMethod(byte[] array, int offset, int count);

	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x28")]
	private Stream base_stream;

	[Token(Token = "0x4000857")]
	[FieldOffset(Offset = "0x30")]
	private CompressionMode mode;

	[Token(Token = "0x4000858")]
	[FieldOffset(Offset = "0x34")]
	private bool leaveOpen;

	[Token(Token = "0x4000859")]
	[FieldOffset(Offset = "0x35")]
	private bool disposed;

	[Token(Token = "0x400085A")]
	[FieldOffset(Offset = "0x38")]
	private DeflateStreamNative native;

	[Token(Token = "0x17000382")]
	public override bool CanRead
	{
		[Token(Token = "0x600105E")]
		[Address(RVA = "0x628DE00", Offset = "0x628CE00", VA = "0x628DE00", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000383")]
	public override bool CanSeek
	{
		[Token(Token = "0x600105F")]
		[Address(RVA = "0x628DE40", Offset = "0x628CE40", VA = "0x628DE40", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000384")]
	public override bool CanWrite
	{
		[Token(Token = "0x6001060")]
		[Address(RVA = "0x628DE50", Offset = "0x628CE50", VA = "0x628DE50", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000385")]
	public override long Length
	{
		[Token(Token = "0x6001061")]
		[Address(RVA = "0x628DE90", Offset = "0x628CE90", VA = "0x628DE90", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000386")]
	public override long Position
	{
		[Token(Token = "0x6001062")]
		[Address(RVA = "0x628DED0", Offset = "0x628CED0", VA = "0x628DED0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001063")]
		[Address(RVA = "0x628DF10", Offset = "0x628CF10", VA = "0x628DF10", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x628C410", Offset = "0x628B410", VA = "0x628C410")]
	public DeflateStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x628C580", Offset = "0x628B580", VA = "0x628C580")]
	public DeflateStream(Stream stream, CompressionMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x628B820", Offset = "0x628A820", VA = "0x628B820")]
	internal DeflateStream(Stream stream, CompressionMode mode, bool leaveOpen, int windowsBits)
	{
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x628C420", Offset = "0x628B420", VA = "0x628C420")]
	internal DeflateStream(Stream compressedStream, CompressionMode mode, bool leaveOpen, bool gzip)
	{
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x628C820", Offset = "0x628B820", VA = "0x628C820")]
	public DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x628B8E0", Offset = "0x628A8E0", VA = "0x628B8E0")]
	internal DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen, int windowsBits)
	{
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x628C830", Offset = "0x628B830", VA = "0x628C830")]
	internal DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen, bool gzip)
	{
	}

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x628C840", Offset = "0x628B840", VA = "0x628C840", Slot = "1")]
	~DeflateStream()
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x628C8E0", Offset = "0x628B8E0", VA = "0x628C8E0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x628CAD0", Offset = "0x628BAD0", VA = "0x628CAD0")]
	private int ReadInternal(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x628C280", Offset = "0x628B280", VA = "0x628C280")]
	internal ValueTask<int> ReadAsyncMemory(Memory<byte> destination, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x628BD20", Offset = "0x628AD20", VA = "0x628BD20")]
	internal int ReadCore(Span<byte> destination)
	{
		return default(int);
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x628CBC0", Offset = "0x628BBC0", VA = "0x628CBC0", Slot = "33")]
	public override int Read(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x628CDC0", Offset = "0x628BDC0", VA = "0x628CDC0")]
	private void WriteInternal(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x628C380", Offset = "0x628B380", VA = "0x628C380")]
	internal ValueTask WriteAsyncMemory(ReadOnlyMemory<byte> source, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x628C020", Offset = "0x628B020", VA = "0x628C020")]
	internal void WriteCore(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x628CEB0", Offset = "0x628BEB0", VA = "0x628CEB0", Slot = "36")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x628D0D0", Offset = "0x628C0D0", VA = "0x628D0D0", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x628D220", Offset = "0x628C220", VA = "0x628D220", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x628D670", Offset = "0x628C670", VA = "0x628D670", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x628DAC0", Offset = "0x628CAC0", VA = "0x628DAC0", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x628DC40", Offset = "0x628CC40", VA = "0x628DC40", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x628DD80", Offset = "0x628CD80", VA = "0x628DD80", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x628DDC0", Offset = "0x628CDC0", VA = "0x628DDC0", Slot = "32")]
	public override void SetLength(long value)
	{
	}
}
