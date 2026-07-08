using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000572")]
[ComVisible(true)]
public class BinaryWriter : IDisposable
{
	[Token(Token = "0x40016C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly BinaryWriter Null;

	[Token(Token = "0x40016C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected Stream OutStream;

	[Token(Token = "0x40016CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private byte[] _buffer;

	[Token(Token = "0x40016CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x40016CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Encoder _encoder;

	[Token(Token = "0x40016CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[OptionalField]
	private bool _leaveOpen;

	[Token(Token = "0x40016CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[OptionalField]
	private char[] _tmpOneCharBuffer;

	[Token(Token = "0x40016CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private byte[] _largeByteBuffer;

	[Token(Token = "0x40016D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _maxChars;

	[Token(Token = "0x40016D1")]
	private const int LargeByteBufferSize = 256;

	[Token(Token = "0x6002A26")]
	[Address(RVA = "0x4F44FD0", Offset = "0x4F44FD0", VA = "0x4F44FD0")]
	protected BinaryWriter()
	{
	}

	[Token(Token = "0x6002A27")]
	[Address(RVA = "0x4F450E0", Offset = "0x4F450E0", VA = "0x4F450E0")]
	public BinaryWriter(Stream output)
	{
	}

	[Token(Token = "0x6002A28")]
	[Address(RVA = "0x4F452F0", Offset = "0x4F452F0", VA = "0x4F452F0")]
	public BinaryWriter(Stream output, Encoding encoding)
	{
	}

	[Token(Token = "0x6002A29")]
	[Address(RVA = "0x4F45140", Offset = "0x4F45140", VA = "0x4F45140")]
	public BinaryWriter(Stream output, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x6002A2A")]
	[Address(RVA = "0x4F45300", Offset = "0x4F45300", VA = "0x4F45300", Slot = "5")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6002A2B")]
	[Address(RVA = "0x4F45320", Offset = "0x4F45320", VA = "0x4F45320", Slot = "6")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A2C")]
	[Address(RVA = "0x4F45370", Offset = "0x4F45370", VA = "0x4F45370", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A2D")]
	[Address(RVA = "0x4F45390", Offset = "0x4F45390", VA = "0x4F45390", Slot = "7")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x6002A2E")]
	[Address(RVA = "0x4F453C0", Offset = "0x4F453C0", VA = "0x4F453C0", Slot = "8")]
	public virtual void Write(bool value)
	{
	}

	[Token(Token = "0x6002A2F")]
	[Address(RVA = "0x4F45410", Offset = "0x4F45410", VA = "0x4F45410", Slot = "9")]
	public virtual void Write(byte value)
	{
	}

	[Token(Token = "0x6002A30")]
	[Address(RVA = "0x4F45440", Offset = "0x4F45440", VA = "0x4F45440", Slot = "10")]
	[CLSCompliant(false)]
	public virtual void Write(sbyte value)
	{
	}

	[Token(Token = "0x6002A31")]
	[Address(RVA = "0x4F45470", Offset = "0x4F45470", VA = "0x4F45470", Slot = "11")]
	public virtual void Write(byte[] buffer)
	{
	}

	[Token(Token = "0x6002A32")]
	[Address(RVA = "0x4F454F0", Offset = "0x4F454F0", VA = "0x4F454F0", Slot = "12")]
	public virtual void Write(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6002A33")]
	[Address(RVA = "0x4F45520", Offset = "0x4F45520", VA = "0x4F45520", Slot = "13")]
	public virtual void Write(char ch)
	{
	}

	[Token(Token = "0x6002A34")]
	[Address(RVA = "0x4F45630", Offset = "0x4F45630", VA = "0x4F45630", Slot = "14")]
	public virtual void Write(char[] chars)
	{
	}

	[Token(Token = "0x6002A35")]
	[Address(RVA = "0x4F456D0", Offset = "0x4F456D0", VA = "0x4F456D0", Slot = "15")]
	public virtual void Write(double value)
	{
	}

	[Token(Token = "0x6002A36")]
	[Address(RVA = "0x4F45710", Offset = "0x4F45710", VA = "0x4F45710", Slot = "16")]
	public virtual void Write(short value)
	{
	}

	[Token(Token = "0x6002A37")]
	[Address(RVA = "0x4F45770", Offset = "0x4F45770", VA = "0x4F45770", Slot = "17")]
	[CLSCompliant(false)]
	public virtual void Write(ushort value)
	{
	}

	[Token(Token = "0x6002A38")]
	[Address(RVA = "0x4F457D0", Offset = "0x4F457D0", VA = "0x4F457D0", Slot = "18")]
	public virtual void Write(int value)
	{
	}

	[Token(Token = "0x6002A39")]
	[Address(RVA = "0x4F45860", Offset = "0x4F45860", VA = "0x4F45860", Slot = "19")]
	[CLSCompliant(false)]
	public virtual void Write(uint value)
	{
	}

	[Token(Token = "0x6002A3A")]
	[Address(RVA = "0x4F458F0", Offset = "0x4F458F0", VA = "0x4F458F0", Slot = "20")]
	public virtual void Write(long value)
	{
	}

	[Token(Token = "0x6002A3B")]
	[Address(RVA = "0x4F45A10", Offset = "0x4F45A10", VA = "0x4F45A10", Slot = "21")]
	[CLSCompliant(false)]
	public virtual void Write(ulong value)
	{
	}

	[Token(Token = "0x6002A3C")]
	[Address(RVA = "0x4F45B30", Offset = "0x4F45B30", VA = "0x4F45B30", Slot = "22")]
	public virtual void Write(float value)
	{
	}

	[Token(Token = "0x6002A3D")]
	[Address(RVA = "0x4F45B70", Offset = "0x4F45B70", VA = "0x4F45B70", Slot = "23")]
	public virtual void Write(string value)
	{
	}

	[Token(Token = "0x6002A3E")]
	[Address(RVA = "0x4F45EC0", Offset = "0x4F45EC0", VA = "0x4F45EC0")]
	protected void Write7BitEncodedInt(int value)
	{
	}
}
