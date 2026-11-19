// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.PhotonPeer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon.Encryption;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200002C")]
public class PhotonPeer
{
	[Token(Token = "0x4000139")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[Obsolete("Check QueuedOutgoingCommands and QueuedIncomingCommands on demand instead.")]
	public int WarningSize;

	[Token(Token = "0x400013A")]
	[Obsolete("Where dynamic linking is available, this library will attempt to load it and fallback to a managed implementation. This value is always true.")]
	public const bool NativeDatagramEncrypt = true;

	[Token(Token = "0x400013B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	[Obsolete("Use the ITrafficRecorder to capture all traffic instead.")]
	public int CommandLogSize;

	[Token(Token = "0x400013C")]
	public const bool NoSocket = false;

	[Token(Token = "0x400013D")]
	public const bool DebugBuild = true;

	[Token(Token = "0x400013E")]
	public const int NativeEncryptorApiVersion = 2;

	[Token(Token = "0x400013F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public TargetFrameworks TargetFramework;

	[Token(Token = "0x4000140")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static bool NoNativeCallbacks;

	[Token(Token = "0x4000141")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool RemoveAppIdFromWebSocketPath;

	[Token(Token = "0x4000142")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25")]
	protected internal byte ClientSdkId;

	[Token(Token = "0x4000143")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string clientVersion;

	[Token(Token = "0x4000144")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[Obsolete("A Native Socket implementation is no longer part of this DLL but delivered in a separate add-on. This value always returns false.")]
	public static readonly bool NativeSocketLibAvailable;

	[Token(Token = "0x4000145")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
	[Obsolete("Native Payload Encryption is no longer part of this DLL but delivered in a separate add-on. This value always returns false.")]
	public static readonly bool NativePayloadEncryptionLibAvailable;

	[Token(Token = "0x4000146")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12")]
	[Obsolete("Native Datagram Encryption is no longer part of this DLL but delivered in a separate add-on. This value always returns false.")]
	public static readonly bool NativeDatagramEncryptionLibAvailable;

	[Token(Token = "0x4000147")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26")]
	internal bool UseInitV3;

	[Token(Token = "0x4000149")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Dictionary<ConnectionProtocol, Type> SocketImplementationConfig;

	[Token(Token = "0x400014B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public DebugLevel DebugOut;

	[Token(Token = "0x400014D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<DisconnectMessage> m_OnDisconnectMessage;

	[Token(Token = "0x400014E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool reuseEventInstance;

	[Token(Token = "0x400014F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool useByteArraySlicePoolForEvents;

	[Token(Token = "0x4000150")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	private bool wrapIncomingStructs;

	[Token(Token = "0x4000151")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5B")]
	public bool SendInCreationOrder;

	[Token(Token = "0x4000152")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public int SequenceDeltaLimitResends;

	[Token(Token = "0x4000153")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public int SequenceDeltaLimitSends;

	[Token(Token = "0x4000154")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public ITrafficRecorder TrafficRecorder;

	[Token(Token = "0x4000156")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x71")]
	private byte quickResendAttempts;

	[Token(Token = "0x4000157")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x72")]
	public byte ChannelCount;

	[Token(Token = "0x4000158")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x73")]
	public bool EnableEncryptedFlag;

	[Token(Token = "0x4000159")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private bool crcEnabled;

	[Token(Token = "0x400015A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public int SentCountAllowance;

	[Token(Token = "0x400015B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	public int InitialResendTimeMax;

	[Token(Token = "0x400015C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public int TimePingInterval;

	[Token(Token = "0x400015D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	public bool PingUsedAsInit;

	[Token(Token = "0x400015E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int disconnectTimeout;

	[Token(Token = "0x4000160")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static int OutgoingStreamBufferSize;

	[Token(Token = "0x4000161")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int mtu;

	[Token(Token = "0x4000163")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static bool AsyncKeyExchange;

	[Token(Token = "0x4000164")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x95")]
	internal bool RandomizeSequenceNumbers;

	[Token(Token = "0x4000165")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal byte[] RandomizedSequenceNumbers;

	[Token(Token = "0x4000166")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	internal bool GcmDatagramEncryption;

	[Token(Token = "0x400016A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Stopwatch trafficStatsStopwatch;

	[Token(Token = "0x400016B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool trafficStatsEnabled;

	[Token(Token = "0x400016C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	internal PeerBase peerBase;

	[Token(Token = "0x400016D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private readonly object SendOutgoingLockObject;

	[Token(Token = "0x400016E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private readonly object DispatchLockObject;

	[Token(Token = "0x400016F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private readonly object EnqueueLock;

	[Token(Token = "0x4000170")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Type payloadEncryptorType;

	[Token(Token = "0x4000171")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected internal byte[] PayloadEncryptionSecret;

	[Token(Token = "0x4000172")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private Type encryptorType;

	[Token(Token = "0x4000173")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	protected internal IPhotonEncryptor Encryptor;

	[Token(Token = "0x1700004F")]
	[Obsolete("See remarks.")]
	public int CommandBufferSize
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x5663650", Offset = "0x5662650", VA = "0x5663650")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x5663660", Offset = "0x5662660", VA = "0x5663660")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	[Obsolete("See remarks.")]
	public int LimitOfUnreliableCommands
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x5663670", Offset = "0x5662670", VA = "0x5663670")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x5663680", Offset = "0x5662680", VA = "0x5663680")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	[Obsolete("Returns SupportClass.GetTickCount(). Should be replaced by a StopWatch or the per peer PhotonPeer.ClientTime.")]
	public int LocalTimeInMilliSeconds
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x5663690", Offset = "0x5662690", VA = "0x5663690")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000052")]
	protected internal byte ClientSdkIdShifted
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x5663710", Offset = "0x5662710", VA = "0x5663710")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000053")]
	[Obsolete("The static string Version should be preferred.")]
	public string ClientVersion
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x5663720", Offset = "0x5662720", VA = "0x5663720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public static string Version
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x5663A50", Offset = "0x5662A50", VA = "0x5663A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public SerializationProtocol SerializationProtocolType
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x5663D80", Offset = "0x5662D80", VA = "0x5663D80")]
		[CompilerGenerated]
		get
		{
			return default(SerializationProtocol);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x5663D90", Offset = "0x5662D90", VA = "0x5663D90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public Type SocketImplementation
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x5663DA0", Offset = "0x5662DA0", VA = "0x5663DA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x5663DB0", Offset = "0x5662DB0", VA = "0x5663DB0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public int SocketErrorCode
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x5663DC0", Offset = "0x5662DC0", VA = "0x5663DC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000058")]
	public IPhotonPeerListener Listener
	{
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x5663DE0", Offset = "0x5662DE0", VA = "0x5663DE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x5663DF0", Offset = "0x5662DF0", VA = "0x5663DF0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public bool ReuseEventInstance
	{
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x5663F40", Offset = "0x5662F40", VA = "0x5663F40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x5663F50", Offset = "0x5662F50", VA = "0x5663F50")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public bool UseByteArraySlicePoolForEvents
	{
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x5664030", Offset = "0x5663030", VA = "0x5664030")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x5664040", Offset = "0x5663040", VA = "0x5664040")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public bool WrapIncomingStructs
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x5664050", Offset = "0x5663050", VA = "0x5664050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x5664060", Offset = "0x5663060", VA = "0x5664060")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public ByteArraySlicePool ByteArraySlicePool
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x5664070", Offset = "0x5663070", VA = "0x5664070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public long BytesIn
	{
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x56640A0", Offset = "0x56630A0", VA = "0x56640A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700005E")]
	public long BytesOut
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x56640C0", Offset = "0x56630C0", VA = "0x56640C0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700005F")]
	public int ByteCountCurrentDispatch
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x56640E0", Offset = "0x56630E0", VA = "0x56640E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000060")]
	public string CommandInfoCurrentDispatch
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x5664100", Offset = "0x5663100", VA = "0x5664100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	public int ByteCountLastOperation
	{
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x5664150", Offset = "0x5663150", VA = "0x5664150")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000062")]
	public bool EnableServerTracing
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x5664170", Offset = "0x5663170", VA = "0x5664170")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x5664180", Offset = "0x5663180", VA = "0x5664180")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public byte QuickResendAttempts
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x5664190", Offset = "0x5663190", VA = "0x5664190")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x56641A0", Offset = "0x56631A0", VA = "0x56641A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public PeerStateValue PeerState
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x56641B0", Offset = "0x56631B0", VA = "0x56641B0")]
		get
		{
			return default(PeerStateValue);
		}
	}

	[Token(Token = "0x17000065")]
	public string PeerID
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x56641E0", Offset = "0x56631E0", VA = "0x56641E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public int QueuedIncomingCommands
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x5664210", Offset = "0x5663210", VA = "0x5664210")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000067")]
	public int QueuedOutgoingCommands
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x5664240", Offset = "0x5663240", VA = "0x5664240")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000068")]
	public bool CrcEnabled
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x5664540", Offset = "0x5663540", VA = "0x5664540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x5664550", Offset = "0x5663550", VA = "0x5664550")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public int PacketLossByCrc
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x56645C0", Offset = "0x56635C0", VA = "0x56645C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006A")]
	public int PacketLossByChallenge
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x56645E0", Offset = "0x56635E0", VA = "0x56645E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public int SentReliableCommandsCount
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x5664600", Offset = "0x5663600", VA = "0x5664600")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006C")]
	public int ResentReliableCommands
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x5664630", Offset = "0x5663630", VA = "0x5664630")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	public int DisconnectTimeout
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x56646D0", Offset = "0x56636D0", VA = "0x56646D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x56646E0", Offset = "0x56636E0", VA = "0x56646E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public int ServerTimeInMilliSeconds
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x56646F0", Offset = "0x56636F0", VA = "0x56646F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006F")]
	[Obsolete("The PhotonPeer will no longer use this delegate. It uses a Stopwatch in all cases. You can access PhotonPeer.ConnectionTime.")]
	public SupportClass.IntegerMillisecondsDelegate LocalMsTimestampDelegate
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x5664740", Offset = "0x5663740", VA = "0x5664740")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public int ConnectionTime
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x5664720", Offset = "0x5663720", VA = "0x5664720")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public int LastSendAckTime
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x5664850", Offset = "0x5663850", VA = "0x5664850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000072")]
	public int LastSendOutgoingTime
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x5664870", Offset = "0x5663870", VA = "0x5664870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	public int LongestSentCall
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x5664890", Offset = "0x5663890", VA = "0x5664890")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x56648B0", Offset = "0x56638B0", VA = "0x56648B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public int RoundTripTime
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x56648D0", Offset = "0x56638D0", VA = "0x56648D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000075")]
	public int RoundTripTimeVariance
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x56648F0", Offset = "0x56638F0", VA = "0x56648F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000076")]
	public int LastRoundTripTime
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x5664910", Offset = "0x5663910", VA = "0x5664910")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000077")]
	public int TimestampOfLastSocketReceive
	{
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x5664930", Offset = "0x5663930", VA = "0x5664930")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000078")]
	public string ServerAddress
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x5664950", Offset = "0x5663950", VA = "0x5664950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public string ServerIpAddress
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x5664970", Offset = "0x5663970", VA = "0x5664970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	public ConnectionProtocol UsedProtocol
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x56646B0", Offset = "0x56636B0", VA = "0x56646B0")]
		get
		{
			return default(ConnectionProtocol);
		}
	}

	[Token(Token = "0x1700007B")]
	public ConnectionProtocol TransportProtocol
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x56649B0", Offset = "0x56639B0", VA = "0x56649B0")]
		[CompilerGenerated]
		get
		{
			return default(ConnectionProtocol);
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x56649C0", Offset = "0x56639C0", VA = "0x56649C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public virtual bool IsSimulationEnabled
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x56649D0", Offset = "0x56639D0", VA = "0x56649D0", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x5664A20", Offset = "0x5663A20", VA = "0x5664A20", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public NetworkSimulationSet NetworkSimulationSettings
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x5664A00", Offset = "0x5663A00", VA = "0x5664A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public int MaximumTransferUnit
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x5664B30", Offset = "0x5663B30", VA = "0x5664B30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x5664B40", Offset = "0x5663B40", VA = "0x5664B40")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public bool IsEncryptionAvailable
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x5664C10", Offset = "0x5663C10", VA = "0x5664C10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000080")]
	[Obsolete("Internally not used anymore. Call SendAcksOnly() instead.")]
	public bool IsSendingOnlyAcks
	{
		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x5664C30", Offset = "0x5663C30", VA = "0x5664C30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x5664C40", Offset = "0x5663C40", VA = "0x5664C40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public TrafficStats TrafficStatsIncoming
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x5664C50", Offset = "0x5663C50", VA = "0x5664C50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x5664C60", Offset = "0x5663C60", VA = "0x5664C60")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public TrafficStats TrafficStatsOutgoing
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x5664C80", Offset = "0x5663C80", VA = "0x5664C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x5664C90", Offset = "0x5663C90", VA = "0x5664C90")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public TrafficStatsGameLevel TrafficStatsGameLevel
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x5664CB0", Offset = "0x5663CB0", VA = "0x5664CB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x5664CC0", Offset = "0x5663CC0", VA = "0x5664CC0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public long TrafficStatsElapsedMs
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x5664CE0", Offset = "0x5663CE0", VA = "0x5664CE0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000085")]
	public bool TrafficStatsEnabled
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x5664D00", Offset = "0x5663D00", VA = "0x5664D00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x5664D10", Offset = "0x5663D10", VA = "0x5664D10")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public Type PayloadEncryptorType
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x5665600", Offset = "0x5664600", VA = "0x5665600")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x5665610", Offset = "0x5664610", VA = "0x5665610")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public Type EncryptorType
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x5665790", Offset = "0x5664790", VA = "0x5665790")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x56657A0", Offset = "0x56647A0", VA = "0x56657A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public int CountDiscarded
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x5665920", Offset = "0x5664920", VA = "0x5665920")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x5665930", Offset = "0x5664930", VA = "0x5665930")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public int DeltaUnreliableNumber
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x5665940", Offset = "0x5664940", VA = "0x5665940")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x5665950", Offset = "0x5664950", VA = "0x5665950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public event Action<DisconnectMessage> OnDisconnectMessage
	{
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x5663E00", Offset = "0x5662E00", VA = "0x5663E00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x5663EA0", Offset = "0x5662EA0", VA = "0x5663EA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x56636F0", Offset = "0x56626F0", VA = "0x56636F0")]
	[Obsolete("Use the ITrafficRecorder to capture all traffic instead.")]
	public string CommandLogToString()
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x5664270", Offset = "0x5663270", VA = "0x5664270")]
	public static void MessageBufferPoolTrim(int countOfBuffers)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x56644B0", Offset = "0x56634B0", VA = "0x56644B0")]
	public static int MessageBufferPoolSize()
	{
		return default(int);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x5664F10", Offset = "0x5663F10", VA = "0x5664F10")]
	public void TrafficStatsReset()
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x5664D70", Offset = "0x5663D70", VA = "0x5664D70")]
	internal void InitializeTrafficStats()
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x5664F80", Offset = "0x5663F80", VA = "0x5664F80")]
	public string VitalStatsToString(bool all)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x5665960", Offset = "0x5664960", VA = "0x5665960")]
	public PhotonPeer(ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x5665D60", Offset = "0x5664D60", VA = "0x5665D60")]
	public PhotonPeer(IPhotonPeerListener listener, ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x5665D90", Offset = "0x5664D90", VA = "0x5665D90", Slot = "6")]
	public virtual bool Connect(string serverAddress, string appId, [Optional] object photonToken, [Optional] object customInitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x5665DC0", Offset = "0x5664DC0", VA = "0x5665DC0", Slot = "7")]
	public virtual bool Connect(string serverAddress, string proxyServerAddress, string appId, object photonToken, [Optional] object customInitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x5665C00", Offset = "0x5664C00", VA = "0x5665C00")]
	private void CreatePeerBase()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x56666C0", Offset = "0x56656C0", VA = "0x56666C0", Slot = "8")]
	public virtual void Disconnect()
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x5666830", Offset = "0x5665830", VA = "0x5666830")]
	internal void OnDisconnectMessageCall(DisconnectMessage dm)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x5666850", Offset = "0x5665850", VA = "0x5666850", Slot = "9")]
	public virtual void StopThread()
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x56669C0", Offset = "0x56659C0", VA = "0x56669C0", Slot = "10")]
	public virtual void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x56669F0", Offset = "0x56659F0", VA = "0x56669F0")]
	public bool EstablishEncryption()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x5666B30", Offset = "0x5665B30", VA = "0x5666B30")]
	public bool InitDatagramEncryption(byte[] encryptionSecret, byte[] hmacSecret, bool randomizedSequenceNumbers = false, bool chainingModeGCM = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x5667130", Offset = "0x5666130", VA = "0x5667130")]
	public void InitPayloadEncryption(byte[] secret)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x5667150", Offset = "0x5666150", VA = "0x5667150", Slot = "11")]
	public virtual void Service()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x56671A0", Offset = "0x56661A0", VA = "0x56671A0", Slot = "12")]
	public virtual bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x56672A0", Offset = "0x56662A0", VA = "0x56672A0", Slot = "13")]
	public virtual bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x56673A0", Offset = "0x56663A0", VA = "0x56673A0", Slot = "14")]
	public virtual bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x56674B0", Offset = "0x56664B0", VA = "0x56674B0", Slot = "15")]
	public virtual bool SendOperation(byte operationCode, Dictionary<byte, object> operationParameters, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x5667A60", Offset = "0x5666A60", VA = "0x5667A60", Slot = "16")]
	public virtual bool SendOperation(byte operationCode, ParameterDictionary operationParameters, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x5668010", Offset = "0x5667010", VA = "0x5668010")]
	public static bool RegisterType(Type customType, byte code, SerializeMethod serializeMethod, DeserializeMethod constructor)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x5668280", Offset = "0x5667280", VA = "0x5668280")]
	public static bool RegisterType(Type customType, byte code, SerializeStreamMethod serializeMethod, DeserializeStreamMethod constructor)
	{
		return default(bool);
	}
}
