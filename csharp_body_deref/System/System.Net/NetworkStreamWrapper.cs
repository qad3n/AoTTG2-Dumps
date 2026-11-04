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

[Token(Token = "0x20002BD")]
internal class NetworkStreamWrapper : Stream
{
	[Token(Token = "0x4000A40")]
	[FieldOffset(Offset = "0x28")]
	private TcpClient _client;

	[Token(Token = "0x4000A41")]
	[FieldOffset(Offset = "0x30")]
	private NetworkStream _networkStream;

	[Token(Token = "0x170003F3")]
	protected bool UsingSecureStream
	{
		[Token(Token = "0x6001355")]
		[Address(RVA = "0x27D0E40", Offset = "0x27CF440", VA = "0x1827D0E40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F4")]
	internal IPAddress ServerAddress
	{
		[Token(Token = "0x6001356")]
		[Address(RVA = "0x27D0D90", Offset = "0x27CF390", VA = "0x1827D0D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F5")]
	internal Socket Socket
	{
		[Token(Token = "0x6001357")]
		[Address(RVA = "0x27D0E20", Offset = "0x27CF420", VA = "0x1827D0E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F6")]
	internal NetworkStream NetworkStream
	{
		[Token(Token = "0x6001358")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001359")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x170003F7")]
	public override bool CanRead
	{
		[Token(Token = "0x600135A")]
		[Address(RVA = "0x1A24E70", Offset = "0x1A23470", VA = "0x181A24E70", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F8")]
	public override bool CanSeek
	{
		[Token(Token = "0x600135B")]
		[Address(RVA = "0x1AFADD0", Offset = "0x1AF93D0", VA = "0x181AFADD0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F9")]
	public override bool CanWrite
	{
		[Token(Token = "0x600135C")]
		[Address(RVA = "0x1AFAF10", Offset = "0x1AF9510", VA = "0x181AFAF10", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003FA")]
	public override bool CanTimeout
	{
		[Token(Token = "0x600135D")]
		[Address(RVA = "0x27D0D30", Offset = "0x27CF330", VA = "0x1827D0D30", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003FB")]
	public override int ReadTimeout
	{
		[Token(Token = "0x600135E")]
		[Address(RVA = "0x27D0D60", Offset = "0x27CF360", VA = "0x1827D0D60", Slot = "14")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600135F")]
		[Address(RVA = "0x1A24E40", Offset = "0x1A23440", VA = "0x181A24E40", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170003FC")]
	public override int WriteTimeout
	{
		[Token(Token = "0x6001360")]
		[Address(RVA = "0x27D0EC0", Offset = "0x27CF4C0", VA = "0x1827D0EC0", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001361")]
		[Address(RVA = "0x1A26CC0", Offset = "0x1A252C0", VA = "0x181A26CC0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170003FD")]
	public override long Length
	{
		[Token(Token = "0x6001362")]
		[Address(RVA = "0x1AFB2E0", Offset = "0x1AF98E0", VA = "0x181AFB2E0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003FE")]
	public override long Position
	{
		[Token(Token = "0x6001363")]
		[Address(RVA = "0x1AFB310", Offset = "0x1AF9910", VA = "0x181AFB310", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6001364")]
		[Address(RVA = "0x1A24CA0", Offset = "0x1A232A0", VA = "0x181A24CA0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x27D0CA0", Offset = "0x27CF2A0", VA = "0x1827D0CA0")]
	internal NetworkStreamWrapper(TcpClient client)
	{
	}

	[Token(Token = "0x6001365")]
	[Address(RVA = "0x27D0B80", Offset = "0x27CF180", VA = "0x1827D0B80", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x27D0B50", Offset = "0x27CF150", VA = "0x1827D0B50", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x27D0C70", Offset = "0x27CF270", VA = "0x1827D0C70", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x27D0A10", Offset = "0x27CF010", VA = "0x1827D0A10", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x27D0990", Offset = "0x27CEF90", VA = "0x1827D0990")]
	internal void CloseSocket()
	{
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x27D09D0", Offset = "0x27CEFD0", VA = "0x1827D09D0")]
	public void Close(int timeout)
	{
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x27D0930", Offset = "0x27CEF30", VA = "0x1827D0930", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x1A26C20", Offset = "0x1A25220", VA = "0x181A26C20", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x27D0B20", Offset = "0x27CF120", VA = "0x1827D0B20", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x27D0960", Offset = "0x27CEF60", VA = "0x1827D0960", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x27D0AC0", Offset = "0x27CF0C0", VA = "0x1827D0AC0", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x27D0C40", Offset = "0x27CF240", VA = "0x1827D0C40", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x27D0AF0", Offset = "0x27CF0F0", VA = "0x1827D0AF0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x1A26D20", Offset = "0x1A25320", VA = "0x181A26D20", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x27D0BB0", Offset = "0x27CF1B0", VA = "0x1827D0BB0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x27D0BE0", Offset = "0x27CF1E0", VA = "0x1827D0BE0")]
	internal void SetSocketTimeoutOption(int timeout)
	{
	}
}
