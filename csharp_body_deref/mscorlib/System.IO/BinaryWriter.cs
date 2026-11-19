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
[Token(Token = "0x2000674")]
[ComVisible(true)]
public class BinaryWriter : IDisposable
{
	[Token(Token = "0x4001A0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly BinaryWriter Null;

	[Token(Token = "0x4001A0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected Stream OutStream;

	[Token(Token = "0x4001A0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private byte[] _buffer;

	[Token(Token = "0x4001A0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x4001A0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Encoder _encoder;

	[Token(Token = "0x4001A10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[OptionalField]
	private bool _leaveOpen;

	[Token(Token = "0x4001A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private byte[] _largeByteBuffer;

	[Token(Token = "0x4001A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int _maxChars;

	[Token(Token = "0x17000831")]
	public virtual Stream BaseStream
	{
		[Token(Token = "0x60032C1")]
		[Address(RVA = "0x5483870", Offset = "0x5482870", VA = "0x5483870", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032BA")]
	[Address(RVA = "0x54834A0", Offset = "0x54824A0", VA = "0x54834A0")]
	protected BinaryWriter()
	{
	}

	[Token(Token = "0x60032BB")]
	[Address(RVA = "0x54835B0", Offset = "0x54825B0", VA = "0x54835B0")]
	public BinaryWriter(Stream output)
	{
	}

	[Token(Token = "0x60032BC")]
	[Address(RVA = "0x54837C0", Offset = "0x54827C0", VA = "0x54837C0")]
	public BinaryWriter(Stream output, Encoding encoding)
	{
	}

	[Token(Token = "0x60032BD")]
	[Address(RVA = "0x5483610", Offset = "0x5482610", VA = "0x5483610")]
	public BinaryWriter(Stream output, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x60032BE")]
	[Address(RVA = "0x54837D0", Offset = "0x54827D0", VA = "0x54837D0", Slot = "5")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x60032BF")]
	[Address(RVA = "0x54837F0", Offset = "0x54827F0", VA = "0x54837F0", Slot = "6")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60032C0")]
	[Address(RVA = "0x5483850", Offset = "0x5482850", VA = "0x5483850", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60032C2")]
	[Address(RVA = "0x5483890", Offset = "0x5482890", VA = "0x5483890", Slot = "8")]
	public virtual void Flush()
	{
	}

	[Token(Token = "0x60032C3")]
	[Address(RVA = "0x54838C0", Offset = "0x54828C0", VA = "0x54838C0", Slot = "9")]
	public virtual void Write(bool value)
	{
	}

	[Token(Token = "0x60032C4")]
	[Address(RVA = "0x5483910", Offset = "0x5482910", VA = "0x5483910", Slot = "10")]
	public virtual void Write(byte value)
	{
	}

	[Token(Token = "0x60032C5")]
	[Address(RVA = "0x5483940", Offset = "0x5482940", VA = "0x5483940", Slot = "11")]
	[CLSCompliant(false)]
	public virtual void Write(sbyte value)
	{
	}

	[Token(Token = "0x60032C6")]
	[Address(RVA = "0x5483970", Offset = "0x5482970", VA = "0x5483970", Slot = "12")]
	public virtual void Write(byte[] buffer)
	{
	}

	[Token(Token = "0x60032C7")]
	[Address(RVA = "0x54839F0", Offset = "0x54829F0", VA = "0x54839F0", Slot = "13")]
	public virtual void Write(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60032C8")]
	[Address(RVA = "0x5483A20", Offset = "0x5482A20", VA = "0x5483A20", Slot = "14")]
	public virtual void Write(char ch)
	{
	}

	[Token(Token = "0x60032C9")]
	[Address(RVA = "0x5483B30", Offset = "0x5482B30", VA = "0x5483B30", Slot = "15")]
	public virtual void Write(char[] chars)
	{
	}

	[Token(Token = "0x60032CA")]
	[Address(RVA = "0x5483BD0", Offset = "0x5482BD0", VA = "0x5483BD0", Slot = "16")]
	public virtual void Write(double value)
	{
	}

	[Token(Token = "0x60032CB")]
	[Address(RVA = "0x5483C10", Offset = "0x5482C10", VA = "0x5483C10", Slot = "17")]
	public virtual void Write(short value)
	{
	}

	[Token(Token = "0x60032CC")]
	[Address(RVA = "0x5483C70", Offset = "0x5482C70", VA = "0x5483C70", Slot = "18")]
	[CLSCompliant(false)]
	public virtual void Write(ushort value)
	{
	}

	[Token(Token = "0x60032CD")]
	[Address(RVA = "0x5483CD0", Offset = "0x5482CD0", VA = "0x5483CD0", Slot = "19")]
	public virtual void Write(int value)
	{
	}

	[Token(Token = "0x60032CE")]
	[Address(RVA = "0x5483D60", Offset = "0x5482D60", VA = "0x5483D60", Slot = "20")]
	[CLSCompliant(false)]
	public virtual void Write(uint value)
	{
	}

	[Token(Token = "0x60032CF")]
	[Address(RVA = "0x5483DF0", Offset = "0x5482DF0", VA = "0x5483DF0", Slot = "21")]
	public virtual void Write(long value)
	{
	}

	[Token(Token = "0x60032D0")]
	[Address(RVA = "0x5483F20", Offset = "0x5482F20", VA = "0x5483F20", Slot = "22")]
	[CLSCompliant(false)]
	public virtual void Write(ulong value)
	{
	}

	[Token(Token = "0x60032D1")]
	[Address(RVA = "0x5484050", Offset = "0x5483050", VA = "0x5484050", Slot = "23")]
	public virtual void Write(float value)
	{
	}

	[Token(Token = "0x60032D2")]
	[Address(RVA = "0x5484090", Offset = "0x5483090", VA = "0x5484090", Slot = "24")]
	public virtual void Write(string value)
	{
	}

	[Token(Token = "0x60032D3")]
	[Address(RVA = "0x54843E0", Offset = "0x54833E0", VA = "0x54843E0")]
	protected void Write7BitEncodedInt(int value)
	{
	}
}
