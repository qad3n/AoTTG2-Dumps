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

[Token(Token = "0x2000391")]
public class TcpClient : IDisposable
{
	[Token(Token = "0x4000F6F")]
	[FieldOffset(Offset = "0x10")]
	private Socket m_ClientSocket;

	[Token(Token = "0x4000F70")]
	[FieldOffset(Offset = "0x18")]
	private bool m_Active;

	[Token(Token = "0x4000F71")]
	[FieldOffset(Offset = "0x20")]
	private NetworkStream m_DataStream;

	[Token(Token = "0x4000F72")]
	[FieldOffset(Offset = "0x28")]
	private AddressFamily m_Family;

	[Token(Token = "0x4000F73")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_CleanedUp;

	[Token(Token = "0x17000540")]
	public Socket Client
	{
		[Token(Token = "0x600188B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600188C")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x281C820", Offset = "0x281AE20", VA = "0x18281C820")]
	public TcpClient()
	{
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x281C8E0", Offset = "0x281AEE0", VA = "0x18281C8E0")]
	public TcpClient(AddressFamily family)
	{
	}

	[Token(Token = "0x600188D")]
	[Address(RVA = "0x281BE80", Offset = "0x281A480", VA = "0x18281BE80")]
	public void Connect(string hostname, int port)
	{
	}

	[Token(Token = "0x600188E")]
	[Address(RVA = "0x281BD70", Offset = "0x281A370", VA = "0x18281BD70")]
	public void Connect(IPEndPoint remoteEP)
	{
	}

	[Token(Token = "0x600188F")]
	[Address(RVA = "0x281BBB0", Offset = "0x281A1B0", VA = "0x18281BBB0")]
	public IAsyncResult BeginConnect(string host, int port, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001890")]
	[Address(RVA = "0x281C660", Offset = "0x281AC60", VA = "0x18281C660")]
	public void EndConnect(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001891")]
	[Address(RVA = "0x281BC20", Offset = "0x281A220", VA = "0x18281BC20")]
	public Task ConnectAsync(string host, int port)
	{
		return null;
	}

	[Token(Token = "0x6001892")]
	[Address(RVA = "0x281C6B0", Offset = "0x281ACB0", VA = "0x18281C6B0")]
	public NetworkStream GetStream()
	{
		return null;
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x281C510", Offset = "0x281AB10", VA = "0x18281C510", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x281C4F0", Offset = "0x281AAF0", VA = "0x18281C4F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~TcpClient()
	{
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x281CA50", Offset = "0x281B050", VA = "0x18281CA50")]
	private void initialize()
	{
	}
}
