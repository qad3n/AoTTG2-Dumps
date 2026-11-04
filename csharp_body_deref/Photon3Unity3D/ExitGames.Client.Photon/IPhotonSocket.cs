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
		[Address(RVA = "0x1CC5A80", Offset = "0x1CC4080", VA = "0x181CC5A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	protected internal int MTU
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x1CC5AB0", Offset = "0x1CC40B0", VA = "0x181CC5AB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001C")]
	public PhotonSocketState State
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(PhotonSocketState);
		}
		[Token(Token = "0x600008F")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public int SocketErrorCode
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool Connected
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x1CC5A70", Offset = "0x1CC4070", VA = "0x181CC5A70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public string ServerAddress
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public string ProxyServerAddress
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public static string ServerIpAddress
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x1CC5BF0", Offset = "0x1CC41F0", VA = "0x181CC5BF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x1CC5C40", Offset = "0x1CC4240", VA = "0x181CC5C40")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public int ServerPort
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public bool AddressResolvedAsIpv6
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x1CC5A60", Offset = "0x1CC4060", VA = "0x181CC5A60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x1CC5C30", Offset = "0x1CC4230", VA = "0x181CC5C30")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public string UrlProtocol
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public string UrlPath
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000026")]
	protected internal string SerializationProtocol
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x1CC5AE0", Offset = "0x1CC40E0", VA = "0x181CC5AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x1CC59B0", Offset = "0x1CC3FB0", VA = "0x181CC59B0")]
	public IPhotonSocket(PeerBase peerBase)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x1CC4770", Offset = "0x1CC2D70", VA = "0x181CC4770", Slot = "4")]
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
	[Address(RVA = "0x1CC5430", Offset = "0x1CC3A30", VA = "0x181CC5430")]
	public void HandleReceivedDatagram(byte[] inBuffer, int length, bool willBeReused)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x1CC5740", Offset = "0x1CC3D40", VA = "0x181CC5740")]
	public bool ReportDebugOfLevel(DebugLevel levelOfMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x1CC4BA0", Offset = "0x1CC31A0", VA = "0x181CC4BA0")]
	public void EnqueueDebugReturn(DebugLevel debugLevel, string message)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x1CC5380", Offset = "0x1CC3980", VA = "0x181CC5380")]
	protected internal void HandleException(StatusCode statusCode)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x1CC5770", Offset = "0x1CC3D70", VA = "0x181CC5770")]
	protected internal bool TryParseAddress(string url, out string address, out ushort port, out string urlProtocol, out string urlPath)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x1CC55A0", Offset = "0x1CC3BA0", VA = "0x181CC55A0")]
	private bool IpAddressTryParse(string strIP, out IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x1CC4D70", Offset = "0x1CC3370", VA = "0x181CC4D70")]
	protected internal IPAddress[] GetIpAddresses(string hostname)
	{
		return null;
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x1CC46F0", Offset = "0x1CC2CF0", VA = "0x181CC46F0")]
	private int AddressSortComparer(IPAddress x, IPAddress y)
	{
		return default(int);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x1CC4BC0", Offset = "0x1CC31C0", VA = "0x181CC4BC0")]
	[Obsolete("Use GetIpAddresses instead.")]
	protected internal static IPAddress GetIpAddress(string address)
	{
		return null;
	}
}
