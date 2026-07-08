using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000012")]
public class LoadBalancingClient : IPhotonPeerListener
{
	[Token(Token = "0x2000013")]
	private class EncryptionDataParameters
	{
		[Token(Token = "0x40000C3")]
		public const byte Mode = 0;

		[Token(Token = "0x40000C4")]
		public const byte Secret1 = 1;

		[Token(Token = "0x40000C5")]
		public const byte Secret2 = 2;

		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x3BD5F70", Offset = "0x3BD5F70", VA = "0x3BD5F70")]
		public EncryptionDataParameters()
		{
		}
	}

	[Token(Token = "0x2000014")]
	private class CallbackTargetChange
	{
		[Token(Token = "0x40000C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly object Target;

		[Token(Token = "0x40000C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly bool AddTarget;

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x3BD5DB0", Offset = "0x3BD5DB0", VA = "0x3BD5DB0")]
		public CallbackTargetChange(object target, bool addTarget)
		{
		}
	}

	[Token(Token = "0x400008F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public NetworkCredential AppVersion;

	[Token(Token = "0x4000093")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public AuthModeOption AuthMode;

	[Token(Token = "0x4000094")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public EncryptionMode EncryptionMode;

	[Token(Token = "0x4000096")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private object tokenCache;

	[Token(Token = "0x4000098")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public string NameServerHost;

	[Token(Token = "0x4000099")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<ConnectionProtocol, int> ProtocolToNameServerPort;

	[Token(Token = "0x400009B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	public PhotonPortDefinition ServerPortOverrides;

	[Token(Token = "0x40000A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public string ProxyServerAddress;

	[Token(Token = "0x40000A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private ClientState state;

	[Token(Token = "0x40000A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public ConnectionCallbacksContainer ConnectionCallbackTargets;

	[Token(Token = "0x40000A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public MatchMakingCallbacksContainer MatchMakingCallbackTargets;

	[Token(Token = "0x40000A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	internal InRoomCallbacksContainer InRoomCallbackTargets;

	[Token(Token = "0x40000A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal LobbyCallbacksContainer LobbyCallbackTargets;

	[Token(Token = "0x40000A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	internal WebRpcCallbacksContainer WebRpcCallbackTargets;

	[Token(Token = "0x40000AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	internal ErrorInfoCallbacksContainer ErrorInfoCallbackTargets;

	[Token(Token = "0x40000AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public SystemConnectionSummary SystemConnectionSummary;

	[Token(Token = "0x40000AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public bool EnableLobbyStatistics;

	[Token(Token = "0x40000AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private readonly List<TypedLobbyInfo> lobbyStatistics;

	[Token(Token = "0x40000B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private JoinType lastJoinType;

	[Token(Token = "0x40000B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private EnterRoomParams enterRoomParamsCache;

	[Token(Token = "0x40000B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private OperationResponse failedRoomEntryOperation;

	[Token(Token = "0x40000B8")]
	private const int FriendRequestListMax = 512;

	[Token(Token = "0x40000B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private string[] friendListRequested;

	[Token(Token = "0x40000BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	public RegionHandler RegionHandler;

	[Token(Token = "0x40000BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private string bestRegionSummaryFromStorage;

	[Token(Token = "0x40000BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	public string SummaryToCache;

	[Token(Token = "0x40000BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private bool connectToBestRegion;

	[Token(Token = "0x40000C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private readonly Queue<CallbackTargetChange> callbackTargetChanges;

	[Token(Token = "0x40000C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private readonly HashSet<object> callbackTargets;

	[Token(Token = "0x40000C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	public int NameServerPortInAppSettings;

	[Token(Token = "0x1700000D")]
	public LoadBalancingPeer LoadBalancingPeer
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x3BC87A0", Offset = "0x3BC87A0", VA = "0x3BC87A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x3BC87B0", Offset = "0x3BC87B0", VA = "0x3BC87B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public SerializationProtocol SerializationProtocol
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x3BC87C0", Offset = "0x3BC87C0", VA = "0x3BC87C0")]
		get
		{
			return default(SerializationProtocol);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x3BC87E0", Offset = "0x3BC87E0", VA = "0x3BC87E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public string AppId
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x3BC8800", Offset = "0x3BC8800", VA = "0x3BC8800")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x3BC8810", Offset = "0x3BC8810", VA = "0x3BC8810")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ClientAppType ClientType
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x3BC8820", Offset = "0x3BC8820", VA = "0x3BC8820")]
		[CompilerGenerated]
		get
		{
			return default(ClientAppType);
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x3BC8830", Offset = "0x3BC8830", VA = "0x3BC8830")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public AuthenticationValues AuthValues
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x3BC8840", Offset = "0x3BC8840", VA = "0x3BC8840")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x3BC8850", Offset = "0x3BC8850", VA = "0x3BC8850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public ConnectionProtocol? ExpectedProtocol
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x3BC8860", Offset = "0x3BC8860", VA = "0x3BC8860")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x3BC8870", Offset = "0x3BC8870", VA = "0x3BC8870")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	private object TokenForInit
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x3BC8880", Offset = "0x3BC8880", VA = "0x3BC8880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public bool IsUsingNameServer
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x3BC88A0", Offset = "0x3BC88A0", VA = "0x3BC88A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x3BC88B0", Offset = "0x3BC88B0", VA = "0x3BC88B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public string NameServerAddress
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x3BC88C0", Offset = "0x3BC88C0", VA = "0x3BC88C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	[Obsolete("Set port overrides in ServerPortOverrides. Not used anymore!")]
	public bool UseAlternativeUdpPorts
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x3BC8AD0", Offset = "0x3BC8AD0", VA = "0x3BC8AD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x3BC8AE0", Offset = "0x3BC8AE0", VA = "0x3BC8AE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool EnableProtocolFallback
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x3BC8AF0", Offset = "0x3BC8AF0", VA = "0x3BC8AF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x3BC8B00", Offset = "0x3BC8B00", VA = "0x3BC8B00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public string CurrentServerAddress
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x3BC8B10", Offset = "0x3BC8B10", VA = "0x3BC8B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public string MasterServerAddress
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x3BC8B30", Offset = "0x3BC8B30", VA = "0x3BC8B30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x3BC8B40", Offset = "0x3BC8B40", VA = "0x3BC8B40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public string GameServerAddress
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x3BC8B50", Offset = "0x3BC8B50", VA = "0x3BC8B50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x3BC8B60", Offset = "0x3BC8B60", VA = "0x3BC8B60")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public ServerConnection Server
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x3BC8B70", Offset = "0x3BC8B70", VA = "0x3BC8B70")]
		[CompilerGenerated]
		get
		{
			return default(ServerConnection);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x3BC8B80", Offset = "0x3BC8B80", VA = "0x3BC8B80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public ClientState State
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x3BC8B90", Offset = "0x3BC8B90", VA = "0x3BC8B90")]
		get
		{
			return default(ClientState);
		}
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x3BC8BA0", Offset = "0x3BC8BA0", VA = "0x3BC8BA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool IsConnected
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x3BC4A30", Offset = "0x3BC4A30", VA = "0x3BC4A30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001E")]
	public bool IsConnectedAndReady
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x3BC8BD0", Offset = "0x3BC8BD0", VA = "0x3BC8BD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public DisconnectCause DisconnectedCause
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x3BC9020", Offset = "0x3BC9020", VA = "0x3BC9020")]
		[CompilerGenerated]
		get
		{
			return default(DisconnectCause);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x3BC9030", Offset = "0x3BC9030", VA = "0x3BC9030")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public bool InLobby
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x3BC9040", Offset = "0x3BC9040", VA = "0x3BC9040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000021")]
	public TypedLobby CurrentLobby
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x3BC9050", Offset = "0x3BC9050", VA = "0x3BC9050")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x3BC9060", Offset = "0x3BC9060", VA = "0x3BC9060")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public Player LocalPlayer
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x3BC9080", Offset = "0x3BC9080", VA = "0x3BC9080")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x3BC9090", Offset = "0x3BC9090", VA = "0x3BC9090")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public string NickName
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x3BC90B0", Offset = "0x3BC90B0", VA = "0x3BC90B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x3BC90D0", Offset = "0x3BC90D0", VA = "0x3BC90D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public string UserId
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x3BC91B0", Offset = "0x3BC91B0", VA = "0x3BC91B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x3BC91D0", Offset = "0x3BC91D0", VA = "0x3BC91D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public Room CurrentRoom
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x3BC9270", Offset = "0x3BC9270", VA = "0x3BC9270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x3BC9280", Offset = "0x3BC9280", VA = "0x3BC9280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool InRoom
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x3BC92A0", Offset = "0x3BC92A0", VA = "0x3BC92A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000027")]
	public int PlayersOnMasterCount
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x3BC92C0", Offset = "0x3BC92C0", VA = "0x3BC92C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x3BC92D0", Offset = "0x3BC92D0", VA = "0x3BC92D0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public int PlayersInRoomsCount
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x3BC92E0", Offset = "0x3BC92E0", VA = "0x3BC92E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x3BC92F0", Offset = "0x3BC92F0", VA = "0x3BC92F0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public int RoomsCount
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x3BC9300", Offset = "0x3BC9300", VA = "0x3BC9300")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x3BC9310", Offset = "0x3BC9310", VA = "0x3BC9310")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public bool IsFetchingFriendList
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x3BC9320", Offset = "0x3BC9320", VA = "0x3BC9320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	public string CloudRegion
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x3BC9330", Offset = "0x3BC9330", VA = "0x3BC9330")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x3BC9340", Offset = "0x3BC9340", VA = "0x3BC9340")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public string CurrentCluster
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x3BC9360", Offset = "0x3BC9360", VA = "0x3BC9360")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x3BC9370", Offset = "0x3BC9370", VA = "0x3BC9370")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public event Action<ClientState, ClientState> StateChanged
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x3BC8C00", Offset = "0x3BC8C00", VA = "0x3BC8C00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x3BC8CB0", Offset = "0x3BC8CB0", VA = "0x3BC8CB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<EventData> EventReceived
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x3BC8D60", Offset = "0x3BC8D60", VA = "0x3BC8D60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x3BC8E10", Offset = "0x3BC8E10", VA = "0x3BC8E10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<OperationResponse> OpResponseReceived
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x3BC8EC0", Offset = "0x3BC8EC0", VA = "0x3BC8EC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x3BC8F70", Offset = "0x3BC8F70", VA = "0x3BC8F70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3BC9390", Offset = "0x3BC9390", VA = "0x3BC9390")]
	public LoadBalancingClient(ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3BC9DB0", Offset = "0x3BC9DB0", VA = "0x3BC9DB0")]
	public LoadBalancingClient(string masterAddress, string appId, NetworkCredential gameVersion, ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3BC88D0", Offset = "0x3BC88D0", VA = "0x3BC88D0")]
	private string GetNameServerAddress()
	{
		return null;
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3BC9E10", Offset = "0x3BC9E10", VA = "0x3BC9E10", Slot = "8")]
	public virtual bool ConnectUsingSettings(AppSettings appSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3BCA280", Offset = "0x3BCA280", VA = "0x3BCA280")]
	[Obsolete("Use ConnectToMasterServer() instead.")]
	public bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3BCA2A0", Offset = "0x3BCA2A0", VA = "0x3BCA2A0", Slot = "9")]
	public virtual bool ConnectToMasterServer()
	{
		return default(bool);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x3BCA4F0", Offset = "0x3BCA4F0", VA = "0x3BCA4F0")]
	public bool ConnectToNameServer()
	{
		return default(bool);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3BCA750", Offset = "0x3BCA750", VA = "0x3BCA750")]
	public bool ConnectToRegionMaster(string region)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x3BCAD70", Offset = "0x3BCAD70", VA = "0x3BCAD70")]
	[Conditional("UNITY_WEBGL")]
	private void CheckConnectSetupWebGl()
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x3BCAD80", Offset = "0x3BCAD80", VA = "0x3BCAD80")]
	private bool Connect(string serverAddress, string proxyServerAddress, ServerConnection serverType)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3BCB060", Offset = "0x3BCB060", VA = "0x3BCB060")]
	public bool ReconnectToMaster()
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x3BCB250", Offset = "0x3BCB250", VA = "0x3BCB250")]
	public bool ReconnectAndRejoin()
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x3BC4A50", Offset = "0x3BC4A50", VA = "0x3BC4A50")]
	public void Disconnect(DisconnectCause cause = DisconnectCause.DisconnectByClientLogic)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x3BCB470", Offset = "0x3BCB470", VA = "0x3BCB470")]
	private void DisconnectToReconnect()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x3BCB550", Offset = "0x3BCB550", VA = "0x3BCB550")]
	public void SimulateConnectionLoss(bool simulateTimeout)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x3BCAA00", Offset = "0x3BCAA00", VA = "0x3BCAA00")]
	private bool CallAuthenticate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x3BCB960", Offset = "0x3BCB960", VA = "0x3BCB960")]
	public void Service()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3BCB980", Offset = "0x3BCB980", VA = "0x3BCB980")]
	private bool OpGetRegions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x3BCB9F0", Offset = "0x3BCB9F0", VA = "0x3BCB9F0")]
	public bool OpFindFriends(string[] friendsToFind, [Optional] FindFriendsOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3BCBE10", Offset = "0x3BCBE10", VA = "0x3BCBE10")]
	public bool OpJoinLobby(TypedLobby lobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3BCBF10", Offset = "0x3BCBF10", VA = "0x3BCBF10")]
	public bool OpLeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3BCBF80", Offset = "0x3BCBF80", VA = "0x3BCBF80")]
	public bool OpJoinRandomRoom([Optional] OpJoinRandomRoomParams opJoinRandomRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x3BCC120", Offset = "0x3BCC120", VA = "0x3BCC120")]
	public bool OpJoinRandomOrCreateRoom(OpJoinRandomRoomParams opJoinRandomRoomParams, EnterRoomParams createRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x3BCC2C0", Offset = "0x3BCC2C0", VA = "0x3BCC2C0")]
	public bool OpCreateRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x3BCC3B0", Offset = "0x3BCC3B0", VA = "0x3BCC3B0")]
	public bool OpJoinOrCreateRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x3BCC4A0", Offset = "0x3BCC4A0", VA = "0x3BCC4A0")]
	public bool OpJoinRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x3BCC5A0", Offset = "0x3BCC5A0", VA = "0x3BCC5A0")]
	public bool OpRejoinRoom(string roomName)
	{
		return default(bool);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3BCC6E0", Offset = "0x3BCC6E0", VA = "0x3BCC6E0")]
	public bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x3BCC7E0", Offset = "0x3BCC7E0", VA = "0x3BCC7E0")]
	public bool OpGetGameList(TypedLobby typedLobby, string sqlLobbyFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x3BCC8C0", Offset = "0x3BCC8C0", VA = "0x3BCC8C0")]
	public bool OpSetCustomPropertiesOfActor(int actorNr, Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x3BCCCD0", Offset = "0x3BCCCD0", VA = "0x3BCCCD0")]
	protected internal bool OpSetPropertiesOfActor(int actorNr, Hashtable actorProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x3BCD3B0", Offset = "0x3BCD3B0", VA = "0x3BCD3B0")]
	public bool OpSetCustomPropertiesOfRoom(Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x3BCD650", Offset = "0x3BCD650", VA = "0x3BCD650")]
	protected internal bool OpSetPropertyOfRoom(byte propCode, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x3BCD4F0", Offset = "0x3BCD4F0", VA = "0x3BCD4F0")]
	protected internal bool OpSetPropertiesOfRoom(Hashtable gameProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x3BCDBF0", Offset = "0x3BCDBF0", VA = "0x3BCDBF0", Slot = "10")]
	public virtual bool OpRaiseEvent(byte eventCode, object customEventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3BCDC90", Offset = "0x3BCDC90", VA = "0x3BCDC90", Slot = "11")]
	public virtual bool OpChangeGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3BCDD10", Offset = "0x3BCDD10", VA = "0x3BCDD10")]
	private void ReadoutProperties(Hashtable gameProperties, Hashtable actorProperties, int targetActorNr)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x3BCE1C0", Offset = "0x3BCE1C0", VA = "0x3BCE1C0")]
	private Hashtable ReadoutPropertiesForActorNr(Hashtable actorProperties, int actorNr)
	{
		return null;
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3BCE2A0", Offset = "0x3BCE2A0", VA = "0x3BCE2A0")]
	public void ChangeLocalID(int newID)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x3BCE410", Offset = "0x3BCE410", VA = "0x3BCE410")]
	private void GameEnteredOnGameServer(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3BCE740", Offset = "0x3BCE740", VA = "0x3BCE740")]
	private void UpdatedActorList(int[] actorsInGame)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x3BCEC20", Offset = "0x3BCEC20", VA = "0x3BCEC20", Slot = "12")]
	protected internal virtual Player CreatePlayer(string actorName, int actorNumber, bool isLocal, Hashtable actorProperties)
	{
		return null;
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3BCEDA0", Offset = "0x3BCEDA0", VA = "0x3BCEDA0", Slot = "13")]
	protected internal virtual Room CreateRoom(string roomName, RoomOptions opt)
	{
		return null;
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3BCEE00", Offset = "0x3BCEE00", VA = "0x3BCEE00")]
	private bool CheckIfOpAllowedOnServer(byte opCode, ServerConnection serverConnection)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x3BCB650", Offset = "0x3BCB650", VA = "0x3BCB650")]
	private bool CheckIfOpCanBeSent(byte opCode, ServerConnection serverConnection, string opName)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x3BCEF00", Offset = "0x3BCEF00", VA = "0x3BCEF00")]
	private bool CheckIfClientIsReadyToCallOperation(byte opCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3BCEFE0", Offset = "0x3BCEFE0", VA = "0x3BCEFE0", Slot = "14")]
	public virtual void DebugReturn(DebugLevel level, string message)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x3BCF0C0", Offset = "0x3BCF0C0", VA = "0x3BCF0C0")]
	private void CallbackRoomEnterFailed(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x3BCF730", Offset = "0x3BCF730", VA = "0x3BCF730", Slot = "15")]
	public virtual void OnOperationResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x3BD2560", Offset = "0x3BD2560", VA = "0x3BD2560", Slot = "16")]
	public virtual void OnStatusChanged(StatusCode statusCode)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3BD3AE0", Offset = "0x3BD3AE0", VA = "0x3BD3AE0", Slot = "17")]
	public virtual void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3BD5940", Offset = "0x3BD5940", VA = "0x3BD5940", Slot = "18")]
	public virtual void OnMessage(object message)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3BD59A0", Offset = "0x3BD59A0", VA = "0x3BD59A0")]
	private void OnDisconnectMessageReceived(DisconnectMessage obj)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3BD5B00", Offset = "0x3BD5B00", VA = "0x3BD5B00")]
	private void OnRegionPingCompleted(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3BD1490", Offset = "0x3BD1490", VA = "0x3BD1490")]
	protected internal static string ReplacePortWithAlternative(string address, ushort replacementPort)
	{
		return null;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3BD11E0", Offset = "0x3BD11E0", VA = "0x3BD11E0")]
	private void SetupEncryption(Dictionary<byte, object> encryptionData)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3BD5B60", Offset = "0x3BD5B60", VA = "0x3BD5B60")]
	public bool OpWebRpc(string uriPath, object parameters, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3BD5D20", Offset = "0x3BD5D20", VA = "0x3BD5D20")]
	public void AddCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x3BD5DE0", Offset = "0x3BD5DE0", VA = "0x3BD5DE0")]
	public void RemoveCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x3BD5510", Offset = "0x3BD5510", VA = "0x3BD5510")]
	protected internal void UpdateCallbackTargets()
	{
	}

	[Token(Token = "0x60000C0")]
	private void UpdateCallbackTarget<T>(CallbackTargetChange change, List<T> container) where T : class
	{
	}
}
