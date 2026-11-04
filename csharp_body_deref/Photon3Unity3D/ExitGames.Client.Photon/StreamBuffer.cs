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
		[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000099")]
	public bool CanSeek
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009A")]
	public bool CanWrite
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009B")]
	public int Length
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x152EFE0", Offset = "0x152D5E0", VA = "0x18152EFE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700009C")]
	public int Position
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x1CF0690", Offset = "0x1CEEC90", VA = "0x181CF0690")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public int Available
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x1CF0680", Offset = "0x1CEEC80", VA = "0x181CF0680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x1CF05D0", Offset = "0x1CEEBD0", VA = "0x181CF05D0")]
	public StreamBuffer(int size = 0)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x1CF0630", Offset = "0x1CEEC30", VA = "0x181CF0630")]
	public StreamBuffer(byte[] buf)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x1CF0140", Offset = "0x1CEE740", VA = "0x181CF0140")]
	public byte[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x1CF00B0", Offset = "0x1CEE6B0", VA = "0x181CF00B0")]
	public byte[] ToArrayFromPos()
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x1CEFD40", Offset = "0x1CEE340", VA = "0x181CEFD40")]
	public void Compact()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
	public byte[] GetBuffer()
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x1CEFDC0", Offset = "0x1CEE3C0", VA = "0x181CEFDC0")]
	public byte[] GetBufferAndAdvance(int length, out int offset)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Flush()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x1CEFF50", Offset = "0x1CEE550", VA = "0x181CEFF50")]
	public long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x1CF0080", Offset = "0x1CEE680", VA = "0x181CF0080")]
	public void SetLength(long value)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x1CF0070", Offset = "0x1CEE670", VA = "0x181CF0070")]
	public void SetCapacityMinimum(int neededSize)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x1CEFEF0", Offset = "0x1CEE4F0", VA = "0x181CEFEF0")]
	public int Read(byte[] buffer, int dstOffset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x1CF0570", Offset = "0x1CEEB70", VA = "0x181CF0570")]
	public void Write(byte[] buffer, int srcOffset, int count)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x1CEFE00", Offset = "0x1CEE400", VA = "0x181CEFE00")]
	public byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x1CF01B0", Offset = "0x1CEE7B0", VA = "0x181CF01B0")]
	public void WriteByte(byte value)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x1CF0420", Offset = "0x1CEEA20", VA = "0x181CF0420")]
	public void WriteBytes(byte v0, byte v1)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x1CF0210", Offset = "0x1CEE810", VA = "0x181CF0210")]
	public void WriteBytes(byte v0, byte v1, byte v2)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x1CF04B0", Offset = "0x1CEEAB0", VA = "0x181CF04B0")]
	public void WriteBytes(byte v0, byte v1, byte v2, byte v3)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x1CF02B0", Offset = "0x1CEE8B0", VA = "0x181CF02B0")]
	public void WriteBytes(byte v0, byte v1, byte v2, byte v3, byte v4, byte v5, byte v6, byte v7)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x1CEFC80", Offset = "0x1CEE280", VA = "0x181CEFC80")]
	private bool CheckSize(int size)
	{
		return default(bool);
	}
}
