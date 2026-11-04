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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
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
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
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
		[Address(RVA = "0x1CD35B0", Offset = "0x1CD1BB0", VA = "0x181CD35B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000052")]
	protected internal byte ClientSdkIdShifted
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x1CD3070", Offset = "0x1CD1670", VA = "0x181CD3070")]
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
		[Address(RVA = "0x1CD3080", Offset = "0x1CD1680", VA = "0x181CD3080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	public static string Version
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x1CD3A30", Offset = "0x1CD2030", VA = "0x181CD3A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public SerializationProtocol SerializationProtocolType
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(SerializationProtocol);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public Type SocketImplementation
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public int SocketErrorCode
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x1CD3950", Offset = "0x1CD1F50", VA = "0x181CD3950")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000058")]
	public IPhotonPeerListener Listener
	{
		[Token(Token = "0x6000169")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600016A")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public bool ReuseEventInstance
	{
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x1CD3820", Offset = "0x1CD1E20", VA = "0x181CD3820")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x1CD44E0", Offset = "0x1CD2AE0", VA = "0x181CD44E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public bool UseByteArraySlicePoolForEvents
	{
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x1CD3A00", Offset = "0x1CD2000", VA = "0x181CD3A00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x1C5E470", Offset = "0x1C5CA70", VA = "0x181C5E470")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public bool WrapIncomingStructs
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x1CD3DA0", Offset = "0x1CD23A0", VA = "0x181CD3DA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x1CD4630", Offset = "0x1CD2C30", VA = "0x181CD4630")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public ByteArraySlicePool ByteArraySlicePool
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x1CD2FA0", Offset = "0x1CD15A0", VA = "0x181CD2FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public long BytesIn
	{
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x1CD3010", Offset = "0x1CD1610", VA = "0x181CD3010")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700005E")]
	public long BytesOut
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x1CD3040", Offset = "0x1CD1640", VA = "0x181CD3040")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700005F")]
	public int ByteCountCurrentDispatch
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x1CD2FD0", Offset = "0x1CD15D0", VA = "0x181CD2FD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000060")]
	public string CommandInfoCurrentDispatch
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x1CD33F0", Offset = "0x1CD19F0", VA = "0x181CD33F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	public int ByteCountLastOperation
	{
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x1CD2FF0", Offset = "0x1CD15F0", VA = "0x181CD2FF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000062")]
	public bool EnableServerTracing
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0xABD390", Offset = "0xABB990", VA = "0x180ABD390")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0xABD3A0", Offset = "0xABB9A0", VA = "0x180ABD3A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public byte QuickResendAttempts
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x1CD3780", Offset = "0x1CD1D80", VA = "0x181CD3780")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x1CD44D0", Offset = "0x1CD2AD0", VA = "0x181CD44D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public PeerStateValue PeerState
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x1CD36E0", Offset = "0x1CD1CE0", VA = "0x181CD36E0")]
		get
		{
			return default(PeerStateValue);
		}
	}

	[Token(Token = "0x17000065")]
	public string PeerID
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x1CD36B0", Offset = "0x1CD1CB0", VA = "0x181CD36B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public int QueuedIncomingCommands
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x1CD3720", Offset = "0x1CD1D20", VA = "0x181CD3720")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000067")]
	public int QueuedOutgoingCommands
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x1CD3750", Offset = "0x1CD1D50", VA = "0x181CD3750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000068")]
	public bool CrcEnabled
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x1CD3480", Offset = "0x1CD1A80", VA = "0x181CD3480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x1CD3E70", Offset = "0x1CD2470", VA = "0x181CD3E70")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public int PacketLossByCrc
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x1CD3680", Offset = "0x1CD1C80", VA = "0x181CD3680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006A")]
	public int PacketLossByChallenge
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x1CD3660", Offset = "0x1CD1C60", VA = "0x181CD3660")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public int SentReliableCommandsCount
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x1CD3870", Offset = "0x1CD1E70", VA = "0x181CD3870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006C")]
	public int ResentReliableCommands
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x1CD3790", Offset = "0x1CD1D90", VA = "0x181CD3790")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	public int DisconnectTimeout
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x1CD34A0", Offset = "0x1CD1AA0", VA = "0x181CD34A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x1CD3F00", Offset = "0x1CD2500", VA = "0x181CD3F00")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public int ServerTimeInMilliSeconds
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x1CD3900", Offset = "0x1CD1F00", VA = "0x181CD3900")]
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
		[Address(RVA = "0x1CD4150", Offset = "0x1CD2750", VA = "0x181CD4150")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public int ConnectionTime
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x1CD3440", Offset = "0x1CD1A40", VA = "0x181CD3440")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public int LastSendAckTime
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x1CD3550", Offset = "0x1CD1B50", VA = "0x181CD3550")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000072")]
	public int LastSendOutgoingTime
	{
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x1CD3580", Offset = "0x1CD1B80", VA = "0x181CD3580")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	public int LongestSentCall
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x1CD35F0", Offset = "0x1CD1BF0", VA = "0x181CD35F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x1CD4290", Offset = "0x1CD2890", VA = "0x181CD4290")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public int RoundTripTime
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x1CD3850", Offset = "0x1CD1E50", VA = "0x181CD3850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000075")]
	public int RoundTripTimeVariance
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x1CD3830", Offset = "0x1CD1E30", VA = "0x181CD3830")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000076")]
	public int LastRoundTripTime
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x1CD3530", Offset = "0x1CD1B30", VA = "0x181CD3530")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000077")]
	public int TimestampOfLastSocketReceive
	{
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x1CD3980", Offset = "0x1CD1F80", VA = "0x181CD3980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000078")]
	public string ServerAddress
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x1CD38A0", Offset = "0x1CD1EA0", VA = "0x181CD38A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public string ServerIpAddress
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x1CD38C0", Offset = "0x1CD1EC0", VA = "0x181CD38C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	public ConnectionProtocol UsedProtocol
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x1CD3A10", Offset = "0x1CD2010", VA = "0x181CD3A10")]
		get
		{
			return default(ConnectionProtocol);
		}
	}

	[Token(Token = "0x1700007B")]
	public ConnectionProtocol TransportProtocol
	{
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x1CD39F0", Offset = "0x1CD1FF0", VA = "0x181CD39F0")]
		[CompilerGenerated]
		get
		{
			return default(ConnectionProtocol);
		}
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x1CD4620", Offset = "0x1CD2C20", VA = "0x181CD4620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public virtual bool IsSimulationEnabled
	{
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x1CD3500", Offset = "0x1CD1B00", VA = "0x181CD3500", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x1CD4040", Offset = "0x1CD2640", VA = "0x181CD4040", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public NetworkSimulationSet NetworkSimulationSettings
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x1CD3630", Offset = "0x1CD1C30", VA = "0x181CD3630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public int MaximumTransferUnit
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x1CD3620", Offset = "0x1CD1C20", VA = "0x181CD3620")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x1CD42C0", Offset = "0x1CD28C0", VA = "0x181CD42C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public bool IsEncryptionAvailable
	{
		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x1CD34C0", Offset = "0x1CD1AC0", VA = "0x181CD34C0")]
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
		[Address(RVA = "0x1CD34F0", Offset = "0x1CD1AF0", VA = "0x181CD34F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x1CD4030", Offset = "0x1CD2630", VA = "0x181CD4030")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public TrafficStats TrafficStatsIncoming
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public TrafficStats TrafficStatsOutgoing
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public TrafficStatsGameLevel TrafficStatsGameLevel
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x87BC50", Offset = "0x87A250", VA = "0x18087BC50")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public long TrafficStatsElapsedMs
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x1CD39B0", Offset = "0x1CD1FB0", VA = "0x181CD39B0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000085")]
	public bool TrafficStatsEnabled
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x1CD39E0", Offset = "0x1CD1FE0", VA = "0x181CD39E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x1CD45B0", Offset = "0x1CD2BB0", VA = "0x181CD45B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public Type PayloadEncryptorType
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x1CD36A0", Offset = "0x1CD1CA0", VA = "0x181CD36A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x1CD43B0", Offset = "0x1CD29B0", VA = "0x181CD43B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public Type EncryptorType
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x1CD34B0", Offset = "0x1CD1AB0", VA = "0x181CD34B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x1CD3F10", Offset = "0x1CD2510", VA = "0x181CD3F10")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public int CountDiscarded
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x1CD3470", Offset = "0x1CD1A70", VA = "0x181CD3470")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x1CD3E60", Offset = "0x1CD2460", VA = "0x181CD3E60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public int DeltaUnreliableNumber
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x1CD3490", Offset = "0x1CD1A90", VA = "0x181CD3490")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x1CD3EF0", Offset = "0x1CD24F0", VA = "0x181CD3EF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	public event Action<DisconnectMessage> OnDisconnectMessage
	{
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x1CD2EF0", Offset = "0x1CD14F0", VA = "0x181CD2EF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x1CD3DB0", Offset = "0x1CD23B0", VA = "0x181CD3DB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x1CCFC40", Offset = "0x1CCE240", VA = "0x181CCFC40")]
	[Obsolete("Use the ITrafficRecorder to capture all traffic instead.")]
	public string CommandLogToString()
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x1CD10C0", Offset = "0x1CCF6C0", VA = "0x181CD10C0")]
	public static void MessageBufferPoolTrim(int countOfBuffers)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x1CD1050", Offset = "0x1CCF650", VA = "0x181CD1050")]
	public static int MessageBufferPoolSize()
	{
		return default(int);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x1CD2390", Offset = "0x1CD0990", VA = "0x181CD2390")]
	public void TrafficStatsReset()
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x1CD0EC0", Offset = "0x1CCF4C0", VA = "0x181CD0EC0")]
	internal void InitializeTrafficStats()
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x1CD2450", Offset = "0x1CD0A50", VA = "0x181CD2450")]
	public string VitalStatsToString(bool all)
	{
		return null;
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x1CD2C50", Offset = "0x1CD1250", VA = "0x181CD2C50")]
	public PhotonPeer(ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x1CD2C10", Offset = "0x1CD1210", VA = "0x181CD2C10")]
	public PhotonPeer(IPhotonPeerListener listener, ConnectionProtocol protocolType)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x1CD04B0", Offset = "0x1CCEAB0", VA = "0x181CD04B0", Slot = "6")]
	public virtual bool Connect(string serverAddress, string appId, [Optional] object photonToken, [Optional] object customInitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x1CCFC60", Offset = "0x1CCE260", VA = "0x181CCFC60", Slot = "7")]
	public virtual bool Connect(string serverAddress, string proxyServerAddress, string appId, object photonToken, [Optional] object customInitData)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x1CD04F0", Offset = "0x1CCEAF0", VA = "0x181CD04F0")]
	private void CreatePeerBase()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x1CD0660", Offset = "0x1CCEC60", VA = "0x181CD0660", Slot = "8")]
	public virtual void Disconnect()
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x1CD1340", Offset = "0x1CCF940", VA = "0x181CD1340")]
	internal void OnDisconnectMessageCall(DisconnectMessage dm)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x1CD2230", Offset = "0x1CD0830", VA = "0x181CD2230", Slot = "9")]
	public virtual void StopThread()
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x1CD09E0", Offset = "0x1CCEFE0", VA = "0x181CD09E0", Slot = "10")]
	public virtual void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x1CD08D0", Offset = "0x1CCEED0", VA = "0x181CD08D0")]
	public bool EstablishEncryption()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x1CD0A10", Offset = "0x1CCF010", VA = "0x181CD0A10")]
	public bool InitDatagramEncryption(byte[] encryptionSecret, byte[] hmacSecret, bool randomizedSequenceNumbers = false, bool chainingModeGCM = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x1BD59A0", Offset = "0x1BD3FA0", VA = "0x181BD59A0")]
	public void InitPayloadEncryption(byte[] secret)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x1CD21E0", Offset = "0x1CD07E0", VA = "0x181CD21E0", Slot = "11")]
	public virtual void Service()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x1CD20E0", Offset = "0x1CD06E0", VA = "0x181CD20E0", Slot = "12")]
	public virtual bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x1CD17A0", Offset = "0x1CCFDA0", VA = "0x181CD17A0", Slot = "13")]
	public virtual bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x1CD07C0", Offset = "0x1CCEDC0", VA = "0x181CD07C0", Slot = "14")]
	public virtual bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x1CD1CC0", Offset = "0x1CD02C0", VA = "0x181CD1CC0", Slot = "15")]
	public virtual bool SendOperation(byte operationCode, Dictionary<byte, object> operationParameters, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x1CD18A0", Offset = "0x1CCFEA0", VA = "0x181CD18A0", Slot = "16")]
	public virtual bool SendOperation(byte operationCode, ParameterDictionary operationParameters, SendOptions sendOptions)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x1CD1360", Offset = "0x1CCF960", VA = "0x181CD1360")]
	public static bool RegisterType(Type customType, byte code, SerializeMethod serializeMethod, DeserializeMethod constructor)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x1CD1580", Offset = "0x1CCFB80", VA = "0x181CD1580")]
	public static bool RegisterType(Type customType, byte code, SerializeStreamMethod serializeMethod, DeserializeStreamMethod constructor)
	{
		return default(bool);
	}
}
