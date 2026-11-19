// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.PositionPreservingWriteOnlyStreamWrapper
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000028")]
internal sealed class PositionPreservingWriteOnlyStreamWrapper : Stream
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x28")]
	private readonly Stream _stream;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x30")]
	private long _position;

	[Token(Token = "0x17000026")]
	public override bool CanRead
	{
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x5F6B610", Offset = "0x5F6A610", VA = "0x5F6B610", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000027")]
	public override bool CanSeek
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x5F6B620", Offset = "0x5F6A620", VA = "0x5F6B620", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000028")]
	public override bool CanWrite
	{
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x5F6B630", Offset = "0x5F6A630", VA = "0x5F6B630", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public override long Position
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x5F6B640", Offset = "0x5F6A640", VA = "0x5F6B640", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x5F6B650", Offset = "0x5F6A650", VA = "0x5F6B650", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public override bool CanTimeout
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x5F6B790", Offset = "0x5F6A790", VA = "0x5F6B790", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	public override int ReadTimeout
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x5F6B7C0", Offset = "0x5F6A7C0", VA = "0x5F6B7C0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x5F6B7F0", Offset = "0x5F6A7F0", VA = "0x5F6B7F0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public override int WriteTimeout
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x5F6B820", Offset = "0x5F6A820", VA = "0x5F6B820", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x5F6B850", Offset = "0x5F6A850", VA = "0x5F6B850", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public override long Length
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x5F6B930", Offset = "0x5F6A930", VA = "0x5F6B930", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x5F6B5A0", Offset = "0x5F6A5A0", VA = "0x5F6B5A0")]
	public PositionPreservingWriteOnlyStreamWrapper(Stream stream)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x5F6B6A0", Offset = "0x5F6A6A0", VA = "0x5F6B6A0", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x5F6B6D0", Offset = "0x5F6A6D0", VA = "0x5F6B6D0", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x5F6B700", Offset = "0x5F6A700", VA = "0x5F6B700", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x5F6B730", Offset = "0x5F6A730", VA = "0x5F6B730", Slot = "38")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x5F6B760", Offset = "0x5F6A760", VA = "0x5F6B760", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x5F6B880", Offset = "0x5F6A880", VA = "0x5F6B880", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x5F6B8B0", Offset = "0x5F6A8B0", VA = "0x5F6B8B0", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x5F6B8E0", Offset = "0x5F6A8E0", VA = "0x5F6B8E0", Slot = "19")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x5F6B910", Offset = "0x5F6A910", VA = "0x5F6B910", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x5F6B980", Offset = "0x5F6A980", VA = "0x5F6B980", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x5F6B9D0", Offset = "0x5F6A9D0", VA = "0x5F6B9D0", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x5F6BA20", Offset = "0x5F6AA20", VA = "0x5F6BA20", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}
}
