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
		[Address(RVA = "0x4F05420", Offset = "0x4F05420", VA = "0x4F05420", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005D0")]
	public override bool CanSeek
	{
		[Token(Token = "0x600280F")]
		[Address(RVA = "0x4F05430", Offset = "0x4F05430", VA = "0x4F05430", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005D1")]
	public override bool CanWrite
	{
		[Token(Token = "0x6002810")]
		[Address(RVA = "0x4F05440", Offset = "0x4F05440", VA = "0x4F05440", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005D2")]
	public virtual int Capacity
	{
		[Token(Token = "0x600281C")]
		[Address(RVA = "0x4F05980", Offset = "0x4F05980", VA = "0x4F05980", Slot = "39")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600281D")]
		[Address(RVA = "0x4F059B0", Offset = "0x4F059B0", VA = "0x4F059B0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x170005D3")]
	public override long Length
	{
		[Token(Token = "0x600281E")]
		[Address(RVA = "0x4F05B30", Offset = "0x4F05B30", VA = "0x4F05B30", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170005D4")]
	public override long Position
	{
		[Token(Token = "0x600281F")]
		[Address(RVA = "0x4F05B60", Offset = "0x4F05B60", VA = "0x4F05B60", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6002820")]
		[Address(RVA = "0x4F05B90", Offset = "0x4F05B90", VA = "0x4F05B90", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6002808")]
	[Address(RVA = "0x4F04FA0", Offset = "0x4F04FA0", VA = "0x4F04FA0")]
	public MemoryStream()
	{
	}

	[Token(Token = "0x6002809")]
	[Address(RVA = "0x4F04FB0", Offset = "0x4F04FB0", VA = "0x4F04FB0")]
	public MemoryStream(int capacity)
	{
	}

	[Token(Token = "0x600280A")]
	[Address(RVA = "0x4F05150", Offset = "0x4F05150", VA = "0x4F05150")]
	public MemoryStream(byte[] buffer)
	{
	}

	[Token(Token = "0x600280B")]
	[Address(RVA = "0x4F05160", Offset = "0x4F05160", VA = "0x4F05160")]
	public MemoryStream(byte[] buffer, bool writable)
	{
	}

	[Token(Token = "0x600280C")]
	[Address(RVA = "0x4F05240", Offset = "0x4F05240", VA = "0x4F05240")]
	public MemoryStream(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600280D")]
	[Address(RVA = "0x4F05260", Offset = "0x4F05260", VA = "0x4F05260")]
	public MemoryStream(byte[] buffer, int index, int count, bool writable, bool publiclyVisible)
	{
	}

	[Token(Token = "0x6002811")]
	[Address(RVA = "0x4F05450", Offset = "0x4F05450", VA = "0x4F05450")]
	private void EnsureNotClosed()
	{
	}

	[Token(Token = "0x6002812")]
	[Address(RVA = "0x4F05480", Offset = "0x4F05480", VA = "0x4F05480")]
	private void EnsureWriteable()
	{
	}

	[Token(Token = "0x6002813")]
	[Address(RVA = "0x4F054C0", Offset = "0x4F054C0", VA = "0x4F054C0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002814")]
	[Address(RVA = "0x4F05580", Offset = "0x4F05580", VA = "0x4F05580")]
	private bool EnsureCapacity(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002815")]
	[Address(RVA = "0x4F05620", Offset = "0x4F05620", VA = "0x4F05620", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6002816")]
	[Address(RVA = "0x4F05630", Offset = "0x4F05630", VA = "0x4F05630", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002817")]
	[Address(RVA = "0x4F057F0", Offset = "0x4F057F0", VA = "0x4F057F0", Slot = "38")]
	public virtual byte[] GetBuffer()
	{
		return null;
	}

	[Token(Token = "0x6002818")]
	[Address(RVA = "0x4F05850", Offset = "0x4F05850", VA = "0x4F05850")]
	internal byte[] InternalGetBuffer()
	{
		return null;
	}

	[Token(Token = "0x6002819")]
	[Address(RVA = "0x4F05860", Offset = "0x4F05860", VA = "0x4F05860")]
	internal int InternalGetPosition()
	{
		return default(int);
	}

	[Token(Token = "0x600281A")]
	[Address(RVA = "0x4F05870", Offset = "0x4F05870", VA = "0x4F05870")]
	internal int InternalReadInt32()
	{
		return default(int);
	}

	[Token(Token = "0x600281B")]
	[Address(RVA = "0x4F05930", Offset = "0x4F05930", VA = "0x4F05930")]
	internal int InternalEmulateRead(int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002821")]
	[Address(RVA = "0x4F05C60", Offset = "0x4F05C60", VA = "0x4F05C60", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002822")]
	[Address(RVA = "0x4F05E40", Offset = "0x4F05E40", VA = "0x4F05E40", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6002823")]
	[Address(RVA = "0x4F05FF0", Offset = "0x4F05FF0", VA = "0x4F05FF0", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002824")]
	[Address(RVA = "0x4F06390", Offset = "0x4F06390", VA = "0x4F06390", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6002825")]
	[Address(RVA = "0x4F06780", Offset = "0x4F06780", VA = "0x4F06780", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6002826")]
	[Address(RVA = "0x4F067E0", Offset = "0x4F067E0", VA = "0x4F067E0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin loc)
	{
		return default(long);
	}

	[Token(Token = "0x6002827")]
	[Address(RVA = "0x4F06940", Offset = "0x4F06940", VA = "0x4F06940", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6002828")]
	[Address(RVA = "0x4F06A30", Offset = "0x4F06A30", VA = "0x4F06A30", Slot = "41")]
	public virtual byte[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002829")]
	[Address(RVA = "0x4F06B30", Offset = "0x4F06B30", VA = "0x4F06B30", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600282A")]
	[Address(RVA = "0x4F06DF0", Offset = "0x4F06DF0", VA = "0x4F06DF0", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x600282B")]
	[Address(RVA = "0x4F07030", Offset = "0x4F07030", VA = "0x4F07030", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600282C")]
	[Address(RVA = "0x4F07380", Offset = "0x4F07380", VA = "0x4F07380", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600282D")]
	[Address(RVA = "0x4F07710", Offset = "0x4F07710", VA = "0x4F07710", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}
}
