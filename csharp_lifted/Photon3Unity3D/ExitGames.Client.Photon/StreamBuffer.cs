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
		[Address(RVA = "0x5682FB0", Offset = "0x5681FB0", VA = "0x5682FB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000099")]
	public bool CanSeek
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x5682FC0", Offset = "0x5681FC0", VA = "0x5682FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009A")]
	public bool CanWrite
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x5682FD0", Offset = "0x5681FD0", VA = "0x5682FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009B")]
	public int Length
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x567C310", Offset = "0x567B310", VA = "0x567C310")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700009C")]
	public int Position
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x567C280", Offset = "0x567B280", VA = "0x567C280")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x567C290", Offset = "0x567B290", VA = "0x567C290")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public int Available
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x5683090", Offset = "0x5682090", VA = "0x5683090")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x567C170", Offset = "0x567B170", VA = "0x567C170")]
	public StreamBuffer(int size = 0)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x5682E60", Offset = "0x5681E60", VA = "0x5682E60")]
	public StreamBuffer(byte[] buf)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x567C2B0", Offset = "0x567B2B0", VA = "0x567C2B0")]
	public byte[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x5682EA0", Offset = "0x5681EA0", VA = "0x5682EA0")]
	public byte[] ToArrayFromPos()
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x5682F10", Offset = "0x5681F10", VA = "0x5682F10")]
	public void Compact()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x567C270", Offset = "0x567B270", VA = "0x567C270")]
	public byte[] GetBuffer()
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x5682F80", Offset = "0x5681F80", VA = "0x5682F80")]
	public byte[] GetBufferAndAdvance(int length, out int offset)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x56830A0", Offset = "0x56820A0", VA = "0x56830A0")]
	public void Flush()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x56830B0", Offset = "0x56820B0", VA = "0x56830B0")]
	public long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x567C1D0", Offset = "0x567B1D0", VA = "0x567C1D0")]
	public void SetLength(long value)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x567C210", Offset = "0x567B210", VA = "0x567C210")]
	public void SetCapacityMinimum(int neededSize)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x5683160", Offset = "0x5682160", VA = "0x5683160")]
	public int Read(byte[] buffer, int dstOffset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x567C220", Offset = "0x567B220", VA = "0x567C220")]
	public void Write(byte[] buffer, int srcOffset, int count)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x56831A0", Offset = "0x56821A0", VA = "0x56831A0")]
	public byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x5683270", Offset = "0x5682270", VA = "0x5683270")]
	public void WriteByte(byte value)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x56832C0", Offset = "0x56822C0", VA = "0x56832C0")]
	public void WriteBytes(byte v0, byte v1)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x5683330", Offset = "0x5682330", VA = "0x5683330")]
	public void WriteBytes(byte v0, byte v1, byte v2)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x56833D0", Offset = "0x56823D0", VA = "0x56833D0")]
	public void WriteBytes(byte v0, byte v1, byte v2, byte v3)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x5683490", Offset = "0x5682490", VA = "0x5683490")]
	public void WriteBytes(byte v0, byte v1, byte v2, byte v3, byte v4, byte v5, byte v6, byte v7)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x5682FE0", Offset = "0x5681FE0", VA = "0x5682FE0")]
	private bool CheckSize(int size)
	{
		return default(bool);
	}
}
