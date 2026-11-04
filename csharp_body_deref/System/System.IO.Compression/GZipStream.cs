// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.GZipStream
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000292")]
public class GZipStream : Stream
{
	[Token(Token = "0x4000924")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private DeflateStream _deflateStream;

	[Token(Token = "0x170003AC")]
	public override bool CanRead
	{
		[Token(Token = "0x60011EB")]
		[Address(RVA = "0x28FEE40", Offset = "0x28FD440", VA = "0x1828FEE40", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003AD")]
	public override bool CanWrite
	{
		[Token(Token = "0x60011EC")]
		[Address(RVA = "0x28FEE80", Offset = "0x28FD480", VA = "0x1828FEE80", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003AE")]
	public override bool CanSeek
	{
		[Token(Token = "0x60011ED")]
		[Address(RVA = "0x28FEE60", Offset = "0x28FD460", VA = "0x1828FEE60", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003AF")]
	public override long Length
	{
		[Token(Token = "0x60011EE")]
		[Address(RVA = "0x28FEEA0", Offset = "0x28FD4A0", VA = "0x1828FEEA0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003B0")]
	public override long Position
	{
		[Token(Token = "0x60011EF")]
		[Address(RVA = "0x28FEEF0", Offset = "0x28FD4F0", VA = "0x1828FEEF0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60011F0")]
		[Address(RVA = "0x28FEF40", Offset = "0x28FD540", VA = "0x1828FEF40", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x28FEC40", Offset = "0x28FD240", VA = "0x1828FEC40")]
	public GZipStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x28FED90", Offset = "0x28FD390", VA = "0x1828FED90")]
	public GZipStream(Stream stream, CompressionMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x28FECE0", Offset = "0x28FD2E0", VA = "0x1828FECE0")]
	public GZipStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x28FE540", Offset = "0x28FCB40", VA = "0x1828FE540", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x28FE8D0", Offset = "0x28FCED0", VA = "0x1828FE8D0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x28FE920", Offset = "0x28FCF20", VA = "0x1828FE920", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x28FE680", Offset = "0x28FCC80", VA = "0x1828FE680", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x28FE2D0", Offset = "0x28FC8D0", VA = "0x1828FE2D0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x28FE4D0", Offset = "0x28FCAD0", VA = "0x1828FE4D0", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x28FE6B0", Offset = "0x28FCCB0", VA = "0x1828FE6B0", Slot = "32")]
	public override int Read(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x28FE6F0", Offset = "0x28FCCF0", VA = "0x1828FE6F0", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x28FE370", Offset = "0x28FC970", VA = "0x1828FE370", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x198B260", Offset = "0x1989860", VA = "0x18198B260", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x28FEAE0", Offset = "0x28FD0E0", VA = "0x1828FEAE0", Slot = "35")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x28FEB20", Offset = "0x28FD120", VA = "0x1828FEB20", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x28FE430", Offset = "0x28FCA30", VA = "0x1828FE430", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x28FE570", Offset = "0x28FCB70", VA = "0x1828FE570", Slot = "24")]
	public override Task<int> ReadAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x28FE5B0", Offset = "0x28FCBB0", VA = "0x1828FE5B0", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x28FE9D0", Offset = "0x28FCFD0", VA = "0x1828FE9D0", Slot = "28")]
	public override Task WriteAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x28FEA10", Offset = "0x28FD010", VA = "0x1828FEA10", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x28FE510", Offset = "0x28FCB10", VA = "0x1828FE510", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x28FE410", Offset = "0x28FCA10", VA = "0x1828FE410")]
	private void CheckDeflateStream()
	{
	}

	[MethodImpl(MethodImplOptions.NoInlining)]
	[Token(Token = "0x6001204")]
	[Address(RVA = "0x28FE970", Offset = "0x28FCF70", VA = "0x1828FE970")]
	private static void ThrowStreamClosedException()
	{
	}
}
