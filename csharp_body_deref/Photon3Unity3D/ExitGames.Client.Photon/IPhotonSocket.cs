// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.IPhotonSocket
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Net;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000012")]
public abstract class IPhotonSocket
{
	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x10")]
	protected internal PeerBase peerBase;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x18")]
	protected readonly ConnectionProtocol Protocol;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x19")]
	public bool PollReceive;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x28")]
	public string ConnectAddress;

	[Token(Token = "0x1700001A")]
	protected IPhotonPeerListener Listener
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x3E6A870", Offset = "0x3E6A870", VA = "0x3E6A870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	protected internal int MTU
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x3E6A890", Offset = "0x3E6A890", VA = "0x3E6A890")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001C")]
	public PhotonSocketState State
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x3E6A8B0", Offset = "0x3E6A8B0", VA = "0x3E6A8B0")]
		[CompilerGenerated]
		get
		{
			return default(PhotonSocketState);
		}
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x3E6A8C0", Offset = "0x3E6A8C0", VA = "0x3E6A8C0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public int SocketErrorCode
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x3E6A8D0", Offset = "0x3E6A8D0", VA = "0x3E6A8D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x3E6A8E0", Offset = "0x3E6A8E0", VA = "0x3E6A8E0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool Connected
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x3E651D0", Offset = "0x3E651D0", VA = "0x3E651D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public string ServerAddress
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x3E6A8F0", Offset = "0x3E6A8F0", VA = "0x3E6A8F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x3E6A900", Offset = "0x3E6A900", VA = "0x3E6A900")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public string ProxyServerAddress
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x3E6A910", Offset = "0x3E6A910", VA = "0x3E6A910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x3E6A920", Offset = "0x3E6A920", VA = "0x3E6A920")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public static string ServerIpAddress
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x3E6A930", Offset = "0x3E6A930", VA = "0x3E6A930")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x3E6A970", Offset = "0x3E6A970", VA = "0x3E6A970")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public int ServerPort
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x3E6A9C0", Offset = "0x3E6A9C0", VA = "0x3E6A9C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x3E6A9D0", Offset = "0x3E6A9D0", VA = "0x3E6A9D0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public bool AddressResolvedAsIpv6
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x3E6A9E0", Offset = "0x3E6A9E0", VA = "0x3E6A9E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x3E6A9F0", Offset = "0x3E6A9F0", VA = "0x3E6A9F0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public string UrlProtocol
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x3E6AA00", Offset = "0x3E6AA00", VA = "0x3E6AA00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x3E6AA10", Offset = "0x3E6AA10", VA = "0x3E6AA10")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public string UrlPath
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x3E6AA20", Offset = "0x3E6AA20", VA = "0x3E6AA20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3E6AA30", Offset = "0x3E6AA30", VA = "0x3E6AA30")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000026")]
	protected internal string SerializationProtocol
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x3E6AA40", Offset = "0x3E6AA40", VA = "0x3E6AA40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x3E6AB40", Offset = "0x3E6AB40", VA = "0x3E6AB40")]
	public IPhotonSocket(PeerBase peerBase)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x3E6ABE0", Offset = "0x3E6ABE0", VA = "0x3E6ABE0", Slot = "4")]
	public virtual bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	public abstract bool Disconnect();

	[Token(Token = "0x60000A5")]
	public abstract PhotonSocketError Send(byte[] data, int length);

	[Token(Token = "0x60000A6")]
	public abstract PhotonSocketError Receive(out byte[] data);

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3E6B310", Offset = "0x3E6B310", VA = "0x3E6B310")]
	public void HandleReceivedDatagram(byte[] inBuffer, int length, bool willBeReused)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3E6B8D0", Offset = "0x3E6B8D0", VA = "0x3E6B8D0")]
	public bool ReportDebugOfLevel(DebugLevel levelOfMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x3E6B900", Offset = "0x3E6B900", VA = "0x3E6B900")]
	public void EnqueueDebugReturn(DebugLevel debugLevel, string message)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3E6B920", Offset = "0x3E6B920", VA = "0x3E6B920")]
	protected internal void HandleException(StatusCode statusCode)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x3E6B0E0", Offset = "0x3E6B0E0", VA = "0x3E6B0E0")]
	protected internal bool TryParseAddress(string url, out string address, out ushort port, out string urlProtocol, out string urlPath)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3E6B9B0", Offset = "0x3E6B9B0", VA = "0x3E6B9B0")]
	private bool IpAddressTryParse(string strIP, out IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x3E6BB80", Offset = "0x3E6BB80", VA = "0x3E6BB80")]
	protected internal IPAddress[] GetIpAddresses(string hostname)
	{
		return null;
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3E6C290", Offset = "0x3E6C290", VA = "0x3E6C290")]
	private int AddressSortComparer(IPAddress x, IPAddress y)
	{
		return default(int);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3E6C2F0", Offset = "0x3E6C2F0", VA = "0x3E6C2F0")]
	[Obsolete("Use GetIpAddresses instead.")]
	protected internal static IPAddress GetIpAddress(string address)
	{
		return null;
	}
}
