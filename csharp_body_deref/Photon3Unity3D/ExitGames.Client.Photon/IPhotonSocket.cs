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
		[Address(RVA = "0x3B74F20", Offset = "0x3B74F20", VA = "0x3B74F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	protected internal int MTU
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x3B74F40", Offset = "0x3B74F40", VA = "0x3B74F40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001C")]
	public PhotonSocketState State
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x3B74F60", Offset = "0x3B74F60", VA = "0x3B74F60")]
		[CompilerGenerated]
		get
		{
			return default(PhotonSocketState);
		}
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x3B74F70", Offset = "0x3B74F70", VA = "0x3B74F70")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public int SocketErrorCode
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x3B74F80", Offset = "0x3B74F80", VA = "0x3B74F80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x3B74F90", Offset = "0x3B74F90", VA = "0x3B74F90")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool Connected
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x3B6F880", Offset = "0x3B6F880", VA = "0x3B6F880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public string ServerAddress
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x3B74FA0", Offset = "0x3B74FA0", VA = "0x3B74FA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x3B74FB0", Offset = "0x3B74FB0", VA = "0x3B74FB0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public string ProxyServerAddress
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x3B74FC0", Offset = "0x3B74FC0", VA = "0x3B74FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x3B74FD0", Offset = "0x3B74FD0", VA = "0x3B74FD0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public static string ServerIpAddress
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x3B74FE0", Offset = "0x3B74FE0", VA = "0x3B74FE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x3B75020", Offset = "0x3B75020", VA = "0x3B75020")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public int ServerPort
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x3B75070", Offset = "0x3B75070", VA = "0x3B75070")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x3B75080", Offset = "0x3B75080", VA = "0x3B75080")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public bool AddressResolvedAsIpv6
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x3B75090", Offset = "0x3B75090", VA = "0x3B75090")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x3B750A0", Offset = "0x3B750A0", VA = "0x3B750A0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public string UrlProtocol
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x3B750B0", Offset = "0x3B750B0", VA = "0x3B750B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x3B750C0", Offset = "0x3B750C0", VA = "0x3B750C0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public string UrlPath
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x3B750D0", Offset = "0x3B750D0", VA = "0x3B750D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3B750E0", Offset = "0x3B750E0", VA = "0x3B750E0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000026")]
	protected internal string SerializationProtocol
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x3B750F0", Offset = "0x3B750F0", VA = "0x3B750F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x3B751F0", Offset = "0x3B751F0", VA = "0x3B751F0")]
	public IPhotonSocket(PeerBase peerBase)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x3B75290", Offset = "0x3B75290", VA = "0x3B75290", Slot = "4")]
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
	[Address(RVA = "0x3B759C0", Offset = "0x3B759C0", VA = "0x3B759C0")]
	public void HandleReceivedDatagram(byte[] inBuffer, int length, bool willBeReused)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3B75F80", Offset = "0x3B75F80", VA = "0x3B75F80")]
	public bool ReportDebugOfLevel(DebugLevel levelOfMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x3B75FB0", Offset = "0x3B75FB0", VA = "0x3B75FB0")]
	public void EnqueueDebugReturn(DebugLevel debugLevel, string message)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3B75FD0", Offset = "0x3B75FD0", VA = "0x3B75FD0")]
	protected internal void HandleException(StatusCode statusCode)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x3B75790", Offset = "0x3B75790", VA = "0x3B75790")]
	protected internal bool TryParseAddress(string url, out string address, out ushort port, out string urlProtocol, out string urlPath)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3B76060", Offset = "0x3B76060", VA = "0x3B76060")]
	private bool IpAddressTryParse(string strIP, out IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x3B76230", Offset = "0x3B76230", VA = "0x3B76230")]
	protected internal IPAddress[] GetIpAddresses(string hostname)
	{
		return null;
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3B76940", Offset = "0x3B76940", VA = "0x3B76940")]
	private int AddressSortComparer(IPAddress x, IPAddress y)
	{
		return default(int);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3B769A0", Offset = "0x3B769A0", VA = "0x3B769A0")]
	[Obsolete("Use GetIpAddresses instead.")]
	protected internal static IPAddress GetIpAddress(string address)
	{
		return null;
	}
}
