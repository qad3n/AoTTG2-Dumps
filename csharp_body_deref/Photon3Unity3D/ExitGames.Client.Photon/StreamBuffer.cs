using System.IO;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000044")]
public class StreamBuffer
{
	[Token(Token = "0x4000202")]
	private const int DefaultInitialSize = 0;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x10")]
	private int pos;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x14")]
	private int len;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x18")]
	private byte[] buf;

	[Token(Token = "0x17000098")]
	public bool CanRead
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x3B9FD10", Offset = "0x3B9FD10", VA = "0x3B9FD10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000099")]
	public bool CanSeek
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x3B9FD20", Offset = "0x3B9FD20", VA = "0x3B9FD20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009A")]
	public bool CanWrite
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x3B9FD30", Offset = "0x3B9FD30", VA = "0x3B9FD30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009B")]
	public int Length
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x3B97F30", Offset = "0x3B97F30", VA = "0x3B97F30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700009C")]
	public int Position
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x3B97EA0", Offset = "0x3B97EA0", VA = "0x3B97EA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x3B97EB0", Offset = "0x3B97EB0", VA = "0x3B97EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public int Available
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x3B9FDF0", Offset = "0x3B9FDF0", VA = "0x3B9FDF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x3B97D90", Offset = "0x3B97D90", VA = "0x3B97D90")]
	public StreamBuffer(int size = 0)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x3B9FBC0", Offset = "0x3B9FBC0", VA = "0x3B9FBC0")]
	public StreamBuffer(byte[] buf)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x3B97ED0", Offset = "0x3B97ED0", VA = "0x3B97ED0")]
	public byte[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x3B9FC00", Offset = "0x3B9FC00", VA = "0x3B9FC00")]
	public byte[] ToArrayFromPos()
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3B9FC70", Offset = "0x3B9FC70", VA = "0x3B9FC70")]
	public void Compact()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x3B97E90", Offset = "0x3B97E90", VA = "0x3B97E90")]
	public byte[] GetBuffer()
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x3B9FCE0", Offset = "0x3B9FCE0", VA = "0x3B9FCE0")]
	public byte[] GetBufferAndAdvance(int length, out int offset)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x3B9FE00", Offset = "0x3B9FE00", VA = "0x3B9FE00")]
	public void Flush()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3B9FE10", Offset = "0x3B9FE10", VA = "0x3B9FE10")]
	public long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3B97DF0", Offset = "0x3B97DF0", VA = "0x3B97DF0")]
	public void SetLength(long value)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3B97E30", Offset = "0x3B97E30", VA = "0x3B97E30")]
	public void SetCapacityMinimum(int neededSize)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x3B9FED0", Offset = "0x3B9FED0", VA = "0x3B9FED0")]
	public int Read(byte[] buffer, int dstOffset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x3B97E40", Offset = "0x3B97E40", VA = "0x3B97E40")]
	public void Write(byte[] buffer, int srcOffset, int count)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3B9FF10", Offset = "0x3B9FF10", VA = "0x3B9FF10")]
	public byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x3B9FFE0", Offset = "0x3B9FFE0", VA = "0x3B9FFE0")]
	public void WriteByte(byte value)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x3BA0030", Offset = "0x3BA0030", VA = "0x3BA0030")]
	public void WriteBytes(byte v0, byte v1)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x3BA00A0", Offset = "0x3BA00A0", VA = "0x3BA00A0")]
	public void WriteBytes(byte v0, byte v1, byte v2)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x3BA0140", Offset = "0x3BA0140", VA = "0x3BA0140")]
	public void WriteBytes(byte v0, byte v1, byte v2, byte v3)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x3BA0200", Offset = "0x3BA0200", VA = "0x3BA0200")]
	public void WriteBytes(byte v0, byte v1, byte v2, byte v3, byte v4, byte v5, byte v6, byte v7)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x3B9FD40", Offset = "0x3B9FD40", VA = "0x3B9FD40")]
	private bool CheckSize(int size)
	{
		return default(bool);
	}
}
