// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkStreamWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Net.Sockets;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200027E")]
internal class NetworkStreamWrapper : Stream
{
	[Token(Token = "0x4000971")]
	[FieldOffset(Offset = "0x28")]
	private TcpClient _client;

	[Token(Token = "0x4000972")]
	[FieldOffset(Offset = "0x30")]
	private NetworkStream _networkStream;

	[Token(Token = "0x170003C4")]
	protected bool UsingSecureStream
	{
		[Token(Token = "0x6001197")]
		[Address(RVA = "0x62A50B0", Offset = "0x62A40B0", VA = "0x62A50B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C5")]
	internal IPAddress ServerAddress
	{
		[Token(Token = "0x6001198")]
		[Address(RVA = "0x62A5110", Offset = "0x62A4110", VA = "0x62A5110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C6")]
	internal Socket Socket
	{
		[Token(Token = "0x6001199")]
		[Address(RVA = "0x62A5190", Offset = "0x62A4190", VA = "0x62A5190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C7")]
	internal NetworkStream NetworkStream
	{
		[Token(Token = "0x600119A")]
		[Address(RVA = "0x62A51B0", Offset = "0x62A41B0", VA = "0x62A51B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600119B")]
		[Address(RVA = "0x62A51C0", Offset = "0x62A41C0", VA = "0x62A51C0")]
		set
		{
		}
	}

	[Token(Token = "0x170003C8")]
	public override bool CanRead
	{
		[Token(Token = "0x600119C")]
		[Address(RVA = "0x62A51D0", Offset = "0x62A41D0", VA = "0x62A51D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C9")]
	public override bool CanSeek
	{
		[Token(Token = "0x600119D")]
		[Address(RVA = "0x62A5200", Offset = "0x62A4200", VA = "0x62A5200", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003CA")]
	public override bool CanWrite
	{
		[Token(Token = "0x600119E")]
		[Address(RVA = "0x62A5230", Offset = "0x62A4230", VA = "0x62A5230", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003CB")]
	public override bool CanTimeout
	{
		[Token(Token = "0x600119F")]
		[Address(RVA = "0x62A5260", Offset = "0x62A4260", VA = "0x62A5260", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003CC")]
	public override int ReadTimeout
	{
		[Token(Token = "0x60011A0")]
		[Address(RVA = "0x62A5290", Offset = "0x62A4290", VA = "0x62A5290", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011A1")]
		[Address(RVA = "0x62A52C0", Offset = "0x62A42C0", VA = "0x62A52C0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170003CD")]
	public override int WriteTimeout
	{
		[Token(Token = "0x60011A2")]
		[Address(RVA = "0x62A52F0", Offset = "0x62A42F0", VA = "0x62A52F0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011A3")]
		[Address(RVA = "0x62A5320", Offset = "0x62A4320", VA = "0x62A5320", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170003CE")]
	public override long Length
	{
		[Token(Token = "0x60011A4")]
		[Address(RVA = "0x62A5350", Offset = "0x62A4350", VA = "0x62A5350", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003CF")]
	public override long Position
	{
		[Token(Token = "0x60011A5")]
		[Address(RVA = "0x62A5380", Offset = "0x62A4380", VA = "0x62A5380", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60011A6")]
		[Address(RVA = "0x62A53B0", Offset = "0x62A43B0", VA = "0x62A53B0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x62A5020", Offset = "0x62A4020", VA = "0x62A5020")]
	internal NetworkStreamWrapper(TcpClient client)
	{
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x62A53E0", Offset = "0x62A43E0", VA = "0x62A53E0", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x62A5410", Offset = "0x62A4410", VA = "0x62A5410", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x62A5440", Offset = "0x62A4440", VA = "0x62A5440", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x62A5470", Offset = "0x62A4470", VA = "0x62A5470", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x62A5540", Offset = "0x62A4540", VA = "0x62A5540")]
	internal void CloseSocket()
	{
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x62A5580", Offset = "0x62A4580", VA = "0x62A5580")]
	public void Close(int timeout)
	{
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x62A55B0", Offset = "0x62A45B0", VA = "0x62A55B0", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x62A55E0", Offset = "0x62A45E0", VA = "0x62A55E0", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x62A5610", Offset = "0x62A4610", VA = "0x62A5610", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x62A5640", Offset = "0x62A4640", VA = "0x62A5640", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x62A5670", Offset = "0x62A4670", VA = "0x62A5670", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x62A56A0", Offset = "0x62A46A0", VA = "0x62A56A0", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x62A56D0", Offset = "0x62A46D0", VA = "0x62A56D0", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x62A5700", Offset = "0x62A4700", VA = "0x62A5700", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x62A5730", Offset = "0x62A4730", VA = "0x62A5730", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x62A5760", Offset = "0x62A4760", VA = "0x62A5760")]
	internal void SetSocketTimeoutOption(int timeout)
	{
	}
}
