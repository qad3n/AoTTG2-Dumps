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

[Token(Token = "0x2000015")]
public static class PhotonNetwork
{
	[Token(Token = "0x2000016")]
	private struct RaiseEventBatch : IEquatable<RaiseEventBatch>
	{
		[Token(Token = "0x4000086")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public byte Group;

		[Token(Token = "0x4000087")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		public bool Reliable;

		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x3C14F50", Offset = "0x3C14F50", VA = "0x3C14F50", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x3C14F60", Offset = "0x3C14F60", VA = "0x3C14F60", Slot = "4")]
		public bool Equals(RaiseEventBatch other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000017")]
	private class SerializeViewBatch : IEquatable<SerializeViewBatch>, IEquatable<RaiseEventBatch>
	{
		[Token(Token = "0x4000088")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly RaiseEventBatch Batch;

		[Token(Token = "0x4000089")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<object> ObjectUpdates;

		[Token(Token = "0x400008A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int defaultSize;

		[Token(Token = "0x400008B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private int offset;

		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x3C10950", Offset = "0x3C10950", VA = "0x3C10950")]
		public SerializeViewBatch(RaiseEventBatch batch, int offset)
		{
		}

		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x3C14F80", Offset = "0x3C14F80", VA = "0x3C14F80", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x3C14F90", Offset = "0x3C14F90", VA = "0x3C14F90", Slot = "4")]
		public bool Equals(SerializeViewBatch other)
		{
			return default(bool);
		}

		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x3C14FD0", Offset = "0x3C14FD0", VA = "0x3C14FD0", Slot = "5")]
		public bool Equals(RaiseEventBatch other)
		{
			return default(bool);
		}

		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x3C15000", Offset = "0x3C15000", VA = "0x3C15000", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x3C10DD0", Offset = "0x3C10DD0", VA = "0x3C10DD0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x3C10AA0", Offset = "0x3C10AA0", VA = "0x3C10AA0")]
		public void Add(List<object> viewData)
		{
		}
	}

	[Token(Token = "0x4000036")]
	public const string PunVersion = "2.43";

	[Token(Token = "0x4000037")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static LoadBalancingClient NetworkingClient;

	[Token(Token = "0x4000038")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly int MAX_VIEW_IDS;

	[Token(Token = "0x4000039")]
	public const string ServerSettingsFileName = "PhotonServerSettings";

	[Token(Token = "0x400003A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static ServerSettings photonServerSettings;

	[Token(Token = "0x400003B")]
	private const string PlayerPrefsKey = "PUNCloudBestRegion";

	[Token(Token = "0x400003C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static ConnectMethod ConnectMethod;

	[Token(Token = "0x400003D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public static PunLogLevel LogLevel;

	[Token(Token = "0x400003E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static bool EnableCloseConnection;

	[Token(Token = "0x400003F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public static float PrecisionForVectorSynchronization;

	[Token(Token = "0x4000040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static float PrecisionForQuaternionSynchronization;

	[Token(Token = "0x4000041")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public static float PrecisionForFloatSynchronization;

	[Token(Token = "0x4000042")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static bool offlineMode;

	[Token(Token = "0x4000043")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Room offlineModeRoom;

	[Token(Token = "0x4000044")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static bool automaticallySyncScene;

	[Token(Token = "0x4000045")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private static int sendFrequency;

	[Token(Token = "0x4000046")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static int serializationFrequency;

	[Token(Token = "0x4000047")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private static bool isMessageQueueRunning;

	[Token(Token = "0x4000048")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static double frametime;

	[Token(Token = "0x4000049")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static int frame;

	[Token(Token = "0x400004A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static Stopwatch StartupStopwatch;

	[Token(Token = "0x400004B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public static float MinimalTimeScaleToDispatchInFixedUpdate;

	[Token(Token = "0x400004D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static int lastUsedViewSubId;

	[Token(Token = "0x400004E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private static int lastUsedViewSubIdStatic;

	[Token(Token = "0x400004F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static readonly HashSet<string> PrefabsWithoutMagicCallback;

	[Token(Token = "0x4000050")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private static readonly Hashtable SendInstantiateEvHashtable;

	[Token(Token = "0x4000051")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static readonly RaiseEventOptions SendInstantiateRaiseEventOptions;

	[Token(Token = "0x4000052")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static HashSet<byte> allowedReceivingGroups;

	[Token(Token = "0x4000053")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static HashSet<byte> blockedSendingGroups;

	[Token(Token = "0x4000054")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static HashSet<PhotonView> reusablePVHashset;

	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static NonAllocDictionary<int, PhotonView> photonViewList;

	[Token(Token = "0x4000059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal static byte currentLevelPrefix;

	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC9")]
	internal static bool loadingLevelAndPausedNetwork;

	[Token(Token = "0x400005B")]
	internal const string CurrentSceneProperty = "curScn";

	[Token(Token = "0x400005C")]
	internal const string CurrentScenePropertyLoadAsync = "curScnLa";

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private static IPunPrefabPool prefabPool;

	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public static bool UseRpcMonoBehaviourCache;

	[Token(Token = "0x400005F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private static readonly Dictionary<Type, List<MethodInfo>> monoRPCMethodsCache;

	[Token(Token = "0x4000060")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private static Dictionary<string, int> rpcShortcuts;

	[Token(Token = "0x4000061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public static bool RunRpcCoroutines;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private static AsyncOperation _AsyncLevelLoadingOperation;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private static float _levelLoadingProgress;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private static readonly Type typePunRPC;

	[Token(Token = "0x4000065")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private static readonly Type typePhotonMessageInfo;

	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private static readonly object keyByteZero;

	[Token(Token = "0x4000067")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private static readonly object keyByteOne;

	[Token(Token = "0x4000068")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private static readonly object keyByteTwo;

	[Token(Token = "0x4000069")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private static readonly object keyByteThree;

	[Token(Token = "0x400006A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private static readonly object keyByteFour;

	[Token(Token = "0x400006B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private static readonly object keyByteFive;

	[Token(Token = "0x400006C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private static readonly object keyByteSix;

	[Token(Token = "0x400006D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private static readonly object keyByteSeven;

	[Token(Token = "0x400006E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private static readonly object keyByteEight;

	[Token(Token = "0x400006F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private static readonly object[] emptyObjectArray;

	[Token(Token = "0x4000070")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private static readonly Type[] emptyTypeArray;

	[Token(Token = "0x4000071")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	internal static List<PhotonView> foundPVs;

	[Token(Token = "0x4000072")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private static readonly Hashtable removeFilter;

	[Token(Token = "0x4000073")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private static readonly Hashtable ServerCleanDestroyEvent;

	[Token(Token = "0x4000074")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private static readonly RaiseEventOptions ServerCleanOptions;

	[Token(Token = "0x4000075")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	internal static RaiseEventOptions SendToAllOptions;

	[Token(Token = "0x4000076")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	internal static RaiseEventOptions SendToOthersOptions;

	[Token(Token = "0x4000077")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	internal static RaiseEventOptions SendToSingleOptions;

	[Token(Token = "0x4000078")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private static readonly Hashtable rpcFilterByViewId;

	[Token(Token = "0x4000079")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private static readonly RaiseEventOptions OpCleanRpcBufferOptions;

	[Token(Token = "0x400007A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private static Hashtable rpcEvent;

	[Token(Token = "0x400007B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private static RaiseEventOptions RpcOptionsToAll;

	[Token(Token = "0x400007C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	public static int ObjectsInOneUpdate;

	[Token(Token = "0x400007D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private static readonly PhotonStream serializeStreamOut;

	[Token(Token = "0x400007E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private static readonly PhotonStream serializeStreamIn;

	[Token(Token = "0x400007F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private static RaiseEventOptions serializeRaiseEvOptions;

	[Token(Token = "0x4000080")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private static readonly Dictionary<RaiseEventBatch, SerializeViewBatch> serializeViewBatches;

	[Token(Token = "0x4000081")]
	public const int SyncViewId = 0;

	[Token(Token = "0x4000082")]
	public const int SyncCompressed = 1;

	[Token(Token = "0x4000083")]
	public const int SyncNullValues = 2;

	[Token(Token = "0x4000084")]
	public const int SyncFirstValue = 3;

	[Token(Token = "0x4000085")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private static RegionHandler _cachedRegionHandler;

	[Token(Token = "0x17000002")]
	public static ServerSettings PhotonServerSettings
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x3BF6B90", Offset = "0x3BF6B90", VA = "0x3BF6B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x3BFBBF0", Offset = "0x3BFBBF0", VA = "0x3BFBBF0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public static string ServerAddress
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x3BFBC50", Offset = "0x3BFBC50", VA = "0x3BFBC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public static string CloudRegion
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x3BFBD10", Offset = "0x3BFBD10", VA = "0x3BFBD10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public static string CurrentCluster
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3BFC050", Offset = "0x3BFC050", VA = "0x3BFC050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public static string BestRegionSummaryInPreferences
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3BFC0F0", Offset = "0x3BFC0F0", VA = "0x3BFC0F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3BFC130", Offset = "0x3BFC130", VA = "0x3BFC130")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public static bool IsConnected
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x3BFBE00", Offset = "0x3BFBE00", VA = "0x3BFBE00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000008")]
	public static bool IsConnectedAndReady
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x3BFC1B0", Offset = "0x3BFC1B0", VA = "0x3BFC1B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000009")]
	public static ClientState NetworkClientState
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3BFC2C0", Offset = "0x3BFC2C0", VA = "0x3BFC2C0")]
		get
		{
			return default(ClientState);
		}
	}

	[Token(Token = "0x1700000A")]
	public static ServerConnection Server
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3BFBF10", Offset = "0x3BFBF10", VA = "0x3BFBF10")]
		get
		{
			return default(ServerConnection);
		}
	}

	[Token(Token = "0x1700000B")]
	public static AuthenticationValues AuthValues
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x3BFC400", Offset = "0x3BFC400", VA = "0x3BFC400")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3BFC4A0", Offset = "0x3BFC4A0", VA = "0x3BFC4A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public static TypedLobby CurrentLobby
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x3BFC560", Offset = "0x3BFC560", VA = "0x3BFC560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	public static Room CurrentRoom
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x3BF6310", Offset = "0x3BF6310", VA = "0x3BF6310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public static Player LocalPlayer
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x3BFC5E0", Offset = "0x3BFC5E0", VA = "0x3BFC5E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public static string NickName
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x3BFC680", Offset = "0x3BFC680", VA = "0x3BFC680")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x3BFC700", Offset = "0x3BFC700", VA = "0x3BFC700")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public static Player[] PlayerList
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x3BFC790", Offset = "0x3BFC790", VA = "0x3BFC790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000011")]
	public static Player[] PlayerListOthers
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x3BFC980", Offset = "0x3BFC980", VA = "0x3BFC980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public static bool OfflineMode
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x3BFCC40", Offset = "0x3BFCC40", VA = "0x3BFCC40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x3BFCCB0", Offset = "0x3BFCCB0", VA = "0x3BFCCB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public static bool AutomaticallySyncScene
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x3BFD1E0", Offset = "0x3BFD1E0", VA = "0x3BFD1E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x3BFD250", Offset = "0x3BFD250", VA = "0x3BFD250")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public static bool EnableLobbyStatistics
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x3BFD320", Offset = "0x3BFD320", VA = "0x3BFD320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000015")]
	public static bool InLobby
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x3BFD3A0", Offset = "0x3BFD3A0", VA = "0x3BFD3A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000016")]
	public static int SendRate
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x3BF6C50", Offset = "0x3BF6C50", VA = "0x3BF6C50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x3BFD420", Offset = "0x3BFD420", VA = "0x3BFD420")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public static int SerializationRate
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x3BF6CA0", Offset = "0x3BF6CA0", VA = "0x3BF6CA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x3BFD520", Offset = "0x3BFD520", VA = "0x3BFD520")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public static bool IsMessageQueueRunning
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x3BFD620", Offset = "0x3BFD620", VA = "0x3BFD620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x3BFD690", Offset = "0x3BFD690", VA = "0x3BFD690")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public static double Time
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x3BFD6E0", Offset = "0x3BFD6E0", VA = "0x3BFD6E0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x1700001A")]
	public static int ServerTimestamp
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x3BFD7A0", Offset = "0x3BFD7A0", VA = "0x3BFD7A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001B")]
	public static float KeepAliveInBackground
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x3BFDAB0", Offset = "0x3BFDAB0", VA = "0x3BFDAB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x3BFD940", Offset = "0x3BFD940", VA = "0x3BFD940")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public static bool IsMasterClient
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x3BF9B70", Offset = "0x3BF9B70", VA = "0x3BF9B70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001D")]
	public static Player MasterClient
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x3BFADA0", Offset = "0x3BFADA0", VA = "0x3BFADA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public static bool InRoom
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x3BFDC20", Offset = "0x3BFDC20", VA = "0x3BFDC20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001F")]
	public static int CountOfPlayersOnMaster
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x3BFDC70", Offset = "0x3BFDC70", VA = "0x3BFDC70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000020")]
	public static int CountOfPlayersInRooms
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x3BFDCF0", Offset = "0x3BFDCF0", VA = "0x3BFDCF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000021")]
	public static int CountOfPlayers
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x3BFDD70", Offset = "0x3BFDD70", VA = "0x3BFDD70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000022")]
	public static int CountOfRooms
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x3BFDDF0", Offset = "0x3BFDDF0", VA = "0x3BFDDF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000023")]
	public static bool NetworkStatisticsEnabled
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x3BFDE70", Offset = "0x3BFDE70", VA = "0x3BFDE70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x3BFDEF0", Offset = "0x3BFDEF0", VA = "0x3BFDEF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public static int ResentReliableCommands
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x3BFDF80", Offset = "0x3BFDF80", VA = "0x3BFDF80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000025")]
	public static bool CrcCheckEnabled
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x3BFE000", Offset = "0x3BFE000", VA = "0x3BFE000")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x3BFE080", Offset = "0x3BFE080", VA = "0x3BFE080")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public static int PacketLossByCrcCheck
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x3BFE1B0", Offset = "0x3BFE1B0", VA = "0x3BFE1B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	public static int MaxResendsBeforeDisconnect
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x3BFE230", Offset = "0x3BFE230", VA = "0x3BFE230")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x3BFE2B0", Offset = "0x3BFE2B0", VA = "0x3BFE2B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public static int QuickResends
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x3BFE330", Offset = "0x3BFE330", VA = "0x3BFE330")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x3BFE3C0", Offset = "0x3BFE3C0", VA = "0x3BFE3C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	[Obsolete("Set port overrides in ServerPortOverrides. Not used anymore!")]
	public static bool UseAlternativeUdpPorts
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x3BFE440", Offset = "0x3BFE440", VA = "0x3BFE440")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x3BFE4B0", Offset = "0x3BFE4B0", VA = "0x3BFE4B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public static PhotonPortDefinition ServerPortOverrides
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x3BFE500", Offset = "0x3BFE500", VA = "0x3BFE500")]
		get
		{
			return default(PhotonPortDefinition);
		}
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x3BFE5B0", Offset = "0x3BFE5B0", VA = "0x3BFE5B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	[Obsolete("Use PhotonViewCollection instead for an iterable collection of current photonViews.")]
	public static PhotonView[] PhotonViews
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3C0BED0", Offset = "0x3C0BED0", VA = "0x3C0BED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public static NonAllocDictionary<int, PhotonView>.ValueIterator PhotonViewCollection
	{
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x3BF8D10", Offset = "0x3BF8D10", VA = "0x3BF8D10")]
		get
		{
			return default(NonAllocDictionary<int, PhotonView>.ValueIterator);
		}
	}

	[Token(Token = "0x1700002D")]
	public static int ViewCount
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x3BF9AD0", Offset = "0x3BF9AD0", VA = "0x3BF9AD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002E")]
	public static IPunPrefabPool PrefabPool
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x3C0C960", Offset = "0x3C0C960", VA = "0x3C0C960")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x3BFF710", Offset = "0x3BFF710", VA = "0x3BFF710")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public static float LevelLoadingProgress
	{
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x3C0C9D0", Offset = "0x3C0C9D0", VA = "0x3C0C9D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x14000001")]
	private static event Action<PhotonView, Player> OnOwnershipRequestEv
	{
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x3C0C190", Offset = "0x3C0C190", VA = "0x3C0C190")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x3C0C290", Offset = "0x3C0C290", VA = "0x3C0C290")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	private static event Action<PhotonView, Player> OnOwnershipTransferedEv
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x3C0C390", Offset = "0x3C0C390", VA = "0x3C0C390")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x3C0C490", Offset = "0x3C0C490", VA = "0x3C0C490")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	private static event Action<PhotonView, Player> OnOwnershipTransferFailedEv
	{
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x3C0C590", Offset = "0x3C0C590", VA = "0x3C0C590")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x3C0C690", Offset = "0x3C0C690", VA = "0x3C0C690")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3BFE660", Offset = "0x3BFE660", VA = "0x3BFE660")]
	static PhotonNetwork()
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3BFF120", Offset = "0x3BFF120", VA = "0x3BFF120")]
	private static void StaticReset()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3BFF810", Offset = "0x3BFF810", VA = "0x3BFF810")]
	public static bool ConnectUsingSettings()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3BFF910", Offset = "0x3BFF910", VA = "0x3BFF910")]
	public static bool ConnectUsingSettings(AppSettings appSettings, bool startInOfflineMode = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3C002D0", Offset = "0x3C002D0", VA = "0x3C002D0")]
	public static bool ConnectToMaster(string masterServerAddress, int port, string appID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3C007C0", Offset = "0x3C007C0", VA = "0x3C007C0")]
	public static bool ConnectToBestCloudServer()
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3C009C0", Offset = "0x3C009C0", VA = "0x3C009C0")]
	public static bool ConnectToRegion(string region)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3C00C30", Offset = "0x3C00C30", VA = "0x3C00C30")]
	public static void Disconnect()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x3C00DF0", Offset = "0x3C00DF0", VA = "0x3C00DF0")]
	public static bool Reconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x3C01230", Offset = "0x3C01230", VA = "0x3C01230")]
	public static void NetworkStatisticsReset()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3C012B0", Offset = "0x3C012B0", VA = "0x3C012B0")]
	public static string NetworkStatisticsToString()
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3C01410", Offset = "0x3C01410", VA = "0x3C01410")]
	private static bool VerifyCanUseNetwork()
	{
		return default(bool);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3C014C0", Offset = "0x3C014C0", VA = "0x3C014C0")]
	public static int GetPing()
	{
		return default(int);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3C01540", Offset = "0x3C01540", VA = "0x3C01540")]
	public static void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3C015F0", Offset = "0x3C015F0", VA = "0x3C015F0")]
	public static void SendAllOutgoingCommands()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3C01680", Offset = "0x3C01680", VA = "0x3C01680")]
	public static bool CloseConnection(Player kickPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3C019C0", Offset = "0x3C019C0", VA = "0x3C019C0")]
	public static bool RoomBan(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3C01B40", Offset = "0x3C01B40", VA = "0x3C01B40")]
	public static bool IPBan(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3C01CC0", Offset = "0x3C01CC0", VA = "0x3C01CC0")]
	public static bool IPUnban(string ip)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3C01DE0", Offset = "0x3C01DE0", VA = "0x3C01DE0")]
	public static bool Superban(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3C01F60", Offset = "0x3C01F60", VA = "0x3C01F60")]
	public static bool ClearSuperbans()
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3C02030", Offset = "0x3C02030", VA = "0x3C02030")]
	public static bool SetMasterClient(Player masterClientPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3C02270", Offset = "0x3C02270", VA = "0x3C02270")]
	public static bool JoinRandomRoom()
	{
		return default(bool);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x3C02840", Offset = "0x3C02840", VA = "0x3C02840")]
	public static bool JoinRandomRoom(Hashtable expectedCustomRoomProperties, byte expectedMaxPlayers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3C022C0", Offset = "0x3C022C0", VA = "0x3C022C0")]
	public static bool JoinRandomRoom(Hashtable expectedCustomRoomProperties, byte expectedMaxPlayers, MatchmakingMode matchingType, TypedLobby typedLobby, string sqlLobbyFilter, [Optional] string[] expectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3C02AE0", Offset = "0x3C02AE0", VA = "0x3C02AE0")]
	public static bool JoinRandomOrCreateRoom([Optional] Hashtable expectedCustomRoomProperties, [Optional][DefaultParameterValue(0)] byte expectedMaxPlayers, [Optional][DefaultParameterValue(0)] MatchmakingMode matchingType, [Optional] TypedLobby typedLobby, [Optional] string sqlLobbyFilter, [Optional] string roomName, [Optional] RoomOptions roomOptions, [Optional] string[] expectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3C030F0", Offset = "0x3C030F0", VA = "0x3C030F0")]
	public static bool CreateRoom(string roomName, [Optional] RoomOptions roomOptions, [Optional] TypedLobby typedLobby, [Optional] string[] expectedUsers, [Optional] string hash, [Optional] string sessionID)
	{
		return default(bool);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3C03670", Offset = "0x3C03670", VA = "0x3C03670")]
	public static bool JoinOrCreateRoom(string roomName, RoomOptions roomOptions, TypedLobby typedLobby, [Optional] string[] expectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3C03CC0", Offset = "0x3C03CC0", VA = "0x3C03CC0")]
	public static bool JoinRoom(string roomName, [Optional] string[] expectedUsers, [Optional] string password, [Optional] string hash, [Optional] string sessionID, [Optional] string modID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3C041E0", Offset = "0x3C041E0", VA = "0x3C041E0")]
	public static bool RejoinRoom(string roomName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3C04610", Offset = "0x3C04610", VA = "0x3C04610")]
	public static bool ReconnectAndRejoin()
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3C049E0", Offset = "0x3C049E0", VA = "0x3C049E0")]
	public static bool LeaveRoom(bool becomeInactive = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3C028A0", Offset = "0x3C028A0", VA = "0x3C028A0")]
	private static void EnterOfflineRoom(string roomName, RoomOptions roomOptions, bool createdRoom)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3C04CA0", Offset = "0x3C04CA0", VA = "0x3C04CA0")]
	public static bool JoinLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3C04D00", Offset = "0x3C04D00", VA = "0x3C04D00")]
	public static bool JoinLobby(TypedLobby typedLobby)
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3C04DD0", Offset = "0x3C04DD0", VA = "0x3C04DD0")]
	public static bool LeaveLobby()
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3C04E90", Offset = "0x3C04E90", VA = "0x3C04E90")]
	public static bool FindFriends(string[] friendsToFind)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3C04F80", Offset = "0x3C04F80", VA = "0x3C04F80")]
	public static bool GetCustomRoomList(TypedLobby typedLobby, string sqlLobbyFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x3C05010", Offset = "0x3C05010", VA = "0x3C05010")]
	public static bool SetPlayerCustomProperties(Hashtable customProperties)
	{
		return default(bool);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3C053D0", Offset = "0x3C053D0", VA = "0x3C053D0")]
	public static void RemovePlayerCustomProperties(string[] customPropertiesToDelete)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x3C05850", Offset = "0x3C05850", VA = "0x3C05850")]
	public static bool RaiseEvent(byte eventCode, object eventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x3C05B40", Offset = "0x3C05B40", VA = "0x3C05B40")]
	private static bool RaiseEventInternal(byte eventCode, object eventContent, RaiseEventOptions raiseEventOptions, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3C05D40", Offset = "0x3C05D40", VA = "0x3C05D40")]
	public static bool AllocateViewID(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x3C062F0", Offset = "0x3C062F0", VA = "0x3C062F0")]
	[Obsolete("Renamed. Use AllocateRoomViewID instead")]
	public static bool AllocateSceneViewID(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x3C06350", Offset = "0x3C06350", VA = "0x3C06350")]
	public static bool AllocateRoomViewID(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x3C064B0", Offset = "0x3C064B0", VA = "0x3C064B0")]
	public static int AllocateViewID(bool roomObject)
	{
		return default(int);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x3C05EC0", Offset = "0x3C05EC0", VA = "0x3C05EC0")]
	public static int AllocateViewID(int ownerId)
	{
		return default(int);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x3C06700", Offset = "0x3C06700", VA = "0x3C06700")]
	public static GameObject Instantiate(string prefabName, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(0)] byte group, [Optional] object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x3C073C0", Offset = "0x3C073C0", VA = "0x3C073C0")]
	[Obsolete("Renamed. Use InstantiateRoomObject instead")]
	public static GameObject InstantiateSceneObject(string prefabName, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(0)] byte group, [Optional] object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3C07470", Offset = "0x3C07470", VA = "0x3C07470")]
	public static GameObject InstantiateRoomObject(string prefabName, Vector3 position, Quaternion rotation, [Optional][DefaultParameterValue(0)] byte group, [Optional] object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x3C07840", Offset = "0x3C07840", VA = "0x3C07840")]
	private static GameObject NetworkInstantiate(Hashtable networkEvent, Player creator)
	{
		return null;
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3C06A00", Offset = "0x3C06A00", VA = "0x3C06A00")]
	private static GameObject NetworkInstantiate(InstantiateParameters parameters, bool roomObject = false, bool instantiateEvent = false)
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3C08020", Offset = "0x3C08020", VA = "0x3C08020")]
	internal static bool SendInstantiate(InstantiateParameters parameters, bool roomObject = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x3C08690", Offset = "0x3C08690", VA = "0x3C08690")]
	public static void Destroy(PhotonView targetView)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x3C08EA0", Offset = "0x3C08EA0", VA = "0x3C08EA0")]
	public static void Destroy(GameObject targetGo)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x3C08F50", Offset = "0x3C08F50", VA = "0x3C08F50")]
	public static void DestroyPlayerObjects(Player targetPlayer)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x3C08FE0", Offset = "0x3C08FE0", VA = "0x3C08FE0")]
	public static void DestroyPlayerObjects(int targetPlayerId)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x3C09A90", Offset = "0x3C09A90", VA = "0x3C09A90")]
	public static void DestroyAll()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x3C09C70", Offset = "0x3C09C70", VA = "0x3C09C70")]
	public static void RemoveRPCs(Player targetPlayer)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3C09EB0", Offset = "0x3C09EB0", VA = "0x3C09EB0")]
	public static void RemoveRPCs(PhotonView targetPhotonView)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x3C0A0F0", Offset = "0x3C0A0F0", VA = "0x3C0A0F0")]
	internal static void RPC(PhotonView view, string methodName, RpcTarget target, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x3C0B020", Offset = "0x3C0B020", VA = "0x3C0B020")]
	internal static void RPC(PhotonView view, string methodName, Player targetPlayer, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x3C0B340", Offset = "0x3C0B340", VA = "0x3C0B340")]
	public static HashSet<GameObject> FindGameObjectsWithComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x3C0B540", Offset = "0x3C0B540", VA = "0x3C0B540")]
	public static void SetInterestGroups(byte group, bool enabled)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x3C0BA60", Offset = "0x3C0BA60", VA = "0x3C0BA60")]
	public static void LoadLevel(int levelNumber)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x3C0BC60", Offset = "0x3C0BC60", VA = "0x3C0BC60")]
	public static void LoadLevel(string levelName)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x3C0BE30", Offset = "0x3C0BE30", VA = "0x3C0BE30")]
	public static bool WebRpc(string name, object parameters, bool sendAuthCookie = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3C00170", Offset = "0x3C00170", VA = "0x3C00170")]
	private static void SetupLogging()
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3BFB820", Offset = "0x3BFB820", VA = "0x3BFB820")]
	public static void LoadOrCreateSettings(bool reload = false)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3BF6CF0", Offset = "0x3BF6CF0", VA = "0x3BF6CF0")]
	public static void AddCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x3BF7120", Offset = "0x3BF7120", VA = "0x3BF7120")]
	public static void RemoveCallbackTarget(object target)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x3C0C790", Offset = "0x3C0C790", VA = "0x3C0C790")]
	internal static string CallbacksToString()
	{
		return null;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3BFCF50", Offset = "0x3BFCF50", VA = "0x3BFCF50")]
	private static void LeftRoomCleanup()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3BF9F50", Offset = "0x3BF9F50", VA = "0x3BF9F50")]
	internal static void LocalCleanupAnythingInstantiated(bool destroyInstantiatedGameObjects)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3C0CB00", Offset = "0x3C0CB00", VA = "0x3C0CB00")]
	private static void ResetPhotonViewsOnSerialize()
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3C0CCD0", Offset = "0x3C0CCD0", VA = "0x3C0CCD0")]
	internal static void ExecuteRpc(Hashtable rpcData, Player sender)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3C0EC60", Offset = "0x3C0EC60", VA = "0x3C0EC60")]
	private static bool CheckTypeMatch(ParameterInfo[] methodParameters, Type[] callParameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3C092A0", Offset = "0x3C092A0", VA = "0x3C092A0")]
	public static void DestroyPlayerObjects(int playerId, bool localOnly)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x3C09BE0", Offset = "0x3C09BE0", VA = "0x3C09BE0")]
	public static void DestroyAll(bool localOnly)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x3C087C0", Offset = "0x3C087C0", VA = "0x3C087C0")]
	internal static void RemoveInstantiatedGO(GameObject go, bool localOnly)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x3C0F1B0", Offset = "0x3C0F1B0", VA = "0x3C0F1B0")]
	private static void ServerCleanInstantiateAndDestroy(PhotonView photonView)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x3C0EF00", Offset = "0x3C0EF00", VA = "0x3C0EF00")]
	private static void SendDestroyOfPlayer(int actorNr)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x3C0F0C0", Offset = "0x3C0F0C0", VA = "0x3C0F0C0")]
	private static void SendDestroyOfAll()
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x3C0EDF0", Offset = "0x3C0EDF0", VA = "0x3C0EDF0")]
	private static void OpRemoveFromServerInstantiationsOfPlayer(int actorNr)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x3C0F6D0", Offset = "0x3C0F6D0", VA = "0x3C0F6D0")]
	internal static void RequestOwnership(int viewID, int fromOwner)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x3C0F7B0", Offset = "0x3C0F7B0", VA = "0x3C0F7B0")]
	internal static void TransferOwnership(int viewID, int playerID)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3BF9DC0", Offset = "0x3BF9DC0", VA = "0x3BF9DC0")]
	internal static void OwnershipUpdate(int[] viewOwnerPairs, int targetActor = -1)
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3C0F520", Offset = "0x3C0F520", VA = "0x3C0F520")]
	public static bool LocalCleanPhotonView(PhotonView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x3C0EAD0", Offset = "0x3C0EAD0", VA = "0x3C0EAD0")]
	public static PhotonView GetPhotonView(int viewID)
	{
		return null;
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x3C0F890", Offset = "0x3C0F890", VA = "0x3C0F890")]
	public static void RegisterPhotonView(PhotonView netView)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x3C09DA0", Offset = "0x3C09DA0", VA = "0x3C09DA0")]
	public static void OpCleanActorRpcBuffer(int actorNumber)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x3C0FC00", Offset = "0x3C0FC00", VA = "0x3C0FC00")]
	public static void OpRemoveCompleteCacheOfPlayer(int actorNumber)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x3C0F000", Offset = "0x3C0F000", VA = "0x3C0F000")]
	public static void OpRemoveCompleteCache()
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3C0FD10", Offset = "0x3C0FD10", VA = "0x3C0FD10")]
	private static void RemoveCacheOfLeftPlayers()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3C09F40", Offset = "0x3C09F40", VA = "0x3C09F40")]
	public static void CleanRpcBufferIfMine(PhotonView view)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x3C0F5B0", Offset = "0x3C0F5B0", VA = "0x3C0F5B0")]
	public static void OpCleanRpcBuffer(PhotonView view)
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x3C0FE50", Offset = "0x3C0FE50", VA = "0x3C0FE50")]
	public static void RemoveRPCsInGroup(int group)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3C10040", Offset = "0x3C10040", VA = "0x3C10040")]
	public static bool RemoveBufferedRPCs([Optional][DefaultParameterValue(0)] int viewId, [Optional] string methodName, [Optional] int[] callersActorNumbers)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x3C102B0", Offset = "0x3C102B0", VA = "0x3C102B0")]
	public static void SetLevelPrefix(byte prefix)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x3C0A2D0", Offset = "0x3C0A2D0", VA = "0x3C0A2D0")]
	internal static void RPC(PhotonView view, string methodName, RpcTarget target, Player player, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x3C0B640", Offset = "0x3C0B640", VA = "0x3C0B640")]
	public static void SetInterestGroups(byte[] disableGroups, byte[] enableGroups)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x3C10310", Offset = "0x3C10310", VA = "0x3C10310")]
	public static void SetSendingEnabled(byte group, bool enabled)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x3C103E0", Offset = "0x3C103E0", VA = "0x3C103E0")]
	public static void SetSendingEnabled(byte[] disableGroups, byte[] enableGroups)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3BFB1C0", Offset = "0x3BFB1C0", VA = "0x3BFB1C0")]
	internal static void NewSceneLoaded()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x3BF7B60", Offset = "0x3BF7B60", VA = "0x3BF7B60")]
	internal static void RunViewUpdate()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3C10BB0", Offset = "0x3C10BB0", VA = "0x3C10BB0")]
	private static void SendSerializeViewBatch(SerializeViewBatch batch)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x3C10540", Offset = "0x3C10540", VA = "0x3C10540")]
	private static List<object> OnSerializeWrite(PhotonView view)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x3C117E0", Offset = "0x3C117E0", VA = "0x3C117E0")]
	private static void OnSerializeRead(object[] data, Player sender, int networkTime, short correctPrefix)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x3C11510", Offset = "0x3C11510", VA = "0x3C11510")]
	private static List<object> DeltaCompressionWrite(List<object> previousContent, List<object> currentContent)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3C12070", Offset = "0x3C12070", VA = "0x3C12070")]
	private static object[] DeltaCompressionRead(object[] lastOnSerializeDataReceived, object[] incomingData)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3C11220", Offset = "0x3C11220", VA = "0x3C11220")]
	private static bool AlmostEquals(IList<object> lastData, IList<object> currentContent)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3C123F0", Offset = "0x3C123F0", VA = "0x3C123F0")]
	private static bool AlmostEquals(object one, object two)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3C128C0", Offset = "0x3C128C0", VA = "0x3C128C0")]
	internal static bool GetMethod(MonoBehaviour monob, string methodType, out MethodInfo mi)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3BF8730", Offset = "0x3BF8730", VA = "0x3BF8730")]
	internal static void LoadLevelIfSynced()
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3BF8140", Offset = "0x3BF8140", VA = "0x3BF8140")]
	internal static void SetLevelInPropsIfSynced(object levelId)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3C12A40", Offset = "0x3C12A40", VA = "0x3C12A40")]
	private static void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3C14950", Offset = "0x3C14950", VA = "0x3C14950")]
	private static void OnOperation(OperationResponse opResponse)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3C14BE0", Offset = "0x3C14BE0", VA = "0x3C14BE0")]
	private static void OnClientStateChanged(ClientState previousState, ClientState state)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3C14DB0", Offset = "0x3C14DB0", VA = "0x3C14DB0")]
	private static void OnRegionsPinged(RegionHandler regionHandler)
	{
	}
}
