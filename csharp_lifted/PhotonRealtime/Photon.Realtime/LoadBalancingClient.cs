// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.LoadBalancingClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000010")]
public class LoadBalancingClient : IPhotonPeerListener
{
	[Token(Token = "0x2000011")]
	private class EncryptionDataParameters
	{
		[Token(Token = "0x40000BE")]
		public const byte Mode = 0;

		[Token(Token = "0x40000BF")]
		public const byte Secret1 = 1;

		[Token(Token = "0x40000C0")]
		public const byte Secret2 = 2;

		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x56B7F50", Offset = "0x56B6F50", VA = "0x56B7F50")]
		public EncryptionDataParameters()
		{
		}
	}

	[Token(Token = "0x2000012")]
	private class CallbackTargetChange
	{
		[Token(Token = "0x40000C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly object Target;

		[Token(Token = "0x40000C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly bool AddTarget;

		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x56B7D90", Offset = "0x56B6D90", VA = "0x56B7D90")]
		public CallbackTargetChange(object target, bool addTarget)
		{
		}
	}

	[Token(Token = "0x400008A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public NetworkCredential AppVersion;

	[Token(Token = "0x400008E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public AuthModeOption AuthMode;

	[Token(Token = "0x400008F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public EncryptionMode EncryptionMode;

	[Token(Token = "0x4000091")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private object tokenCache;

	[Token(Token = "0x4000093")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public string NameServerHost;

	[Token(Token = "0x4000094")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<ConnectionProtocol, int> ProtocolToNameServerPort;

	[Token(Token = "0x4000096")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x62")]
	public PhotonPortDefinition ServerPortOverrides;

	[Token(Token = "0x400009B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public string ProxyServerAddress;

	[Token(Token = "0x400009C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private ClientState state;

	[Token(Token = "0x400009D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[CompilerGenerated]
	private Action<ClientState, ClientState> m_StateChanged;

	[Token(Token = "0x400009E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[CompilerGenerated]
	private Action<EventData> m_EventReceived;

	[Token(Token = "0x400009F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[CompilerGenerated]
	private Action<OperationResponse> m_OpResponseReceived;

	[Token(Token = "0x40000A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public ConnectionCallbacksContainer ConnectionCallbackTargets;

	[Token(Token = "0x40000A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public MatchMakingCallbacksContainer MatchMakingCallbackTargets;

	[Token(Token = "0x40000A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	internal InRoomCallbacksContainer InRoomCallbackTargets;

	[Token(Token = "0x40000A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal LobbyCallbacksContainer LobbyCallbackTargets;

	[Token(Token = "0x40000A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	internal WebRpcCallbacksContainer WebRpcCallbackTargets;

	[Token(Token = "0x40000A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	internal ErrorInfoCallbacksContainer ErrorInfoCallbackTargets;

	[Token(Token = "0x40000A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public SystemConnectionSummary SystemConnectionSummary;

	[Token(Token = "0x40000A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public bool EnableLobbyStatistics;

	[Token(Token = "0x40000AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private readonly List<TypedLobbyInfo> lobbyStatistics;

	[Token(Token = "0x40000B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private JoinType lastJoinType;

	[Token(Token = "0x40000B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private EnterRoomParams enterRoomParamsCache;

	[Token(Token = "0x40000B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private OperationResponse failedRoomEntryOperation;

	[Token(Token = "0x40000B3")]
	private const int FriendRequestListMax = 512;

	[Token(Token = "0x40000B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private string[] friendListRequested;

	[Token(Token = "0x40000B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	public RegionHandler RegionHandler;

	[Token(Token = "0x40000B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private string bestRegionSummaryFromStorage;

	[Token(Token = "0x40000B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	public string SummaryToCache;

	[Token(Token = "0x40000BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private bool connectToBestRegion;

	[Token(Token = "0x40000BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private readonly Queue<CallbackTargetChange> callbackTargetChanges;

	[Token(Token = "0x40000BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private readonly HashSet<object> callbackTargets;

	[Token(Token = "0x40000BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	public int NameServerPortInAppSettings;

	[Token(Token = "0x1700000D")]
	public LoadBalancingPeer LoadBalancingPeer
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x56AAB80", Offset = "0x56A9B80", VA = "0x56AAB80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x56AAB90", Offset = "0x56A9B90", VA = "0x56AAB90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public SerializationProtocol SerializationProtocol
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x56AABA0", Offset = "0x56A9BA0", VA = "0x56AABA0")]
		get
		{
			return default(SerializationProtocol);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x56AABC0", Offset = "0x56A9BC0", VA = "0x56AABC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public string AppId
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x56AABE0", Offset = "0x56A9BE0", VA = "0x56AABE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x56AABF0", Offset = "0x56A9BF0", VA = "0x56AABF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ClientAppType ClientType
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x56AAC00", Offset = "0x56A9C00", VA = "0x56AAC00")]
		[CompilerGenerated]
		get
		{
			return default(ClientAppType);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x56AAC10", Offset = "0x56A9C10", VA = "0x56AAC10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public AuthenticationValues AuthValues
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x56AAC20", Offset = "0x56A9C20", VA = "0x56AAC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x56AAC30", Offset = "0x56A9C30", VA = "0x56AAC30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public ConnectionProtocol? ExpectedProtocol
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x56AAC40", Offset = "0x56A9C40", VA = "0x56AAC40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x56AAC50", Offset = "0x56A9C50", VA = "0x56AAC50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	private object TokenForInit
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x56AAC60", Offset = "0x56A9C60", VA = "0x56AAC60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public bool IsUsingNameServer
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x56AAC80", Offset = "0x56A9C80", VA = "0x56AAC80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x56AAC90", Offset = "0x56A9C90", VA = "0x56AAC90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public string NameServerAddress
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x56AACA0", Offset = "0x56A9CA0", VA = "0x56AACA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	[Obsolete("Set port overrides in ServerPortOverrides. Not used anymore!")]
	public bool UseAlternativeUdpPorts
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x56AAEE0", Offset = "0x56A9EE0", VA = "0x56AAEE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x56AAEF0", Offset = "0x56A9EF0", VA = "0x56AAEF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool EnableProtocolFallback
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x56AAF00", Offset = "0x56A9F00", VA = "0x56AAF00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x56AAF10", Offset = "0x56A9F10", VA = "0x56AAF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public string CurrentServerAddress
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x56AAF20", Offset = "0x56A9F20", VA = "0x56AAF20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public string MasterServerAddress
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x56AAF40", Offset = "0x56A9F40", VA = "0x56AAF40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x56AAF50", Offset = "0x56A9F50", VA = "0x56AAF50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public string GameServerAddress
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x56AAF60", Offset = "0x56A9F60", VA = "0x56AAF60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x56AAF70", Offset = "0x56A9F70", VA = "0x56AAF70")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public ServerConnection Server
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x56AAF80", Offset = "0x56A9F80", VA = "0x56AAF80")]
		[CompilerGenerated]
		get
		{
			return default(ServerConnection);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x56AAF90", Offset = "0x56A9F90", VA = "0x56AAF90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public ClientState State
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x56AAFA0", Offset = "0x56A9FA0", VA = "0x56AAFA0")]
		get
		{
			return default(ClientState);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x56AAFB0", Offset = "0x56A9FB0", VA = "0x56AAFB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool IsConnected
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x56A7180", Offset = "0x56A6180", VA = "0x56A7180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001E")]
	public bool IsConnectedAndReady
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x56AAFE0", Offset = "0x56A9FE0", VA = "0x56AAFE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public DisconnectCause DisconnectedCause
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x56AB430", Offset = "0x56AA430", VA = "0x56AB430")]
		[CompilerGenerated]
		get
		{
			return default(DisconnectCause);
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x56AB440", Offset = "0x56AA440", VA = "0x56AB440")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public bool InLobby
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x56AB450", Offset = "0x56AA450", VA = "0x56AB450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000021")]
	public TypedLobby CurrentLobby
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x56AB460", Offset = "0x56AA460", VA = "0x56AB460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x56AB470", Offset = "0x56AA470", VA = "0x56AB470")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public Player LocalPlayer
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x56AB490", Offset = "0x56AA490", VA = "0x56AB490")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x56AB4A0", Offset = "0x56AA4A0", VA = "0x56AB4A0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public string NickName
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x56AB4C0", Offset = "0x56AA4C0", VA = "0x56AB4C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x56AB4E0", Offset = "0x56AA4E0", VA = "0x56AB4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public string UserId
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x56AB5C0", Offset = "0x56AA5C0", VA = "0x56AB5C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x56AB5E0", Offset = "0x56AA5E0", VA = "0x56AB5E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public Room CurrentRoom
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x56AB680", Offset = "0x56AA680", VA = "0x56AB680")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x56AB690", Offset = "0x56AA690", VA = "0x56AB690")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool InRoom
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x56AB6B0", Offset = "0x56AA6B0", VA = "0x56AB6B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000027")]
	public int PlayersOnMasterCount
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x56AB6D0", Offset = "0x56AA6D0", VA = "0x56AB6D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x56AB6E0", Offset = "0x56AA6E0", VA = "0x56AB6E0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public int PlayersInRoomsCount
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x56AB6F0", Offset = "0x56AA6F0", VA = "0x56AB6F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x56AB700", Offset = "0x56AA700", VA = "0x56AB700")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public int RoomsCount
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x56AB710", Offset = "0x56AA710", VA = "0x56AB710")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x56AB720", Offset = "0x56AA720", VA = "0x56AB720")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public bool IsFetchingFriendList
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x56AB730", Offset = "0x56AA730", VA = "0x56AB730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	public string CloudRegion
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x56AB740", Offset = "0x56AA740", VA = "0x56AB740")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x56AB750", Offset = "0x56AA750", VA = "0x56AB750")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public string CurrentCluster
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x56AB770", Offset = "0x56AA770", VA = "0x56AB770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x56AB780", Offset = "0x56AA780", VA = "0x56AB780")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public event Action<ClientState, ClientState> StateChanged
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x56AB010", Offset = "0x56AA010", VA = "0x56AB010")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x56AB0C0", Offset = "0x56AA0C0", VA = "0x56AB0C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<EventData> EventReceived
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x56AB170", Offset = "0x56AA170", VA = "0x56AB170")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x56AB220", Offset = "0x56AA220", VA = "0x56AB220")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<OperationResponse> OpResponseReceived
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x56AB2D0", Offset = "0x56AA2D0", VA = "0x56AB2D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x56AB380", Offset = "0x56AA380", VA = "0x56AB380")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x56AB7A0", Offset = "0x56AA7A0", VA = "0x56AB7A0")]
	public LoadBalancingClient(ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x56AC1C0", Offset = "0x56AB1C0", VA = "0x56AC1C0")]
	public LoadBalancingClient(string masterAddress, string appId, NetworkCredential gameVersion, ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x56AACB0", Offset = "0x56A9CB0", VA = "0x56AACB0")]
	private string GetNameServerAddress()
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x56AC220", Offset = "0x56AB220", VA = "0x56AC220", Slot = "8")]
	public virtual bool ConnectUsingSettings(AppSettings appSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x56AC690", Offset = "0x56AB690", VA = "0x56AC690")]
	[Obsolete("Use ConnectToMasterServer() instead.")]
	public bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x56AC6B0", Offset = "0x56AB6B0", VA = "0x56AC6B0", Slot = "9")]
	public virtual bool ConnectToMasterServer()
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x56AC900", Offset = "0x56AB900", VA = "0x56AC900")]
	public bool ConnectToNameServer()
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x56ACB60", Offset = "0x56ABB60", VA = "0x56ACB60")]
	public bool ConnectToRegionMaster(string region)
	{
		return default(bool);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x56AD190", Offset = "0x56AC190", VA = "0x56AD190")]
	[Conditional("UNITY_WEBGL")]
	private void CheckConnectSetupWebGl()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x56AD1A0", Offset = "0x56AC1A0", VA = "0x56AD1A0")]
	private bool Connect(string serverAddress, string proxyServerAddress, ServerConnection serverType)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x56AD480", Offset = "0x56AC480", VA = "0x56AD480")]
	public bool ReconnectToMaster()
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x56AD670", Offset = "0x56AC670", VA = "0x56AD670")]
	public bool ReconnectAndRejoin()
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x56A71A0", Offset = "0x56A61A0", VA = "0x56A71A0")]
	public void Disconnect(DisconnectCause cause = DisconnectCause.DisconnectByClientLogic)
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x56AD890", Offset = "0x56AC890", VA = "0x56AD890")]
	private void DisconnectToReconnect()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x56AD970", Offset = "0x56AC970", VA = "0x56AD970")]
	public void SimulateConnectionLoss(bool simulateTimeout)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x56ACE10", Offset = "0x56ABE10", VA = "0x56ACE10")]
	private bool CallAuthenticate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x56ADD80", Offset = "0x56ACD80", VA = "0x56ADD80")]
	public void Service()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x56ADDA0", Offset = "0x56ACDA0", VA = "0x56ADDA0")]
	private bool OpGetRegions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x56ADE10", Offset = "0x56ACE10", VA = "0x56ADE10")]
	public bool OpFindFriends(string[] friendsToFind, [Optional] FindFriendsOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x56AE220", Offset = "0x56AD220", VA = "0x56AE220")]
	public bool OpJoinLobby(TypedLobby lobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x56AE320", Offset = "0x56AD320", VA = "0x56AE320")]
	public bool OpLeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x56AE390", Offset = "0x56AD390", VA = "0x56AE390")]
	public bool OpJoinRandomRoom([Optional] OpJoinRandomRoomParams opJoinRandomRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x56AE530", Offset = "0x56AD530", VA = "0x56AE530")]
	public bool OpJoinRandomOrCreateRoom(OpJoinRandomRoomParams opJoinRandomRoomParams, EnterRoomParams createRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x56AE6E0", Offset = "0x56AD6E0", VA = "0x56AE6E0")]
	public bool OpCreateRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x56AE7D0", Offset = "0x56AD7D0", VA = "0x56AE7D0")]
	public bool OpJoinOrCreateRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x56AE8C0", Offset = "0x56AD8C0", VA = "0x56AE8C0")]
	public bool OpJoinRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x56AE9C0", Offset = "0x56AD9C0", VA = "0x56AE9C0")]
	public bool OpRejoinRoom(string roomName)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x56AEAF0", Offset = "0x56ADAF0", VA = "0x56AEAF0")]
	public bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x56AEBF0", Offset = "0x56ADBF0", VA = "0x56AEBF0")]
	public bool OpGetGameList(TypedLobby typedLobby, string sqlLobbyFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x56AECD0", Offset = "0x56ADCD0", VA = "0x56AECD0")]
	public bool OpSetCustomPropertiesOfActor(int actorNr, Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x56AF0E0", Offset = "0x56AE0E0", VA = "0x56AF0E0")]
	protected internal bool OpSetPropertiesOfActor(int actorNr, Hashtable actorProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x56AF7B0", Offset = "0x56AE7B0", VA = "0x56AF7B0")]
	public bool OpSetCustomPropertiesOfRoom(Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x56AFA50", Offset = "0x56AEA50", VA = "0x56AFA50")]
	protected internal bool OpSetPropertyOfRoom(byte propCode, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x56AF8F0", Offset = "0x56AE8F0", VA = "0x56AF8F0")]
	protected internal bool OpSetPropertiesOfRoom(Hashtable gameProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x56AFFE0", Offset = "0x56AEFE0", VA = "0x56AFFE0", Slot = "10")]
	public virtual bool OpRaiseEvent(byte eventCode, object customEventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x56B0080", Offset = "0x56AF080", VA = "0x56B0080", Slot = "11")]
	public virtual bool OpChangeGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x56B0100", Offset = "0x56AF100", VA = "0x56B0100")]
	private void ReadoutProperties(Hashtable gameProperties, Hashtable actorProperties, int targetActorNr)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x56B0540", Offset = "0x56AF540", VA = "0x56B0540")]
	private Hashtable ReadoutPropertiesForActorNr(Hashtable actorProperties, int actorNr)
	{
		return null;
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x56B0620", Offset = "0x56AF620", VA = "0x56B0620")]
	public void ChangeLocalID(int newID)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x56B0790", Offset = "0x56AF790", VA = "0x56B0790")]
	private void GameEnteredOnGameServer(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x56B0AC0", Offset = "0x56AFAC0", VA = "0x56B0AC0")]
	private void UpdatedActorList(int[] actorsInGame)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x56B0F50", Offset = "0x56AFF50", VA = "0x56B0F50", Slot = "12")]
	protected internal virtual Player CreatePlayer(string actorName, int actorNumber, bool isLocal, Hashtable actorProperties)
	{
		return null;
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x56B10D0", Offset = "0x56B00D0", VA = "0x56B10D0", Slot = "13")]
	protected internal virtual Room CreateRoom(string roomName, RoomOptions opt)
	{
		return null;
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x56B1130", Offset = "0x56B0130", VA = "0x56B1130")]
	private bool CheckIfOpAllowedOnServer(byte opCode, ServerConnection serverConnection)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x56ADA70", Offset = "0x56ACA70", VA = "0x56ADA70")]
	private bool CheckIfOpCanBeSent(byte opCode, ServerConnection serverConnection, string opName)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x56B1230", Offset = "0x56B0230", VA = "0x56B1230")]
	private bool CheckIfClientIsReadyToCallOperation(byte opCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x56B1310", Offset = "0x56B0310", VA = "0x56B1310", Slot = "14")]
	public virtual void DebugReturn(DebugLevel level, string message)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x56B13F0", Offset = "0x56B03F0", VA = "0x56B13F0")]
	private void CallbackRoomEnterFailed(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x56B1A40", Offset = "0x56B0A40", VA = "0x56B1A40", Slot = "15")]
	public virtual void OnOperationResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x56B45F0", Offset = "0x56B35F0", VA = "0x56B45F0", Slot = "16")]
	public virtual void OnStatusChanged(StatusCode statusCode)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x56B5A80", Offset = "0x56B4A80", VA = "0x56B5A80", Slot = "17")]
	public virtual void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x56B7920", Offset = "0x56B6920", VA = "0x56B7920", Slot = "18")]
	public virtual void OnMessage(object message)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x56B7980", Offset = "0x56B6980", VA = "0x56B7980")]
	private void OnDisconnectMessageReceived(DisconnectMessage obj)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x56B7AE0", Offset = "0x56B6AE0", VA = "0x56B7AE0")]
	private void OnRegionPingCompleted(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x56B35C0", Offset = "0x56B25C0", VA = "0x56B35C0")]
	protected internal static string ReplacePortWithAlternative(string address, ushort replacementPort)
	{
		return null;
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x56B3310", Offset = "0x56B2310", VA = "0x56B3310")]
	private void SetupEncryption(Dictionary<byte, object> encryptionData)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x56B7B40", Offset = "0x56B6B40", VA = "0x56B7B40")]
	public bool OpWebRpc(string uriPath, object parameters, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x56B7D00", Offset = "0x56B6D00", VA = "0x56B7D00")]
	public void AddCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x56B7DC0", Offset = "0x56B6DC0", VA = "0x56B7DC0")]
	public void RemoveCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x56B74B0", Offset = "0x56B64B0", VA = "0x56B74B0")]
	protected internal void UpdateCallbackTargets()
	{
	}

	[Token(Token = "0x60000BE")]
	private void UpdateCallbackTarget<T>(CallbackTargetChange change, List<T> container) where T : class
	{
	}
}
