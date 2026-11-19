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

[Token(Token = "0x2000332")]
public class NetworkStream : Stream
{
	[Token(Token = "0x4000D3F")]
	[FieldOffset(Offset = "0x28")]
	private readonly Socket _streamSocket;

	[Token(Token = "0x4000D40")]
	[FieldOffset(Offset = "0x30")]
	private readonly bool _ownsSocket;

	[Token(Token = "0x4000D41")]
	[FieldOffset(Offset = "0x31")]
	private bool _readable;

	[Token(Token = "0x4000D42")]
	[FieldOffset(Offset = "0x32")]
	private bool _writeable;

	[Token(Token = "0x4000D43")]
	[FieldOffset(Offset = "0x34")]
	private int _closeTimeout;

	[Token(Token = "0x4000D44")]
	[FieldOffset(Offset = "0x38")]
	private bool _cleanedUp;

	[Token(Token = "0x4000D45")]
	[FieldOffset(Offset = "0x3C")]
	private int _currentReadTimeout;

	[Token(Token = "0x4000D46")]
	[FieldOffset(Offset = "0x40")]
	private int _currentWriteTimeout;

	[Token(Token = "0x170004F0")]
	public override bool CanRead
	{
		[Token(Token = "0x60015CC")]
		[Address(RVA = "0x61A54C0", Offset = "0x61A44C0", VA = "0x61A54C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F1")]
	public override bool CanSeek
	{
		[Token(Token = "0x60015CD")]
		[Address(RVA = "0x61A54D0", Offset = "0x61A44D0", VA = "0x61A54D0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F2")]
	public override bool CanWrite
	{
		[Token(Token = "0x60015CE")]
		[Address(RVA = "0x61A54E0", Offset = "0x61A44E0", VA = "0x61A54E0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F3")]
	public override bool CanTimeout
	{
		[Token(Token = "0x60015CF")]
		[Address(RVA = "0x61A54F0", Offset = "0x61A44F0", VA = "0x61A54F0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004F4")]
	public override int ReadTimeout
	{
		[Token(Token = "0x60015D0")]
		[Address(RVA = "0x61A5500", Offset = "0x61A4500", VA = "0x61A5500", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60015D1")]
		[Address(RVA = "0x61A56E0", Offset = "0x61A46E0", VA = "0x61A56E0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170004F5")]
	public override int WriteTimeout
	{
		[Token(Token = "0x60015D2")]
		[Address(RVA = "0x61A58F0", Offset = "0x61A48F0", VA = "0x61A58F0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60015D3")]
		[Address(RVA = "0x61A5950", Offset = "0x61A4950", VA = "0x61A5950", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170004F6")]
	public override long Length
	{
		[Token(Token = "0x60015D4")]
		[Address(RVA = "0x61A59D0", Offset = "0x61A49D0", VA = "0x61A59D0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170004F7")]
	public override long Position
	{
		[Token(Token = "0x60015D5")]
		[Address(RVA = "0x61A5A20", Offset = "0x61A4A20", VA = "0x61A5A20", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60015D6")]
		[Address(RVA = "0x61A5A70", Offset = "0x61A4A70", VA = "0x61A5A70", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170004F8")]
	internal Socket InternalSocket
	{
		[Token(Token = "0x60015ED")]
		[Address(RVA = "0x61A9050", Offset = "0x61A8050", VA = "0x61A9050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x61A5320", Offset = "0x61A4320", VA = "0x61A5320")]
	public NetworkStream(Socket socket)
	{
	}

	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x61A54B0", Offset = "0x61A44B0", VA = "0x61A54B0")]
	public NetworkStream(Socket socket, bool ownsSocket)
	{
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x61A5330", Offset = "0x61A4330", VA = "0x61A5330")]
	public NetworkStream(Socket socket, FileAccess access, bool ownsSocket)
	{
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x61A5AC0", Offset = "0x61A4AC0", VA = "0x61A5AC0", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x61A5B10", Offset = "0x61A4B10", VA = "0x61A5B10", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x61A5F00", Offset = "0x61A4F00", VA = "0x61A5F00", Slot = "34")]
	public override int Read(Span<byte> destination)
	{
		return default(int);
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x61A6230", Offset = "0x61A5230", VA = "0x61A6230", Slot = "35")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x61A6290", Offset = "0x61A5290", VA = "0x61A6290", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x61A6680", Offset = "0x61A5680", VA = "0x61A6680", Slot = "37")]
	public override void Write(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x61A6990", Offset = "0x61A5990", VA = "0x61A6990", Slot = "38")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x61A69E0", Offset = "0x61A59E0", VA = "0x61A69E0")]
	public void Close(int timeout)
	{
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x61A6A40", Offset = "0x61A5A40", VA = "0x61A6A40", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x61A6C50", Offset = "0x61A5C50", VA = "0x61A6C50", Slot = "1")]
	~NetworkStream()
	{
	}

	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x61A6CF0", Offset = "0x61A5CF0", VA = "0x61A6CF0", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x61A7110", Offset = "0x61A6110", VA = "0x61A7110", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x61A7400", Offset = "0x61A6400", VA = "0x61A7400", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x61A7820", Offset = "0x61A6820", VA = "0x61A7820", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x61A7B10", Offset = "0x61A6B10", VA = "0x61A7B10", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x61A8220", Offset = "0x61A7220", VA = "0x61A8220", Slot = "26")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x61A8490", Offset = "0x61A7490", VA = "0x61A8490", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x61A8B90", Offset = "0x61A7B90", VA = "0x61A8B90", Slot = "30")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x61A8E00", Offset = "0x61A7E00", VA = "0x61A8E00", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x61A8E10", Offset = "0x61A7E10", VA = "0x61A8E10", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x61A8EC0", Offset = "0x61A7EC0", VA = "0x61A8EC0", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x61A5760", Offset = "0x61A4760", VA = "0x61A5760")]
	internal void SetSocketTimeoutOption(SocketShutdown mode, int timeout, bool silent)
	{
	}
}
