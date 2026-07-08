using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000371")]
public class GZipStream : Stream
{
	[Token(Token = "0x4000FAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private DeflateStream _deflateStream;

	[Token(Token = "0x1700050C")]
	public override bool CanRead
	{
		[Token(Token = "0x60016E7")]
		[Address(RVA = "0x45CA450", Offset = "0x45CA450", VA = "0x45CA450", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050D")]
	public override bool CanWrite
	{
		[Token(Token = "0x60016E8")]
		[Address(RVA = "0x45CA470", Offset = "0x45CA470", VA = "0x45CA470", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050E")]
	public override bool CanSeek
	{
		[Token(Token = "0x60016E9")]
		[Address(RVA = "0x45CA490", Offset = "0x45CA490", VA = "0x45CA490", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050F")]
	public override long Length
	{
		[Token(Token = "0x60016EA")]
		[Address(RVA = "0x45CA4B0", Offset = "0x45CA4B0", VA = "0x45CA4B0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000510")]
	public override long Position
	{
		[Token(Token = "0x60016EB")]
		[Address(RVA = "0x45CA500", Offset = "0x45CA500", VA = "0x45CA500", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60016EC")]
		[Address(RVA = "0x45CA550", Offset = "0x45CA550", VA = "0x45CA550", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x45CA2C0", Offset = "0x45CA2C0", VA = "0x45CA2C0")]
	public GZipStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x45CA2D0", Offset = "0x45CA2D0", VA = "0x45CA2D0")]
	public GZipStream(Stream stream, CompressionMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x45CA390", Offset = "0x45CA390", VA = "0x45CA390")]
	public GZipStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x45CA5A0", Offset = "0x45CA5A0", VA = "0x45CA5A0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x45CA5E0", Offset = "0x45CA5E0", VA = "0x45CA5E0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x45CA630", Offset = "0x45CA630", VA = "0x45CA630", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x45CA680", Offset = "0x45CA680", VA = "0x45CA680", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x45CA6B0", Offset = "0x45CA6B0", VA = "0x45CA6B0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x45CA750", Offset = "0x45CA750", VA = "0x45CA750", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x45CA790", Offset = "0x45CA790", VA = "0x45CA790", Slot = "32")]
	public override int Read(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x45CA7C0", Offset = "0x45CA7C0", VA = "0x45CA7C0", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x45CA970", Offset = "0x45CA970", VA = "0x45CA970", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x45CAA10", Offset = "0x45CAA10", VA = "0x45CAA10", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x45CAA20", Offset = "0x45CAA20", VA = "0x45CAA20", Slot = "35")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x45CAA50", Offset = "0x45CAA50", VA = "0x45CAA50", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x45CABF0", Offset = "0x45CABF0", VA = "0x45CABF0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x45CACC0", Offset = "0x45CACC0", VA = "0x45CACC0", Slot = "24")]
	public override Task<int> ReadAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x45CACF0", Offset = "0x45CACF0", VA = "0x45CACF0", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x45CADC0", Offset = "0x45CADC0", VA = "0x45CADC0", Slot = "28")]
	public override Task WriteAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x45CADF0", Offset = "0x45CADF0", VA = "0x45CADF0", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x45CAEC0", Offset = "0x45CAEC0", VA = "0x45CAEC0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x45CA5D0", Offset = "0x45CA5D0", VA = "0x45CA5D0")]
	private void CheckDeflateStream()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001700")]
	[Address(RVA = "0x45CAEF0", Offset = "0x45CAEF0", VA = "0x45CAEF0")]
	private static void ThrowStreamClosedException()
	{
	}
}
