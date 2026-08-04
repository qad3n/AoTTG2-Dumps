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
		[Address(RVA = "0x3ECB8C0", Offset = "0x3ECB8C0", VA = "0x3ECB8C0")]
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
		[Address(RVA = "0x3ECB700", Offset = "0x3ECB700", VA = "0x3ECB700")]
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
		[Address(RVA = "0x3EBE0F0", Offset = "0x3EBE0F0", VA = "0x3EBE0F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x3EBE100", Offset = "0x3EBE100", VA = "0x3EBE100")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public SerializationProtocol SerializationProtocol
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x3EBE110", Offset = "0x3EBE110", VA = "0x3EBE110")]
		get
		{
			return default(SerializationProtocol);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x3EBE130", Offset = "0x3EBE130", VA = "0x3EBE130")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public string AppId
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x3EBE150", Offset = "0x3EBE150", VA = "0x3EBE150")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x3EBE160", Offset = "0x3EBE160", VA = "0x3EBE160")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ClientAppType ClientType
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x3EBE170", Offset = "0x3EBE170", VA = "0x3EBE170")]
		[CompilerGenerated]
		get
		{
			return default(ClientAppType);
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x3EBE180", Offset = "0x3EBE180", VA = "0x3EBE180")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public AuthenticationValues AuthValues
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x3EBE190", Offset = "0x3EBE190", VA = "0x3EBE190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x3EBE1A0", Offset = "0x3EBE1A0", VA = "0x3EBE1A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public ConnectionProtocol? ExpectedProtocol
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x3EBE1B0", Offset = "0x3EBE1B0", VA = "0x3EBE1B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x3EBE1C0", Offset = "0x3EBE1C0", VA = "0x3EBE1C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	private object TokenForInit
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x3EBE1D0", Offset = "0x3EBE1D0", VA = "0x3EBE1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public bool IsUsingNameServer
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x3EBE1F0", Offset = "0x3EBE1F0", VA = "0x3EBE1F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x3EBE200", Offset = "0x3EBE200", VA = "0x3EBE200")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public string NameServerAddress
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x3EBE210", Offset = "0x3EBE210", VA = "0x3EBE210")]
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
		[Address(RVA = "0x3EBE420", Offset = "0x3EBE420", VA = "0x3EBE420")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x3EBE430", Offset = "0x3EBE430", VA = "0x3EBE430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool EnableProtocolFallback
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x3EBE440", Offset = "0x3EBE440", VA = "0x3EBE440")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x3EBE450", Offset = "0x3EBE450", VA = "0x3EBE450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public string CurrentServerAddress
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x3EBE460", Offset = "0x3EBE460", VA = "0x3EBE460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000019")]
	public string MasterServerAddress
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x3EBE480", Offset = "0x3EBE480", VA = "0x3EBE480")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x3EBE490", Offset = "0x3EBE490", VA = "0x3EBE490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public string GameServerAddress
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x3EBE4A0", Offset = "0x3EBE4A0", VA = "0x3EBE4A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x3EBE4B0", Offset = "0x3EBE4B0", VA = "0x3EBE4B0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public ServerConnection Server
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x3EBE4C0", Offset = "0x3EBE4C0", VA = "0x3EBE4C0")]
		[CompilerGenerated]
		get
		{
			return default(ServerConnection);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x3EBE4D0", Offset = "0x3EBE4D0", VA = "0x3EBE4D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public ClientState State
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x3EBE4E0", Offset = "0x3EBE4E0", VA = "0x3EBE4E0")]
		get
		{
			return default(ClientState);
		}
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x3EBE4F0", Offset = "0x3EBE4F0", VA = "0x3EBE4F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool IsConnected
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x3EBA380", Offset = "0x3EBA380", VA = "0x3EBA380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001E")]
	public bool IsConnectedAndReady
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x3EBE520", Offset = "0x3EBE520", VA = "0x3EBE520")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public DisconnectCause DisconnectedCause
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x3EBE970", Offset = "0x3EBE970", VA = "0x3EBE970")]
		[CompilerGenerated]
		get
		{
			return default(DisconnectCause);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x3EBE980", Offset = "0x3EBE980", VA = "0x3EBE980")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public bool InLobby
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x3EBE990", Offset = "0x3EBE990", VA = "0x3EBE990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000021")]
	public TypedLobby CurrentLobby
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x3EBE9A0", Offset = "0x3EBE9A0", VA = "0x3EBE9A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x3EBE9B0", Offset = "0x3EBE9B0", VA = "0x3EBE9B0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public Player LocalPlayer
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x3EBE9D0", Offset = "0x3EBE9D0", VA = "0x3EBE9D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x3EBE9E0", Offset = "0x3EBE9E0", VA = "0x3EBE9E0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public string NickName
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x3EBEA00", Offset = "0x3EBEA00", VA = "0x3EBEA00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x3EBEA20", Offset = "0x3EBEA20", VA = "0x3EBEA20")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public string UserId
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x3EBEB00", Offset = "0x3EBEB00", VA = "0x3EBEB00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x3EBEB20", Offset = "0x3EBEB20", VA = "0x3EBEB20")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public Room CurrentRoom
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x3EBEBC0", Offset = "0x3EBEBC0", VA = "0x3EBEBC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x3EBEBD0", Offset = "0x3EBEBD0", VA = "0x3EBEBD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool InRoom
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x3EBEBF0", Offset = "0x3EBEBF0", VA = "0x3EBEBF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000027")]
	public int PlayersOnMasterCount
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x3EBEC10", Offset = "0x3EBEC10", VA = "0x3EBEC10")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x3EBEC20", Offset = "0x3EBEC20", VA = "0x3EBEC20")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public int PlayersInRoomsCount
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x3EBEC30", Offset = "0x3EBEC30", VA = "0x3EBEC30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x3EBEC40", Offset = "0x3EBEC40", VA = "0x3EBEC40")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public int RoomsCount
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x3EBEC50", Offset = "0x3EBEC50", VA = "0x3EBEC50")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x3EBEC60", Offset = "0x3EBEC60", VA = "0x3EBEC60")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public bool IsFetchingFriendList
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x3EBEC70", Offset = "0x3EBEC70", VA = "0x3EBEC70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002B")]
	public string CloudRegion
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x3EBEC80", Offset = "0x3EBEC80", VA = "0x3EBEC80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x3EBEC90", Offset = "0x3EBEC90", VA = "0x3EBEC90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public string CurrentCluster
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x3EBECB0", Offset = "0x3EBECB0", VA = "0x3EBECB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x3EBECC0", Offset = "0x3EBECC0", VA = "0x3EBECC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public event Action<ClientState, ClientState> StateChanged
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x3EBE550", Offset = "0x3EBE550", VA = "0x3EBE550")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x3EBE600", Offset = "0x3EBE600", VA = "0x3EBE600")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<EventData> EventReceived
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x3EBE6B0", Offset = "0x3EBE6B0", VA = "0x3EBE6B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x3EBE760", Offset = "0x3EBE760", VA = "0x3EBE760")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<OperationResponse> OpResponseReceived
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x3EBE810", Offset = "0x3EBE810", VA = "0x3EBE810")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x3EBE8C0", Offset = "0x3EBE8C0", VA = "0x3EBE8C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3EBECE0", Offset = "0x3EBECE0", VA = "0x3EBECE0")]
	public LoadBalancingClient(ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3EBF700", Offset = "0x3EBF700", VA = "0x3EBF700")]
	public LoadBalancingClient(string masterAddress, string appId, NetworkCredential gameVersion, ConnectionProtocol protocol = ConnectionProtocol.Udp)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3EBE220", Offset = "0x3EBE220", VA = "0x3EBE220")]
	private string GetNameServerAddress()
	{
		return null;
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3EBF760", Offset = "0x3EBF760", VA = "0x3EBF760", Slot = "8")]
	public virtual bool ConnectUsingSettings(AppSettings appSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3EBFBD0", Offset = "0x3EBFBD0", VA = "0x3EBFBD0")]
	[Obsolete("Use ConnectToMasterServer() instead.")]
	public bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3EBFBF0", Offset = "0x3EBFBF0", VA = "0x3EBFBF0", Slot = "9")]
	public virtual bool ConnectToMasterServer()
	{
		return default(bool);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x3EBFE40", Offset = "0x3EBFE40", VA = "0x3EBFE40")]
	public bool ConnectToNameServer()
	{
		return default(bool);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3EC00A0", Offset = "0x3EC00A0", VA = "0x3EC00A0")]
	public bool ConnectToRegionMaster(string region)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x3EC06C0", Offset = "0x3EC06C0", VA = "0x3EC06C0")]
	[Conditional("UNITY_WEBGL")]
	private void CheckConnectSetupWebGl()
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x3EC06D0", Offset = "0x3EC06D0", VA = "0x3EC06D0")]
	private bool Connect(string serverAddress, string proxyServerAddress, ServerConnection serverType)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3EC09B0", Offset = "0x3EC09B0", VA = "0x3EC09B0")]
	public bool ReconnectToMaster()
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x3EC0BA0", Offset = "0x3EC0BA0", VA = "0x3EC0BA0")]
	public bool ReconnectAndRejoin()
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x3EBA3A0", Offset = "0x3EBA3A0", VA = "0x3EBA3A0")]
	public void Disconnect(DisconnectCause cause = DisconnectCause.DisconnectByClientLogic)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x3EC0DC0", Offset = "0x3EC0DC0", VA = "0x3EC0DC0")]
	private void DisconnectToReconnect()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x3EC0EA0", Offset = "0x3EC0EA0", VA = "0x3EC0EA0")]
	public void SimulateConnectionLoss(bool simulateTimeout)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x3EC0350", Offset = "0x3EC0350", VA = "0x3EC0350")]
	private bool CallAuthenticate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x3EC12B0", Offset = "0x3EC12B0", VA = "0x3EC12B0")]
	public void Service()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3EC12D0", Offset = "0x3EC12D0", VA = "0x3EC12D0")]
	private bool OpGetRegions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x3EC1340", Offset = "0x3EC1340", VA = "0x3EC1340")]
	public bool OpFindFriends(string[] friendsToFind, [Optional] FindFriendsOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3EC1760", Offset = "0x3EC1760", VA = "0x3EC1760")]
	public bool OpJoinLobby(TypedLobby lobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3EC1860", Offset = "0x3EC1860", VA = "0x3EC1860")]
	public bool OpLeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3EC18D0", Offset = "0x3EC18D0", VA = "0x3EC18D0")]
	public bool OpJoinRandomRoom([Optional] OpJoinRandomRoomParams opJoinRandomRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x3EC1A70", Offset = "0x3EC1A70", VA = "0x3EC1A70")]
	public bool OpJoinRandomOrCreateRoom(OpJoinRandomRoomParams opJoinRandomRoomParams, EnterRoomParams createRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x3EC1C10", Offset = "0x3EC1C10", VA = "0x3EC1C10")]
	public bool OpCreateRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x3EC1D00", Offset = "0x3EC1D00", VA = "0x3EC1D00")]
	public bool OpJoinOrCreateRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x3EC1DF0", Offset = "0x3EC1DF0", VA = "0x3EC1DF0")]
	public bool OpJoinRoom(EnterRoomParams enterRoomParams)
	{
		return default(bool);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x3EC1EF0", Offset = "0x3EC1EF0", VA = "0x3EC1EF0")]
	public bool OpRejoinRoom(string roomName)
	{
		return default(bool);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3EC2030", Offset = "0x3EC2030", VA = "0x3EC2030")]
	public bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x3EC2130", Offset = "0x3EC2130", VA = "0x3EC2130")]
	public bool OpGetGameList(TypedLobby typedLobby, string sqlLobbyFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x3EC2210", Offset = "0x3EC2210", VA = "0x3EC2210")]
	public bool OpSetCustomPropertiesOfActor(int actorNr, Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x3EC2620", Offset = "0x3EC2620", VA = "0x3EC2620")]
	protected internal bool OpSetPropertiesOfActor(int actorNr, Hashtable actorProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x3EC2D00", Offset = "0x3EC2D00", VA = "0x3EC2D00")]
	public bool OpSetCustomPropertiesOfRoom(Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x3EC2FA0", Offset = "0x3EC2FA0", VA = "0x3EC2FA0")]
	protected internal bool OpSetPropertyOfRoom(byte propCode, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x3EC2E40", Offset = "0x3EC2E40", VA = "0x3EC2E40")]
	protected internal bool OpSetPropertiesOfRoom(Hashtable gameProperties, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x3EC3540", Offset = "0x3EC3540", VA = "0x3EC3540", Slot = "10")]
	public virtual bool OpRaiseEvent(byte eventCode, object customEventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3EC35E0", Offset = "0x3EC35E0", VA = "0x3EC35E0", Slot = "11")]
	public virtual bool OpChangeGroups(byte[] groupsToRemove, byte[] groupsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3EC3660", Offset = "0x3EC3660", VA = "0x3EC3660")]
	private void ReadoutProperties(Hashtable gameProperties, Hashtable actorProperties, int targetActorNr)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x3EC3B10", Offset = "0x3EC3B10", VA = "0x3EC3B10")]
	private Hashtable ReadoutPropertiesForActorNr(Hashtable actorProperties, int actorNr)
	{
		return null;
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3EC3BF0", Offset = "0x3EC3BF0", VA = "0x3EC3BF0")]
	public void ChangeLocalID(int newID)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x3EC3D60", Offset = "0x3EC3D60", VA = "0x3EC3D60")]
	private void GameEnteredOnGameServer(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3EC4090", Offset = "0x3EC4090", VA = "0x3EC4090")]
	private void UpdatedActorList(int[] actorsInGame)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x3EC4570", Offset = "0x3EC4570", VA = "0x3EC4570", Slot = "12")]
	protected internal virtual Player CreatePlayer(string actorName, int actorNumber, bool isLocal, Hashtable actorProperties)
	{
		return null;
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3EC46F0", Offset = "0x3EC46F0", VA = "0x3EC46F0", Slot = "13")]
	protected internal virtual Room CreateRoom(string roomName, RoomOptions opt)
	{
		return null;
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3EC4750", Offset = "0x3EC4750", VA = "0x3EC4750")]
	private bool CheckIfOpAllowedOnServer(byte opCode, ServerConnection serverConnection)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x3EC0FA0", Offset = "0x3EC0FA0", VA = "0x3EC0FA0")]
	private bool CheckIfOpCanBeSent(byte opCode, ServerConnection serverConnection, string opName)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x3EC4850", Offset = "0x3EC4850", VA = "0x3EC4850")]
	private bool CheckIfClientIsReadyToCallOperation(byte opCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3EC4930", Offset = "0x3EC4930", VA = "0x3EC4930", Slot = "14")]
	public virtual void DebugReturn(DebugLevel level, string message)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x3EC4A10", Offset = "0x3EC4A10", VA = "0x3EC4A10")]
	private void CallbackRoomEnterFailed(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x3EC5080", Offset = "0x3EC5080", VA = "0x3EC5080", Slot = "15")]
	public virtual void OnOperationResponse(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x3EC7EB0", Offset = "0x3EC7EB0", VA = "0x3EC7EB0", Slot = "16")]
	public virtual void OnStatusChanged(StatusCode statusCode)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3EC9430", Offset = "0x3EC9430", VA = "0x3EC9430", Slot = "17")]
	public virtual void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3ECB290", Offset = "0x3ECB290", VA = "0x3ECB290", Slot = "18")]
	public virtual void OnMessage(object message)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3ECB2F0", Offset = "0x3ECB2F0", VA = "0x3ECB2F0")]
	private void OnDisconnectMessageReceived(DisconnectMessage obj)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3ECB450", Offset = "0x3ECB450", VA = "0x3ECB450")]
	private void OnRegionPingCompleted(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3EC6DE0", Offset = "0x3EC6DE0", VA = "0x3EC6DE0")]
	protected internal static string ReplacePortWithAlternative(string address, ushort replacementPort)
	{
		return null;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3EC6B30", Offset = "0x3EC6B30", VA = "0x3EC6B30")]
	private void SetupEncryption(Dictionary<byte, object> encryptionData)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3ECB4B0", Offset = "0x3ECB4B0", VA = "0x3ECB4B0")]
	public bool OpWebRpc(string uriPath, object parameters, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3ECB670", Offset = "0x3ECB670", VA = "0x3ECB670")]
	public void AddCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x3ECB730", Offset = "0x3ECB730", VA = "0x3ECB730")]
	public void RemoveCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x3ECAE60", Offset = "0x3ECAE60", VA = "0x3ECAE60")]
	protected internal void UpdateCallbackTargets()
	{
	}

	[Token(Token = "0x60000C0")]
	private void UpdateCallbackTarget<T>(CallbackTargetChange change, List<T> container) where T : class
	{
	}
}
