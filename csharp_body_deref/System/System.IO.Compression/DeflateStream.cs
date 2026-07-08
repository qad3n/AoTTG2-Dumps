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
		[Address(RVA = "0x45CC880", Offset = "0x45CC880", VA = "0x45CC880", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000512")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001719")]
		[Address(RVA = "0x45CC8C0", Offset = "0x45CC8C0", VA = "0x45CC8C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000513")]
	public override bool CanWrite
	{
		[Token(Token = "0x600171A")]
		[Address(RVA = "0x45CC8D0", Offset = "0x45CC8D0", VA = "0x45CC8D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000514")]
	public override long Length
	{
		[Token(Token = "0x600171B")]
		[Address(RVA = "0x45CC910", Offset = "0x45CC910", VA = "0x45CC910", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000515")]
	public override long Position
	{
		[Token(Token = "0x600171C")]
		[Address(RVA = "0x45CC950", Offset = "0x45CC950", VA = "0x45CC950", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600171D")]
		[Address(RVA = "0x45CC990", Offset = "0x45CC990", VA = "0x45CC990", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x45CAF40", Offset = "0x45CAF40", VA = "0x45CAF40")]
	public DeflateStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x45CA380", Offset = "0x45CA380", VA = "0x45CA380")]
	internal DeflateStream(Stream stream, CompressionMode mode, bool leaveOpen, int windowsBits)
	{
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x45CAF50", Offset = "0x45CAF50", VA = "0x45CAF50")]
	internal DeflateStream(Stream compressedStream, CompressionMode mode, bool leaveOpen, bool gzip)
	{
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x45CB2D0", Offset = "0x45CB2D0", VA = "0x45CB2D0")]
	public DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x45CA440", Offset = "0x45CA440", VA = "0x45CA440")]
	internal DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen, int windowsBits)
	{
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x45CB2E0", Offset = "0x45CB2E0", VA = "0x45CB2E0")]
	internal DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen, bool gzip)
	{
	}

	[Token(Token = "0x6001707")]
	[Address(RVA = "0x45CB2F0", Offset = "0x45CB2F0", VA = "0x45CB2F0", Slot = "1")]
	~DeflateStream()
	{
	}

	[Token(Token = "0x6001708")]
	[Address(RVA = "0x45CB380", Offset = "0x45CB380", VA = "0x45CB380", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001709")]
	[Address(RVA = "0x45CB570", Offset = "0x45CB570", VA = "0x45CB570")]
	private int ReadInternal(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600170A")]
	[Address(RVA = "0x45CADB0", Offset = "0x45CADB0", VA = "0x45CADB0")]
	internal ValueTask<int> ReadAsyncMemory(Memory<byte> destination, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x600170B")]
	[Address(RVA = "0x45CA880", Offset = "0x45CA880", VA = "0x45CA880")]
	internal int ReadCore(Span<byte> destination)
	{
		return default(int);
	}

	[Token(Token = "0x600170C")]
	[Address(RVA = "0x45CB660", Offset = "0x45CB660", VA = "0x45CB660", Slot = "32")]
	public override int Read(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600170D")]
	[Address(RVA = "0x45CB860", Offset = "0x45CB860", VA = "0x45CB860")]
	private void WriteInternal(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x45CAEB0", Offset = "0x45CAEB0", VA = "0x45CAEB0")]
	internal ValueTask WriteAsyncMemory(ReadOnlyMemory<byte> source, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600170F")]
	[Address(RVA = "0x45CAB70", Offset = "0x45CAB70", VA = "0x45CAB70")]
	internal void WriteCore(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x45CB950", Offset = "0x45CB950", VA = "0x45CB950", Slot = "35")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x45CBB60", Offset = "0x45CBB60", VA = "0x45CBB60", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x45CBCB0", Offset = "0x45CBCB0", VA = "0x45CBCB0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6001713")]
	[Address(RVA = "0x45CC100", Offset = "0x45CC100", VA = "0x45CC100", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x45CC550", Offset = "0x45CC550", VA = "0x45CC550", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x45CC6C0", Offset = "0x45CC6C0", VA = "0x45CC6C0", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x45CC800", Offset = "0x45CC800", VA = "0x45CC800", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x45CC840", Offset = "0x45CC840", VA = "0x45CC840", Slot = "31")]
	public override void SetLength(long value)
	{
	}
}
