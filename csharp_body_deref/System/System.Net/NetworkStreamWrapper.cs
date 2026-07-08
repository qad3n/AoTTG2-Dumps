using System.IO;
using System.Net.Sockets;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000135")]
internal class NetworkStreamWrapper : Stream
{
	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0x28")]
	private TcpClient _client;

	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x30")]
	private NetworkStream _networkStream;

	[Token(Token = "0x1700019E")]
	protected bool UsingSecureStream
	{
		[Token(Token = "0x6000796")]
		[Address(RVA = "0x462A960", Offset = "0x462A960", VA = "0x462A960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019F")]
	internal IPAddress ServerAddress
	{
		[Token(Token = "0x6000797")]
		[Address(RVA = "0x4629E60", Offset = "0x4629E60", VA = "0x4629E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	internal Socket Socket
	{
		[Token(Token = "0x6000798")]
		[Address(RVA = "0x462C460", Offset = "0x462C460", VA = "0x462C460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A1")]
	internal NetworkStream NetworkStream
	{
		[Token(Token = "0x6000799")]
		[Address(RVA = "0x4638630", Offset = "0x4638630", VA = "0x4638630")]
		get
		{
			return null;
		}
		[Token(Token = "0x600079A")]
		[Address(RVA = "0x4638640", Offset = "0x4638640", VA = "0x4638640")]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public override bool CanRead
	{
		[Token(Token = "0x600079B")]
		[Address(RVA = "0x4638650", Offset = "0x4638650", VA = "0x4638650", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A3")]
	public override bool CanSeek
	{
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x4638680", Offset = "0x4638680", VA = "0x4638680", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A4")]
	public override bool CanWrite
	{
		[Token(Token = "0x600079D")]
		[Address(RVA = "0x46386B0", Offset = "0x46386B0", VA = "0x46386B0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A5")]
	public override bool CanTimeout
	{
		[Token(Token = "0x600079E")]
		[Address(RVA = "0x46386E0", Offset = "0x46386E0", VA = "0x46386E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600079F")]
		[Address(RVA = "0x4638710", Offset = "0x4638710", VA = "0x4638710", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x4638740", Offset = "0x4638740", VA = "0x4638740", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public override int WriteTimeout
	{
		[Token(Token = "0x60007A1")]
		[Address(RVA = "0x4638770", Offset = "0x4638770", VA = "0x4638770", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x46387A0", Offset = "0x46387A0", VA = "0x46387A0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public override long Length
	{
		[Token(Token = "0x60007A3")]
		[Address(RVA = "0x46387D0", Offset = "0x46387D0", VA = "0x46387D0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001A9")]
	public override long Position
	{
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x4638800", Offset = "0x4638800", VA = "0x4638800", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60007A5")]
		[Address(RVA = "0x4638830", Offset = "0x4638830", VA = "0x4638830", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x4626FF0", Offset = "0x4626FF0", VA = "0x4626FF0")]
	internal NetworkStreamWrapper(TcpClient client)
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x4638860", Offset = "0x4638860", VA = "0x4638860", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x4638890", Offset = "0x4638890", VA = "0x4638890", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x46388C0", Offset = "0x46388C0", VA = "0x46388C0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x46388F0", Offset = "0x46388F0", VA = "0x46388F0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x46289C0", Offset = "0x46289C0", VA = "0x46289C0")]
	internal void CloseSocket()
	{
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x4627300", Offset = "0x4627300", VA = "0x4627300")]
	public void Close(int timeout)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x46389B0", Offset = "0x46389B0", VA = "0x46389B0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x46389E0", Offset = "0x46389E0", VA = "0x46389E0", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x4638A10", Offset = "0x4638A10", VA = "0x4638A10", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x4638A40", Offset = "0x4638A40", VA = "0x4638A40", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x4638A70", Offset = "0x4638A70", VA = "0x4638A70", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x4638AA0", Offset = "0x4638AA0", VA = "0x4638AA0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x4638AD0", Offset = "0x4638AD0", VA = "0x4638AD0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x4638B00", Offset = "0x4638B00", VA = "0x4638B00", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x4638B30", Offset = "0x4638B30", VA = "0x4638B30", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x4634DF0", Offset = "0x4634DF0", VA = "0x4634DF0")]
	internal void SetSocketTimeoutOption(int timeout)
	{
	}
}
