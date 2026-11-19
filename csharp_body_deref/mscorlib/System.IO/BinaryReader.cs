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

[Token(Token = "0x2000673")]
[ComVisible(true)]
public class BinaryReader : IDisposable
{
	[Token(Token = "0x4001A01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Stream m_stream;

	[Token(Token = "0x4001A02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private byte[] m_buffer;

	[Token(Token = "0x4001A03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Decoder m_decoder;

	[Token(Token = "0x4001A04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] m_charBytes;

	[Token(Token = "0x4001A05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private char[] m_singleChar;

	[Token(Token = "0x4001A06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private char[] m_charBuffer;

	[Token(Token = "0x4001A07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int m_maxCharsSize;

	[Token(Token = "0x4001A08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private bool m_2BytesPerChar;

	[Token(Token = "0x4001A09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x45")]
	private bool m_isMemoryStream;

	[Token(Token = "0x4001A0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x46")]
	private bool m_leaveOpen;

	[Token(Token = "0x17000830")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x60032A0")]
		[Address(RVA = "0x5481A10", Offset = "0x5480A10", VA = "0x5481A10", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600329D")]
	[Address(RVA = "0x5481730", Offset = "0x5480730", VA = "0x5481730")]
	public BinaryReader(Stream input)
	{
	}

	[Token(Token = "0x600329E")]
	[Address(RVA = "0x5481A00", Offset = "0x5480A00", VA = "0x5481A00")]
	public BinaryReader(Stream input, Encoding encoding)
	{
	}

	[Token(Token = "0x600329F")]
	[Address(RVA = "0x5481790", Offset = "0x5480790", VA = "0x5481790")]
	public BinaryReader(Stream input, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x60032A1")]
	[Address(RVA = "0x5481A20", Offset = "0x5480A20", VA = "0x5481A20", Slot = "6")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60032A2")]
	[Address(RVA = "0x5481A40", Offset = "0x5480A40", VA = "0x5481A40", Slot = "7")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60032A3")]
	[Address(RVA = "0x5481B00", Offset = "0x5480B00", VA = "0x5481B00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60032A4")]
	[Address(RVA = "0x5481B20", Offset = "0x5480B20", VA = "0x5481B20", Slot = "8")]
	public virtual int Read()
	{
		return default(int);
	}

	[Token(Token = "0x60032A5")]
	[Address(RVA = "0x5481E70", Offset = "0x5480E70", VA = "0x5481E70", Slot = "9")]
	public virtual bool ReadBoolean()
	{
		return default(bool);
	}

	[Token(Token = "0x60032A6")]
	[Address(RVA = "0x5481EB0", Offset = "0x5480EB0", VA = "0x5481EB0", Slot = "10")]
	public virtual byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x60032A7")]
	[Address(RVA = "0x5481F80", Offset = "0x5480F80", VA = "0x5481F80", Slot = "11")]
	[CLSCompliant(false)]
	public virtual sbyte ReadSByte()
	{
		return default(sbyte);
	}

	[Token(Token = "0x60032A8")]
	[Address(RVA = "0x5481FC0", Offset = "0x5480FC0", VA = "0x5481FC0", Slot = "12")]
	public virtual char ReadChar()
	{
		return default(char);
	}

	[Token(Token = "0x60032A9")]
	[Address(RVA = "0x5482040", Offset = "0x5481040", VA = "0x5482040", Slot = "13")]
	public virtual short ReadInt16()
	{
		return default(short);
	}

	[Token(Token = "0x60032AA")]
	[Address(RVA = "0x5482080", Offset = "0x5481080", VA = "0x5482080", Slot = "14")]
	[CLSCompliant(false)]
	public virtual ushort ReadUInt16()
	{
		return default(ushort);
	}

	[Token(Token = "0x60032AB")]
	[Address(RVA = "0x54820C0", Offset = "0x54810C0", VA = "0x54820C0", Slot = "15")]
	public virtual int ReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x60032AC")]
	[Address(RVA = "0x54821F0", Offset = "0x54811F0", VA = "0x54821F0", Slot = "16")]
	[CLSCompliant(false)]
	public virtual uint ReadUInt32()
	{
		return default(uint);
	}

	[Token(Token = "0x60032AD")]
	[Address(RVA = "0x5482260", Offset = "0x5481260", VA = "0x5482260", Slot = "17")]
	public virtual long ReadInt64()
	{
		return default(long);
	}

	[Token(Token = "0x60032AE")]
	[Address(RVA = "0x5482310", Offset = "0x5481310", VA = "0x5482310", Slot = "18")]
	[CLSCompliant(false)]
	public virtual ulong ReadUInt64()
	{
		return default(ulong);
	}

	[Token(Token = "0x60032AF")]
	[Address(RVA = "0x54823C0", Offset = "0x54813C0", VA = "0x54823C0", Slot = "19")]
	public virtual float ReadSingle()
	{
		return default(float);
	}

	[Token(Token = "0x60032B0")]
	[Address(RVA = "0x54823F0", Offset = "0x54813F0", VA = "0x54823F0", Slot = "20")]
	public virtual double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x60032B1")]
	[Address(RVA = "0x5482420", Offset = "0x5481420", VA = "0x5482420", Slot = "21")]
	public virtual decimal ReadDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x60032B2")]
	[Address(RVA = "0x5482590", Offset = "0x5481590", VA = "0x5482590", Slot = "22")]
	public virtual string ReadString()
	{
		return null;
	}

	[Token(Token = "0x60032B3")]
	[Address(RVA = "0x5482A40", Offset = "0x5481A40", VA = "0x5482A40")]
	private int InternalReadChars(char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60032B4")]
	[Address(RVA = "0x5481B90", Offset = "0x5480B90", VA = "0x5481B90")]
	private int InternalReadOneChar()
	{
		return default(int);
	}

	[Token(Token = "0x60032B5")]
	[Address(RVA = "0x5482DD0", Offset = "0x5481DD0", VA = "0x5482DD0", Slot = "23")]
	public virtual char[] ReadChars(int count)
	{
		return null;
	}

	[Token(Token = "0x60032B6")]
	[Address(RVA = "0x5482F50", Offset = "0x5481F50", VA = "0x5482F50", Slot = "24")]
	public virtual int Read(byte[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60032B7")]
	[Address(RVA = "0x5483120", Offset = "0x5482120", VA = "0x5483120", Slot = "25")]
	public virtual byte[] ReadBytes(int count)
	{
		return null;
	}

	[Token(Token = "0x60032B8")]
	[Address(RVA = "0x54832E0", Offset = "0x54822E0", VA = "0x54832E0", Slot = "26")]
	protected virtual void FillBuffer(int numBytes)
	{
	}

	[Token(Token = "0x60032B9")]
	[Address(RVA = "0x5482930", Offset = "0x5481930", VA = "0x5482930")]
	protected internal int Read7BitEncodedInt()
	{
		return default(int);
	}
}
