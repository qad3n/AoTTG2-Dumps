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
		[Address(RVA = "0x1D4F600", Offset = "0x1D4DC00", VA = "0x181D4F600", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x1D4F5E0", Offset = "0x1D4DBE0", VA = "0x181D4F5E0", Slot = "4")]
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
		[Address(RVA = "0x1D4F920", Offset = "0x1D4DF20", VA = "0x181D4F920")]
		public SerializeViewBatch(RaiseEventBatch batch, int offset)
		{
		}

		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x1D4F900", Offset = "0x1D4DF00", VA = "0x181D4F900", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x1D4F8C0", Offset = "0x1D4DEC0", VA = "0x181D4F8C0", Slot = "4")]
		public bool Equals(SerializeViewBatch other)
		{
			return default(bool);
		}

		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x1D4F8A0", Offset = "0x1D4DEA0", VA = "0x181D4F8A0", Slot = "5")]
		public bool Equals(RaiseEventBatch other)
		{
			return default(bool);
		}

		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x1D4F800", Offset = "0x1D4DE00", VA = "0x181D4F800", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x1D4F700", Offset = "0x1D4DD00", VA = "0x181D4F700")]
		public void Clear()
		{
		}

		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x1D4F620", Offset = "0x1D4DC20", VA = "0x181D4F620")]
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
		[Address(RVA = "0x1D496B0", Offset = "0x1D47CB0", VA = "0x181D496B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x1D4B1F0", Offset = "0x1D497F0", VA = "0x181D4B1F0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public static string ServerAddress
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x1D4A080", Offset = "0x1D48680", VA = "0x181D4A080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public static string CloudRegion
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x1D486D0", Offset = "0x1D46CD0", VA = "0x181D486D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public static string CurrentCluster
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x1D489A0", Offset = "0x1D46FA0", VA = "0x181D489A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public static string BestRegionSummaryInPreferences
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x1D48690", Offset = "0x1D46C90", VA = "0x181D48690")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x1D4AA60", Offset = "0x1D49060", VA = "0x181D4AA60")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public static bool IsConnected
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x1D48D60", Offset = "0x1D47360", VA = "0x181D48D60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000008")]
	public static bool IsConnectedAndReady
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x1D48C70", Offset = "0x1D47270", VA = "0x181D48C70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000009")]
	public static ClientState NetworkClientState
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x1D49400", Offset = "0x1D47A00", VA = "0x181D49400")]
		get
		{
			return default(ClientState);
		}
	}

	[Token(Token = "0x1700000A")]
	public static ServerConnection Server
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x1D4A310", Offset = "0x1D48910", VA = "0x181D4A310")]
		get
		{
			return default(ServerConnection);
		}
	}

	[Token(Token = "0x1700000B")]
	public static AuthenticationValues AuthValues
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x1D485B0", Offset = "0x1D46BB0", VA = "0x181D485B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x1D4A910", Offset = "0x1D48F10", VA = "0x181D4A910")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public static TypedLobby CurrentLobby
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x1D48A30", Offset = "0x1D47030", VA = "0x181D48A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	public static Room CurrentRoom
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x1D48A90", Offset = "0x1D47090", VA = "0x181D48A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public static Player LocalPlayer
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x1D491B0", Offset = "0x1D477B0", VA = "0x181D491B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public static string NickName
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x1D49590", Offset = "0x1D47B90", VA = "0x181D49590")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x1D4AE80", Offset = "0x1D49480", VA = "0x181D4AE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public static Player[] PlayerList
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x1D49CD0", Offset = "0x1D482D0", VA = "0x181D49CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000011")]
	public static Player[] PlayerListOthers
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x1D49A40", Offset = "0x1D48040", VA = "0x181D49A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public static bool OfflineMode
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x1D495F0", Offset = "0x1D47BF0", VA = "0x181D495F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x1D4AEF0", Offset = "0x1D494F0", VA = "0x181D4AEF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public static bool AutomaticallySyncScene
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x1D48640", Offset = "0x1D46C40", VA = "0x181D48640")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x1D4A9B0", Offset = "0x1D48FB0", VA = "0x181D4A9B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public static bool EnableLobbyStatistics
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x1D48B60", Offset = "0x1D47160", VA = "0x181D48B60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	public static bool InLobby
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x1D48BC0", Offset = "0x1D471C0", VA = "0x181D48BC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	public static int SendRate
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x1D49FC0", Offset = "0x1D485C0", VA = "0x181D49FC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x1D4B3D0", Offset = "0x1D499D0", VA = "0x181D4B3D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public static int SerializationRate
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x1D4A020", Offset = "0x1D48620", VA = "0x181D4A020")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x1D4B4E0", Offset = "0x1D49AE0", VA = "0x181D4B4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public static bool IsMessageQueueRunning
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x1D48F70", Offset = "0x1D47570", VA = "0x181D48F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x1D4AC40", Offset = "0x1D49240", VA = "0x181D4AC40")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public static double Time
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x1D4A420", Offset = "0x1D48A20", VA = "0x181D4A420")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x1700001A")]
	public static int ServerTimestamp
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x1D4A1C0", Offset = "0x1D487C0", VA = "0x181D4A1C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001B")]
	public static float KeepAliveInBackground
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x1D48FC0", Offset = "0x1D475C0", VA = "0x181D48FC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x1D4ACA0", Offset = "0x1D492A0", VA = "0x181D4ACA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public static bool IsMasterClient
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x1D48E50", Offset = "0x1D47450", VA = "0x181D48E50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	public static Player MasterClient
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x1D49240", Offset = "0x1D47840", VA = "0x181D49240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public static bool InRoom
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x1D48C20", Offset = "0x1D47220", VA = "0x181D48C20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public static int CountOfPlayersOnMaster
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x1D48800", Offset = "0x1D46E00", VA = "0x181D48800")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000020")]
	public static int CountOfPlayersInRooms
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x1D487A0", Offset = "0x1D46DA0", VA = "0x181D487A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000021")]
	public static int CountOfPlayers
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x1D48860", Offset = "0x1D46E60", VA = "0x181D48860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000022")]
	public static int CountOfRooms
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x1D488D0", Offset = "0x1D46ED0", VA = "0x181D488D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000023")]
	public static bool NetworkStatisticsEnabled
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x1D49520", Offset = "0x1D47B20", VA = "0x181D49520")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x1D4AE00", Offset = "0x1D49400", VA = "0x181D4AE00")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public static int ResentReliableCommands
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x1D49F50", Offset = "0x1D48550", VA = "0x181D49F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000025")]
	public static bool CrcCheckEnabled
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x1D48930", Offset = "0x1D46F30", VA = "0x181D48930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x1D4AAE0", Offset = "0x1D490E0", VA = "0x181D4AAE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public static int PacketLossByCrcCheck
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x1D49640", Offset = "0x1D47C40", VA = "0x181D49640")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	public static int MaxResendsBeforeDisconnect
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x1D49390", Offset = "0x1D47990", VA = "0x181D49390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x1D4AD70", Offset = "0x1D49370", VA = "0x181D4AD70")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public static int QuickResends
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x1D49EE0", Offset = "0x1D484E0", VA = "0x181D49EE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x1D4B340", Offset = "0x1D49940", VA = "0x181D4B340")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	[Obsolete("Set port overrides in ServerPortOverrides. Not used anymore!")]
	public static bool UseAlternativeUdpPorts
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x1D4A510", Offset = "0x1D48B10", VA = "0x181D4A510")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x1D4B680", Offset = "0x1D49C80", VA = "0x181D4B680")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public static PhotonPortDefinition ServerPortOverrides
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x1D4A120", Offset = "0x1D48720", VA = "0x181D4A120")]
		get
		{
			return default(PhotonPortDefinition);
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x1D4B5F0", Offset = "0x1D49BF0", VA = "0x181D4B5F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	[Obsolete("Use PhotonViewCollection instead for an iterable collection of current photonViews.")]
	public static PhotonView[] PhotonViews
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x1D49810", Offset = "0x1D47E10", VA = "0x181D49810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public static NonAllocDictionary<int, PhotonView>.ValueIterator PhotonViewCollection
	{
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x1D49780", Offset = "0x1D47D80", VA = "0x181D49780")]
		get
		{
			return default(NonAllocDictionary<int, PhotonView>.ValueIterator);
		}
	}

	[Token(Token = "0x1700002D")]
	public static int ViewCount
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x1D4A560", Offset = "0x1D48B60", VA = "0x181D4A560")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002E")]
	public static IPunPrefabPool PrefabPool
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x1D49E80", Offset = "0x1D48480", VA = "0x181D49E80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x1D4B260", Offset = "0x1D49860", VA = "0x181D4B260")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public static float LevelLoadingProgress
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x1D49090", Offset = "0x1D47690", VA = "0x181D49090")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x14000001")]
	private static event Action<PhotonView, Player> OnOwnershipRequestEv
	{
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x1D48280", Offset = "0x1D46880", VA = "0x181D48280")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x1D4A5E0", Offset = "0x1D48BE0", VA = "0x181D4A5E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	private static event Action<PhotonView, Player> OnOwnershipTransferedEv
	{
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x1D484A0", Offset = "0x1D46AA0", VA = "0x181D484A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x1D4A800", Offset = "0x1D48E00", VA = "0x181D4A800")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	private static event Action<PhotonView, Player> OnOwnershipTransferFailedEv
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x1D48390", Offset = "0x1D46990", VA = "0x181D48390")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x1D4A6F0", Offset = "0x1D48CF0", VA = "0x181D4A6F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x1D47490", Offset = "0x1D45A90", VA = "0x181D47490")]
	static PhotonNetwork()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x1D468D0", Offset = "0x1D44ED0", VA = "0x181D468D0")]
	private static void StaticReset()
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x1D33900", Offset = "0x1D31F00", VA = "0x181D33900")]
	public static bool ConnectUsingSettings()
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x1D33A10", Offset = "0x1D32010", VA = "0x181D33A10")]
	public static bool ConnectUsingSettings(AppSettings appSettings, bool startInOfflineMode = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x1D33280", Offset = "0x1D31880", VA = "0x181D33280")]
	public static bool ConnectToMaster(string masterServerAddress, int port, string appID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x1D33080", Offset = "0x1D31680", VA = "0x181D33080")]
	public static bool ConnectToBestCloudServer()
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x1D336B0", Offset = "0x1D31CB0", VA = "0x181D336B0")]
	public static bool ConnectToRegion(string region)
	{
		return default(bool);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x1D35B30", Offset = "0x1D34130", VA = "0x181D35B30")]
	public static void Disconnect()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x1D41F00", Offset = "0x1D40500", VA = "0x181D41F00")]
	public static bool Reconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x1D3C950", Offset = "0x1D3AF50", VA = "0x181D3C950")]
	public static void NetworkStatisticsReset()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x1D3C9C0", Offset = "0x1D3AFC0", VA = "0x181D3C9C0")]
	public static string NetworkStatisticsToString()
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x1D47360", Offset = "0x1D45960", VA = "0x181D47360")]
	private static bool VerifyCanUseNetwork()
	{
		return default(bool);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x1D37FE0", Offset = "0x1D365E0", VA = "0x181D37FE0")]
	public static int GetPing()
	{
		return default(int);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x1D37A70", Offset = "0x1D36070", VA = "0x181D37A70")]
	public static void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x1D447B0", Offset = "0x1D42DB0", VA = "0x181D447B0")]
	public static void SendAllOutgoingCommands()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x1D32E00", Offset = "0x1D31400", VA = "0x181D32E00")]
	public static bool CloseConnection(Player kickPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x1D440A0", Offset = "0x1D426A0", VA = "0x181D440A0")]
	public static bool RoomBan(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x1D38050", Offset = "0x1D36650", VA = "0x181D38050")]
	public static bool IPBan(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x1D381E0", Offset = "0x1D367E0", VA = "0x181D381E0")]
	public static bool IPUnban(string ip)
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x1D470C0", Offset = "0x1D456C0", VA = "0x181D470C0")]
	public static bool Superban(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x1D32D10", Offset = "0x1D31310", VA = "0x181D32D10")]
	public static bool ClearSuperbans()
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x1D461D0", Offset = "0x1D447D0", VA = "0x181D461D0")]
	public static bool SetMasterClient(Player masterClientPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x1D39BA0", Offset = "0x1D381A0", VA = "0x181D39BA0")]
	public static bool JoinRandomRoom()
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x1D39B30", Offset = "0x1D38130", VA = "0x181D39B30")]
	public static bool JoinRandomRoom(Hashtable expectedCustomRoomProperties, byte expectedMaxPlayers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x1D395F0", Offset = "0x1D37BF0", VA = "0x181D395F0")]
	public static bool JoinRandomRoom(Hashtable expectedCustomRoomProperties, byte expectedMaxPlayers, MatchmakingMode matchingType, TypedLobby typedLobby, string sqlLobbyFilter, [Optional] string[] expectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x1D39030", Offset = "0x1D37630", VA = "0x181D39030")]
	public static bool JoinRandomOrCreateRoom([Optional] Hashtable expectedCustomRoomProperties, [Optional][DefaultParameterValue(0)] byte expectedMaxPlayers, [Optional][DefaultParameterValue(0)] MatchmakingMode matchingType, [Optional] TypedLobby typedLobby, [Optional] string sqlLobbyFilter, [Optional] string roomName, [Optional] RoomOptions roomOptions, [Optional] string[] expectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x1D342F0", Offset = "0x1D328F0", VA = "0x181D342F0")]
	public static bool CreateRoom(string roomName, [Optional] RoomOptions roomOptions, [Optional] TypedLobby typedLobby, [Optional] string[] expectedUsers, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x1D38AC0", Offset = "0x1D370C0", VA = "0x181D38AC0")]
	public static bool JoinOrCreateRoom(string roomName, RoomOptions roomOptions, TypedLobby typedLobby, [Optional] string[] expectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x1D39C00", Offset = "0x1D38200", VA = "0x181D39C00")]
	public static bool JoinRoom(string roomName, [Optional] string[] expectedUsers, [Optional] string password, [Optional] string hash, [Optional] string sessionID, [Optional] string modID)
	{
		return default(bool);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x1D42630", Offset = "0x1D40C30", VA = "0x181D42630")]
	public static bool RejoinRoom(string roomName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x1D41C00", Offset = "0x1D40200", VA = "0x181D41C00")]
	public static bool ReconnectAndRejoin()
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x1D3A1A0", Offset = "0x1D387A0", VA = "0x181D3A1A0")]
	public static bool LeaveRoom(bool becomeInactive = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x1D35CB0", Offset = "0x1D342B0", VA = "0x181D35CB0")]
	private static void EnterOfflineRoom(string roomName, RoomOptions roomOptions, bool createdRoom)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x1D38920", Offset = "0x1D36F20", VA = "0x181D38920")]
	public static bool JoinLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x1D38A00", Offset = "0x1D37000", VA = "0x181D38A00")]
	public static bool JoinLobby(TypedLobby typedLobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x1D3A0F0", Offset = "0x1D386F0", VA = "0x181D3A0F0")]
	public static bool LeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x1D37B10", Offset = "0x1D36110", VA = "0x181D37B10")]
	public static bool FindFriends(string[] friendsToFind)
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x1D37D50", Offset = "0x1D36350", VA = "0x181D37D50")]
	public static bool GetCustomRoomList(TypedLobby typedLobby, string sqlLobbyFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x1D46370", Offset = "0x1D44970", VA = "0x181D46370")]
	public static bool SetPlayerCustomProperties(Hashtable customProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x1D438C0", Offset = "0x1D41EC0", VA = "0x181D438C0")]
	public static void RemovePlayerCustomProperties(string[] customPropertiesToDelete)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x1D41960", Offset = "0x1D3FF60", VA = "0x181D41960")]
	public static bool RaiseEvent(byte eventCode, object eventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x1D417B0", Offset = "0x1D3FDB0", VA = "0x181D417B0")]
	private static bool RaiseEventInternal(byte eventCode, object eventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x1D32100", Offset = "0x1D30700", VA = "0x181D32100")]
	public static bool AllocateViewID(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x1D31B60", Offset = "0x1D30160", VA = "0x181D31B60")]
	[Obsolete("Renamed. Use AllocateRoomViewID instead")]
	public static bool AllocateSceneViewID(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x1D31A20", Offset = "0x1D30020", VA = "0x181D31A20")]
	public static bool AllocateRoomViewID(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x1D32010", Offset = "0x1D30610", VA = "0x181D32010")]
	public static int AllocateViewID(bool roomObject)
	{
		return default(int);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x1D31CD0", Offset = "0x1D302D0", VA = "0x181D31CD0")]
	public static int AllocateViewID(int ownerId)
	{
		return default(int);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x1D38660", Offset = "0x1D36C60", VA = "0x181D38660")]
	public static GameObject Instantiate(string prefabName, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(0)] byte group, [Optional] object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x1D385C0", Offset = "0x1D36BC0", VA = "0x181D385C0")]
	[Obsolete("Renamed. Use InstantiateRoomObject instead")]
	public static GameObject InstantiateSceneObject(string prefabName, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(0)] byte group, [Optional] object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x1D38310", Offset = "0x1D36910", VA = "0x181D38310")]
	public static GameObject InstantiateRoomObject(string prefabName, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(0)] byte group, [Optional] object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x1D3C140", Offset = "0x1D3A740", VA = "0x181D3C140")]
	private static GameObject NetworkInstantiate(Hashtable networkEvent, Player creator)
	{
		return null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x1D3B7E0", Offset = "0x1D39DE0", VA = "0x181D3B7E0")]
	private static GameObject NetworkInstantiate(InstantiateParameters parameters, bool roomObject = false, bool instantiateEvent = false)
	{
		return null;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x1D44A70", Offset = "0x1D43070", VA = "0x181D44A70")]
	internal static bool SendInstantiate(InstantiateParameters parameters, bool roomObject = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x1D35980", Offset = "0x1D33F80", VA = "0x181D35980")]
	public static void Destroy(PhotonView targetView)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x1D35AA0", Offset = "0x1D340A0", VA = "0x181D35AA0")]
	public static void Destroy(GameObject targetGo)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x1D350B0", Offset = "0x1D336B0", VA = "0x181D350B0")]
	public static void DestroyPlayerObjects(Player targetPlayer)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x1D34F40", Offset = "0x1D33540", VA = "0x181D34F40")]
	public static void DestroyPlayerObjects(int targetPlayerId)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x1D34E90", Offset = "0x1D33490", VA = "0x181D34E90")]
	public static void DestroyAll()
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x1D43D10", Offset = "0x1D42310", VA = "0x181D43D10")]
	public static void RemoveRPCs(Player targetPlayer)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x1D43CA0", Offset = "0x1D422A0", VA = "0x181D43CA0")]
	public static void RemoveRPCs(PhotonView targetPhotonView)
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x1D40A10", Offset = "0x1D3F010", VA = "0x181D40A10")]
	internal static void RPC(PhotonView view, string methodName, RpcTarget target, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x1D40810", Offset = "0x1D3EE10", VA = "0x181D40810")]
	internal static void RPC(PhotonView view, string methodName, Player targetPlayer, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x1D37BD0", Offset = "0x1D361D0", VA = "0x181D37BD0")]
	public static HashSet<GameObject> FindGameObjectsWithComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x1D45690", Offset = "0x1D43C90", VA = "0x181D45690")]
	public static void SetInterestGroups(byte group, bool enabled)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x1D3AC50", Offset = "0x1D39250", VA = "0x181D3AC50")]
	public static void LoadLevel(int levelNumber)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x1D3AE10", Offset = "0x1D39410", VA = "0x181D3AE10")]
	public static void LoadLevel(string levelName)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x1D473F0", Offset = "0x1D459F0", VA = "0x181D473F0")]
	public static bool WebRpc(string name, object parameters, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x1D467B0", Offset = "0x1D44DB0", VA = "0x181D467B0")]
	private static void SetupLogging()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x1D3AFB0", Offset = "0x1D395B0", VA = "0x181D3AFB0")]
	public static void LoadOrCreateSettings(bool reload = false)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x1D314A0", Offset = "0x1D2FAA0", VA = "0x181D314A0")]
	public static void AddCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x1D42E30", Offset = "0x1D41430", VA = "0x181D42E30")]
	public static void RemoveCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x1D32830", Offset = "0x1D30E30", VA = "0x181D32830")]
	internal static string CallbacksToString()
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x1D3A410", Offset = "0x1D38A10", VA = "0x181D3A410")]
	private static void LeftRoomCleanup()
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x1D3B470", Offset = "0x1D39A70", VA = "0x181D3B470")]
	internal static void LocalCleanupAnythingInstantiated(bool destroyInstantiatedGameObjects)
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x1D43F10", Offset = "0x1D42510", VA = "0x181D43F10")]
	private static void ResetPhotonViewsOnSerialize()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x1D35F40", Offset = "0x1D34540", VA = "0x181D35F40")]
	internal static void ExecuteRpc(Hashtable rpcData, Player sender)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x1D329D0", Offset = "0x1D30FD0", VA = "0x181D329D0")]
	private static bool CheckTypeMatch(ParameterInfo[] methodParameters, Type[] callParameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x1D352A0", Offset = "0x1D338A0", VA = "0x181D352A0")]
	public static void DestroyPlayerObjects(int playerId, bool localOnly)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x1D34C70", Offset = "0x1D33270", VA = "0x181D34C70")]
	public static void DestroyAll(bool localOnly)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x1D432C0", Offset = "0x1D418C0", VA = "0x181D432C0")]
	internal static void RemoveInstantiatedGO(GameObject go, bool localOnly)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x1D45420", Offset = "0x1D43A20", VA = "0x181D45420")]
	private static void ServerCleanInstantiateAndDestroy(PhotonView photonView)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x1D44960", Offset = "0x1D42F60", VA = "0x181D44960")]
	private static void SendDestroyOfPlayer(int actorNr)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x1D44850", Offset = "0x1D42E50", VA = "0x181D44850")]
	private static void SendDestroyOfAll()
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x1D405B0", Offset = "0x1D3EBB0", VA = "0x181D405B0")]
	private static void OpRemoveFromServerInstantiationsOfPlayer(int actorNr)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x1D43E00", Offset = "0x1D42400", VA = "0x181D43E00")]
	internal static void RequestOwnership(int viewID, int fromOwner)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x1D47250", Offset = "0x1D45850", VA = "0x181D47250")]
	internal static void TransferOwnership(int viewID, int playerID)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x1D406C0", Offset = "0x1D3ECC0", VA = "0x181D406C0")]
	internal static void OwnershipUpdate(int[] viewOwnerPairs, int targetActor = -1)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x1D3B3E0", Offset = "0x1D399E0", VA = "0x181D3B3E0")]
	public static bool LocalCleanPhotonView(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x1D37F50", Offset = "0x1D36550", VA = "0x181D37F50")]
	public static PhotonView GetPhotonView(int viewID)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x1D422C0", Offset = "0x1D408C0", VA = "0x181D422C0")]
	public static void RegisterPhotonView(PhotonView netView)
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x1D401A0", Offset = "0x1D3E7A0", VA = "0x181D401A0")]
	public static void OpCleanActorRpcBuffer(int actorNumber)
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x1D403D0", Offset = "0x1D3E9D0", VA = "0x181D403D0")]
	public static void OpRemoveCompleteCacheOfPlayer(int actorNumber)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x1D404E0", Offset = "0x1D3EAE0", VA = "0x181D404E0")]
	public static void OpRemoveCompleteCache()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x1D42CE0", Offset = "0x1D412E0", VA = "0x181D42CE0")]
	private static void RemoveCacheOfLeftPlayers()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x1D32B40", Offset = "0x1D31140", VA = "0x181D32B40")]
	public static void CleanRpcBufferIfMine(PhotonView view)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x1D402B0", Offset = "0x1D3E8B0", VA = "0x181D402B0")]
	public static void OpCleanRpcBuffer(PhotonView view)
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x1D43AF0", Offset = "0x1D420F0", VA = "0x181D43AF0")]
	public static void RemoveRPCsInGroup(int group)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x1D42A30", Offset = "0x1D41030", VA = "0x181D42A30")]
	public static bool RemoveBufferedRPCs([Optional][DefaultParameterValue(0)] int viewId, [Optional] string methodName, [Optional] int[] callersActorNumbers)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x1D46170", Offset = "0x1D44770", VA = "0x181D46170")]
	public static void SetLevelPrefix(byte prefix)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x1D40BD0", Offset = "0x1D3F1D0", VA = "0x181D40BD0")]
	internal static void RPC(PhotonView view, string methodName, RpcTarget target, Player player, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x1D45790", Offset = "0x1D43D90", VA = "0x181D45790")]
	public static void SetInterestGroups(byte[] disableGroups, byte[] enableGroups)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x1D466D0", Offset = "0x1D44CD0", VA = "0x181D466D0")]
	public static void SetSendingEnabled(byte group, bool enabled)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x1D46590", Offset = "0x1D44B90", VA = "0x181D46590")]
	public static void SetSendingEnabled(byte[] disableGroups, byte[] enableGroups)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x1D3CAC0", Offset = "0x1D3B0C0", VA = "0x181D3CAC0")]
	internal static void NewSceneLoaded()
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x1D44230", Offset = "0x1D42830", VA = "0x181D44230")]
	internal static void RunViewUpdate()
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x1D450F0", Offset = "0x1D436F0", VA = "0x181D450F0")]
	private static void SendSerializeViewBatch(SerializeViewBatch batch)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x1D3FA10", Offset = "0x1D3E010", VA = "0x181D3FA10")]
	private static List<object> OnSerializeWrite(PhotonView view)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x1D3F1B0", Offset = "0x1D3D7B0", VA = "0x181D3F1B0")]
	private static void OnSerializeRead(object[] data, Player sender, int networkTime, short correctPrefix)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x1D349D0", Offset = "0x1D32FD0", VA = "0x181D349D0")]
	private static List<object> DeltaCompressionWrite(List<object> previousContent, List<object> currentContent)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x1D34830", Offset = "0x1D32E30", VA = "0x181D34830")]
	private static object[] DeltaCompressionRead(object[] lastOnSerializeDataReceived, object[] incomingData)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x1D32700", Offset = "0x1D30D00", VA = "0x181D32700")]
	private static bool AlmostEquals(IList<object> lastData, IList<object> currentContent)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x1D321F0", Offset = "0x1D307F0", VA = "0x181D321F0")]
	private static bool AlmostEquals(object one, object two)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x1D37DD0", Offset = "0x1D363D0", VA = "0x181D37DD0")]
	internal static bool GetMethod(MonoBehaviour monob, string methodType, out MethodInfo mi)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x1D3A6A0", Offset = "0x1D38CA0", VA = "0x181D3A6A0")]
	internal static void LoadLevelIfSynced()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x1D45B90", Offset = "0x1D44190", VA = "0x181D45B90")]
	internal static void SetLevelInPropsIfSynced(object levelId)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x1D3D0B0", Offset = "0x1D3B6B0", VA = "0x181D3D0B0")]
	private static void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x1D3ED80", Offset = "0x1D3D380", VA = "0x181D3ED80")]
	private static void OnOperation(OperationResponse opResponse)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x1D3CF10", Offset = "0x1D3B510", VA = "0x181D3CF10")]
	private static void OnClientStateChanged(ClientState previousState, ClientState state)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x1D3F020", Offset = "0x1D3D620", VA = "0x181D3F020")]
	private static void OnRegionsPinged(RegionHandler regionHandler)
	{
	}
}
