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

[Token(Token = "0x2000293")]
public class DeflateStream : Stream
{
	[Token(Token = "0x2000294")]
	private delegate int ReadMethod(byte[] array, int offset, int count);

	[Token(Token = "0x2000295")]
	private delegate void WriteMethod(byte[] array, int offset, int count);

	[Token(Token = "0x4000925")]
	[FieldOffset(Offset = "0x28")]
	private Stream base_stream;

	[Token(Token = "0x4000926")]
	[FieldOffset(Offset = "0x30")]
	private CompressionMode mode;

	[Token(Token = "0x4000927")]
	[FieldOffset(Offset = "0x34")]
	private bool leaveOpen;

	[Token(Token = "0x4000928")]
	[FieldOffset(Offset = "0x35")]
	private bool disposed;

	[Token(Token = "0x4000929")]
	[FieldOffset(Offset = "0x38")]
	private DeflateStreamNative native;

	[Token(Token = "0x170003B1")]
	public override bool CanRead
	{
		[Token(Token = "0x600121C")]
		[Address(RVA = "0x28F0680", Offset = "0x28EEC80", VA = "0x1828F0680", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003B2")]
	public override bool CanSeek
	{
		[Token(Token = "0x600121D")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003B3")]
	public override bool CanWrite
	{
		[Token(Token = "0x600121E")]
		[Address(RVA = "0x28F06C0", Offset = "0x28EECC0", VA = "0x1828F06C0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003B4")]
	public override long Length
	{
		[Token(Token = "0x600121F")]
		[Address(RVA = "0x28F0700", Offset = "0x28EED00", VA = "0x1828F0700", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003B5")]
	public override long Position
	{
		[Token(Token = "0x6001220")]
		[Address(RVA = "0x28F0740", Offset = "0x28EED40", VA = "0x1828F0740", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001221")]
		[Address(RVA = "0x28F0780", Offset = "0x28EED80", VA = "0x1828F0780", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x28F0460", Offset = "0x28EEA60", VA = "0x1828F0460")]
	public DeflateStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x28F0660", Offset = "0x28EEC60", VA = "0x1828F0660")]
	internal DeflateStream(Stream stream, CompressionMode mode, bool leaveOpen, int windowsBits)
	{
	}

	[Token(Token = "0x6001207")]
	[Address(RVA = "0x28F04B0", Offset = "0x28EEAB0", VA = "0x1828F04B0")]
	internal DeflateStream(Stream compressedStream, CompressionMode mode, bool leaveOpen, bool gzip)
	{
	}

	[Token(Token = "0x6001208")]
	[Address(RVA = "0x28F0480", Offset = "0x28EEA80", VA = "0x1828F0480")]
	public DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x28F0440", Offset = "0x28EEA40", VA = "0x1828F0440")]
	internal DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen, int windowsBits)
	{
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x28F0640", Offset = "0x28EEC40", VA = "0x1828F0640")]
	internal DeflateStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen, bool gzip)
	{
	}

	[Token(Token = "0x600120B")]
	[Address(RVA = "0x1AD9EE0", Offset = "0x1AD84E0", VA = "0x181AD9EE0", Slot = "1")]
	~DeflateStream()
	{
	}

	[Token(Token = "0x600120C")]
	[Address(RVA = "0x28EF3E0", Offset = "0x28ED9E0", VA = "0x1828EF3E0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x28EFAC0", Offset = "0x28EE0C0", VA = "0x1828EFAC0")]
	private int ReadInternal(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x28EF960", Offset = "0x28EDF60", VA = "0x1828EF960")]
	internal ValueTask<int> ReadAsyncMemory(Memory<byte> destination, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x28EF9A0", Offset = "0x28EDFA0", VA = "0x1828EF9A0")]
	internal int ReadCore(Span<byte> destination)
	{
		return default(int);
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x28EFBD0", Offset = "0x28EE1D0", VA = "0x1828EFBD0", Slot = "32")]
	public override int Read(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x28F0030", Offset = "0x28EE630", VA = "0x1828F0030")]
	private void WriteInternal(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x28EFF70", Offset = "0x28EE570", VA = "0x1828EFF70")]
	internal ValueTask WriteAsyncMemory(ReadOnlyMemory<byte> source, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x28EFFB0", Offset = "0x28EE5B0", VA = "0x1828EFFB0")]
	internal void WriteCore(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x28F0130", Offset = "0x28EE730", VA = "0x1828F0130", Slot = "35")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6001215")]
	[Address(RVA = "0x28EF820", Offset = "0x28EDE20", VA = "0x1828EF820", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x28EEC80", Offset = "0x28ED280", VA = "0x1828EEC80", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x28EF030", Offset = "0x28ED630", VA = "0x1828EF030", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6001218")]
	[Address(RVA = "0x28EF4A0", Offset = "0x28EDAA0", VA = "0x1828EF4A0", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x28EF670", Offset = "0x28EDC70", VA = "0x1828EF670", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x28EFEF0", Offset = "0x28EE4F0", VA = "0x1828EFEF0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x28EFF30", Offset = "0x28EE530", VA = "0x1828EFF30", Slot = "31")]
	public override void SetLength(long value)
	{
	}
}
