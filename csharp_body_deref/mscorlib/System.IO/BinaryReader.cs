// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.BinaryReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000699")]
[ComVisible(true)]
public class BinaryReader : IDisposable
{
	[Token(Token = "0x4001A9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Stream m_stream;

	[Token(Token = "0x4001A9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private byte[] m_buffer;

	[Token(Token = "0x4001A9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Decoder m_decoder;

	[Token(Token = "0x4001A9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] m_charBytes;

	[Token(Token = "0x4001A9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private char[] m_singleChar;

	[Token(Token = "0x4001AA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] m_charBuffer;

	[Token(Token = "0x4001AA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int m_maxCharsSize;

	[Token(Token = "0x4001AA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private bool m_2BytesPerChar;

	[Token(Token = "0x4001AA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x45")]
	private bool m_isMemoryStream;

	[Token(Token = "0x4001AA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x46")]
	private bool m_leaveOpen;

	[Token(Token = "0x17000831")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x60032D3")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032D0")]
	[Address(RVA = "0x1AE4A30", Offset = "0x1AE3030", VA = "0x181AE4A30")]
	public BinaryReader(Stream input)
	{
	}

	[Token(Token = "0x60032D1")]
	[Address(RVA = "0x1AE4AB0", Offset = "0x1AE30B0", VA = "0x181AE4AB0")]
	public BinaryReader(Stream input, Encoding encoding)
	{
	}

	[Token(Token = "0x60032D2")]
	[Address(RVA = "0x1AE4790", Offset = "0x1AE2D90", VA = "0x181AE4790")]
	public BinaryReader(Stream input, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x60032D4")]
	[Address(RVA = "0x1AE3010", Offset = "0x1AE1610", VA = "0x181AE3010", Slot = "6")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60032D5")]
	[Address(RVA = "0x1AE3030", Offset = "0x1AE1630", VA = "0x181AE3030", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60032D6")]
	[Address(RVA = "0x1AE3010", Offset = "0x1AE1610", VA = "0x181AE3010", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60032D7")]
	[Address(RVA = "0x1AE4580", Offset = "0x1AE2B80", VA = "0x181AE4580", Slot = "8")]
	public virtual int Read()
	{
		return default(int);
	}

	[Token(Token = "0x60032D8")]
	[Address(RVA = "0x1AE3910", Offset = "0x1AE1F10", VA = "0x181AE3910", Slot = "9")]
	public virtual bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x60032D9")]
	[Address(RVA = "0x1AE3960", Offset = "0x1AE1F60", VA = "0x181AE3960", Slot = "10")]
	public virtual byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x60032DA")]
	[Address(RVA = "0x1AE4130", Offset = "0x1AE2730", VA = "0x181AE4130", Slot = "11")]
	[CLSCompliant(false)]
	public virtual sbyte ReadSByte()
	{
		return default(sbyte);
	}

	[Token(Token = "0x60032DB")]
	[Address(RVA = "0x1AE3B50", Offset = "0x1AE2150", VA = "0x181AE3B50", Slot = "12")]
	public virtual char ReadChar()
	{
		return default(char);
	}

	[Token(Token = "0x60032DC")]
	[Address(RVA = "0x1AE3E80", Offset = "0x1AE2480", VA = "0x181AE3E80", Slot = "13")]
	public virtual short ReadInt16()
	{
		return default(short);
	}

	[Token(Token = "0x60032DD")]
	[Address(RVA = "0x1AE3E80", Offset = "0x1AE2480", VA = "0x181AE3E80", Slot = "14")]
	[CLSCompliant(false)]
	public virtual ushort ReadUInt16()
	{
		return default(ushort);
	}

	[Token(Token = "0x60032DE")]
	[Address(RVA = "0x1AE3EE0", Offset = "0x1AE24E0", VA = "0x181AE3EE0", Slot = "15")]
	public virtual int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x60032DF")]
	[Address(RVA = "0x1AE4500", Offset = "0x1AE2B00", VA = "0x181AE4500", Slot = "16")]
	[CLSCompliant(false)]
	public virtual uint ReadUInt32()
	{
		return default(uint);
	}

	[Token(Token = "0x60032E0")]
	[Address(RVA = "0x1AE4010", Offset = "0x1AE2610", VA = "0x181AE4010", Slot = "17")]
	public virtual long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x60032E1")]
	[Address(RVA = "0x1AE4010", Offset = "0x1AE2610", VA = "0x181AE4010", Slot = "18")]
	[CLSCompliant(false)]
	public virtual ulong ReadUInt64()
	{
		return default(ulong);
	}

	[Token(Token = "0x60032E2")]
	[Address(RVA = "0x1AE4180", Offset = "0x1AE2780", VA = "0x181AE4180", Slot = "19")]
	public virtual float ReadSingle()
	{
		return default(float);
	}

	[Token(Token = "0x60032E3")]
	[Address(RVA = "0x1AE3E40", Offset = "0x1AE2440", VA = "0x181AE3E40", Slot = "20")]
	public virtual double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x60032E4")]
	[Address(RVA = "0x1AE3D00", Offset = "0x1AE2300", VA = "0x181AE3D00", Slot = "21")]
	public virtual decimal ReadDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x60032E5")]
	[Address(RVA = "0x1AE41C0", Offset = "0x1AE27C0", VA = "0x181AE41C0", Slot = "22")]
	public virtual string ReadString()
	{
		return null;
	}

	[Token(Token = "0x60032E6")]
	[Address(RVA = "0x1AE3250", Offset = "0x1AE1850", VA = "0x181AE3250")]
	private int InternalReadChars(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60032E7")]
	[Address(RVA = "0x1AE35D0", Offset = "0x1AE1BD0", VA = "0x181AE35D0")]
	private int InternalReadOneChar()
	{
		return default(int);
	}

	[Token(Token = "0x60032E8")]
	[Address(RVA = "0x1AE3B80", Offset = "0x1AE2180", VA = "0x181AE3B80", Slot = "23")]
	public virtual char[] ReadChars(int count)
	{
		return null;
	}

	[Token(Token = "0x60032E9")]
	[Address(RVA = "0x1AE45A0", Offset = "0x1AE2BA0", VA = "0x181AE45A0", Slot = "24")]
	public virtual int Read(byte[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60032EA")]
	[Address(RVA = "0x1AE39A0", Offset = "0x1AE1FA0", VA = "0x181AE39A0", Slot = "25")]
	public virtual byte[] ReadBytes(int count)
	{
		return null;
	}

	[Token(Token = "0x60032EB")]
	[Address(RVA = "0x1AE30F0", Offset = "0x1AE16F0", VA = "0x181AE30F0", Slot = "26")]
	protected virtual void FillBuffer(int numBytes)
	{
	}

	[Token(Token = "0x60032EC")]
	[Address(RVA = "0x1AE3860", Offset = "0x1AE1E60", VA = "0x181AE3860")]
	protected internal int Read7BitEncodedInt()
	{
		return default(int);
	}
}
