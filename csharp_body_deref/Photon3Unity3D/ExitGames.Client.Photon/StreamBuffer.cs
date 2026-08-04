// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.StreamBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E95660", Offset = "0x3E95660", VA = "0x3E95660")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000099")]
	public bool CanSeek
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x3E95670", Offset = "0x3E95670", VA = "0x3E95670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009A")]
	public bool CanWrite
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x3E95680", Offset = "0x3E95680", VA = "0x3E95680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009B")]
	public int Length
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x3E8D880", Offset = "0x3E8D880", VA = "0x3E8D880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700009C")]
	public int Position
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x3E8D7F0", Offset = "0x3E8D7F0", VA = "0x3E8D7F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x3E8D800", Offset = "0x3E8D800", VA = "0x3E8D800")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public int Available
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x3E95740", Offset = "0x3E95740", VA = "0x3E95740")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x3E8D6E0", Offset = "0x3E8D6E0", VA = "0x3E8D6E0")]
	public StreamBuffer(int size = 0)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x3E95510", Offset = "0x3E95510", VA = "0x3E95510")]
	public StreamBuffer(byte[] buf)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x3E8D820", Offset = "0x3E8D820", VA = "0x3E8D820")]
	public byte[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x3E95550", Offset = "0x3E95550", VA = "0x3E95550")]
	public byte[] ToArrayFromPos()
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3E955C0", Offset = "0x3E955C0", VA = "0x3E955C0")]
	public void Compact()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x3E8D7E0", Offset = "0x3E8D7E0", VA = "0x3E8D7E0")]
	public byte[] GetBuffer()
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x3E95630", Offset = "0x3E95630", VA = "0x3E95630")]
	public byte[] GetBufferAndAdvance(int length, out int offset)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x3E95750", Offset = "0x3E95750", VA = "0x3E95750")]
	public void Flush()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3E95760", Offset = "0x3E95760", VA = "0x3E95760")]
	public long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3E8D740", Offset = "0x3E8D740", VA = "0x3E8D740")]
	public void SetLength(long value)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3E8D780", Offset = "0x3E8D780", VA = "0x3E8D780")]
	public void SetCapacityMinimum(int neededSize)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x3E95820", Offset = "0x3E95820", VA = "0x3E95820")]
	public int Read(byte[] buffer, int dstOffset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x3E8D790", Offset = "0x3E8D790", VA = "0x3E8D790")]
	public void Write(byte[] buffer, int srcOffset, int count)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3E95860", Offset = "0x3E95860", VA = "0x3E95860")]
	public byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x3E95930", Offset = "0x3E95930", VA = "0x3E95930")]
	public void WriteByte(byte value)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x3E95980", Offset = "0x3E95980", VA = "0x3E95980")]
	public void WriteBytes(byte v0, byte v1)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x3E959F0", Offset = "0x3E959F0", VA = "0x3E959F0")]
	public void WriteBytes(byte v0, byte v1, byte v2)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x3E95A90", Offset = "0x3E95A90", VA = "0x3E95A90")]
	public void WriteBytes(byte v0, byte v1, byte v2, byte v3)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x3E95B50", Offset = "0x3E95B50", VA = "0x3E95B50")]
	public void WriteBytes(byte v0, byte v1, byte v2, byte v3, byte v4, byte v5, byte v6, byte v7)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x3E95690", Offset = "0x3E95690", VA = "0x3E95690")]
	private bool CheckSize(int size)
	{
		return default(bool);
	}
}
