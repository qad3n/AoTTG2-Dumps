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
		[Address(RVA = "0x3E73F10", Offset = "0x3E73F10", VA = "0x3E73F10")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x3E73F20", Offset = "0x3E73F20", VA = "0x3E73F20")]
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
		[Address(RVA = "0x3E73F30", Offset = "0x3E73F30", VA = "0x3E73F30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x3E73F40", Offset = "0x3E73F40", VA = "0x3E73F40")]
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
		[Address(RVA = "0x3E73F50", Offset = "0x3E73F50", VA = "0x3E73F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000052")]
	protected internal byte ClientSdkIdShifted
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x3E73FD0", Offset = "0x3E73FD0", VA = "0x3E73FD0")]
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
		[Address(RVA = "0x3E73FE0", Offset = "0x3E73FE0", VA = "0x3E73FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public static string Version
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x3E74300", Offset = "0x3E74300", VA = "0x3E74300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public SerializationProtocol SerializationProtocolType
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x3E74620", Offset = "0x3E74620", VA = "0x3E74620")]
		[CompilerGenerated]
		get
		{
			return default(SerializationProtocol);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x3E74630", Offset = "0x3E74630", VA = "0x3E74630")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public Type SocketImplementation
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x3E74640", Offset = "0x3E74640", VA = "0x3E74640")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x3E74650", Offset = "0x3E74650", VA = "0x3E74650")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public int SocketErrorCode
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x3E74660", Offset = "0x3E74660", VA = "0x3E74660")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000058")]
	public IPhotonPeerListener Listener
	{
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x3E74680", Offset = "0x3E74680", VA = "0x3E74680")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x3E74690", Offset = "0x3E74690", VA = "0x3E74690")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public bool ReuseEventInstance
	{
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x3E74800", Offset = "0x3E74800", VA = "0x3E74800")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x3E74810", Offset = "0x3E74810", VA = "0x3E74810")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public bool UseByteArraySlicePoolForEvents
	{
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x3E74900", Offset = "0x3E74900", VA = "0x3E74900")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x3E74910", Offset = "0x3E74910", VA = "0x3E74910")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public bool WrapIncomingStructs
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x3E74920", Offset = "0x3E74920", VA = "0x3E74920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x3E74930", Offset = "0x3E74930", VA = "0x3E74930")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public ByteArraySlicePool ByteArraySlicePool
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x3E74940", Offset = "0x3E74940", VA = "0x3E74940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public long BytesIn
	{
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x3E74970", Offset = "0x3E74970", VA = "0x3E74970")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700005E")]
	public long BytesOut
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x3E74990", Offset = "0x3E74990", VA = "0x3E74990")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700005F")]
	public int ByteCountCurrentDispatch
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x3E749B0", Offset = "0x3E749B0", VA = "0x3E749B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000060")]
	public string CommandInfoCurrentDispatch
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x3E749D0", Offset = "0x3E749D0", VA = "0x3E749D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	public int ByteCountLastOperation
	{
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x3E74A20", Offset = "0x3E74A20", VA = "0x3E74A20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000062")]
	public bool EnableServerTracing
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x3E74A40", Offset = "0x3E74A40", VA = "0x3E74A40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x3E74A50", Offset = "0x3E74A50", VA = "0x3E74A50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public byte QuickResendAttempts
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x3E74A60", Offset = "0x3E74A60", VA = "0x3E74A60")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x3E74A70", Offset = "0x3E74A70", VA = "0x3E74A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public PeerStateValue PeerState
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x3E74A80", Offset = "0x3E74A80", VA = "0x3E74A80")]
		get
		{
			return default(PeerStateValue);
		}
	}

	[Token(Token = "0x17000065")]
	public string PeerID
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x3E74AB0", Offset = "0x3E74AB0", VA = "0x3E74AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public int QueuedIncomingCommands
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x3E74AE0", Offset = "0x3E74AE0", VA = "0x3E74AE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000067")]
	public int QueuedOutgoingCommands
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x3E74B10", Offset = "0x3E74B10", VA = "0x3E74B10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000068")]
	public bool CrcEnabled
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x3E74E70", Offset = "0x3E74E70", VA = "0x3E74E70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x3E74E80", Offset = "0x3E74E80", VA = "0x3E74E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public int PacketLossByCrc
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x3E74EF0", Offset = "0x3E74EF0", VA = "0x3E74EF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006A")]
	public int PacketLossByChallenge
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x3E74F10", Offset = "0x3E74F10", VA = "0x3E74F10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public int SentReliableCommandsCount
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x3E74F30", Offset = "0x3E74F30", VA = "0x3E74F30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006C")]
	public int ResentReliableCommands
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x3E74F60", Offset = "0x3E74F60", VA = "0x3E74F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	public int DisconnectTimeout
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x3E75000", Offset = "0x3E75000", VA = "0x3E75000")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x3E75010", Offset = "0x3E75010", VA = "0x3E75010")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public int ServerTimeInMilliSeconds
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x3E75040", Offset = "0x3E75040", VA = "0x3E75040")]
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
		[Address(RVA = "0x3E75090", Offset = "0x3E75090", VA = "0x3E75090")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public int ConnectionTime
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x3E75070", Offset = "0x3E75070", VA = "0x3E75070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public int LastSendAckTime
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x3E751A0", Offset = "0x3E751A0", VA = "0x3E751A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000072")]
	public int LastSendOutgoingTime
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x3E751C0", Offset = "0x3E751C0", VA = "0x3E751C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	public int LongestSentCall
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x3E751E0", Offset = "0x3E751E0", VA = "0x3E751E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x3E75200", Offset = "0x3E75200", VA = "0x3E75200")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public int RoundTripTime
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x3E75220", Offset = "0x3E75220", VA = "0x3E75220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000075")]
	public int RoundTripTimeVariance
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x3E75240", Offset = "0x3E75240", VA = "0x3E75240")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000076")]
	public int LastRoundTripTime
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x3E75260", Offset = "0x3E75260", VA = "0x3E75260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000077")]
	public int TimestampOfLastSocketReceive
	{
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x3E75280", Offset = "0x3E75280", VA = "0x3E75280")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000078")]
	public string ServerAddress
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x3E752A0", Offset = "0x3E752A0", VA = "0x3E752A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public string ServerIpAddress
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x3E752C0", Offset = "0x3E752C0", VA = "0x3E752C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	public ConnectionProtocol UsedProtocol
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x3E74FE0", Offset = "0x3E74FE0", VA = "0x3E74FE0")]
		get
		{
			return default(ConnectionProtocol);
		}
	}

	[Token(Token = "0x1700007B")]
	public ConnectionProtocol TransportProtocol
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x3E75300", Offset = "0x3E75300", VA = "0x3E75300")]
		[CompilerGenerated]
		get
		{
			return default(ConnectionProtocol);
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x3E75310", Offset = "0x3E75310", VA = "0x3E75310")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public virtual bool IsSimulationEnabled
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x3E75320", Offset = "0x3E75320", VA = "0x3E75320", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x3E75370", Offset = "0x3E75370", VA = "0x3E75370", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public NetworkSimulationSet NetworkSimulationSettings
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x3E75350", Offset = "0x3E75350", VA = "0x3E75350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public int MaximumTransferUnit
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x3E754A0", Offset = "0x3E754A0", VA = "0x3E754A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x3E754B0", Offset = "0x3E754B0", VA = "0x3E754B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public bool IsEncryptionAvailable
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x3E75580", Offset = "0x3E75580", VA = "0x3E75580")]
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
		[Address(RVA = "0x3E755A0", Offset = "0x3E755A0", VA = "0x3E755A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x3E755B0", Offset = "0x3E755B0", VA = "0x3E755B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public TrafficStats TrafficStatsIncoming
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x3E755C0", Offset = "0x3E755C0", VA = "0x3E755C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x3E755D0", Offset = "0x3E755D0", VA = "0x3E755D0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public TrafficStats TrafficStatsOutgoing
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x3E755F0", Offset = "0x3E755F0", VA = "0x3E755F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x3E75600", Offset = "0x3E75600", VA = "0x3E75600")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public TrafficStatsGameLevel TrafficStatsGameLevel
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x3E75620", Offset = "0x3E75620", VA = "0x3E75620")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x3E75630", Offset = "0x3E75630", VA = "0x3E75630")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public long TrafficStatsElapsedMs
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x3E75650", Offset = "0x3E75650", VA = "0x3E75650")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000085")]
	public bool TrafficStatsEnabled
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x3E75670", Offset = "0x3E75670", VA = "0x3E75670")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x3E75680", Offset = "0x3E75680", VA = "0x3E75680")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public Type PayloadEncryptorType
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x3E75F40", Offset = "0x3E75F40", VA = "0x3E75F40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x3E75F50", Offset = "0x3E75F50", VA = "0x3E75F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public Type EncryptorType
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x3E760D0", Offset = "0x3E760D0", VA = "0x3E760D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x3E760E0", Offset = "0x3E760E0", VA = "0x3E760E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public int CountDiscarded
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x3E76260", Offset = "0x3E76260", VA = "0x3E76260")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x3E76270", Offset = "0x3E76270", VA = "0x3E76270")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public int DeltaUnreliableNumber
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x3E76280", Offset = "0x3E76280", VA = "0x3E76280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x3E76290", Offset = "0x3E76290", VA = "0x3E76290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public event Action<DisconnectMessage> OnDisconnectMessage
	{
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x3E746A0", Offset = "0x3E746A0", VA = "0x3E746A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x3E74750", Offset = "0x3E74750", VA = "0x3E74750")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x3E73FB0", Offset = "0x3E73FB0", VA = "0x3E73FB0")]
	[Obsolete("Use the ITrafficRecorder to capture all traffic instead.")]
	public string CommandLogToString()
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x3E74B40", Offset = "0x3E74B40", VA = "0x3E74B40")]
	public static void MessageBufferPoolTrim(int countOfBuffers)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x3E74DE0", Offset = "0x3E74DE0", VA = "0x3E74DE0")]
	public static int MessageBufferPoolSize()
	{
		return default(int);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x3E75880", Offset = "0x3E75880", VA = "0x3E75880")]
	public void TrafficStatsReset()
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x3E756E0", Offset = "0x3E756E0", VA = "0x3E756E0")]
	internal void InitializeTrafficStats()
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x3E758F0", Offset = "0x3E758F0", VA = "0x3E758F0")]
	public string VitalStatsToString(bool all)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x3E762A0", Offset = "0x3E762A0", VA = "0x3E762A0")]
	public PhotonPeer(ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x3E766A0", Offset = "0x3E766A0", VA = "0x3E766A0")]
	public PhotonPeer(IPhotonPeerListener listener, ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x3E766D0", Offset = "0x3E766D0", VA = "0x3E766D0", Slot = "6")]
	public virtual bool Connect(string serverAddress, string appId, [Optional] object photonToken, [Optional] object customInitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3E76700", Offset = "0x3E76700", VA = "0x3E76700", Slot = "7")]
	public virtual bool Connect(string serverAddress, string proxyServerAddress, string appId, object photonToken, [Optional] object customInitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3E76540", Offset = "0x3E76540", VA = "0x3E76540")]
	private void CreatePeerBase()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x3E77090", Offset = "0x3E77090", VA = "0x3E77090", Slot = "8")]
	public virtual void Disconnect()
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x3E77210", Offset = "0x3E77210", VA = "0x3E77210")]
	internal void OnDisconnectMessageCall(DisconnectMessage dm)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x3E77230", Offset = "0x3E77230", VA = "0x3E77230", Slot = "9")]
	public virtual void StopThread()
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x3E773B0", Offset = "0x3E773B0", VA = "0x3E773B0", Slot = "10")]
	public virtual void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x3E773E0", Offset = "0x3E773E0", VA = "0x3E773E0")]
	public bool EstablishEncryption()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x3E77520", Offset = "0x3E77520", VA = "0x3E77520")]
	public bool InitDatagramEncryption(byte[] encryptionSecret, byte[] hmacSecret, bool randomizedSequenceNumbers = false, bool chainingModeGCM = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x3E77B80", Offset = "0x3E77B80", VA = "0x3E77B80")]
	public void InitPayloadEncryption(byte[] secret)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x3E77BA0", Offset = "0x3E77BA0", VA = "0x3E77BA0", Slot = "11")]
	public virtual void Service()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x3E77BF0", Offset = "0x3E77BF0", VA = "0x3E77BF0", Slot = "12")]
	public virtual bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x3E77D00", Offset = "0x3E77D00", VA = "0x3E77D00", Slot = "13")]
	public virtual bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x3E77E10", Offset = "0x3E77E10", VA = "0x3E77E10", Slot = "14")]
	public virtual bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x3E77F30", Offset = "0x3E77F30", VA = "0x3E77F30", Slot = "15")]
	public virtual bool SendOperation(byte operationCode, Dictionary<byte, object> operationParameters, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x3E78520", Offset = "0x3E78520", VA = "0x3E78520", Slot = "16")]
	public virtual bool SendOperation(byte operationCode, ParameterDictionary operationParameters, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x3E78B10", Offset = "0x3E78B10", VA = "0x3E78B10")]
	public static bool RegisterType(Type customType, byte code, SerializeMethod serializeMethod, DeserializeMethod constructor)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x3E78D70", Offset = "0x3E78D70", VA = "0x3E78D70")]
	public static bool RegisterType(Type customType, byte code, SerializeStreamMethod serializeMethod, DeserializeStreamMethod constructor)
	{
		return default(bool);
	}
}
