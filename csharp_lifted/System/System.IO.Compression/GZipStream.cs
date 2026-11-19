// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.GZipStream
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000253")]
public class GZipStream : Stream
{
	[Token(Token = "0x4000855")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private DeflateStream _deflateStream;

	[Token(Token = "0x1700037D")]
	public override bool CanRead
	{
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x628B8F0", Offset = "0x628A8F0", VA = "0x628B8F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700037E")]
	public override bool CanWrite
	{
		[Token(Token = "0x600102C")]
		[Address(RVA = "0x628B910", Offset = "0x628A910", VA = "0x628B910", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700037F")]
	public override bool CanSeek
	{
		[Token(Token = "0x600102D")]
		[Address(RVA = "0x628B930", Offset = "0x628A930", VA = "0x628B930", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000380")]
	public override long Length
	{
		[Token(Token = "0x600102E")]
		[Address(RVA = "0x628B950", Offset = "0x628A950", VA = "0x628B950", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000381")]
	public override long Position
	{
		[Token(Token = "0x600102F")]
		[Address(RVA = "0x628B9A0", Offset = "0x628A9A0", VA = "0x628B9A0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001030")]
		[Address(RVA = "0x628B9F0", Offset = "0x628A9F0", VA = "0x628B9F0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x628B760", Offset = "0x628A760", VA = "0x628B760")]
	public GZipStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x628B770", Offset = "0x628A770", VA = "0x628B770")]
	public GZipStream(Stream stream, CompressionMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x628B830", Offset = "0x628A830", VA = "0x628B830")]
	public GZipStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x628BA40", Offset = "0x628AA40", VA = "0x628BA40", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x628BA80", Offset = "0x628AA80", VA = "0x628BA80", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x628BAD0", Offset = "0x628AAD0", VA = "0x628BAD0", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x628BB20", Offset = "0x628AB20", VA = "0x628BB20", Slot = "35")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x628BB50", Offset = "0x628AB50", VA = "0x628BB50", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x628BBF0", Offset = "0x628ABF0", VA = "0x628BBF0", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x628BC30", Offset = "0x628AC30", VA = "0x628BC30", Slot = "33")]
	public override int Read(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x628BC60", Offset = "0x628AC60", VA = "0x628BC60", Slot = "34")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x628BE20", Offset = "0x628AE20", VA = "0x628BE20", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x628BEC0", Offset = "0x628AEC0", VA = "0x628BEC0", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x628BED0", Offset = "0x628AED0", VA = "0x628BED0", Slot = "36")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x628BF00", Offset = "0x628AF00", VA = "0x628BF00", Slot = "37")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x628C0A0", Offset = "0x628B0A0", VA = "0x628C0A0", Slot = "18")]
	public override void CopyTo(Stream destination, int bufferSize)
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x628C0D0", Offset = "0x628B0D0", VA = "0x628C0D0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x628C190", Offset = "0x628B190", VA = "0x628C190", Slot = "25")]
	public override Task<int> ReadAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x628C1C0", Offset = "0x628B1C0", VA = "0x628C1C0", Slot = "26")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x628C290", Offset = "0x628B290", VA = "0x628C290", Slot = "29")]
	public override Task WriteAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x628C2C0", Offset = "0x628B2C0", VA = "0x628C2C0", Slot = "30")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x628C390", Offset = "0x628B390", VA = "0x628C390", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x628BA70", Offset = "0x628AA70", VA = "0x628BA70")]
	private void CheckDeflateStream()
	{
	}

	[MethodImpl(MethodImplOptions.NoInlining)]
	[Token(Token = "0x6001045")]
	[Address(RVA = "0x628C3C0", Offset = "0x628B3C0", VA = "0x628C3C0")]
	private static void ThrowStreamClosedException()
	{
	}
}
