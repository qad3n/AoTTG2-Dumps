// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.MemoryStream
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000644")]
public class MemoryStream : Stream
{
	[Token(Token = "0x4001914")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x4001915")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _origin;

	[Token(Token = "0x4001916")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private int _position;

	[Token(Token = "0x4001917")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int _length;

	[Token(Token = "0x4001918")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private int _capacity;

	[Token(Token = "0x4001919")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool _expandable;

	[Token(Token = "0x400191A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool _writable;

	[Token(Token = "0x400191B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool _exposable;

	[Token(Token = "0x400191C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x43")]
	private bool _isOpen;

	[NonSerialized]
	[Token(Token = "0x400191D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Task<int> _lastReadTask;

	[Token(Token = "0x170007E3")]
	public override bool CanRead
	{
		[Token(Token = "0x60030A2")]
		[Address(RVA = "0x5465910", Offset = "0x5464910", VA = "0x5465910", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E4")]
	public override bool CanSeek
	{
		[Token(Token = "0x60030A3")]
		[Address(RVA = "0x5465920", Offset = "0x5464920", VA = "0x5465920", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E5")]
	public override bool CanWrite
	{
		[Token(Token = "0x60030A4")]
		[Address(RVA = "0x5465930", Offset = "0x5464930", VA = "0x5465930", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007E6")]
	public virtual int Capacity
	{
		[Token(Token = "0x60030B0")]
		[Address(RVA = "0x5465E70", Offset = "0x5464E70", VA = "0x5465E70", Slot = "40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60030B1")]
		[Address(RVA = "0x5465EA0", Offset = "0x5464EA0", VA = "0x5465EA0", Slot = "41")]
		set
		{
		}
	}

	[Token(Token = "0x170007E7")]
	public override long Length
	{
		[Token(Token = "0x60030B2")]
		[Address(RVA = "0x5466020", Offset = "0x5465020", VA = "0x5466020", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170007E8")]
	public override long Position
	{
		[Token(Token = "0x60030B3")]
		[Address(RVA = "0x5466050", Offset = "0x5465050", VA = "0x5466050", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60030B4")]
		[Address(RVA = "0x5466080", Offset = "0x5465080", VA = "0x5466080", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x600309C")]
	[Address(RVA = "0x5465490", Offset = "0x5464490", VA = "0x5465490")]
	public MemoryStream()
	{
	}

	[Token(Token = "0x600309D")]
	[Address(RVA = "0x54654A0", Offset = "0x54644A0", VA = "0x54654A0")]
	public MemoryStream(int capacity)
	{
	}

	[Token(Token = "0x600309E")]
	[Address(RVA = "0x5465640", Offset = "0x5464640", VA = "0x5465640")]
	public MemoryStream(byte[] buffer)
	{
	}

	[Token(Token = "0x600309F")]
	[Address(RVA = "0x5465650", Offset = "0x5464650", VA = "0x5465650")]
	public MemoryStream(byte[] buffer, bool writable)
	{
	}

	[Token(Token = "0x60030A0")]
	[Address(RVA = "0x5465730", Offset = "0x5464730", VA = "0x5465730")]
	public MemoryStream(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60030A1")]
	[Address(RVA = "0x5465750", Offset = "0x5464750", VA = "0x5465750")]
	public MemoryStream(byte[] buffer, int index, int count, bool writable, bool publiclyVisible)
	{
	}

	[Token(Token = "0x60030A5")]
	[Address(RVA = "0x5465940", Offset = "0x5464940", VA = "0x5465940")]
	private void EnsureNotClosed()
	{
	}

	[Token(Token = "0x60030A6")]
	[Address(RVA = "0x5465970", Offset = "0x5464970", VA = "0x5465970")]
	private void EnsureWriteable()
	{
	}

	[Token(Token = "0x60030A7")]
	[Address(RVA = "0x54659B0", Offset = "0x54649B0", VA = "0x54659B0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60030A8")]
	[Address(RVA = "0x5465A70", Offset = "0x5464A70", VA = "0x5465A70")]
	private bool EnsureCapacity(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A9")]
	[Address(RVA = "0x5465B20", Offset = "0x5464B20", VA = "0x5465B20", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60030AA")]
	[Address(RVA = "0x5465B30", Offset = "0x5464B30", VA = "0x5465B30", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60030AB")]
	[Address(RVA = "0x5465CF0", Offset = "0x5464CF0", VA = "0x5465CF0", Slot = "39")]
	public virtual byte[] GetBuffer()
	{
		return null;
	}

	[Token(Token = "0x60030AC")]
	[Address(RVA = "0x5465D50", Offset = "0x5464D50", VA = "0x5465D50")]
	internal byte[] InternalGetBuffer()
	{
		return null;
	}

	[Token(Token = "0x60030AD")]
	[Address(RVA = "0x5465D60", Offset = "0x5464D60", VA = "0x5465D60")]
	internal int InternalGetPosition()
	{
		return default(int);
	}

	[Token(Token = "0x60030AE")]
	[Address(RVA = "0x5465D70", Offset = "0x5464D70", VA = "0x5465D70")]
	internal int InternalReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x60030AF")]
	[Address(RVA = "0x5465E20", Offset = "0x5464E20", VA = "0x5465E20")]
	internal int InternalEmulateRead(int count)
	{
		return default(int);
	}

	[Token(Token = "0x60030B5")]
	[Address(RVA = "0x5466140", Offset = "0x5465140", VA = "0x5466140", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60030B6")]
	[Address(RVA = "0x5466330", Offset = "0x5465330", VA = "0x5466330", Slot = "34")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60030B7")]
	[Address(RVA = "0x54664F0", Offset = "0x54654F0", VA = "0x54664F0", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60030B8")]
	[Address(RVA = "0x5466870", Offset = "0x5465870", VA = "0x5466870", Slot = "26")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60030B9")]
	[Address(RVA = "0x5466C50", Offset = "0x5465C50", VA = "0x5466C50", Slot = "35")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x60030BA")]
	[Address(RVA = "0x5466CB0", Offset = "0x5465CB0", VA = "0x5466CB0", Slot = "18")]
	public override void CopyTo(Stream destination, int bufferSize)
	{
	}

	[Token(Token = "0x60030BB")]
	[Address(RVA = "0x5467000", Offset = "0x5466000", VA = "0x5467000", Slot = "31")]
	public override long Seek(long offset, SeekOrigin loc)
	{
		return default(long);
	}

	[Token(Token = "0x60030BC")]
	[Address(RVA = "0x5467140", Offset = "0x5466140", VA = "0x5467140", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60030BD")]
	[Address(RVA = "0x5467230", Offset = "0x5466230", VA = "0x5467230", Slot = "42")]
	public virtual byte[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60030BE")]
	[Address(RVA = "0x5467360", Offset = "0x5466360", VA = "0x5467360", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60030BF")]
	[Address(RVA = "0x5467600", Offset = "0x5466600", VA = "0x5467600", Slot = "37")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60030C0")]
	[Address(RVA = "0x5467820", Offset = "0x5466820", VA = "0x5467820", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60030C1")]
	[Address(RVA = "0x5467B60", Offset = "0x5466B60", VA = "0x5467B60", Slot = "30")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60030C2")]
	[Address(RVA = "0x5467E50", Offset = "0x5466E50", VA = "0x5467E50", Slot = "38")]
	public override void WriteByte(byte value)
	{
	}
}
