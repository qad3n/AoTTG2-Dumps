// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.TcpClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x49B7A00", Offset = "0x49B7A00", VA = "0x49B7A00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CD0")]
		[Address(RVA = "0x49B7A10", Offset = "0x49B7A10", VA = "0x49B7A10")]
		set
		{
		}
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x49B7810", Offset = "0x49B7810", VA = "0x49B7810")]
	public TcpClient()
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x49B7830", Offset = "0x49B7830", VA = "0x49B7830")]
	public TcpClient(AddressFamily family)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x49B7A20", Offset = "0x49B7A20", VA = "0x49B7A20")]
	public void Connect(string hostname, int port)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x49B8180", Offset = "0x49B8180", VA = "0x49B8180")]
	public void Connect(IPEndPoint remoteEP)
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x49B8270", Offset = "0x49B8270", VA = "0x49B8270")]
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x49B82D0", Offset = "0x49B82D0", VA = "0x49B82D0")]
	public void EndConnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x49B8310", Offset = "0x49B8310", VA = "0x49B8310")]
	public Task ConnectAsync(string host, int port)
	{
		return null;
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x49B84B0", Offset = "0x49B84B0", VA = "0x49B84B0")]
	public NetworkStream GetStream()
	{
		return null;
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x49B85F0", Offset = "0x49B85F0", VA = "0x49B85F0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x49B87C0", Offset = "0x49B87C0", VA = "0x49B87C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x49B87E0", Offset = "0x49B87E0", VA = "0x49B87E0", Slot = "1")]
	~TcpClient()
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x49B7990", Offset = "0x49B7990", VA = "0x49B7990")]
	private void initialize()
	{
	}
}
