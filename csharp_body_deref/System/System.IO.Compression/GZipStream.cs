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
		[Address(RVA = "0x48EF550", Offset = "0x48EF550", VA = "0x48EF550", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050D")]
	public override bool CanWrite
	{
		[Token(Token = "0x60016E8")]
		[Address(RVA = "0x48EF570", Offset = "0x48EF570", VA = "0x48EF570", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050E")]
	public override bool CanSeek
	{
		[Token(Token = "0x60016E9")]
		[Address(RVA = "0x48EF590", Offset = "0x48EF590", VA = "0x48EF590", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700050F")]
	public override long Length
	{
		[Token(Token = "0x60016EA")]
		[Address(RVA = "0x48EF5B0", Offset = "0x48EF5B0", VA = "0x48EF5B0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000510")]
	public override long Position
	{
		[Token(Token = "0x60016EB")]
		[Address(RVA = "0x48EF600", Offset = "0x48EF600", VA = "0x48EF600", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60016EC")]
		[Address(RVA = "0x48EF650", Offset = "0x48EF650", VA = "0x48EF650", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60016E4")]
	[Address(RVA = "0x48EF3C0", Offset = "0x48EF3C0", VA = "0x48EF3C0")]
	public GZipStream(Stream stream, CompressionMode mode)
	{
	}

	[Token(Token = "0x60016E5")]
	[Address(RVA = "0x48EF3D0", Offset = "0x48EF3D0", VA = "0x48EF3D0")]
	public GZipStream(Stream stream, CompressionMode mode, bool leaveOpen)
	{
	}

	[Token(Token = "0x60016E6")]
	[Address(RVA = "0x48EF490", Offset = "0x48EF490", VA = "0x48EF490")]
	public GZipStream(Stream stream, CompressionLevel compressionLevel, bool leaveOpen)
	{
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x48EF6A0", Offset = "0x48EF6A0", VA = "0x48EF6A0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x48EF6E0", Offset = "0x48EF6E0", VA = "0x48EF6E0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x48EF730", Offset = "0x48EF730", VA = "0x48EF730", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x48EF780", Offset = "0x48EF780", VA = "0x48EF780", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x48EF7B0", Offset = "0x48EF7B0", VA = "0x48EF7B0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x48EF850", Offset = "0x48EF850", VA = "0x48EF850", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x48EF890", Offset = "0x48EF890", VA = "0x48EF890", Slot = "32")]
	public override int Read(byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x48EF8C0", Offset = "0x48EF8C0", VA = "0x48EF8C0", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x48EFA70", Offset = "0x48EFA70", VA = "0x48EFA70", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int count, AsyncCallback asyncCallback, object asyncState)
	{
		return null;
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x48EFB10", Offset = "0x48EFB10", VA = "0x48EFB10", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x48EFB20", Offset = "0x48EFB20", VA = "0x48EFB20", Slot = "35")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x48EFB50", Offset = "0x48EFB50", VA = "0x48EFB50", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x48EFCF0", Offset = "0x48EFCF0", VA = "0x48EFCF0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x48EFDC0", Offset = "0x48EFDC0", VA = "0x48EFDC0", Slot = "24")]
	public override Task<int> ReadAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x48EFDF0", Offset = "0x48EFDF0", VA = "0x48EFDF0", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x48EFEC0", Offset = "0x48EFEC0", VA = "0x48EFEC0", Slot = "28")]
	public override Task WriteAsync(byte[] array, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x48EFEF0", Offset = "0x48EFEF0", VA = "0x48EFEF0", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x48EFFC0", Offset = "0x48EFFC0", VA = "0x48EFFC0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x48EF6D0", Offset = "0x48EF6D0", VA = "0x48EF6D0")]
	private void CheckDeflateStream()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001700")]
	[Address(RVA = "0x48EFFF0", Offset = "0x48EFFF0", VA = "0x48EFFF0")]
	private static void ThrowStreamClosedException()
	{
	}
}
