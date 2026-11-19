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
		[Address(RVA = "0x565A7D0", Offset = "0x56597D0", VA = "0x565A7D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	protected internal int MTU
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x565A7F0", Offset = "0x56597F0", VA = "0x565A7F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001C")]
	public PhotonSocketState State
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x565A810", Offset = "0x5659810", VA = "0x565A810")]
		[CompilerGenerated]
		get
		{
			return default(PhotonSocketState);
		}
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x565A820", Offset = "0x5659820", VA = "0x565A820")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public int SocketErrorCode
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x565A830", Offset = "0x5659830", VA = "0x565A830")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x565A840", Offset = "0x5659840", VA = "0x565A840")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool Connected
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x56557B0", Offset = "0x56547B0", VA = "0x56557B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public string ServerAddress
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x565A850", Offset = "0x5659850", VA = "0x565A850")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x565A860", Offset = "0x5659860", VA = "0x565A860")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public string ProxyServerAddress
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x565A870", Offset = "0x5659870", VA = "0x565A870")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x565A880", Offset = "0x5659880", VA = "0x565A880")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public static string ServerIpAddress
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x565A890", Offset = "0x5659890", VA = "0x565A890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x565A8D0", Offset = "0x56598D0", VA = "0x565A8D0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public int ServerPort
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x565A920", Offset = "0x5659920", VA = "0x565A920")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x565A930", Offset = "0x5659930", VA = "0x565A930")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public bool AddressResolvedAsIpv6
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x565A940", Offset = "0x5659940", VA = "0x565A940")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x565A950", Offset = "0x5659950", VA = "0x565A950")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public string UrlProtocol
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x565A960", Offset = "0x5659960", VA = "0x565A960")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x565A970", Offset = "0x5659970", VA = "0x565A970")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public string UrlPath
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x565A980", Offset = "0x5659980", VA = "0x565A980")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x565A990", Offset = "0x5659990", VA = "0x565A990")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000026")]
	protected internal string SerializationProtocol
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x565A9A0", Offset = "0x56599A0", VA = "0x565A9A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x565AAA0", Offset = "0x5659AA0", VA = "0x565AAA0")]
	public IPhotonSocket(PeerBase peerBase)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x565AB40", Offset = "0x5659B40", VA = "0x565AB40", Slot = "4")]
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
	[Address(RVA = "0x565B260", Offset = "0x565A260", VA = "0x565B260")]
	public void HandleReceivedDatagram(byte[] inBuffer, int length, bool willBeReused)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x565B7E0", Offset = "0x565A7E0", VA = "0x565B7E0")]
	public bool ReportDebugOfLevel(DebugLevel levelOfMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x565B810", Offset = "0x565A810", VA = "0x565B810")]
	public void EnqueueDebugReturn(DebugLevel debugLevel, string message)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x565B830", Offset = "0x565A830", VA = "0x565B830")]
	protected internal void HandleException(StatusCode statusCode)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x565B030", Offset = "0x565A030", VA = "0x565B030")]
	protected internal bool TryParseAddress(string url, out string address, out ushort port, out string urlProtocol, out string urlPath)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x565B8C0", Offset = "0x565A8C0", VA = "0x565B8C0")]
	private bool IpAddressTryParse(string strIP, out IPAddress address)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x565BA90", Offset = "0x565AA90", VA = "0x565BA90")]
	protected internal IPAddress[] GetIpAddresses(string hostname)
	{
		return null;
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x565C110", Offset = "0x565B110", VA = "0x565C110")]
	private int AddressSortComparer(IPAddress x, IPAddress y)
	{
		return default(int);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x565C170", Offset = "0x565B170", VA = "0x565C170")]
	[Obsolete("Use GetIpAddresses instead.")]
	protected internal static IPAddress GetIpAddress(string address)
	{
		return null;
	}
}
