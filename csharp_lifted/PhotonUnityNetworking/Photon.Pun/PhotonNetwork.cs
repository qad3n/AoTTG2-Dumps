// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonNetwork
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PhotonNetwork.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000013")]
public static class PhotonNetwork
{
	[Token(Token = "0x2000014")]
	private struct RaiseEventBatch : IEquatable<RaiseEventBatch>
	{
		[Token(Token = "0x4000081")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public byte Group;

		[Token(Token = "0x4000082")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		public bool Reliable;

		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x56E3BA0", Offset = "0x56E2BA0", VA = "0x56E3BA0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x56E3BB0", Offset = "0x56E2BB0", VA = "0x56E3BB0", Slot = "4")]
		public bool Equals(RaiseEventBatch other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000015")]
	private class SerializeViewBatch : IEquatable<SerializeViewBatch>, IEquatable<RaiseEventBatch>
	{
		[Token(Token = "0x4000083")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly RaiseEventBatch Batch;

		[Token(Token = "0x4000084")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<object> ObjectUpdates;

		[Token(Token = "0x4000085")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int defaultSize;

		[Token(Token = "0x4000086")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private int offset;

		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x56DF630", Offset = "0x56DE630", VA = "0x56DF630")]
		public SerializeViewBatch(RaiseEventBatch batch, int offset)
		{
		}

		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x56E3BD0", Offset = "0x56E2BD0", VA = "0x56E3BD0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x56E3BE0", Offset = "0x56E2BE0", VA = "0x56E3BE0", Slot = "4")]
		public bool Equals(SerializeViewBatch other)
		{
			return default(bool);
		}

		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x56E3C10", Offset = "0x56E2C10", VA = "0x56E3C10", Slot = "5")]
		public bool Equals(RaiseEventBatch other)
		{
			return default(bool);
		}

		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x56E3C30", Offset = "0x56E2C30", VA = "0x56E3C30", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x56DFAC0", Offset = "0x56DEAC0", VA = "0x56DFAC0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x56DF780", Offset = "0x56DE780", VA = "0x56DF780")]
		public void Add(List<object> viewData)
		{
		}
	}

	[Token(Token = "0x4000031")]
	public const string PunVersion = "2.43";

	[Token(Token = "0x4000032")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static LoadBalancingClient NetworkingClient;

	[Token(Token = "0x4000033")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly int MAX_VIEW_IDS;

	[Token(Token = "0x4000034")]
	public const string ServerSettingsFileName = "PhotonServerSettings";

	[Token(Token = "0x4000035")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static ServerSettings photonServerSettings;

	[Token(Token = "0x4000036")]
	private const string PlayerPrefsKey = "PUNCloudBestRegion";

	[Token(Token = "0x4000037")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static ConnectMethod ConnectMethod;

	[Token(Token = "0x4000038")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public static PunLogLevel LogLevel;

	[Token(Token = "0x4000039")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static bool EnableCloseConnection;

	[Token(Token = "0x400003A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public static float PrecisionForVectorSynchronization;

	[Token(Token = "0x400003B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static float PrecisionForQuaternionSynchronization;

	[Token(Token = "0x400003C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public static float PrecisionForFloatSynchronization;

	[Token(Token = "0x400003D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static bool offlineMode;

	[Token(Token = "0x400003E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Room offlineModeRoom;

	[Token(Token = "0x400003F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static bool automaticallySyncScene;

	[Token(Token = "0x4000040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private static int sendFrequency;

	[Token(Token = "0x4000041")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static int serializationFrequency;

	[Token(Token = "0x4000042")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private static bool isMessageQueueRunning;

	[Token(Token = "0x4000043")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static double frametime;

	[Token(Token = "0x4000044")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static int frame;

	[Token(Token = "0x4000045")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static Stopwatch StartupStopwatch;

	[Token(Token = "0x4000046")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public static float MinimalTimeScaleToDispatchInFixedUpdate;

	[Token(Token = "0x4000048")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static int lastUsedViewSubId;

	[Token(Token = "0x4000049")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private static int lastUsedViewSubIdStatic;

	[Token(Token = "0x400004A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static readonly HashSet<string> PrefabsWithoutMagicCallback;

	[Token(Token = "0x400004B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private static readonly Hashtable SendInstantiateEvHashtable;

	[Token(Token = "0x400004C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static readonly RaiseEventOptions SendInstantiateRaiseEventOptions;

	[Token(Token = "0x400004D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static HashSet<byte> allowedReceivingGroups;

	[Token(Token = "0x400004E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static HashSet<byte> blockedSendingGroups;

	[Token(Token = "0x400004F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static HashSet<PhotonView> reusablePVHashset;

	[Token(Token = "0x4000050")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static NonAllocDictionary<int, PhotonView> photonViewList;

	[Token(Token = "0x4000051")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[CompilerGenerated]
	private static Action<PhotonView, Player> m_OnOwnershipRequestEv;

	[Token(Token = "0x4000052")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	[CompilerGenerated]
	private static Action<PhotonView, Player> m_OnOwnershipTransferedEv;

	[Token(Token = "0x4000053")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[CompilerGenerated]
	private static Action<PhotonView, Player> m_OnOwnershipTransferFailedEv;

	[Token(Token = "0x4000054")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal static byte currentLevelPrefix;

	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC9")]
	internal static bool loadingLevelAndPausedNetwork;

	[Token(Token = "0x4000056")]
	internal const string CurrentSceneProperty = "curScn";

	[Token(Token = "0x4000057")]
	internal const string CurrentScenePropertyLoadAsync = "curScnLa";

	[Token(Token = "0x4000058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private static IPunPrefabPool prefabPool;

	[Token(Token = "0x4000059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public static bool UseRpcMonoBehaviourCache;

	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private static readonly Dictionary<Type, List<MethodInfo>> monoRPCMethodsCache;

	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private static Dictionary<string, int> rpcShortcuts;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public static bool RunRpcCoroutines;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private static AsyncOperation _AsyncLevelLoadingOperation;

	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private static float _levelLoadingProgress;

	[Token(Token = "0x400005F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private static readonly Type typePunRPC;

	[Token(Token = "0x4000060")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private static readonly Type typePhotonMessageInfo;

	[Token(Token = "0x4000061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private static readonly object keyByteZero;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private static readonly object keyByteOne;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private static readonly object keyByteTwo;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private static readonly object keyByteThree;

	[Token(Token = "0x4000065")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private static readonly object keyByteFour;

	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private static readonly object keyByteFive;

	[Token(Token = "0x4000067")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private static readonly object keyByteSix;

	[Token(Token = "0x4000068")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private static readonly object keyByteSeven;

	[Token(Token = "0x4000069")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private static readonly object keyByteEight;

	[Token(Token = "0x400006A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private static readonly object[] emptyObjectArray;

	[Token(Token = "0x400006B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private static readonly Type[] emptyTypeArray;

	[Token(Token = "0x400006C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	internal static List<PhotonView> foundPVs;

	[Token(Token = "0x400006D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private static readonly Hashtable removeFilter;

	[Token(Token = "0x400006E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private static readonly Hashtable ServerCleanDestroyEvent;

	[Token(Token = "0x400006F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private static readonly RaiseEventOptions ServerCleanOptions;

	[Token(Token = "0x4000070")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	internal static RaiseEventOptions SendToAllOptions;

	[Token(Token = "0x4000071")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	internal static RaiseEventOptions SendToOthersOptions;

	[Token(Token = "0x4000072")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	internal static RaiseEventOptions SendToSingleOptions;

	[Token(Token = "0x4000073")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private static readonly Hashtable rpcFilterByViewId;

	[Token(Token = "0x4000074")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private static readonly RaiseEventOptions OpCleanRpcBufferOptions;

	[Token(Token = "0x4000075")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private static Hashtable rpcEvent;

	[Token(Token = "0x4000076")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private static RaiseEventOptions RpcOptionsToAll;

	[Token(Token = "0x4000077")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	public static int ObjectsInOneUpdate;

	[Token(Token = "0x4000078")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private static readonly PhotonStream serializeStreamOut;

	[Token(Token = "0x4000079")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private static readonly PhotonStream serializeStreamIn;

	[Token(Token = "0x400007A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private static RaiseEventOptions serializeRaiseEvOptions;

	[Token(Token = "0x400007B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private static readonly Dictionary<RaiseEventBatch, SerializeViewBatch> serializeViewBatches;

	[Token(Token = "0x400007C")]
	public const int SyncViewId = 0;

	[Token(Token = "0x400007D")]
	public const int SyncCompressed = 1;

	[Token(Token = "0x400007E")]
	public const int SyncNullValues = 2;

	[Token(Token = "0x400007F")]
	public const int SyncFirstValue = 3;

	[Token(Token = "0x4000080")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private static RegionHandler _cachedRegionHandler;

	[Token(Token = "0x17000002")]
	public static ServerSettings PhotonServerSettings
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x56C6200", Offset = "0x56C5200", VA = "0x56C6200")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x56CAFD0", Offset = "0x56C9FD0", VA = "0x56CAFD0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public static string ServerAddress
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x56CB030", Offset = "0x56CA030", VA = "0x56CB030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public static string CloudRegion
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x56CB0F0", Offset = "0x56CA0F0", VA = "0x56CB0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public static string CurrentCluster
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x56CB430", Offset = "0x56CA430", VA = "0x56CB430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public static string BestRegionSummaryInPreferences
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x56CB4D0", Offset = "0x56CA4D0", VA = "0x56CB4D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x56CB510", Offset = "0x56CA510", VA = "0x56CB510")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public static bool IsConnected
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x56CB1E0", Offset = "0x56CA1E0", VA = "0x56CB1E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000008")]
	public static bool IsConnectedAndReady
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x56CB590", Offset = "0x56CA590", VA = "0x56CB590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000009")]
	public static ClientState NetworkClientState
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x56CB6A0", Offset = "0x56CA6A0", VA = "0x56CB6A0")]
		get
		{
			return default(ClientState);
		}
	}

	[Token(Token = "0x1700000A")]
	public static ServerConnection Server
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x56CB2F0", Offset = "0x56CA2F0", VA = "0x56CB2F0")]
		get
		{
			return default(ServerConnection);
		}
	}

	[Token(Token = "0x1700000B")]
	public static AuthenticationValues AuthValues
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x56CB800", Offset = "0x56CA800", VA = "0x56CB800")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x56CB8A0", Offset = "0x56CA8A0", VA = "0x56CB8A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public static TypedLobby CurrentLobby
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x56CB960", Offset = "0x56CA960", VA = "0x56CB960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	public static Room CurrentRoom
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x56C5950", Offset = "0x56C4950", VA = "0x56C5950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public static Player LocalPlayer
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x56CB9E0", Offset = "0x56CA9E0", VA = "0x56CB9E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public static string NickName
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x56CBA80", Offset = "0x56CAA80", VA = "0x56CBA80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x56CBB00", Offset = "0x56CAB00", VA = "0x56CBB00")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public static Player[] PlayerList
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x56CBB90", Offset = "0x56CAB90", VA = "0x56CBB90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000011")]
	public static Player[] PlayerListOthers
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x56CBD80", Offset = "0x56CAD80", VA = "0x56CBD80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public static bool OfflineMode
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x56CC040", Offset = "0x56CB040", VA = "0x56CC040")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x56CC0B0", Offset = "0x56CB0B0", VA = "0x56CC0B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public static bool AutomaticallySyncScene
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x56CC630", Offset = "0x56CB630", VA = "0x56CC630")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x56CC6A0", Offset = "0x56CB6A0", VA = "0x56CC6A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public static bool EnableLobbyStatistics
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x56CC770", Offset = "0x56CB770", VA = "0x56CC770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	public static bool InLobby
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x56CC7F0", Offset = "0x56CB7F0", VA = "0x56CC7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	public static int SendRate
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x56C62C0", Offset = "0x56C52C0", VA = "0x56C62C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x56CC870", Offset = "0x56CB870", VA = "0x56CC870")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public static int SerializationRate
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x56C6310", Offset = "0x56C5310", VA = "0x56C6310")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x56CC970", Offset = "0x56CB970", VA = "0x56CC970")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public static bool IsMessageQueueRunning
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x56CCA70", Offset = "0x56CBA70", VA = "0x56CCA70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x56CCAE0", Offset = "0x56CBAE0", VA = "0x56CCAE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public static double Time
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x56CCB30", Offset = "0x56CBB30", VA = "0x56CCB30")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x1700001A")]
	public static int ServerTimestamp
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x56CCC00", Offset = "0x56CBC00", VA = "0x56CCC00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001B")]
	public static float KeepAliveInBackground
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x56CCEF0", Offset = "0x56CBEF0", VA = "0x56CCEF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x56CCD90", Offset = "0x56CBD90", VA = "0x56CCD90")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public static bool IsMasterClient
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x56C9070", Offset = "0x56C8070", VA = "0x56C9070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	public static Player MasterClient
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x56CA1D0", Offset = "0x56C91D0", VA = "0x56CA1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public static bool InRoom
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x56CD060", Offset = "0x56CC060", VA = "0x56CD060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public static int CountOfPlayersOnMaster
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x56CD0B0", Offset = "0x56CC0B0", VA = "0x56CD0B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000020")]
	public static int CountOfPlayersInRooms
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x56CD130", Offset = "0x56CC130", VA = "0x56CD130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000021")]
	public static int CountOfPlayers
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x56CD1B0", Offset = "0x56CC1B0", VA = "0x56CD1B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000022")]
	public static int CountOfRooms
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x56CD230", Offset = "0x56CC230", VA = "0x56CD230")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000023")]
	public static bool NetworkStatisticsEnabled
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x56CD2B0", Offset = "0x56CC2B0", VA = "0x56CD2B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x56CD340", Offset = "0x56CC340", VA = "0x56CD340")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public static int ResentReliableCommands
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x56CD3D0", Offset = "0x56CC3D0", VA = "0x56CD3D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000025")]
	public static bool CrcCheckEnabled
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x56CD460", Offset = "0x56CC460", VA = "0x56CD460")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x56CD4F0", Offset = "0x56CC4F0", VA = "0x56CD4F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public static int PacketLossByCrcCheck
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x56CD630", Offset = "0x56CC630", VA = "0x56CD630")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	public static int MaxResendsBeforeDisconnect
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x56CD6C0", Offset = "0x56CC6C0", VA = "0x56CD6C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x56CD740", Offset = "0x56CC740", VA = "0x56CD740")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public static int QuickResends
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x56CD7E0", Offset = "0x56CC7E0", VA = "0x56CD7E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x56CD870", Offset = "0x56CC870", VA = "0x56CD870")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	[Obsolete("Set port overrides in ServerPortOverrides. Not used anymore!")]
	public static bool UseAlternativeUdpPorts
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x56CD910", Offset = "0x56CC910", VA = "0x56CD910")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x56CD980", Offset = "0x56CC980", VA = "0x56CD980")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public static PhotonPortDefinition ServerPortOverrides
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x56CD9D0", Offset = "0x56CC9D0", VA = "0x56CD9D0")]
		get
		{
			return default(PhotonPortDefinition);
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x56CDA80", Offset = "0x56CCA80", VA = "0x56CDA80")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	[Obsolete("Use PhotonViewCollection instead for an iterable collection of current photonViews.")]
	public static PhotonView[] PhotonViews
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x56DABC0", Offset = "0x56D9BC0", VA = "0x56DABC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public static NonAllocDictionary<int, PhotonView>.ValueIterator PhotonViewCollection
	{
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x56C8270", Offset = "0x56C7270", VA = "0x56C8270")]
		get
		{
			return default(NonAllocDictionary<int, PhotonView>.ValueIterator);
		}
	}

	[Token(Token = "0x1700002D")]
	public static int ViewCount
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x56C8FD0", Offset = "0x56C7FD0", VA = "0x56C8FD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002E")]
	public static IPunPrefabPool PrefabPool
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x56DB640", Offset = "0x56DA640", VA = "0x56DB640")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x56CEBF0", Offset = "0x56CDBF0", VA = "0x56CEBF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public static float LevelLoadingProgress
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x56DB6B0", Offset = "0x56DA6B0", VA = "0x56DB6B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x14000001")]
	private static event Action<PhotonView, Player> OnOwnershipRequestEv
	{
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x56DAE70", Offset = "0x56D9E70", VA = "0x56DAE70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x56DAF70", Offset = "0x56D9F70", VA = "0x56DAF70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	private static event Action<PhotonView, Player> OnOwnershipTransferedEv
	{
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x56DB070", Offset = "0x56DA070", VA = "0x56DB070")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x56DB170", Offset = "0x56DA170", VA = "0x56DB170")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	private static event Action<PhotonView, Player> OnOwnershipTransferFailedEv
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x56DB270", Offset = "0x56DA270", VA = "0x56DB270")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x56DB370", Offset = "0x56DA370", VA = "0x56DB370")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x56CDB30", Offset = "0x56CCB30", VA = "0x56CDB30")]
	static PhotonNetwork()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x56CE5F0", Offset = "0x56CD5F0", VA = "0x56CE5F0")]
	private static void StaticReset()
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x56CECF0", Offset = "0x56CDCF0", VA = "0x56CECF0")]
	public static bool ConnectUsingSettings()
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x56CEDF0", Offset = "0x56CDDF0", VA = "0x56CEDF0")]
	public static bool ConnectUsingSettings(AppSettings appSettings, bool startInOfflineMode = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x56CF570", Offset = "0x56CE570", VA = "0x56CF570")]
	public static bool ConnectToMaster(string masterServerAddress, int port, string appID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x56CFA70", Offset = "0x56CEA70", VA = "0x56CFA70")]
	public static bool ConnectToBestCloudServer()
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x56CFC60", Offset = "0x56CEC60", VA = "0x56CFC60")]
	public static bool ConnectToRegion(string region)
	{
		return default(bool);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x56CFEC0", Offset = "0x56CEEC0", VA = "0x56CFEC0")]
	public static void Disconnect()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x56D0070", Offset = "0x56CF070", VA = "0x56D0070")]
	public static bool Reconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x56D0500", Offset = "0x56CF500", VA = "0x56D0500")]
	public static void NetworkStatisticsReset()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x56D0590", Offset = "0x56CF590", VA = "0x56D0590")]
	public static string NetworkStatisticsToString()
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x56D06C0", Offset = "0x56CF6C0", VA = "0x56D06C0")]
	private static bool VerifyCanUseNetwork()
	{
		return default(bool);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x56D0770", Offset = "0x56CF770", VA = "0x56D0770")]
	public static int GetPing()
	{
		return default(int);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x56D0800", Offset = "0x56CF800", VA = "0x56D0800")]
	public static void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x56D08B0", Offset = "0x56CF8B0", VA = "0x56D08B0")]
	public static void SendAllOutgoingCommands()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x56D0940", Offset = "0x56CF940", VA = "0x56D0940")]
	public static bool CloseConnection(Player kickPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x56D0C60", Offset = "0x56CFC60", VA = "0x56D0C60")]
	public static bool RoomBan(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x56D0DE0", Offset = "0x56CFDE0", VA = "0x56D0DE0")]
	public static bool IPBan(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x56D0F60", Offset = "0x56CFF60", VA = "0x56D0F60")]
	public static bool IPUnban(string ip)
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x56D1080", Offset = "0x56D0080", VA = "0x56D1080")]
	public static bool Superban(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x56D1200", Offset = "0x56D0200", VA = "0x56D1200")]
	public static bool ClearSuperbans()
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x56D12D0", Offset = "0x56D02D0", VA = "0x56D12D0")]
	public static bool SetMasterClient(Player masterClientPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x56D14E0", Offset = "0x56D04E0", VA = "0x56D14E0")]
	public static bool JoinRandomRoom()
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x56D1AA0", Offset = "0x56D0AA0", VA = "0x56D1AA0")]
	public static bool JoinRandomRoom(Hashtable expectedCustomRoomProperties, byte expectedMaxPlayers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x56D1530", Offset = "0x56D0530", VA = "0x56D1530")]
	public static bool JoinRandomRoom(Hashtable expectedCustomRoomProperties, byte expectedMaxPlayers, MatchmakingMode matchingType, TypedLobby typedLobby, string sqlLobbyFilter, [Optional] string[] expectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x56D1D40", Offset = "0x56D0D40", VA = "0x56D1D40")]
	public static bool JoinRandomOrCreateRoom([Optional] Hashtable expectedCustomRoomProperties, [Optional][DefaultParameterValue(0)] byte expectedMaxPlayers, [Optional][DefaultParameterValue(0)] MatchmakingMode matchingType, [Optional] TypedLobby typedLobby, [Optional] string sqlLobbyFilter, [Optional] string roomName, [Optional] RoomOptions roomOptions, [Optional] string[] expectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x56D2350", Offset = "0x56D1350", VA = "0x56D2350")]
	public static bool CreateRoom(string roomName, [Optional] RoomOptions roomOptions, [Optional] TypedLobby typedLobby, [Optional] string[] expectedUsers, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x56D28D0", Offset = "0x56D18D0", VA = "0x56D28D0")]
	public static bool JoinOrCreateRoom(string roomName, RoomOptions roomOptions, TypedLobby typedLobby, [Optional] string[] expectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x56D2F10", Offset = "0x56D1F10", VA = "0x56D2F10")]
	public static bool JoinRoom(string roomName, [Optional] string[] expectedUsers, [Optional] string password, [Optional] string hash, [Optional] string sessionID, [Optional] string modID)
	{
		return default(bool);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x56D3450", Offset = "0x56D2450", VA = "0x56D3450")]
	public static bool RejoinRoom(string roomName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x56D3870", Offset = "0x56D2870", VA = "0x56D3870")]
	public static bool ReconnectAndRejoin()
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x56D3C40", Offset = "0x56D2C40", VA = "0x56D3C40")]
	public static bool LeaveRoom(bool becomeInactive = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x56D1B00", Offset = "0x56D0B00", VA = "0x56D1B00")]
	private static void EnterOfflineRoom(string roomName, RoomOptions roomOptions, bool createdRoom)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x56D3F00", Offset = "0x56D2F00", VA = "0x56D3F00")]
	public static bool JoinLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x56D3F60", Offset = "0x56D2F60", VA = "0x56D3F60")]
	public static bool JoinLobby(TypedLobby typedLobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x56D4030", Offset = "0x56D3030", VA = "0x56D4030")]
	public static bool LeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x56D40F0", Offset = "0x56D30F0", VA = "0x56D40F0")]
	public static bool FindFriends(string[] friendsToFind)
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x56D41D0", Offset = "0x56D31D0", VA = "0x56D41D0")]
	public static bool GetCustomRoomList(TypedLobby typedLobby, string sqlLobbyFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x56D4260", Offset = "0x56D3260", VA = "0x56D4260")]
	public static bool SetPlayerCustomProperties(Hashtable customProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x56D45E0", Offset = "0x56D35E0", VA = "0x56D45E0")]
	public static void RemovePlayerCustomProperties(string[] customPropertiesToDelete)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x56D4A00", Offset = "0x56D3A00", VA = "0x56D4A00")]
	public static bool RaiseEvent(byte eventCode, object eventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x56D4CD0", Offset = "0x56D3CD0", VA = "0x56D4CD0")]
	private static bool RaiseEventInternal(byte eventCode, object eventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x56D4EB0", Offset = "0x56D3EB0", VA = "0x56D4EB0")]
	public static bool AllocateViewID(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x56D54A0", Offset = "0x56D44A0", VA = "0x56D54A0")]
	[Obsolete("Renamed. Use AllocateRoomViewID instead")]
	public static bool AllocateSceneViewID(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x56D5500", Offset = "0x56D4500", VA = "0x56D5500")]
	public static bool AllocateRoomViewID(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x56D5660", Offset = "0x56D4660", VA = "0x56D5660")]
	public static int AllocateViewID(bool roomObject)
	{
		return default(int);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x56D5020", Offset = "0x56D4020", VA = "0x56D5020")]
	public static int AllocateViewID(int ownerId)
	{
		return default(int);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x56D58A0", Offset = "0x56D48A0", VA = "0x56D58A0")]
	public static GameObject Instantiate(string prefabName, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(0)] byte group, [Optional] object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x56D6450", Offset = "0x56D5450", VA = "0x56D6450")]
	[Obsolete("Renamed. Use InstantiateRoomObject instead")]
	public static GameObject InstantiateSceneObject(string prefabName, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(0)] byte group, [Optional] object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x56D6500", Offset = "0x56D5500", VA = "0x56D6500")]
	public static GameObject InstantiateRoomObject(string prefabName, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(0)] byte group, [Optional] object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x56D68B0", Offset = "0x56D58B0", VA = "0x56D68B0")]
	private static GameObject NetworkInstantiate(Hashtable networkEvent, Player creator)
	{
		return null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x56D5BC0", Offset = "0x56D4BC0", VA = "0x56D5BC0")]
	private static GameObject NetworkInstantiate(InstantiateParameters parameters, bool roomObject = false, bool instantiateEvent = false)
	{
		return null;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x56D7080", Offset = "0x56D6080", VA = "0x56D7080")]
	internal static bool SendInstantiate(InstantiateParameters parameters, bool roomObject = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x56D76F0", Offset = "0x56D66F0", VA = "0x56D76F0")]
	public static void Destroy(PhotonView targetView)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x56D7E70", Offset = "0x56D6E70", VA = "0x56D7E70")]
	public static void Destroy(GameObject targetGo)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x56D7F20", Offset = "0x56D6F20", VA = "0x56D7F20")]
	public static void DestroyPlayerObjects(Player targetPlayer)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x56D7FC0", Offset = "0x56D6FC0", VA = "0x56D7FC0")]
	public static void DestroyPlayerObjects(int targetPlayerId)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x56D87D0", Offset = "0x56D77D0", VA = "0x56D87D0")]
	public static void DestroyAll()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x56D89B0", Offset = "0x56D79B0", VA = "0x56D89B0")]
	public static void RemoveRPCs(Player targetPlayer)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x56D8BF0", Offset = "0x56D7BF0", VA = "0x56D8BF0")]
	public static void RemoveRPCs(PhotonView targetPhotonView)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x56D8E30", Offset = "0x56D7E30", VA = "0x56D8E30")]
	internal static void RPC(PhotonView view, string methodName, RpcTarget target, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x56D9D20", Offset = "0x56D8D20", VA = "0x56D9D20")]
	internal static void RPC(PhotonView view, string methodName, Player targetPlayer, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x56DA010", Offset = "0x56D9010", VA = "0x56DA010")]
	public static HashSet<GameObject> FindGameObjectsWithComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x56DA210", Offset = "0x56D9210", VA = "0x56DA210")]
	public static void SetInterestGroups(byte group, bool enabled)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x56DA740", Offset = "0x56D9740", VA = "0x56DA740")]
	public static void LoadLevel(int levelNumber)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x56DA940", Offset = "0x56D9940", VA = "0x56DA940")]
	public static void LoadLevel(string levelName)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x56DAB20", Offset = "0x56D9B20", VA = "0x56DAB20")]
	public static bool WebRpc(string name, object parameters, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x56CF430", Offset = "0x56CE430", VA = "0x56CF430")]
	private static void SetupLogging()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x56CAC20", Offset = "0x56C9C20", VA = "0x56CAC20")]
	public static void LoadOrCreateSettings(bool reload = false)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x56C6360", Offset = "0x56C5360", VA = "0x56C6360")]
	public static void AddCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x56C6790", Offset = "0x56C5790", VA = "0x56C6790")]
	public static void RemoveCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x56DB470", Offset = "0x56DA470", VA = "0x56DB470")]
	internal static string CallbacksToString()
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x56CC380", Offset = "0x56CB380", VA = "0x56CC380")]
	private static void LeftRoomCleanup()
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x56C9440", Offset = "0x56C8440", VA = "0x56C9440")]
	internal static void LocalCleanupAnythingInstantiated(bool destroyInstantiatedGameObjects)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x56DB800", Offset = "0x56DA800", VA = "0x56DB800")]
	private static void ResetPhotonViewsOnSerialize()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x56DB9C0", Offset = "0x56DA9C0", VA = "0x56DB9C0")]
	internal static void ExecuteRpc(Hashtable rpcData, Player sender)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x56DD910", Offset = "0x56DC910", VA = "0x56DD910")]
	private static bool CheckTypeMatch(ParameterInfo[] methodParameters, Type[] callParameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x56D8260", Offset = "0x56D7260", VA = "0x56D8260")]
	public static void DestroyPlayerObjects(int playerId, bool localOnly)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x56D8920", Offset = "0x56D7920", VA = "0x56D8920")]
	public static void DestroyAll(bool localOnly)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x56D7830", Offset = "0x56D6830", VA = "0x56D7830")]
	internal static void RemoveInstantiatedGO(GameObject go, bool localOnly)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x56DDE50", Offset = "0x56DCE50", VA = "0x56DDE50")]
	private static void ServerCleanInstantiateAndDestroy(PhotonView photonView)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x56DDBA0", Offset = "0x56DCBA0", VA = "0x56DDBA0")]
	private static void SendDestroyOfPlayer(int actorNr)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x56DDD60", Offset = "0x56DCD60", VA = "0x56DDD60")]
	private static void SendDestroyOfAll()
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x56DDA90", Offset = "0x56DCA90", VA = "0x56DDA90")]
	private static void OpRemoveFromServerInstantiationsOfPlayer(int actorNr)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x56DE380", Offset = "0x56DD380", VA = "0x56DE380")]
	internal static void RequestOwnership(int viewID, int fromOwner)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x56DE460", Offset = "0x56DD460", VA = "0x56DE460")]
	internal static void TransferOwnership(int viewID, int playerID)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x56C92C0", Offset = "0x56C82C0", VA = "0x56C92C0")]
	internal static void OwnershipUpdate(int[] viewOwnerPairs, int targetActor = -1)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x56DE1D0", Offset = "0x56DD1D0", VA = "0x56DE1D0")]
	public static bool LocalCleanPhotonView(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x56DD780", Offset = "0x56DC780", VA = "0x56DD780")]
	public static PhotonView GetPhotonView(int viewID)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x56DE540", Offset = "0x56DD540", VA = "0x56DE540")]
	public static void RegisterPhotonView(PhotonView netView)
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x56D8AE0", Offset = "0x56D7AE0", VA = "0x56D8AE0")]
	public static void OpCleanActorRpcBuffer(int actorNumber)
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x56DE8E0", Offset = "0x56DD8E0", VA = "0x56DE8E0")]
	public static void OpRemoveCompleteCacheOfPlayer(int actorNumber)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x56DDCA0", Offset = "0x56DCCA0", VA = "0x56DDCA0")]
	public static void OpRemoveCompleteCache()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x56DE9F0", Offset = "0x56DD9F0", VA = "0x56DE9F0")]
	private static void RemoveCacheOfLeftPlayers()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x56D8C80", Offset = "0x56D7C80", VA = "0x56D8C80")]
	public static void CleanRpcBufferIfMine(PhotonView view)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x56DE260", Offset = "0x56DD260", VA = "0x56DE260")]
	public static void OpCleanRpcBuffer(PhotonView view)
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x56DEB30", Offset = "0x56DDB30", VA = "0x56DEB30")]
	public static void RemoveRPCsInGroup(int group)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x56DED20", Offset = "0x56DDD20", VA = "0x56DED20")]
	public static bool RemoveBufferedRPCs([Optional][DefaultParameterValue(0)] int viewId, [Optional] string methodName, [Optional] int[] callersActorNumbers)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x56DEF90", Offset = "0x56DDF90", VA = "0x56DEF90")]
	public static void SetLevelPrefix(byte prefix)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x56D9010", Offset = "0x56D8010", VA = "0x56D9010")]
	internal static void RPC(PhotonView view, string methodName, RpcTarget target, Player player, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x56DA330", Offset = "0x56D9330", VA = "0x56DA330")]
	public static void SetInterestGroups(byte[] disableGroups, byte[] enableGroups)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x56DEFF0", Offset = "0x56DDFF0", VA = "0x56DEFF0")]
	public static void SetSendingEnabled(byte group, bool enabled)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x56DF0C0", Offset = "0x56DE0C0", VA = "0x56DF0C0")]
	public static void SetSendingEnabled(byte[] disableGroups, byte[] enableGroups)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x56CA600", Offset = "0x56C9600", VA = "0x56CA600")]
	internal static void NewSceneLoaded()
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x56C7170", Offset = "0x56C6170", VA = "0x56C7170")]
	internal static void RunViewUpdate()
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x56DF890", Offset = "0x56DE890", VA = "0x56DF890")]
	private static void SendSerializeViewBatch(SerializeViewBatch batch)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x56DF220", Offset = "0x56DE220", VA = "0x56DF220")]
	private static List<object> OnSerializeWrite(PhotonView view)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x56E04C0", Offset = "0x56DF4C0", VA = "0x56E04C0")]
	private static void OnSerializeRead(object[] data, Player sender, int networkTime, short correctPrefix)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x56E0200", Offset = "0x56DF200", VA = "0x56E0200")]
	private static List<object> DeltaCompressionWrite(List<object> previousContent, List<object> currentContent)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x56E0D20", Offset = "0x56DFD20", VA = "0x56E0D20")]
	private static object[] DeltaCompressionRead(object[] lastOnSerializeDataReceived, object[] incomingData)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x56DFF00", Offset = "0x56DEF00", VA = "0x56DFF00")]
	private static bool AlmostEquals(IList<object> lastData, IList<object> currentContent)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x56E1090", Offset = "0x56E0090", VA = "0x56E1090")]
	private static bool AlmostEquals(object one, object two)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x56E1510", Offset = "0x56E0510", VA = "0x56E1510")]
	internal static bool GetMethod(MonoBehaviour monob, string methodType, out MethodInfo mi)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x56C7D00", Offset = "0x56C6D00", VA = "0x56C7D00")]
	internal static void LoadLevelIfSynced()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x56C7720", Offset = "0x56C6720", VA = "0x56C7720")]
	internal static void SetLevelInPropsIfSynced(object levelId)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x56E1690", Offset = "0x56E0690", VA = "0x56E1690")]
	private static void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x56E3570", Offset = "0x56E2570", VA = "0x56E3570")]
	private static void OnOperation(OperationResponse opResponse)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x56E3820", Offset = "0x56E2820", VA = "0x56E3820")]
	private static void OnClientStateChanged(ClientState previousState, ClientState state)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x56E39F0", Offset = "0x56E29F0", VA = "0x56E39F0")]
	private static void OnRegionsPinged(RegionHandler regionHandler)
	{
	}
}
