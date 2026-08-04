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
		[Address(RVA = "0x3C29460", Offset = "0x3C29460", VA = "0x3C29460", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A09")]
	[Address(RVA = "0x3C29170", Offset = "0x3C29170", VA = "0x3C29170")]
	public BinaryReader(Stream input)
	{
	}

	[Token(Token = "0x6002A0A")]
	[Address(RVA = "0x3C29450", Offset = "0x3C29450", VA = "0x3C29450")]
	public BinaryReader(Stream input, Encoding encoding)
	{
	}

	[Token(Token = "0x6002A0B")]
	[Address(RVA = "0x3C291D0", Offset = "0x3C291D0", VA = "0x3C291D0")]
	public BinaryReader(Stream input, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x6002A0D")]
	[Address(RVA = "0x3C29470", Offset = "0x3C29470", VA = "0x3C29470", Slot = "6")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6002A0E")]
	[Address(RVA = "0x3C29490", Offset = "0x3C29490", VA = "0x3C29490", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A0F")]
	[Address(RVA = "0x3C29550", Offset = "0x3C29550", VA = "0x3C29550", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A10")]
	[Address(RVA = "0x3C29570", Offset = "0x3C29570", VA = "0x3C29570", Slot = "8")]
	public virtual int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6002A11")]
	[Address(RVA = "0x3C29880", Offset = "0x3C29880", VA = "0x3C29880", Slot = "9")]
	public virtual bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x6002A12")]
	[Address(RVA = "0x3C298C0", Offset = "0x3C298C0", VA = "0x3C298C0", Slot = "10")]
	public virtual byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6002A13")]
	[Address(RVA = "0x3C298F0", Offset = "0x3C298F0", VA = "0x3C298F0", Slot = "11")]
	[CLSCompliant(false)]
	public virtual sbyte ReadSByte()
	{
		return default(sbyte);
	}

	[Token(Token = "0x6002A14")]
	[Address(RVA = "0x3C29930", Offset = "0x3C29930", VA = "0x3C29930", Slot = "12")]
	public virtual char ReadChar()
	{
		return default(char);
	}

	[Token(Token = "0x6002A15")]
	[Address(RVA = "0x3C29950", Offset = "0x3C29950", VA = "0x3C29950", Slot = "13")]
	public virtual short ReadInt16()
	{
		return default(short);
	}

	[Token(Token = "0x6002A16")]
	[Address(RVA = "0x3C29990", Offset = "0x3C29990", VA = "0x3C29990", Slot = "14")]
	[CLSCompliant(false)]
	public virtual ushort ReadUInt16()
	{
		return default(ushort);
	}

	[Token(Token = "0x6002A17")]
	[Address(RVA = "0x3C299D0", Offset = "0x3C299D0", VA = "0x3C299D0", Slot = "15")]
	public virtual int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x6002A18")]
	[Address(RVA = "0x3C29AA0", Offset = "0x3C29AA0", VA = "0x3C29AA0", Slot = "16")]
	[CLSCompliant(false)]
	public virtual uint ReadUInt32()
	{
		return default(uint);
	}

	[Token(Token = "0x6002A19")]
	[Address(RVA = "0x3C29B10", Offset = "0x3C29B10", VA = "0x3C29B10", Slot = "17")]
	public virtual long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6002A1A")]
	[Address(RVA = "0x3C29BC0", Offset = "0x3C29BC0", VA = "0x3C29BC0", Slot = "18")]
	[CLSCompliant(false)]
	public virtual ulong ReadUInt64()
	{
		return default(ulong);
	}

	[Token(Token = "0x6002A1B")]
	[Address(RVA = "0x3C29C70", Offset = "0x3C29C70", VA = "0x3C29C70", Slot = "19")]
	public virtual float ReadSingle()
	{
		return default(float);
	}

	[Token(Token = "0x6002A1C")]
	[Address(RVA = "0x3C29CA0", Offset = "0x3C29CA0", VA = "0x3C29CA0", Slot = "20")]
	public virtual double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6002A1D")]
	[Address(RVA = "0x3C29CD0", Offset = "0x3C29CD0", VA = "0x3C29CD0", Slot = "21")]
	public virtual decimal ReadDecimal()
	{
		return default(decimal);
	}

	[Token(Token = "0x6002A1E")]
	[Address(RVA = "0x3C29E50", Offset = "0x3C29E50", VA = "0x3C29E50", Slot = "22")]
	public virtual string ReadString()
	{
		return null;
	}

	[Token(Token = "0x6002A1F")]
	[Address(RVA = "0x3C2A1F0", Offset = "0x3C2A1F0", VA = "0x3C2A1F0")]
	private int InternalReadChars(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A20")]
	[Address(RVA = "0x3C29580", Offset = "0x3C29580", VA = "0x3C29580")]
	private int InternalReadOneChar()
	{
		return default(int);
	}

	[Token(Token = "0x6002A21")]
	[Address(RVA = "0x3C2A590", Offset = "0x3C2A590", VA = "0x3C2A590", Slot = "23")]
	public virtual char[] ReadChars(int count)
	{
		return null;
	}

	[Token(Token = "0x6002A22")]
	[Address(RVA = "0x3C2A6D0", Offset = "0x3C2A6D0", VA = "0x3C2A6D0", Slot = "24")]
	public virtual int Read(byte[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A23")]
	[Address(RVA = "0x3C2A850", Offset = "0x3C2A850", VA = "0x3C2A850", Slot = "25")]
	public virtual byte[] ReadBytes(int count)
	{
		return null;
	}

	[Token(Token = "0x6002A24")]
	[Address(RVA = "0x3C2A9D0", Offset = "0x3C2A9D0", VA = "0x3C2A9D0", Slot = "26")]
	protected virtual void FillBuffer(int numBytes)
	{
	}

	[Token(Token = "0x6002A25")]
	[Address(RVA = "0x3C2A150", Offset = "0x3C2A150", VA = "0x3C2A150")]
	protected internal int Read7BitEncodedInt()
	{
		return default(int);
	}
}
