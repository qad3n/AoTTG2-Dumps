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
		[Address(RVA = "0x3B7E5C0", Offset = "0x3B7E5C0", VA = "0x3B7E5C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x3B7E5D0", Offset = "0x3B7E5D0", VA = "0x3B7E5D0")]
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
		[Address(RVA = "0x3B7E5E0", Offset = "0x3B7E5E0", VA = "0x3B7E5E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x3B7E5F0", Offset = "0x3B7E5F0", VA = "0x3B7E5F0")]
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
		[Address(RVA = "0x3B7E600", Offset = "0x3B7E600", VA = "0x3B7E600")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000052")]
	protected internal byte ClientSdkIdShifted
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x3B7E680", Offset = "0x3B7E680", VA = "0x3B7E680")]
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
		[Address(RVA = "0x3B7E690", Offset = "0x3B7E690", VA = "0x3B7E690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public static string Version
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x3B7E9B0", Offset = "0x3B7E9B0", VA = "0x3B7E9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public SerializationProtocol SerializationProtocolType
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x3B7ECD0", Offset = "0x3B7ECD0", VA = "0x3B7ECD0")]
		[CompilerGenerated]
		get
		{
			return default(SerializationProtocol);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x3B7ECE0", Offset = "0x3B7ECE0", VA = "0x3B7ECE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public Type SocketImplementation
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x3B7ECF0", Offset = "0x3B7ECF0", VA = "0x3B7ECF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x3B7ED00", Offset = "0x3B7ED00", VA = "0x3B7ED00")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public int SocketErrorCode
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x3B7ED10", Offset = "0x3B7ED10", VA = "0x3B7ED10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000058")]
	public IPhotonPeerListener Listener
	{
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x3B7ED30", Offset = "0x3B7ED30", VA = "0x3B7ED30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x3B7ED40", Offset = "0x3B7ED40", VA = "0x3B7ED40")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public bool ReuseEventInstance
	{
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x3B7EEB0", Offset = "0x3B7EEB0", VA = "0x3B7EEB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x3B7EEC0", Offset = "0x3B7EEC0", VA = "0x3B7EEC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public bool UseByteArraySlicePoolForEvents
	{
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x3B7EFB0", Offset = "0x3B7EFB0", VA = "0x3B7EFB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x3B7EFC0", Offset = "0x3B7EFC0", VA = "0x3B7EFC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public bool WrapIncomingStructs
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x3B7EFD0", Offset = "0x3B7EFD0", VA = "0x3B7EFD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x3B7EFE0", Offset = "0x3B7EFE0", VA = "0x3B7EFE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public ByteArraySlicePool ByteArraySlicePool
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x3B7EFF0", Offset = "0x3B7EFF0", VA = "0x3B7EFF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public long BytesIn
	{
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x3B7F020", Offset = "0x3B7F020", VA = "0x3B7F020")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700005E")]
	public long BytesOut
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x3B7F040", Offset = "0x3B7F040", VA = "0x3B7F040")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700005F")]
	public int ByteCountCurrentDispatch
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x3B7F060", Offset = "0x3B7F060", VA = "0x3B7F060")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000060")]
	public string CommandInfoCurrentDispatch
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x3B7F080", Offset = "0x3B7F080", VA = "0x3B7F080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	public int ByteCountLastOperation
	{
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x3B7F0D0", Offset = "0x3B7F0D0", VA = "0x3B7F0D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000062")]
	public bool EnableServerTracing
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x3B7F0F0", Offset = "0x3B7F0F0", VA = "0x3B7F0F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x3B7F100", Offset = "0x3B7F100", VA = "0x3B7F100")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public byte QuickResendAttempts
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x3B7F110", Offset = "0x3B7F110", VA = "0x3B7F110")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x3B7F120", Offset = "0x3B7F120", VA = "0x3B7F120")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public PeerStateValue PeerState
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x3B7F130", Offset = "0x3B7F130", VA = "0x3B7F130")]
		get
		{
			return default(PeerStateValue);
		}
	}

	[Token(Token = "0x17000065")]
	public string PeerID
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x3B7F160", Offset = "0x3B7F160", VA = "0x3B7F160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public int QueuedIncomingCommands
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x3B7F190", Offset = "0x3B7F190", VA = "0x3B7F190")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000067")]
	public int QueuedOutgoingCommands
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x3B7F1C0", Offset = "0x3B7F1C0", VA = "0x3B7F1C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000068")]
	public bool CrcEnabled
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x3B7F520", Offset = "0x3B7F520", VA = "0x3B7F520")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x3B7F530", Offset = "0x3B7F530", VA = "0x3B7F530")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public int PacketLossByCrc
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x3B7F5A0", Offset = "0x3B7F5A0", VA = "0x3B7F5A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006A")]
	public int PacketLossByChallenge
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x3B7F5C0", Offset = "0x3B7F5C0", VA = "0x3B7F5C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public int SentReliableCommandsCount
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x3B7F5E0", Offset = "0x3B7F5E0", VA = "0x3B7F5E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006C")]
	public int ResentReliableCommands
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x3B7F610", Offset = "0x3B7F610", VA = "0x3B7F610")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	public int DisconnectTimeout
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x3B7F6B0", Offset = "0x3B7F6B0", VA = "0x3B7F6B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x3B7F6C0", Offset = "0x3B7F6C0", VA = "0x3B7F6C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public int ServerTimeInMilliSeconds
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x3B7F6F0", Offset = "0x3B7F6F0", VA = "0x3B7F6F0")]
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
		[Address(RVA = "0x3B7F740", Offset = "0x3B7F740", VA = "0x3B7F740")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public int ConnectionTime
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x3B7F720", Offset = "0x3B7F720", VA = "0x3B7F720")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public int LastSendAckTime
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x3B7F850", Offset = "0x3B7F850", VA = "0x3B7F850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000072")]
	public int LastSendOutgoingTime
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x3B7F870", Offset = "0x3B7F870", VA = "0x3B7F870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	public int LongestSentCall
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x3B7F890", Offset = "0x3B7F890", VA = "0x3B7F890")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x3B7F8B0", Offset = "0x3B7F8B0", VA = "0x3B7F8B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public int RoundTripTime
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x3B7F8D0", Offset = "0x3B7F8D0", VA = "0x3B7F8D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000075")]
	public int RoundTripTimeVariance
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x3B7F8F0", Offset = "0x3B7F8F0", VA = "0x3B7F8F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000076")]
	public int LastRoundTripTime
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x3B7F910", Offset = "0x3B7F910", VA = "0x3B7F910")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000077")]
	public int TimestampOfLastSocketReceive
	{
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x3B7F930", Offset = "0x3B7F930", VA = "0x3B7F930")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000078")]
	public string ServerAddress
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x3B7F950", Offset = "0x3B7F950", VA = "0x3B7F950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public string ServerIpAddress
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x3B7F970", Offset = "0x3B7F970", VA = "0x3B7F970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	public ConnectionProtocol UsedProtocol
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x3B7F690", Offset = "0x3B7F690", VA = "0x3B7F690")]
		get
		{
			return default(ConnectionProtocol);
		}
	}

	[Token(Token = "0x1700007B")]
	public ConnectionProtocol TransportProtocol
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x3B7F9B0", Offset = "0x3B7F9B0", VA = "0x3B7F9B0")]
		[CompilerGenerated]
		get
		{
			return default(ConnectionProtocol);
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x3B7F9C0", Offset = "0x3B7F9C0", VA = "0x3B7F9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public virtual bool IsSimulationEnabled
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x3B7F9D0", Offset = "0x3B7F9D0", VA = "0x3B7F9D0", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x3B7FA20", Offset = "0x3B7FA20", VA = "0x3B7FA20", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public NetworkSimulationSet NetworkSimulationSettings
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x3B7FA00", Offset = "0x3B7FA00", VA = "0x3B7FA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public int MaximumTransferUnit
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x3B7FB50", Offset = "0x3B7FB50", VA = "0x3B7FB50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x3B7FB60", Offset = "0x3B7FB60", VA = "0x3B7FB60")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public bool IsEncryptionAvailable
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x3B7FC30", Offset = "0x3B7FC30", VA = "0x3B7FC30")]
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
		[Address(RVA = "0x3B7FC50", Offset = "0x3B7FC50", VA = "0x3B7FC50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x3B7FC60", Offset = "0x3B7FC60", VA = "0x3B7FC60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public TrafficStats TrafficStatsIncoming
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x3B7FC70", Offset = "0x3B7FC70", VA = "0x3B7FC70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x3B7FC80", Offset = "0x3B7FC80", VA = "0x3B7FC80")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public TrafficStats TrafficStatsOutgoing
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x3B7FCA0", Offset = "0x3B7FCA0", VA = "0x3B7FCA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x3B7FCB0", Offset = "0x3B7FCB0", VA = "0x3B7FCB0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public TrafficStatsGameLevel TrafficStatsGameLevel
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x3B7FCD0", Offset = "0x3B7FCD0", VA = "0x3B7FCD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x3B7FCE0", Offset = "0x3B7FCE0", VA = "0x3B7FCE0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public long TrafficStatsElapsedMs
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x3B7FD00", Offset = "0x3B7FD00", VA = "0x3B7FD00")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000085")]
	public bool TrafficStatsEnabled
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x3B7FD20", Offset = "0x3B7FD20", VA = "0x3B7FD20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x3B7FD30", Offset = "0x3B7FD30", VA = "0x3B7FD30")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public Type PayloadEncryptorType
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x3B805F0", Offset = "0x3B805F0", VA = "0x3B805F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x3B80600", Offset = "0x3B80600", VA = "0x3B80600")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public Type EncryptorType
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x3B80780", Offset = "0x3B80780", VA = "0x3B80780")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x3B80790", Offset = "0x3B80790", VA = "0x3B80790")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public int CountDiscarded
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x3B80910", Offset = "0x3B80910", VA = "0x3B80910")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x3B80920", Offset = "0x3B80920", VA = "0x3B80920")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public int DeltaUnreliableNumber
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x3B80930", Offset = "0x3B80930", VA = "0x3B80930")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x3B80940", Offset = "0x3B80940", VA = "0x3B80940")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public event Action<DisconnectMessage> OnDisconnectMessage
	{
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x3B7ED50", Offset = "0x3B7ED50", VA = "0x3B7ED50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x3B7EE00", Offset = "0x3B7EE00", VA = "0x3B7EE00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x3B7E660", Offset = "0x3B7E660", VA = "0x3B7E660")]
	[Obsolete("Use the ITrafficRecorder to capture all traffic instead.")]
	public string CommandLogToString()
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x3B7F1F0", Offset = "0x3B7F1F0", VA = "0x3B7F1F0")]
	public static void MessageBufferPoolTrim(int countOfBuffers)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x3B7F490", Offset = "0x3B7F490", VA = "0x3B7F490")]
	public static int MessageBufferPoolSize()
	{
		return default(int);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x3B7FF30", Offset = "0x3B7FF30", VA = "0x3B7FF30")]
	public void TrafficStatsReset()
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x3B7FD90", Offset = "0x3B7FD90", VA = "0x3B7FD90")]
	internal void InitializeTrafficStats()
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x3B7FFA0", Offset = "0x3B7FFA0", VA = "0x3B7FFA0")]
	public string VitalStatsToString(bool all)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x3B80950", Offset = "0x3B80950", VA = "0x3B80950")]
	public PhotonPeer(ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x3B80D50", Offset = "0x3B80D50", VA = "0x3B80D50")]
	public PhotonPeer(IPhotonPeerListener listener, ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x3B80D80", Offset = "0x3B80D80", VA = "0x3B80D80", Slot = "6")]
	public virtual bool Connect(string serverAddress, string appId, [Optional] object photonToken, [Optional] object customInitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3B80DB0", Offset = "0x3B80DB0", VA = "0x3B80DB0", Slot = "7")]
	public virtual bool Connect(string serverAddress, string proxyServerAddress, string appId, object photonToken, [Optional] object customInitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3B80BF0", Offset = "0x3B80BF0", VA = "0x3B80BF0")]
	private void CreatePeerBase()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x3B81740", Offset = "0x3B81740", VA = "0x3B81740", Slot = "8")]
	public virtual void Disconnect()
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x3B818C0", Offset = "0x3B818C0", VA = "0x3B818C0")]
	internal void OnDisconnectMessageCall(DisconnectMessage dm)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x3B818E0", Offset = "0x3B818E0", VA = "0x3B818E0", Slot = "9")]
	public virtual void StopThread()
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x3B81A60", Offset = "0x3B81A60", VA = "0x3B81A60", Slot = "10")]
	public virtual void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x3B81A90", Offset = "0x3B81A90", VA = "0x3B81A90")]
	public bool EstablishEncryption()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x3B81BD0", Offset = "0x3B81BD0", VA = "0x3B81BD0")]
	public bool InitDatagramEncryption(byte[] encryptionSecret, byte[] hmacSecret, bool randomizedSequenceNumbers = false, bool chainingModeGCM = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x3B82230", Offset = "0x3B82230", VA = "0x3B82230")]
	public void InitPayloadEncryption(byte[] secret)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x3B82250", Offset = "0x3B82250", VA = "0x3B82250", Slot = "11")]
	public virtual void Service()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3B822A0", Offset = "0x3B822A0", VA = "0x3B822A0", Slot = "12")]
	public virtual bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3B823B0", Offset = "0x3B823B0", VA = "0x3B823B0", Slot = "13")]
	public virtual bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3B824C0", Offset = "0x3B824C0", VA = "0x3B824C0", Slot = "14")]
	public virtual bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3B825E0", Offset = "0x3B825E0", VA = "0x3B825E0", Slot = "15")]
	public virtual bool SendOperation(byte operationCode, Dictionary<byte, object> operationParameters, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3B82BD0", Offset = "0x3B82BD0", VA = "0x3B82BD0", Slot = "16")]
	public virtual bool SendOperation(byte operationCode, ParameterDictionary operationParameters, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3B831C0", Offset = "0x3B831C0", VA = "0x3B831C0")]
	public static bool RegisterType(Type customType, byte code, SerializeMethod serializeMethod, DeserializeMethod constructor)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x3B83420", Offset = "0x3B83420", VA = "0x3B83420")]
	public static bool RegisterType(Type customType, byte code, SerializeStreamMethod serializeMethod, DeserializeStreamMethod constructor)
	{
		return default(bool);
	}
}
