// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.NetworkStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000376")]
public class NetworkStream : Stream
{
	[Token(Token = "0x4000E27")]
	[FieldOffset(Offset = "0x28")]
	private readonly Socket _streamSocket;

	[Token(Token = "0x4000E28")]
	[FieldOffset(Offset = "0x30")]
	private readonly bool _ownsSocket;

	[Token(Token = "0x4000E29")]
	[FieldOffset(Offset = "0x31")]
	private bool _readable;

	[Token(Token = "0x4000E2A")]
	[FieldOffset(Offset = "0x32")]
	private bool _writeable;

	[Token(Token = "0x4000E2B")]
	[FieldOffset(Offset = "0x34")]
	private int _closeTimeout;

	[Token(Token = "0x4000E2C")]
	[FieldOffset(Offset = "0x38")]
	private bool _cleanedUp;

	[Token(Token = "0x4000E2D")]
	[FieldOffset(Offset = "0x3C")]
	private int _currentReadTimeout;

	[Token(Token = "0x4000E2E")]
	[FieldOffset(Offset = "0x40")]
	private int _currentWriteTimeout;

	[Token(Token = "0x1700051D")]
	public override bool CanRead
	{
		[Token(Token = "0x6001785")]
		[Address(RVA = "0x1D6A540", Offset = "0x1D68B40", VA = "0x181D6A540", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700051E")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001786")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700051F")]
	public override bool CanWrite
	{
		[Token(Token = "0x6001787")]
		[Address(RVA = "0x1D6A550", Offset = "0x1D68B50", VA = "0x181D6A550", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000520")]
	public override bool CanTimeout
	{
		[Token(Token = "0x6001788")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000521")]
	public override int ReadTimeout
	{
		[Token(Token = "0x6001789")]
		[Address(RVA = "0x27F66B0", Offset = "0x27F4CB0", VA = "0x1827F66B0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600178A")]
		[Address(RVA = "0x27F67E0", Offset = "0x27F4DE0", VA = "0x1827F67E0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000522")]
	public override int WriteTimeout
	{
		[Token(Token = "0x600178B")]
		[Address(RVA = "0x27F6720", Offset = "0x27F4D20", VA = "0x1827F6720", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600178C")]
		[Address(RVA = "0x27F6880", Offset = "0x27F4E80", VA = "0x1827F6880", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000523")]
	public override long Length
	{
		[Token(Token = "0x600178D")]
		[Address(RVA = "0x27F6610", Offset = "0x27F4C10", VA = "0x1827F6610", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000524")]
	public override long Position
	{
		[Token(Token = "0x600178E")]
		[Address(RVA = "0x27F6660", Offset = "0x27F4C60", VA = "0x1827F6660", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600178F")]
		[Address(RVA = "0x27F6790", Offset = "0x27F4D90", VA = "0x1827F6790", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000525")]
	internal Socket InternalSocket
	{
		[Token(Token = "0x60017A6")]
		[Address(RVA = "0x27F6570", Offset = "0x27F4B70", VA = "0x1827F6570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001782")]
	[Address(RVA = "0x27F6330", Offset = "0x27F4930", VA = "0x1827F6330")]
	public NetworkStream(Socket socket)
	{
	}

	[Token(Token = "0x6001783")]
	[Address(RVA = "0x27F6350", Offset = "0x27F4950", VA = "0x1827F6350")]
	public NetworkStream(Socket socket, bool ownsSocket)
	{
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x27F6380", Offset = "0x27F4980", VA = "0x1827F6380")]
	public NetworkStream(Socket socket, FileAccess access, bool ownsSocket)
	{
	}

	[Token(Token = "0x6001790")]
	[Address(RVA = "0x27F5590", Offset = "0x27F3B90", VA = "0x1827F5590", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001791")]
	[Address(RVA = "0x27F52C0", Offset = "0x27F38C0", VA = "0x1827F52C0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6001792")]
	[Address(RVA = "0x27F4F80", Offset = "0x27F3580", VA = "0x1827F4F80", Slot = "33")]
	public override int Read(Span<byte> destination)
	{
		return default(int);
	}

	[Token(Token = "0x6001793")]
	[Address(RVA = "0x27F4F00", Offset = "0x27F3500", VA = "0x1827F4F00", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6001794")]
	[Address(RVA = "0x27F6060", Offset = "0x27F4660", VA = "0x1827F6060", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001795")]
	[Address(RVA = "0x27F5DC0", Offset = "0x27F43C0", VA = "0x1827F5DC0", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x6001796")]
	[Address(RVA = "0x27F5D50", Offset = "0x27F4350", VA = "0x1827F5D50", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6001797")]
	[Address(RVA = "0x27F4220", Offset = "0x27F2820", VA = "0x1827F4220")]
	public void Close(int timeout)
	{
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x27F4290", Offset = "0x27F2890", VA = "0x1827F4290", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x1AD9EE0", Offset = "0x1AD84E0", VA = "0x181AD9EE0", Slot = "1")]
	~NetworkStream()
	{
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x27F3C40", Offset = "0x27F2240", VA = "0x1827F3C40", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x27F43D0", Offset = "0x27F29D0", VA = "0x1827F43D0", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x27F3F30", Offset = "0x27F2530", VA = "0x1827F3F30", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600179D")]
	[Address(RVA = "0x27F4660", Offset = "0x27F2C60", VA = "0x1827F4660", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600179E")]
	[Address(RVA = "0x27F4980", Offset = "0x27F2F80", VA = "0x1827F4980", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600179F")]
	[Address(RVA = "0x27F4D00", Offset = "0x27F3300", VA = "0x1827F4D00", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60017A0")]
	[Address(RVA = "0x27F57E0", Offset = "0x27F3DE0", VA = "0x1827F57E0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x27F5B60", Offset = "0x27F4160", VA = "0x1827F5B60", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x27F48F0", Offset = "0x27F2EF0", VA = "0x1827F48F0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60017A4")]
	[Address(RVA = "0x27F55E0", Offset = "0x27F3BE0", VA = "0x1827F55E0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60017A5")]
	[Address(RVA = "0x27F5630", Offset = "0x27F3C30", VA = "0x1827F5630")]
	internal void SetSocketTimeoutOption(SocketShutdown mode, int timeout, bool silent)
	{
	}
}
