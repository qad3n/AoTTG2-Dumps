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

[Token(Token = "0x200034D")]
public class TcpClient : IDisposable
{
	[Token(Token = "0x4000E87")]
	[FieldOffset(Offset = "0x10")]
	private Socket m_ClientSocket;

	[Token(Token = "0x4000E88")]
	[FieldOffset(Offset = "0x18")]
	private bool m_Active;

	[Token(Token = "0x4000E89")]
	[FieldOffset(Offset = "0x20")]
	private NetworkStream m_DataStream;

	[Token(Token = "0x4000E8A")]
	[FieldOffset(Offset = "0x28")]
	private AddressFamily m_Family;

	[Token(Token = "0x4000E8B")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_CleanedUp;

	[Token(Token = "0x17000513")]
	public Socket Client
	{
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x61B7C40", Offset = "0x61B6C40", VA = "0x61B7C40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x61B7C50", Offset = "0x61B6C50", VA = "0x61B7C50")]
		set
		{
		}
	}

	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x61B7A50", Offset = "0x61B6A50", VA = "0x61B7A50")]
	public TcpClient()
	{
	}

	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x61B7A70", Offset = "0x61B6A70", VA = "0x61B7A70")]
	public TcpClient(AddressFamily family)
	{
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x61B7C60", Offset = "0x61B6C60", VA = "0x61B7C60")]
	public void Connect(string hostname, int port)
	{
	}

	[Token(Token = "0x60016D5")]
	[Address(RVA = "0x61B8310", Offset = "0x61B7310", VA = "0x61B8310")]
	public void Connect(IPEndPoint remoteEP)
	{
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x61B8400", Offset = "0x61B7400", VA = "0x61B8400")]
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x61B8460", Offset = "0x61B7460", VA = "0x61B8460")]
	public void EndConnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x61B84A0", Offset = "0x61B74A0", VA = "0x61B84A0")]
	public Task ConnectAsync(string host, int port)
	{
		return null;
	}

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x61B8640", Offset = "0x61B7640", VA = "0x61B8640")]
	public NetworkStream GetStream()
	{
		return null;
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x61B8780", Offset = "0x61B7780", VA = "0x61B8780", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x61B8970", Offset = "0x61B7970", VA = "0x61B8970", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x61B8990", Offset = "0x61B7990", VA = "0x61B8990", Slot = "1")]
	~TcpClient()
	{
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x61B7BD0", Offset = "0x61B6BD0", VA = "0x61B7BD0")]
	private void initialize()
	{
	}
}
