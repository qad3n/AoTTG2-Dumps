// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.TailStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002E9")]
internal sealed class TailStream : Stream
{
	[Token(Token = "0x4000D1A")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _Buffer;

	[Token(Token = "0x4000D1B")]
	[FieldOffset(Offset = "0x30")]
	private int _BufferSize;

	[Token(Token = "0x4000D1C")]
	[FieldOffset(Offset = "0x34")]
	private int _BufferIndex;

	[Token(Token = "0x4000D1D")]
	[FieldOffset(Offset = "0x38")]
	private bool _BufferFull;

	[Token(Token = "0x170002B1")]
	public byte[] Buffer
	{
		[Token(Token = "0x6001950")]
		[Address(RVA = "0x3B33EC0", Offset = "0x3B33EC0", VA = "0x3B33EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B2")]
	public override bool CanRead
	{
		[Token(Token = "0x6001951")]
		[Address(RVA = "0x3B34150", Offset = "0x3B34150", VA = "0x3B34150", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B3")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001952")]
		[Address(RVA = "0x3B34160", Offset = "0x3B34160", VA = "0x3B34160", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B4")]
	public override bool CanWrite
	{
		[Token(Token = "0x6001953")]
		[Address(RVA = "0x3B34170", Offset = "0x3B34170", VA = "0x3B34170", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B5")]
	public override long Length
	{
		[Token(Token = "0x6001954")]
		[Address(RVA = "0x3B34180", Offset = "0x3B34180", VA = "0x3B34180", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002B6")]
	public override long Position
	{
		[Token(Token = "0x6001955")]
		[Address(RVA = "0x3B341E0", Offset = "0x3B341E0", VA = "0x3B341E0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001956")]
		[Address(RVA = "0x3B34240", Offset = "0x3B34240", VA = "0x3B34240", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x600194D")]
	[Address(RVA = "0x3B33C00", Offset = "0x3B33C00", VA = "0x3B33C00")]
	public TailStream(int bufferSize)
	{
	}

	[Token(Token = "0x600194E")]
	[Address(RVA = "0x3B34060", Offset = "0x3B34060", VA = "0x3B34060")]
	public void Clear()
	{
	}

	[Token(Token = "0x600194F")]
	[Address(RVA = "0x3B34080", Offset = "0x3B34080", VA = "0x3B34080", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001957")]
	[Address(RVA = "0x3B342A0", Offset = "0x3B342A0", VA = "0x3B342A0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001958")]
	[Address(RVA = "0x3B342B0", Offset = "0x3B342B0", VA = "0x3B342B0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001959")]
	[Address(RVA = "0x3B34310", Offset = "0x3B34310", VA = "0x3B34310", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600195A")]
	[Address(RVA = "0x3B34370", Offset = "0x3B34370", VA = "0x3B34370", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600195B")]
	[Address(RVA = "0x3B343D0", Offset = "0x3B343D0", VA = "0x3B343D0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}
}
