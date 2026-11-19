// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.SubReadStream
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000038")]
internal sealed class SubReadStream : Stream
{
	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x28")]
	private readonly long _startInSuperStream;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x30")]
	private long _positionInSuperStream;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x38")]
	private readonly long _endInSuperStream;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x40")]
	private readonly Stream _superStream;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x48")]
	private bool _canRead;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x49")]
	private bool _isDisposed;

	[Token(Token = "0x1700004A")]
	public override long Length
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x5F74770", Offset = "0x5F73770", VA = "0x5F74770", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700004B")]
	public override long Position
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x5F74820", Offset = "0x5F73820", VA = "0x5F74820", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x5F74840", Offset = "0x5F73840", VA = "0x5F74840", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public override bool CanRead
	{
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x5F74890", Offset = "0x5F73890", VA = "0x5F74890", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004D")]
	public override bool CanSeek
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x5F748D0", Offset = "0x5F738D0", VA = "0x5F748D0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004E")]
	public override bool CanWrite
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x5F748E0", Offset = "0x5F738E0", VA = "0x5F748E0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x5F716A0", Offset = "0x5F706A0", VA = "0x5F716A0")]
	public SubReadStream(Stream superStream, long startPosition, long maxLength)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x5F74790", Offset = "0x5F73790", VA = "0x5F74790")]
	private void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x5F748F0", Offset = "0x5F738F0", VA = "0x5F748F0")]
	private void ThrowIfCantRead()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x5F74950", Offset = "0x5F73950", VA = "0x5F74950", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x5F74A60", Offset = "0x5F73A60", VA = "0x5F74A60", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x5F74AB0", Offset = "0x5F73AB0", VA = "0x5F74AB0", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x5F74B00", Offset = "0x5F73B00", VA = "0x5F74B00", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x5F74B50", Offset = "0x5F73B50", VA = "0x5F74B50", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x5F74BA0", Offset = "0x5F73BA0", VA = "0x5F74BA0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}
}
