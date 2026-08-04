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
[Token(Token = "0x2000542")]
public class MemoryStream : Stream
{
	[Token(Token = "0x40015D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] _buffer;

	[Token(Token = "0x40015D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int _origin;

	[Token(Token = "0x40015D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private int _position;

	[Token(Token = "0x40015D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int _length;

	[Token(Token = "0x40015D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private int _capacity;

	[Token(Token = "0x40015D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool _expandable;

	[Token(Token = "0x40015D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool _writable;

	[Token(Token = "0x40015D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool _exposable;

	[Token(Token = "0x40015D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x43")]
	private bool _isOpen;

	[NonSerialized]
	[Token(Token = "0x40015D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Task<int> _lastReadTask;

	[Token(Token = "0x170005CF")]
	public override bool CanRead
	{
		[Token(Token = "0x600280E")]
		[Address(RVA = "0x3BEAF40", Offset = "0x3BEAF40", VA = "0x3BEAF40", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005D0")]
	public override bool CanSeek
	{
		[Token(Token = "0x600280F")]
		[Address(RVA = "0x3BEAF50", Offset = "0x3BEAF50", VA = "0x3BEAF50", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005D1")]
	public override bool CanWrite
	{
		[Token(Token = "0x6002810")]
		[Address(RVA = "0x3BEAF60", Offset = "0x3BEAF60", VA = "0x3BEAF60", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005D2")]
	public virtual int Capacity
	{
		[Token(Token = "0x600281C")]
		[Address(RVA = "0x3BEB4A0", Offset = "0x3BEB4A0", VA = "0x3BEB4A0", Slot = "39")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600281D")]
		[Address(RVA = "0x3BEB4D0", Offset = "0x3BEB4D0", VA = "0x3BEB4D0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x170005D3")]
	public override long Length
	{
		[Token(Token = "0x600281E")]
		[Address(RVA = "0x3BEB650", Offset = "0x3BEB650", VA = "0x3BEB650", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170005D4")]
	public override long Position
	{
		[Token(Token = "0x600281F")]
		[Address(RVA = "0x3BEB680", Offset = "0x3BEB680", VA = "0x3BEB680", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6002820")]
		[Address(RVA = "0x3BEB6B0", Offset = "0x3BEB6B0", VA = "0x3BEB6B0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6002808")]
	[Address(RVA = "0x3BEAAC0", Offset = "0x3BEAAC0", VA = "0x3BEAAC0")]
	public MemoryStream()
	{
	}

	[Token(Token = "0x6002809")]
	[Address(RVA = "0x3BEAAD0", Offset = "0x3BEAAD0", VA = "0x3BEAAD0")]
	public MemoryStream(int capacity)
	{
	}

	[Token(Token = "0x600280A")]
	[Address(RVA = "0x3BEAC70", Offset = "0x3BEAC70", VA = "0x3BEAC70")]
	public MemoryStream(byte[] buffer)
	{
	}

	[Token(Token = "0x600280B")]
	[Address(RVA = "0x3BEAC80", Offset = "0x3BEAC80", VA = "0x3BEAC80")]
	public MemoryStream(byte[] buffer, bool writable)
	{
	}

	[Token(Token = "0x600280C")]
	[Address(RVA = "0x3BEAD60", Offset = "0x3BEAD60", VA = "0x3BEAD60")]
	public MemoryStream(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600280D")]
	[Address(RVA = "0x3BEAD80", Offset = "0x3BEAD80", VA = "0x3BEAD80")]
	public MemoryStream(byte[] buffer, int index, int count, bool writable, bool publiclyVisible)
	{
	}

	[Token(Token = "0x6002811")]
	[Address(RVA = "0x3BEAF70", Offset = "0x3BEAF70", VA = "0x3BEAF70")]
	private void EnsureNotClosed()
	{
	}

	[Token(Token = "0x6002812")]
	[Address(RVA = "0x3BEAFA0", Offset = "0x3BEAFA0", VA = "0x3BEAFA0")]
	private void EnsureWriteable()
	{
	}

	[Token(Token = "0x6002813")]
	[Address(RVA = "0x3BEAFE0", Offset = "0x3BEAFE0", VA = "0x3BEAFE0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002814")]
	[Address(RVA = "0x3BEB0A0", Offset = "0x3BEB0A0", VA = "0x3BEB0A0")]
	private bool EnsureCapacity(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002815")]
	[Address(RVA = "0x3BEB140", Offset = "0x3BEB140", VA = "0x3BEB140", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6002816")]
	[Address(RVA = "0x3BEB150", Offset = "0x3BEB150", VA = "0x3BEB150", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002817")]
	[Address(RVA = "0x3BEB310", Offset = "0x3BEB310", VA = "0x3BEB310", Slot = "38")]
	public virtual byte[] GetBuffer()
	{
		return null;
	}

	[Token(Token = "0x6002818")]
	[Address(RVA = "0x3BEB370", Offset = "0x3BEB370", VA = "0x3BEB370")]
	internal byte[] InternalGetBuffer()
	{
		return null;
	}

	[Token(Token = "0x6002819")]
	[Address(RVA = "0x3BEB380", Offset = "0x3BEB380", VA = "0x3BEB380")]
	internal int InternalGetPosition()
	{
		return default(int);
	}

	[Token(Token = "0x600281A")]
	[Address(RVA = "0x3BEB390", Offset = "0x3BEB390", VA = "0x3BEB390")]
	internal int InternalReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x600281B")]
	[Address(RVA = "0x3BEB450", Offset = "0x3BEB450", VA = "0x3BEB450")]
	internal int InternalEmulateRead(int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002821")]
	[Address(RVA = "0x3BEB780", Offset = "0x3BEB780", VA = "0x3BEB780", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002822")]
	[Address(RVA = "0x3BEB960", Offset = "0x3BEB960", VA = "0x3BEB960", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6002823")]
	[Address(RVA = "0x3BEBB10", Offset = "0x3BEBB10", VA = "0x3BEBB10", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002824")]
	[Address(RVA = "0x3BEBEB0", Offset = "0x3BEBEB0", VA = "0x3BEBEB0", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6002825")]
	[Address(RVA = "0x3BEC2A0", Offset = "0x3BEC2A0", VA = "0x3BEC2A0", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6002826")]
	[Address(RVA = "0x3BEC300", Offset = "0x3BEC300", VA = "0x3BEC300", Slot = "30")]
	public override long Seek(long offset, SeekOrigin loc)
	{
		return default(long);
	}

	[Token(Token = "0x6002827")]
	[Address(RVA = "0x3BEC460", Offset = "0x3BEC460", VA = "0x3BEC460", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6002828")]
	[Address(RVA = "0x3BEC550", Offset = "0x3BEC550", VA = "0x3BEC550", Slot = "41")]
	public virtual byte[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002829")]
	[Address(RVA = "0x3BEC650", Offset = "0x3BEC650", VA = "0x3BEC650", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600282A")]
	[Address(RVA = "0x3BEC910", Offset = "0x3BEC910", VA = "0x3BEC910", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x600282B")]
	[Address(RVA = "0x3BECB50", Offset = "0x3BECB50", VA = "0x3BECB50", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600282C")]
	[Address(RVA = "0x3BECEA0", Offset = "0x3BECEA0", VA = "0x3BECEA0", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600282D")]
	[Address(RVA = "0x3BED230", Offset = "0x3BED230", VA = "0x3BED230", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}
}
