using System.IO;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x20001E9")]
public class NetworkStream : Stream
{
	[Token(Token = "0x40009F8")]
	[FieldOffset(Offset = "0x28")]
	private readonly Socket _streamSocket;

	[Token(Token = "0x40009F9")]
	[FieldOffset(Offset = "0x30")]
	private readonly bool _ownsSocket;

	[Token(Token = "0x40009FA")]
	[FieldOffset(Offset = "0x31")]
	private bool _readable;

	[Token(Token = "0x40009FB")]
	[FieldOffset(Offset = "0x32")]
	private bool _writeable;

	[Token(Token = "0x40009FC")]
	[FieldOffset(Offset = "0x34")]
	private int _closeTimeout;

	[Token(Token = "0x40009FD")]
	[FieldOffset(Offset = "0x38")]
	private bool _cleanedUp;

	[Token(Token = "0x40009FE")]
	[FieldOffset(Offset = "0x3C")]
	private int _currentReadTimeout;

	[Token(Token = "0x40009FF")]
	[FieldOffset(Offset = "0x40")]
	private int _currentWriteTimeout;

	[Token(Token = "0x170002C9")]
	public override bool CanRead
	{
		[Token(Token = "0x6000BC9")]
		[Address(RVA = "0x4680060", Offset = "0x4680060", VA = "0x4680060", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CA")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000BCA")]
		[Address(RVA = "0x4680070", Offset = "0x4680070", VA = "0x4680070", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CB")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x4680080", Offset = "0x4680080", VA = "0x4680080", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CC")]
	public override bool CanTimeout
	{
		[Token(Token = "0x6000BCC")]
		[Address(RVA = "0x4680090", Offset = "0x4680090", VA = "0x4680090", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CD")]
	public override int ReadTimeout
	{
		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x46800A0", Offset = "0x46800A0", VA = "0x46800A0", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000BCE")]
		[Address(RVA = "0x4680280", Offset = "0x4680280", VA = "0x4680280", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170002CE")]
	public override int WriteTimeout
	{
		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x4680490", Offset = "0x4680490", VA = "0x4680490", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000BD0")]
		[Address(RVA = "0x46804F0", Offset = "0x46804F0", VA = "0x46804F0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170002CF")]
	public override long Length
	{
		[Token(Token = "0x6000BD1")]
		[Address(RVA = "0x4680570", Offset = "0x4680570", VA = "0x4680570", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002D0")]
	public override long Position
	{
		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x46805C0", Offset = "0x46805C0", VA = "0x46805C0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x4680610", Offset = "0x4680610", VA = "0x4680610", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170002D1")]
	internal Socket InternalSocket
	{
		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x4683B80", Offset = "0x4683B80", VA = "0x4683B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x467FEC0", Offset = "0x467FEC0", VA = "0x467FEC0")]
	public NetworkStream(Socket socket)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x4680050", Offset = "0x4680050", VA = "0x4680050")]
	public NetworkStream(Socket socket, bool ownsSocket)
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x467FED0", Offset = "0x467FED0", VA = "0x467FED0")]
	public NetworkStream(Socket socket, FileAccess access, bool ownsSocket)
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x4680660", Offset = "0x4680660", VA = "0x4680660", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x46806B0", Offset = "0x46806B0", VA = "0x46806B0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x4680A70", Offset = "0x4680A70", VA = "0x4680A70", Slot = "33")]
	public override int Read(Span<byte> destination)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x4680DA0", Offset = "0x4680DA0", VA = "0x4680DA0", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x4680E00", Offset = "0x4680E00", VA = "0x4680E00", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x46811C0", Offset = "0x46811C0", VA = "0x46811C0", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> source)
	{
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x46814C0", Offset = "0x46814C0", VA = "0x46814C0", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x4681510", Offset = "0x4681510", VA = "0x4681510")]
	public void Close(int timeout)
	{
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x4681570", Offset = "0x4681570", VA = "0x4681570", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x4681780", Offset = "0x4681780", VA = "0x4681780", Slot = "1")]
	~NetworkStream()
	{
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x4681810", Offset = "0x4681810", VA = "0x4681810", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x4681C10", Offset = "0x4681C10", VA = "0x4681C10", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x4681ED0", Offset = "0x4681ED0", VA = "0x4681ED0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x46822D0", Offset = "0x46822D0", VA = "0x46822D0", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x4682590", Offset = "0x4682590", VA = "0x4682590", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x4682CE0", Offset = "0x4682CE0", VA = "0x4682CE0", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x4682F30", Offset = "0x4682F30", VA = "0x4682F30", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int size, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x46836E0", Offset = "0x46836E0", VA = "0x46836E0", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x4683930", Offset = "0x4683930", VA = "0x4683930", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x4683940", Offset = "0x4683940", VA = "0x4683940", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x46839F0", Offset = "0x46839F0", VA = "0x46839F0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x4680300", Offset = "0x4680300", VA = "0x4680300")]
	internal void SetSocketTimeoutOption(SocketShutdown mode, int timeout, bool silent)
	{
	}
}
