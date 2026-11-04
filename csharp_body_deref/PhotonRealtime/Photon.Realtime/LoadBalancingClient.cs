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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x16F5C50", Offset = "0x16F4250", VA = "0x1816F5C50")]
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000045")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public SerializationProtocol SerializationProtocol
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x19BCDD0", Offset = "0x19BB3D0", VA = "0x1819BCDD0")]
		get
		{
			return default(SerializationProtocol);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x1D1FEB0", Offset = "0x1D1E4B0", VA = "0x181D1FEB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public string AppId
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ClientAppType ClientType
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(ClientAppType);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public AuthenticationValues AuthValues
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public ConnectionProtocol? ExpectedProtocol
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x1D1FA90", Offset = "0x1D1E090", VA = "0x181D1FA90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x1D1FE50", Offset = "0x1D1E450", VA = "0x181D1FE50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	private object TokenForInit
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x1D1FBB0", Offset = "0x1D1E1B0", VA = "0x181D1FBB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public bool IsUsingNameServer
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x174C1E0", Offset = "0x174A7E0", VA = "0x18174C1E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public string NameServerAddress
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x1D1FB50", Offset = "0x1D1E150", VA = "0x181D1FB50")]
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
		[Address(RVA = "0x198C740", Offset = "0x198AD40", VA = "0x18198C740")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x1D1FF10", Offset = "0x1D1E510", VA = "0x181D1FF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool EnableProtocolFallback
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public string CurrentServerAddress
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x1D1FA60", Offset = "0x1D1E060", VA = "0x181D1FA60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public string MasterServerAddress
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600005A")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public string GameServerAddress
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public ServerConnection Server
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0xB5B9B0", Offset = "0xB59FB0", VA = "0x180B5B9B0")]
		[CompilerGenerated]
		get
		{
			return default(ServerConnection);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0xB5BE20", Offset = "0xB5A420", VA = "0x180B5BE20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public ClientState State
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		get
		{
			return default(ClientState);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x1D1FED0", Offset = "0x1D1E4D0", VA = "0x181D1FED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool IsConnected
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x1D1FB20", Offset = "0x1D1E120", VA = "0x181D1FB20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001E")]
	public bool IsConnectedAndReady
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x1D1FAD0", Offset = "0x1D1E0D0", VA = "0x181D1FAD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public DisconnectCause DisconnectedCause
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x1D1FA80", Offset = "0x1D1E080", VA = "0x181D1FA80")]
		[CompilerGenerated]
		get
		{
			return default(DisconnectCause);
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x1D1FE40", Offset = "0x1D1E440", VA = "0x181D1FE40")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public bool InLobby
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x1D1FAA0", Offset = "0x1D1E0A0", VA = "0x181D1FAA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000021")]
	public TypedLobby CurrentLobby
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0xB5B620", Offset = "0xB59C20", VA = "0x180B5B620")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0xB5BC50", Offset = "0xB5A250", VA = "0x180B5BC50")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public Player LocalPlayer
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x1BD5400", Offset = "0x1BD3A00", VA = "0x181BD5400")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public string NickName
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x1D1FB60", Offset = "0x1D1E160", VA = "0x181D1FB60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x1D1FE60", Offset = "0x1D1E460", VA = "0x181D1FE60")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public string UserId
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x1D1FBD0", Offset = "0x1D1E1D0", VA = "0x181D1FBD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x1D1FF20", Offset = "0x1D1E520", VA = "0x181D1FF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public Room CurrentRoom
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x1C41E00", Offset = "0x1C40400", VA = "0x181C41E00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool InRoom
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x1D1FAB0", Offset = "0x1D1E0B0", VA = "0x181D1FAB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000027")]
	public int PlayersOnMasterCount
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x1D1FB90", Offset = "0x1D1E190", VA = "0x181D1FB90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x1D1FE90", Offset = "0x1D1E490", VA = "0x181D1FE90")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public int PlayersInRoomsCount
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x1D1FB80", Offset = "0x1D1E180", VA = "0x181D1FB80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x1D1FE80", Offset = "0x1D1E480", VA = "0x181D1FE80")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public int RoomsCount
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x1D1FBA0", Offset = "0x1D1E1A0", VA = "0x181D1FBA0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x1D1FEA0", Offset = "0x1D1E4A0", VA = "0x181D1FEA0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public bool IsFetchingFriendList
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x1D1FB40", Offset = "0x1D1E140", VA = "0x181D1FB40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	public string CloudRegion
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x1D1FA50", Offset = "0x1D1E050", VA = "0x181D1FA50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x1D1FE00", Offset = "0x1D1E400", VA = "0x181D1FE00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public string CurrentCluster
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0xA29A50", Offset = "0xA28050", VA = "0x180A29A50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x1D1FE20", Offset = "0x1D1E420", VA = "0x181D1FE20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public event Action<ClientState, ClientState> StateChanged
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x1D1F9A0", Offset = "0x1D1DFA0", VA = "0x181D1F9A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x1D1FD50", Offset = "0x1D1E350", VA = "0x181D1FD50")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<EventData> EventReceived
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x1D1F840", Offset = "0x1D1DE40", VA = "0x181D1F840")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x1D1FBF0", Offset = "0x1D1E1F0", VA = "0x181D1FBF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<OperationResponse> OpResponseReceived
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x1D1F8F0", Offset = "0x1D1DEF0", VA = "0x181D1F8F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x1D1FCA0", Offset = "0x1D1E2A0", VA = "0x181D1FCA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x1D1F200", Offset = "0x1D1D800", VA = "0x181D1F200")]
	public LoadBalancingClient(ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x1D1F1A0", Offset = "0x1D1D7A0", VA = "0x181D1F1A0")]
	public LoadBalancingClient(string masterAddress, string appId, NetworkCredential gameVersion, ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x1D18A40", Offset = "0x1D17040", VA = "0x181D18A40")]
	private string GetNameServerAddress()
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x1D17A60", Offset = "0x1D16060", VA = "0x181D17A60", Slot = "8")]
	public virtual bool ConnectUsingSettings(AppSettings appSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x1B78A70", Offset = "0x1B77070", VA = "0x181B78A70")]
	[Obsolete("Use ConnectToMasterServer() instead.")]
	public bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x1D172F0", Offset = "0x1D158F0", VA = "0x181D172F0", Slot = "9")]
	public virtual bool ConnectToMasterServer()
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x1D17520", Offset = "0x1D15B20", VA = "0x181D17520")]
	public bool ConnectToNameServer()
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x1D17780", Offset = "0x1D15D80", VA = "0x181D17780")]
	public bool ConnectToRegionMaster(string region)
	{
		return default(bool);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("UNITY_WEBGL")]
	private void CheckConnectSetupWebGl()
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x1D17EA0", Offset = "0x1D164A0", VA = "0x181D17EA0")]
	private bool Connect(string serverAddress, string proxyServerAddress, ServerConnection serverType)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x1D1E500", Offset = "0x1D1CB00", VA = "0x181D1E500")]
	public bool ReconnectToMaster()
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x1D1E2B0", Offset = "0x1D1C8B0", VA = "0x181D1E2B0")]
	public bool ReconnectAndRejoin()
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x1D18460", Offset = "0x1D16A60", VA = "0x181D18460")]
	public void Disconnect(DisconnectCause cause = DisconnectCause.DisconnectByClientLogic)
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x1D18380", Offset = "0x1D16980", VA = "0x181D18380")]
	private void DisconnectToReconnect()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x1D1EBB0", Offset = "0x1D1D1B0", VA = "0x181D1EBB0")]
	public void SimulateConnectionLoss(bool simulateTimeout)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x1D164E0", Offset = "0x1D14AE0", VA = "0x181D164E0")]
	private bool CallAuthenticate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x1D1E8F0", Offset = "0x1D1CEF0", VA = "0x181D1E8F0")]
	public void Service()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x1D1C910", Offset = "0x1D1AF10", VA = "0x181D1C910")]
	private bool OpGetRegions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x1D1C430", Offset = "0x1D1AA30", VA = "0x181D1C430")]
	public bool OpFindFriends(string[] friendsToFind, [Optional] FindFriendsOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x1D1C990", Offset = "0x1D1AF90", VA = "0x181D1C990")]
	public bool OpJoinLobby(TypedLobby lobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x1D1D080", Offset = "0x1D1B680", VA = "0x181D1D080")]
	public bool OpLeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x1D1CDB0", Offset = "0x1D1B3B0", VA = "0x181D1CDB0")]
	public bool OpJoinRandomRoom([Optional] OpJoinRandomRoomParams opJoinRandomRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x1D1CBF0", Offset = "0x1D1B1F0", VA = "0x181D1CBF0")]
	public bool OpJoinRandomOrCreateRoom(OpJoinRandomRoomParams opJoinRandomRoomParams, EnterRoomParams createRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x1D1C320", Offset = "0x1D1A920", VA = "0x181D1C320")]
	public bool OpCreateRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x1D1CAD0", Offset = "0x1D1B0D0", VA = "0x181D1CAD0")]
	public bool OpJoinOrCreateRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x1D1CF50", Offset = "0x1D1B550", VA = "0x181D1CF50")]
	public bool OpJoinRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x1D1D2C0", Offset = "0x1D1B8C0", VA = "0x181D1D2C0")]
	public bool OpRejoinRoom(string roomName)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x1D1D100", Offset = "0x1D1B700", VA = "0x181D1D100")]
	public bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x1D1C810", Offset = "0x1D1AE10", VA = "0x181D1C810")]
	public bool OpGetGameList(TypedLobby typedLobby, string sqlLobbyFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x1D1D420", Offset = "0x1D1BA20", VA = "0x181D1D420")]
	public bool OpSetCustomPropertiesOfActor(int actorNr, Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x1D1D7D0", Offset = "0x1D1BDD0", VA = "0x181D1D7D0")]
	protected internal bool OpSetPropertiesOfActor(int actorNr, Hashtable actorProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x1D1D660", Offset = "0x1D1BC60", VA = "0x181D1D660")]
	public bool OpSetCustomPropertiesOfRoom(Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x1D1DAD0", Offset = "0x1D1C0D0", VA = "0x181D1DAD0")]
	protected internal bool OpSetPropertyOfRoom(byte propCode, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x1D1D970", Offset = "0x1D1BF70", VA = "0x181D1D970")]
	protected internal bool OpSetPropertiesOfRoom(Hashtable gameProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x1D1D220", Offset = "0x1D1B820", VA = "0x181D1D220", Slot = "10")]
	public virtual bool OpRaiseEvent(byte eventCode, object customEventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x1D1C280", Offset = "0x1D1A880", VA = "0x181D1C280", Slot = "11")]
	public virtual bool OpChangeGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x1D1DE20", Offset = "0x1D1C420", VA = "0x181D1DE20")]
	private void ReadoutProperties(Hashtable gameProperties, Hashtable actorProperties, int targetActorNr)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x1D1DD30", Offset = "0x1D1C330", VA = "0x181D1DD30")]
	private Hashtable ReadoutPropertiesForActorNr(Hashtable actorProperties, int actorNr)
	{
		return null;
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x1D168F0", Offset = "0x1D14EF0", VA = "0x181D168F0")]
	public void ChangeLocalID(int newID)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x1D186E0", Offset = "0x1D16CE0", VA = "0x181D186E0")]
	private void GameEnteredOnGameServer(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x1D1EF90", Offset = "0x1D1D590", VA = "0x181D1EF90")]
	private void UpdatedActorList(int[] actorsInGame)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x1D18190", Offset = "0x1D16790", VA = "0x181D18190", Slot = "12")]
	protected internal virtual Player CreatePlayer(string actorName, int actorNumber, bool isLocal, Hashtable actorProperties)
	{
		return null;
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x1D18210", Offset = "0x1D16810", VA = "0x181D18210", Slot = "13")]
	protected internal virtual Room CreateRoom(string roomName, RoomOptions opt)
	{
		return null;
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x1D16BD0", Offset = "0x1D151D0", VA = "0x181D16BD0")]
	private bool CheckIfOpAllowedOnServer(byte opCode, ServerConnection serverConnection)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x1D16D40", Offset = "0x1D15340", VA = "0x181D16D40")]
	private bool CheckIfOpCanBeSent(byte opCode, ServerConnection serverConnection, string opName)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x1D16A70", Offset = "0x1D15070", VA = "0x181D16A70")]
	private bool CheckIfClientIsReadyToCallOperation(byte opCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x1D18280", Offset = "0x1D16880", VA = "0x181D18280", Slot = "14")]
	public virtual void DebugReturn(DebugLevel level, string message)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x1D16860", Offset = "0x1D14E60", VA = "0x181D16860")]
	private void CallbackRoomEnterFailed(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x1D19C60", Offset = "0x1D18260", VA = "0x181D19C60", Slot = "15")]
	public virtual void OnOperationResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x1D1B2E0", Offset = "0x1D198E0", VA = "0x181D1B2E0", Slot = "16")]
	public virtual void OnStatusChanged(StatusCode statusCode)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x1D18DD0", Offset = "0x1D173D0", VA = "0x181D18DD0", Slot = "17")]
	public virtual void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x1D19BF0", Offset = "0x1D181F0", VA = "0x181D19BF0", Slot = "18")]
	public virtual void OnMessage(object message)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x1D18CA0", Offset = "0x1D172A0", VA = "0x181D18CA0")]
	private void OnDisconnectMessageReceived(DisconnectMessage obj)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x1D1B270", Offset = "0x1D19870", VA = "0x181D1B270")]
	private void OnRegionPingCompleted(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x1D1E7A0", Offset = "0x1D1CDA0", VA = "0x181D1E7A0")]
	protected internal static string ReplacePortWithAlternative(string address, ushort replacementPort)
	{
		return null;
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x1D1E910", Offset = "0x1D1CF10", VA = "0x181D1E910")]
	private void SetupEncryption(Dictionary<byte, object> encryptionData)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x1D1DB60", Offset = "0x1D1C160", VA = "0x181D1DB60")]
	public bool OpWebRpc(string uriPath, object parameters, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x1D16440", Offset = "0x1D14A40", VA = "0x181D16440")]
	public void AddCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x1D1E700", Offset = "0x1D1CD00", VA = "0x181D1E700")]
	public void RemoveCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x1D1ECB0", Offset = "0x1D1D2B0", VA = "0x181D1ECB0")]
	protected internal void UpdateCallbackTargets()
	{
	}

	[Token(Token = "0x60000BE")]
	private void UpdateCallbackTarget<T>(CallbackTargetChange change, List<T> container) where T : class
	{
	}
}
