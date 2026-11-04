// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.MemoryStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x200066B")]
public class MemoryStream : Stream
{
	[Token(Token = "0x40019B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x40019B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _origin;

	[Token(Token = "0x40019B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private int _position;

	[Token(Token = "0x40019B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int _length;

	[Token(Token = "0x40019B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private int _capacity;

	[Token(Token = "0x40019B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool _expandable;

	[Token(Token = "0x40019B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool _writable;

	[Token(Token = "0x40019B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool _exposable;

	[Token(Token = "0x40019B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x43")]
	private bool _isOpen;

	[NonSerialized]
	[Token(Token = "0x40019BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Task<int> _lastReadTask;

	[Token(Token = "0x170007E6")]
	public override bool CanRead
	{
		[Token(Token = "0x60030DD")]
		[Address(RVA = "0x1AD8260", Offset = "0x1AD6860", VA = "0x181AD8260", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E7")]
	public override bool CanSeek
	{
		[Token(Token = "0x60030DE")]
		[Address(RVA = "0x1AD8260", Offset = "0x1AD6860", VA = "0x181AD8260", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E8")]
	public override bool CanWrite
	{
		[Token(Token = "0x60030DF")]
		[Address(RVA = "0x1AD8270", Offset = "0x1AD6870", VA = "0x181AD8270", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E9")]
	public virtual int Capacity
	{
		[Token(Token = "0x60030EB")]
		[Address(RVA = "0x1AD8280", Offset = "0x1AD6880", VA = "0x181AD8280", Slot = "39")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60030EC")]
		[Address(RVA = "0x1AD8360", Offset = "0x1AD6960", VA = "0x181AD8360", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x170007EA")]
	public override long Length
	{
		[Token(Token = "0x60030ED")]
		[Address(RVA = "0x1AD82C0", Offset = "0x1AD68C0", VA = "0x181AD82C0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170007EB")]
	public override long Position
	{
		[Token(Token = "0x60030EE")]
		[Address(RVA = "0x1AD8310", Offset = "0x1AD6910", VA = "0x181AD8310", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60030EF")]
		[Address(RVA = "0x1AD8510", Offset = "0x1AD6B10", VA = "0x181AD8510", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60030D7")]
	[Address(RVA = "0x1AD80A0", Offset = "0x1AD66A0", VA = "0x181AD80A0")]
	public MemoryStream()
	{
	}

	[Token(Token = "0x60030D8")]
	[Address(RVA = "0x1AD8140", Offset = "0x1AD6740", VA = "0x181AD8140")]
	public MemoryStream(int capacity)
	{
	}

	[Token(Token = "0x60030D9")]
	[Address(RVA = "0x1AD7FC0", Offset = "0x1AD65C0", VA = "0x181AD7FC0")]
	public MemoryStream(byte[] buffer)
	{
	}

	[Token(Token = "0x60030DA")]
	[Address(RVA = "0x1AD7ED0", Offset = "0x1AD64D0", VA = "0x181AD7ED0")]
	public MemoryStream(byte[] buffer, bool writable)
	{
	}

	[Token(Token = "0x60030DB")]
	[Address(RVA = "0x1AD7C90", Offset = "0x1AD6290", VA = "0x181AD7C90")]
	public MemoryStream(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60030DC")]
	[Address(RVA = "0x1AD7CC0", Offset = "0x1AD62C0", VA = "0x181AD7CC0")]
	public MemoryStream(byte[] buffer, int index, int count, bool writable, bool publiclyVisible)
	{
	}

	[Token(Token = "0x60030E0")]
	[Address(RVA = "0x1AD5D60", Offset = "0x1AD4360", VA = "0x181AD5D60")]
	private void EnsureNotClosed()
	{
	}

	[Token(Token = "0x60030E1")]
	[Address(RVA = "0x1AD5DA0", Offset = "0x1AD43A0", VA = "0x181AD5DA0")]
	private void EnsureWriteable()
	{
	}

	[Token(Token = "0x60030E2")]
	[Address(RVA = "0x1AD5C00", Offset = "0x1AD4200", VA = "0x181AD5C00", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60030E3")]
	[Address(RVA = "0x1AD5CA0", Offset = "0x1AD42A0", VA = "0x181AD5CA0")]
	private bool EnsureCapacity(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60030E4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60030E5")]
	[Address(RVA = "0x1AD5DF0", Offset = "0x1AD43F0", VA = "0x181AD5DF0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60030E6")]
	[Address(RVA = "0x1AD5F20", Offset = "0x1AD4520", VA = "0x181AD5F20", Slot = "38")]
	public virtual byte[] GetBuffer()
	{
		return null;
	}

	[Token(Token = "0x60030E7")]
	[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
	internal byte[] InternalGetBuffer()
	{
		return null;
	}

	[Token(Token = "0x60030E8")]
	[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
	internal int InternalGetPosition()
	{
		return default(int);
	}

	[Token(Token = "0x60030E9")]
	[Address(RVA = "0x1AD5FF0", Offset = "0x1AD45F0", VA = "0x181AD5FF0")]
	internal int InternalReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x60030EA")]
	[Address(RVA = "0x1AD5F90", Offset = "0x1AD4590", VA = "0x181AD5F90")]
	internal int InternalEmulateRead(int count)
	{
		return default(int);
	}

	[Token(Token = "0x60030F0")]
	[Address(RVA = "0x1AD6800", Offset = "0x1AD4E00", VA = "0x181AD6800", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60030F1")]
	[Address(RVA = "0x1AD6A70", Offset = "0x1AD5070", VA = "0x181AD6A70", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60030F2")]
	[Address(RVA = "0x1AD6440", Offset = "0x1AD4A40", VA = "0x181AD6440", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60030F3")]
	[Address(RVA = "0x1AD6100", Offset = "0x1AD4700", VA = "0x181AD6100", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60030F4")]
	[Address(RVA = "0x1AD6780", Offset = "0x1AD4D80", VA = "0x181AD6780", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x60030F5")]
	[Address(RVA = "0x1AD6C40", Offset = "0x1AD5240", VA = "0x181AD6C40", Slot = "30")]
	public override long Seek(long offset, SeekOrigin loc)
	{
		return default(long);
	}

	[Token(Token = "0x60030F6")]
	[Address(RVA = "0x1AD6E90", Offset = "0x1AD5490", VA = "0x181AD6E90", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60030F7")]
	[Address(RVA = "0x1AD7000", Offset = "0x1AD5600", VA = "0x181AD7000", Slot = "41")]
	public virtual byte[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60030F8")]
	[Address(RVA = "0x1AD7990", Offset = "0x1AD5F90", VA = "0x181AD7990", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60030F9")]
	[Address(RVA = "0x1AD7720", Offset = "0x1AD5D20", VA = "0x181AD7720", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60030FA")]
	[Address(RVA = "0x1AD7330", Offset = "0x1AD5930", VA = "0x181AD7330", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60030FB")]
	[Address(RVA = "0x1AD70A0", Offset = "0x1AD56A0", VA = "0x181AD70A0", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60030FC")]
	[Address(RVA = "0x1AD7600", Offset = "0x1AD5C00", VA = "0x181AD7600", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}
}
