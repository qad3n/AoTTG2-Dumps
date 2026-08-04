// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.DeflateStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000372")]
public class DeflateStream : Stream
{
	[Token(Token = "0x2000373")]
	private delegate int ReadMethod(byte[] array, int offset, int count);

	[Token(Token = "0x2000374")]
	private delegate void WriteMethod(byte[] array, int offset, int count);

	[Token(Token = "0x4000FAD")]
	[FieldOffset(Offset = "0x28")]
	private Stream base_stream;

	[Token(Token = "0x4000FAE")]
	[FieldOffset(Offset = "0x30")]
	private CompressionMode mode;

	[Token(Token = "0x4000FAF")]
	[FieldOffset(Offset = "0x34")]
	private bool leaveOpen;

	[Token(Token = "0x4000FB0")]
	[FieldOffset(Offset = "0x35")]
	private bool disposed;

	[Token(Token = "0x4000FB1")]
	[FieldOffset(Offset = "0x38")]
	private DeflateStreamNative native;

	[Token(Token = "0x17000511")]
	public override bool CanRead
	{
		[Token(Token = "0x6001718")]
		[Address(RVA = "0x48F1980", Offset = "0x48F1980", VA = "0x48F1980", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000512")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001719")]
		[Address(RVA = "0x48F19C0", Offset = "0x48F19C0", VA = "0x48F19C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000513")]
	public override bool CanWrite
	{
		[Token(Token = "0x600171A")]
		[Address(RVA = "0x48F19D0", Offset = "0x48F19D0", VA = "0x48F19D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000514")]
	public override long Length
	{
		[Token(Token = "0x600171B")]
		[Address(RVA = "0x48F1A10", Offset = "0x48F1A10", VA = "0x48F1A10", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000515")]
	public override long Position
	{
		[Token(Token = "0x600171C")]
		[Address(RVA = "0x48F1A50", Offset = "0x48F1A50", VA = "0x48F1A50", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600171D")]
		[Address(RVA = "0x48F1A90", Offset = "0x48F1A90", VA = "0x48F1A90", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x48F0040", Offset = "0x48F0040", VA = "0x48F0040")]
	public DeflateStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x48EF480", Offset = "0x48EF480", VA = "0x48EF480")]
	internal DeflateStream(Stream stream, CompressionMode mode, bool leaveOpen, int windowsBits)
	{
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x48F0050", Offset = "0x48F0050", VA = "0x48F0050")]
	internal DeflateStream(Stream compressedStream, CompressionMode mode, bool leaveOpen, bool gzip)
	{
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x48F03D0", Offset = "0x48F03D0", VA = "0x48F03D0")]
	public DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x48EF540", Offset = "0x48EF540", VA = "0x48EF540")]
	internal DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen, int windowsBits)
	{
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x48F03E0", Offset = "0x48F03E0", VA = "0x48F03E0")]
	internal DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen, bool gzip)
	{
	}

	[Token(Token = "0x6001707")]
	[Address(RVA = "0x48F03F0", Offset = "0x48F03F0", VA = "0x48F03F0", Slot = "1")]
	~DeflateStream()
	{
	}

	[Token(Token = "0x6001708")]
	[Address(RVA = "0x48F0480", Offset = "0x48F0480", VA = "0x48F0480", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001709")]
	[Address(RVA = "0x48F0670", Offset = "0x48F0670", VA = "0x48F0670")]
	private int ReadInternal(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600170A")]
	[Address(RVA = "0x48EFEB0", Offset = "0x48EFEB0", VA = "0x48EFEB0")]
	internal ValueTask<int> ReadAsyncMemory(Memory<byte> destination, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x600170B")]
	[Address(RVA = "0x48EF980", Offset = "0x48EF980", VA = "0x48EF980")]
	internal int ReadCore(Span<byte> destination)
	{
		return default(int);
	}

	[Token(Token = "0x600170C")]
	[Address(RVA = "0x48F0760", Offset = "0x48F0760", VA = "0x48F0760", Slot = "32")]
	public override int Read(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600170D")]
	[Address(RVA = "0x48F0960", Offset = "0x48F0960", VA = "0x48F0960")]
	private void WriteInternal(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x48EFFB0", Offset = "0x48EFFB0", VA = "0x48EFFB0")]
	internal ValueTask WriteAsyncMemory(ReadOnlyMemory<byte> source, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600170F")]
	[Address(RVA = "0x48EFC70", Offset = "0x48EFC70", VA = "0x48EFC70")]
	internal void WriteCore(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x48F0A50", Offset = "0x48F0A50", VA = "0x48F0A50", Slot = "35")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x48F0C60", Offset = "0x48F0C60", VA = "0x48F0C60", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x48F0DB0", Offset = "0x48F0DB0", VA = "0x48F0DB0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6001713")]
	[Address(RVA = "0x48F1200", Offset = "0x48F1200", VA = "0x48F1200", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x48F1650", Offset = "0x48F1650", VA = "0x48F1650", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x48F17C0", Offset = "0x48F17C0", VA = "0x48F17C0", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x48F1900", Offset = "0x48F1900", VA = "0x48F1900", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x48F1940", Offset = "0x48F1940", VA = "0x48F1940", Slot = "31")]
	public override void SetLength(long value)
	{
	}
}
