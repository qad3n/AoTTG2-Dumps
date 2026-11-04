// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.BinaryWriter
// Update status: CHANGED in this game update
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
[Token(Token = "0x200069A")]
[ComVisible(true)]
public class BinaryWriter : IDisposable
{
	[Token(Token = "0x4001AA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly BinaryWriter Null;

	[Token(Token = "0x4001AA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected Stream OutStream;

	[Token(Token = "0x4001AA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private byte[] _buffer;

	[Token(Token = "0x4001AA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x4001AA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Encoder _encoder;

	[Token(Token = "0x4001AAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[OptionalField]
	private bool _leaveOpen;

	[Token(Token = "0x4001AAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private byte[] _largeByteBuffer;

	[Token(Token = "0x4001AAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int _maxChars;

	[Token(Token = "0x60032ED")]
	[Address(RVA = "0x1AE5970", Offset = "0x1AE3F70", VA = "0x181AE5970")]
	protected BinaryWriter()
	{
	}

	[Token(Token = "0x60032EE")]
	[Address(RVA = "0x1AE5C50", Offset = "0x1AE4250", VA = "0x181AE5C50")]
	public BinaryWriter(Stream output)
	{
	}

	[Token(Token = "0x60032EF")]
	[Address(RVA = "0x1AE5950", Offset = "0x1AE3F50", VA = "0x181AE5950")]
	public BinaryWriter(Stream output, Encoding encoding)
	{
	}

	[Token(Token = "0x60032F0")]
	[Address(RVA = "0x1AE5A80", Offset = "0x1AE4080", VA = "0x181AE5A80")]
	public BinaryWriter(Stream output, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x60032F1")]
	[Address(RVA = "0x1A370A0", Offset = "0x1A356A0", VA = "0x181A370A0", Slot = "5")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60032F2")]
	[Address(RVA = "0x1AE4AD0", Offset = "0x1AE30D0", VA = "0x181AE4AD0", Slot = "6")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60032F3")]
	[Address(RVA = "0x1A370A0", Offset = "0x1A356A0", VA = "0x181A370A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60032F4")]
	[Address(RVA = "0x1AE4B20", Offset = "0x1AE3120", VA = "0x181AE4B20", Slot = "7")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x60032F5")]
	[Address(RVA = "0x1AE52C0", Offset = "0x1AE38C0", VA = "0x181AE52C0", Slot = "8")]
	public virtual void Write(bool value)
	{
	}

	[Token(Token = "0x60032F6")]
	[Address(RVA = "0x1AE50F0", Offset = "0x1AE36F0", VA = "0x181AE50F0", Slot = "9")]
	public virtual void Write(byte value)
	{
	}

	[Token(Token = "0x60032F7")]
	[Address(RVA = "0x1AE50F0", Offset = "0x1AE36F0", VA = "0x181AE50F0", Slot = "10")]
	[CLSCompliant(false)]
	public virtual void Write(sbyte value)
	{
	}

	[Token(Token = "0x60032F8")]
	[Address(RVA = "0x1AE5120", Offset = "0x1AE3720", VA = "0x181AE5120", Slot = "11")]
	public virtual void Write(byte[] buffer)
	{
	}

	[Token(Token = "0x60032F9")]
	[Address(RVA = "0x1AE5710", Offset = "0x1AE3D10", VA = "0x181AE5710", Slot = "12")]
	public virtual void Write(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60032FA")]
	[Address(RVA = "0x1AE55D0", Offset = "0x1AE3BD0", VA = "0x181AE55D0", Slot = "13")]
	public virtual void Write(char ch)
	{
	}

	[Token(Token = "0x60032FB")]
	[Address(RVA = "0x1AE51B0", Offset = "0x1AE37B0", VA = "0x181AE51B0", Slot = "14")]
	public virtual void Write(char[] chars)
	{
	}

	[Token(Token = "0x60032FC")]
	[Address(RVA = "0x1AE54D0", Offset = "0x1AE3AD0", VA = "0x181AE54D0", Slot = "15")]
	public virtual void Write(double value)
	{
	}

	[Token(Token = "0x60032FD")]
	[Address(RVA = "0x1AE4F40", Offset = "0x1AE3540", VA = "0x181AE4F40", Slot = "16")]
	public virtual void Write(short value)
	{
	}

	[Token(Token = "0x60032FE")]
	[Address(RVA = "0x1AE5460", Offset = "0x1AE3A60", VA = "0x181AE5460", Slot = "17")]
	[CLSCompliant(false)]
	public virtual void Write(ushort value)
	{
	}

	[Token(Token = "0x60032FF")]
	[Address(RVA = "0x1AE5520", Offset = "0x1AE3B20", VA = "0x181AE5520", Slot = "18")]
	public virtual void Write(int value)
	{
	}

	[Token(Token = "0x6003300")]
	[Address(RVA = "0x1AE5740", Offset = "0x1AE3D40", VA = "0x181AE5740", Slot = "19")]
	[CLSCompliant(false)]
	public virtual void Write(uint value)
	{
	}

	[Token(Token = "0x6003301")]
	[Address(RVA = "0x1AE5320", Offset = "0x1AE3920", VA = "0x181AE5320", Slot = "20")]
	public virtual void Write(long value)
	{
	}

	[Token(Token = "0x6003302")]
	[Address(RVA = "0x1AE4FB0", Offset = "0x1AE35B0", VA = "0x181AE4FB0", Slot = "21")]
	[CLSCompliant(false)]
	public virtual void Write(ulong value)
	{
	}

	[Token(Token = "0x6003303")]
	[Address(RVA = "0x1AE5270", Offset = "0x1AE3870", VA = "0x181AE5270", Slot = "22")]
	public virtual void Write(float value)
	{
	}

	[Token(Token = "0x6003304")]
	[Address(RVA = "0x1AE4BC0", Offset = "0x1AE31C0", VA = "0x181AE4BC0", Slot = "23")]
	public virtual void Write(string value)
	{
	}

	[Token(Token = "0x6003305")]
	[Address(RVA = "0x1AE4B50", Offset = "0x1AE3150", VA = "0x181AE4B50")]
	protected void Write7BitEncodedInt(int value)
	{
	}
}
