using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000204")]
public class TcpClient : IDisposable
{
	[Token(Token = "0x4000B40")]
	[FieldOffset(Offset = "0x10")]
	private Socket m_ClientSocket;

	[Token(Token = "0x4000B41")]
	[FieldOffset(Offset = "0x18")]
	private bool m_Active;

	[Token(Token = "0x4000B42")]
	[FieldOffset(Offset = "0x20")]
	private NetworkStream m_DataStream;

	[Token(Token = "0x4000B43")]
	[FieldOffset(Offset = "0x28")]
	private AddressFamily m_Family;

	[Token(Token = "0x4000B44")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_CleanedUp;

	[Token(Token = "0x170002EC")]
	public Socket Client
	{
		[Token(Token = "0x6000CCF")]
		[Address(RVA = "0x4692900", Offset = "0x4692900", VA = "0x4692900")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CD0")]
		[Address(RVA = "0x4692910", Offset = "0x4692910", VA = "0x4692910")]
		set
		{
		}
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x4692710", Offset = "0x4692710", VA = "0x4692710")]
	public TcpClient()
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4692730", Offset = "0x4692730", VA = "0x4692730")]
	public TcpClient(AddressFamily family)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x4692920", Offset = "0x4692920", VA = "0x4692920")]
	public void Connect(string hostname, int port)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x4693080", Offset = "0x4693080", VA = "0x4693080")]
	public void Connect(IPEndPoint remoteEP)
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x4693170", Offset = "0x4693170", VA = "0x4693170")]
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x46931D0", Offset = "0x46931D0", VA = "0x46931D0")]
	public void EndConnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x4693210", Offset = "0x4693210", VA = "0x4693210")]
	public Task ConnectAsync(string host, int port)
	{
		return null;
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x46933B0", Offset = "0x46933B0", VA = "0x46933B0")]
	public NetworkStream GetStream()
	{
		return null;
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x46934F0", Offset = "0x46934F0", VA = "0x46934F0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x46936C0", Offset = "0x46936C0", VA = "0x46936C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x46936E0", Offset = "0x46936E0", VA = "0x46936E0", Slot = "1")]
	~TcpClient()
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x4692890", Offset = "0x4692890", VA = "0x4692890")]
	private void initialize()
	{
	}
}
