// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.BinaryWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3C2AAF0", Offset = "0x3C2AAF0", VA = "0x3C2AAF0")]
	protected BinaryWriter()
	{
	}

	[Token(Token = "0x6002A27")]
	[Address(RVA = "0x3C2AC00", Offset = "0x3C2AC00", VA = "0x3C2AC00")]
	public BinaryWriter(Stream output)
	{
	}

	[Token(Token = "0x6002A28")]
	[Address(RVA = "0x3C2AE10", Offset = "0x3C2AE10", VA = "0x3C2AE10")]
	public BinaryWriter(Stream output, Encoding encoding)
	{
	}

	[Token(Token = "0x6002A29")]
	[Address(RVA = "0x3C2AC60", Offset = "0x3C2AC60", VA = "0x3C2AC60")]
	public BinaryWriter(Stream output, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x6002A2A")]
	[Address(RVA = "0x3C2AE20", Offset = "0x3C2AE20", VA = "0x3C2AE20", Slot = "5")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6002A2B")]
	[Address(RVA = "0x3C2AE40", Offset = "0x3C2AE40", VA = "0x3C2AE40", Slot = "6")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A2C")]
	[Address(RVA = "0x3C2AE90", Offset = "0x3C2AE90", VA = "0x3C2AE90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A2D")]
	[Address(RVA = "0x3C2AEB0", Offset = "0x3C2AEB0", VA = "0x3C2AEB0", Slot = "7")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x6002A2E")]
	[Address(RVA = "0x3C2AEE0", Offset = "0x3C2AEE0", VA = "0x3C2AEE0", Slot = "8")]
	public virtual void Write(bool value)
	{
	}

	[Token(Token = "0x6002A2F")]
	[Address(RVA = "0x3C2AF30", Offset = "0x3C2AF30", VA = "0x3C2AF30", Slot = "9")]
	public virtual void Write(byte value)
	{
	}

	[Token(Token = "0x6002A30")]
	[Address(RVA = "0x3C2AF60", Offset = "0x3C2AF60", VA = "0x3C2AF60", Slot = "10")]
	[CLSCompliant(false)]
	public virtual void Write(sbyte value)
	{
	}

	[Token(Token = "0x6002A31")]
	[Address(RVA = "0x3C2AF90", Offset = "0x3C2AF90", VA = "0x3C2AF90", Slot = "11")]
	public virtual void Write(byte[] buffer)
	{
	}

	[Token(Token = "0x6002A32")]
	[Address(RVA = "0x3C2B010", Offset = "0x3C2B010", VA = "0x3C2B010", Slot = "12")]
	public virtual void Write(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6002A33")]
	[Address(RVA = "0x3C2B040", Offset = "0x3C2B040", VA = "0x3C2B040", Slot = "13")]
	public virtual void Write(char ch)
	{
	}

	[Token(Token = "0x6002A34")]
	[Address(RVA = "0x3C2B150", Offset = "0x3C2B150", VA = "0x3C2B150", Slot = "14")]
	public virtual void Write(char[] chars)
	{
	}

	[Token(Token = "0x6002A35")]
	[Address(RVA = "0x3C2B1F0", Offset = "0x3C2B1F0", VA = "0x3C2B1F0", Slot = "15")]
	public virtual void Write(double value)
	{
	}

	[Token(Token = "0x6002A36")]
	[Address(RVA = "0x3C2B230", Offset = "0x3C2B230", VA = "0x3C2B230", Slot = "16")]
	public virtual void Write(short value)
	{
	}

	[Token(Token = "0x6002A37")]
	[Address(RVA = "0x3C2B290", Offset = "0x3C2B290", VA = "0x3C2B290", Slot = "17")]
	[CLSCompliant(false)]
	public virtual void Write(ushort value)
	{
	}

	[Token(Token = "0x6002A38")]
	[Address(RVA = "0x3C2B2F0", Offset = "0x3C2B2F0", VA = "0x3C2B2F0", Slot = "18")]
	public virtual void Write(int value)
	{
	}

	[Token(Token = "0x6002A39")]
	[Address(RVA = "0x3C2B380", Offset = "0x3C2B380", VA = "0x3C2B380", Slot = "19")]
	[CLSCompliant(false)]
	public virtual void Write(uint value)
	{
	}

	[Token(Token = "0x6002A3A")]
	[Address(RVA = "0x3C2B410", Offset = "0x3C2B410", VA = "0x3C2B410", Slot = "20")]
	public virtual void Write(long value)
	{
	}

	[Token(Token = "0x6002A3B")]
	[Address(RVA = "0x3C2B530", Offset = "0x3C2B530", VA = "0x3C2B530", Slot = "21")]
	[CLSCompliant(false)]
	public virtual void Write(ulong value)
	{
	}

	[Token(Token = "0x6002A3C")]
	[Address(RVA = "0x3C2B650", Offset = "0x3C2B650", VA = "0x3C2B650", Slot = "22")]
	public virtual void Write(float value)
	{
	}

	[Token(Token = "0x6002A3D")]
	[Address(RVA = "0x3C2B690", Offset = "0x3C2B690", VA = "0x3C2B690", Slot = "23")]
	public virtual void Write(string value)
	{
	}

	[Token(Token = "0x6002A3E")]
	[Address(RVA = "0x3C2B9E0", Offset = "0x3C2B9E0", VA = "0x3C2B9E0")]
	protected void Write7BitEncodedInt(int value)
	{
	}
}
