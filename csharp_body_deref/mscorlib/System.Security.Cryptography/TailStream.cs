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
		[Address(RVA = "0x4E4E3A0", Offset = "0x4E4E3A0", VA = "0x4E4E3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B2")]
	public override bool CanRead
	{
		[Token(Token = "0x6001951")]
		[Address(RVA = "0x4E4E630", Offset = "0x4E4E630", VA = "0x4E4E630", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B3")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001952")]
		[Address(RVA = "0x4E4E640", Offset = "0x4E4E640", VA = "0x4E4E640", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B4")]
	public override bool CanWrite
	{
		[Token(Token = "0x6001953")]
		[Address(RVA = "0x4E4E650", Offset = "0x4E4E650", VA = "0x4E4E650", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B5")]
	public override long Length
	{
		[Token(Token = "0x6001954")]
		[Address(RVA = "0x4E4E660", Offset = "0x4E4E660", VA = "0x4E4E660", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002B6")]
	public override long Position
	{
		[Token(Token = "0x6001955")]
		[Address(RVA = "0x4E4E6C0", Offset = "0x4E4E6C0", VA = "0x4E4E6C0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001956")]
		[Address(RVA = "0x4E4E720", Offset = "0x4E4E720", VA = "0x4E4E720", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x600194D")]
	[Address(RVA = "0x4E4E0E0", Offset = "0x4E4E0E0", VA = "0x4E4E0E0")]
	public TailStream(int bufferSize)
	{
	}

	[Token(Token = "0x600194E")]
	[Address(RVA = "0x4E4E540", Offset = "0x4E4E540", VA = "0x4E4E540")]
	public void Clear()
	{
	}

	[Token(Token = "0x600194F")]
	[Address(RVA = "0x4E4E560", Offset = "0x4E4E560", VA = "0x4E4E560", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001957")]
	[Address(RVA = "0x4E4E780", Offset = "0x4E4E780", VA = "0x4E4E780", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001958")]
	[Address(RVA = "0x4E4E790", Offset = "0x4E4E790", VA = "0x4E4E790", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001959")]
	[Address(RVA = "0x4E4E7F0", Offset = "0x4E4E7F0", VA = "0x4E4E7F0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600195A")]
	[Address(RVA = "0x4E4E850", Offset = "0x4E4E850", VA = "0x4E4E850", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600195B")]
	[Address(RVA = "0x4E4E8B0", Offset = "0x4E4E8B0", VA = "0x4E4E8B0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}
}
