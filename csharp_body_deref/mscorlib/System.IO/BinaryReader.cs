using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000571")]
[ComVisible(true)]
public class BinaryReader : IDisposable
{
	[Token(Token = "0x40016BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Stream m_stream;

	[Token(Token = "0x40016BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private byte[] m_buffer;

	[Token(Token = "0x40016C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Decoder m_decoder;

	[Token(Token = "0x40016C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] m_charBytes;

	[Token(Token = "0x40016C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private char[] m_singleChar;

	[Token(Token = "0x40016C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] m_charBuffer;

	[Token(Token = "0x40016C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int m_maxCharsSize;

	[Token(Token = "0x40016C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private bool m_2BytesPerChar;

	[Token(Token = "0x40016C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x45")]
	private bool m_isMemoryStream;

	[Token(Token = "0x40016C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x46")]
	private bool m_leaveOpen;

	[Token(Token = "0x1700061B")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x6002A0C")]
		[Address(RVA = "0x4F43940", Offset = "0x4F43940", VA = "0x4F43940", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A09")]
	[Address(RVA = "0x4F43650", Offset = "0x4F43650", VA = "0x4F43650")]
	public BinaryReader(Stream input)
	{
	}

	[Token(Token = "0x6002A0A")]
	[Address(RVA = "0x4F43930", Offset = "0x4F43930", VA = "0x4F43930")]
	public BinaryReader(Stream input, Encoding encoding)
	{
	}

	[Token(Token = "0x6002A0B")]
	[Address(RVA = "0x4F436B0", Offset = "0x4F436B0", VA = "0x4F436B0")]
	public BinaryReader(Stream input, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x6002A0D")]
	[Address(RVA = "0x4F43950", Offset = "0x4F43950", VA = "0x4F43950", Slot = "6")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6002A0E")]
	[Address(RVA = "0x4F43970", Offset = "0x4F43970", VA = "0x4F43970", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A0F")]
	[Address(RVA = "0x4F43A30", Offset = "0x4F43A30", VA = "0x4F43A30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A10")]
	[Address(RVA = "0x4F43A50", Offset = "0x4F43A50", VA = "0x4F43A50", Slot = "8")]
	public virtual int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6002A11")]
	[Address(RVA = "0x4F43D60", Offset = "0x4F43D60", VA = "0x4F43D60", Slot = "9")]
	public virtual bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x6002A12")]
	[Address(RVA = "0x4F43DA0", Offset = "0x4F43DA0", VA = "0x4F43DA0", Slot = "10")]
	public virtual byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6002A13")]
	[Address(RVA = "0x4F43DD0", Offset = "0x4F43DD0", VA = "0x4F43DD0", Slot = "11")]
	[CLSCompliant(false)]
	public virtual sbyte ReadSByte()
	{
		return default(sbyte);
	}

	[Token(Token = "0x6002A14")]
	[Address(RVA = "0x4F43E10", Offset = "0x4F43E10", VA = "0x4F43E10", Slot = "12")]
	public virtual char ReadChar()
	{
		return default(char);
	}

	[Token(Token = "0x6002A15")]
	[Address(RVA = "0x4F43E30", Offset = "0x4F43E30", VA = "0x4F43E30", Slot = "13")]
	public virtual short ReadInt16()
	{
		return default(short);
	}

	[Token(Token = "0x6002A16")]
	[Address(RVA = "0x4F43E70", Offset = "0x4F43E70", VA = "0x4F43E70", Slot = "14")]
	[CLSCompliant(false)]
	public virtual ushort ReadUInt16()
	{
		return default(ushort);
	}

	[Token(Token = "0x6002A17")]
	[Address(RVA = "0x4F43EB0", Offset = "0x4F43EB0", VA = "0x4F43EB0", Slot = "15")]
	public virtual int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x6002A18")]
	[Address(RVA = "0x4F43F80", Offset = "0x4F43F80", VA = "0x4F43F80", Slot = "16")]
	[CLSCompliant(false)]
	public virtual uint ReadUInt32()
	{
		return default(uint);
	}

	[Token(Token = "0x6002A19")]
	[Address(RVA = "0x4F43FF0", Offset = "0x4F43FF0", VA = "0x4F43FF0", Slot = "17")]
	public virtual long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6002A1A")]
	[Address(RVA = "0x4F440A0", Offset = "0x4F440A0", VA = "0x4F440A0", Slot = "18")]
	[CLSCompliant(false)]
	public virtual ulong ReadUInt64()
	{
		return default(ulong);
	}

	[Token(Token = "0x6002A1B")]
	[Address(RVA = "0x4F44150", Offset = "0x4F44150", VA = "0x4F44150", Slot = "19")]
	public virtual float ReadSingle()
	{
		return default(float);
	}

	[Token(Token = "0x6002A1C")]
	[Address(RVA = "0x4F44180", Offset = "0x4F44180", VA = "0x4F44180", Slot = "20")]
	public virtual double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6002A1D")]
	[Address(RVA = "0x4F441B0", Offset = "0x4F441B0", VA = "0x4F441B0", Slot = "21")]
	public virtual decimal ReadDecimal()
	{
		return default(decimal);
	}

	[Token(Token = "0x6002A1E")]
	[Address(RVA = "0x4F44330", Offset = "0x4F44330", VA = "0x4F44330", Slot = "22")]
	public virtual string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6002A1F")]
	[Address(RVA = "0x4F446D0", Offset = "0x4F446D0", VA = "0x4F446D0")]
	private int InternalReadChars(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A20")]
	[Address(RVA = "0x4F43A60", Offset = "0x4F43A60", VA = "0x4F43A60")]
	private int InternalReadOneChar()
	{
		return default(int);
	}

	[Token(Token = "0x6002A21")]
	[Address(RVA = "0x4F44A70", Offset = "0x4F44A70", VA = "0x4F44A70", Slot = "23")]
	public virtual char[] ReadChars(int count)
	{
		return null;
	}

	[Token(Token = "0x6002A22")]
	[Address(RVA = "0x4F44BB0", Offset = "0x4F44BB0", VA = "0x4F44BB0", Slot = "24")]
	public virtual int Read(byte[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A23")]
	[Address(RVA = "0x4F44D30", Offset = "0x4F44D30", VA = "0x4F44D30", Slot = "25")]
	public virtual byte[] ReadBytes(int count)
	{
		return null;
	}

	[Token(Token = "0x6002A24")]
	[Address(RVA = "0x4F44EB0", Offset = "0x4F44EB0", VA = "0x4F44EB0", Slot = "26")]
	protected virtual void FillBuffer(int numBytes)
	{
	}

	[Token(Token = "0x6002A25")]
	[Address(RVA = "0x4F44630", Offset = "0x4F44630", VA = "0x4F44630")]
	protected internal int Read7BitEncodedInt()
	{
		return default(int);
	}
}
