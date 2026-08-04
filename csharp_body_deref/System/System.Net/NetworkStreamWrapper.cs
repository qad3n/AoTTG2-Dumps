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
		[Address(RVA = "0x494FA60", Offset = "0x494FA60", VA = "0x494FA60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019F")]
	internal IPAddress ServerAddress
	{
		[Token(Token = "0x6000797")]
		[Address(RVA = "0x494EF60", Offset = "0x494EF60", VA = "0x494EF60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	internal Socket Socket
	{
		[Token(Token = "0x6000798")]
		[Address(RVA = "0x4951560", Offset = "0x4951560", VA = "0x4951560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A1")]
	internal NetworkStream NetworkStream
	{
		[Token(Token = "0x6000799")]
		[Address(RVA = "0x495D730", Offset = "0x495D730", VA = "0x495D730")]
		get
		{
			return null;
		}
		[Token(Token = "0x600079A")]
		[Address(RVA = "0x495D740", Offset = "0x495D740", VA = "0x495D740")]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public override bool CanRead
	{
		[Token(Token = "0x600079B")]
		[Address(RVA = "0x495D750", Offset = "0x495D750", VA = "0x495D750", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A3")]
	public override bool CanSeek
	{
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x495D780", Offset = "0x495D780", VA = "0x495D780", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A4")]
	public override bool CanWrite
	{
		[Token(Token = "0x600079D")]
		[Address(RVA = "0x495D7B0", Offset = "0x495D7B0", VA = "0x495D7B0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A5")]
	public override bool CanTimeout
	{
		[Token(Token = "0x600079E")]
		[Address(RVA = "0x495D7E0", Offset = "0x495D7E0", VA = "0x495D7E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600079F")]
		[Address(RVA = "0x495D810", Offset = "0x495D810", VA = "0x495D810", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x495D840", Offset = "0x495D840", VA = "0x495D840", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public override int WriteTimeout
	{
		[Token(Token = "0x60007A1")]
		[Address(RVA = "0x495D870", Offset = "0x495D870", VA = "0x495D870", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x495D8A0", Offset = "0x495D8A0", VA = "0x495D8A0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public override long Length
	{
		[Token(Token = "0x60007A3")]
		[Address(RVA = "0x495D8D0", Offset = "0x495D8D0", VA = "0x495D8D0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001A9")]
	public override long Position
	{
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x495D900", Offset = "0x495D900", VA = "0x495D900", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60007A5")]
		[Address(RVA = "0x495D930", Offset = "0x495D930", VA = "0x495D930", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x494C0F0", Offset = "0x494C0F0", VA = "0x494C0F0")]
	internal NetworkStreamWrapper(TcpClient client)
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x495D960", Offset = "0x495D960", VA = "0x495D960", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x495D990", Offset = "0x495D990", VA = "0x495D990", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x495D9C0", Offset = "0x495D9C0", VA = "0x495D9C0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x495D9F0", Offset = "0x495D9F0", VA = "0x495D9F0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x494DAC0", Offset = "0x494DAC0", VA = "0x494DAC0")]
	internal void CloseSocket()
	{
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x494C400", Offset = "0x494C400", VA = "0x494C400")]
	public void Close(int timeout)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x495DAB0", Offset = "0x495DAB0", VA = "0x495DAB0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x495DAE0", Offset = "0x495DAE0", VA = "0x495DAE0", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x495DB10", Offset = "0x495DB10", VA = "0x495DB10", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x495DB40", Offset = "0x495DB40", VA = "0x495DB40", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x495DB70", Offset = "0x495DB70", VA = "0x495DB70", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x495DBA0", Offset = "0x495DBA0", VA = "0x495DBA0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x495DBD0", Offset = "0x495DBD0", VA = "0x495DBD0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x495DC00", Offset = "0x495DC00", VA = "0x495DC00", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x495DC30", Offset = "0x495DC30", VA = "0x495DC30", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x4959EF0", Offset = "0x4959EF0", VA = "0x4959EF0")]
	internal void SetSocketTimeoutOption(int timeout)
	{
	}
}
