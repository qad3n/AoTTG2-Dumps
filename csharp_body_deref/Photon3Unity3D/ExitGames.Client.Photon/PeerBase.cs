// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.PeerBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.SocketServer.Security;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000022")]
public abstract class PeerBase
{
	[Token(Token = "0x2000023")]
	internal delegate void MyAction();

	[Token(Token = "0x2000024")]
	private static class GpBinaryV3Parameters
	{
		[Token(Token = "0x4000118")]
		public const byte CustomObject = 0;

		[Token(Token = "0x4000119")]
		public const byte ExtraPlatformParams = 1;
	}

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x10")]
	internal PhotonPeer photonPeer;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x18")]
	public IProtocol SerializationProtocol;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x20")]
	internal ConnectionProtocol usedTransportProtocol;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x28")]
	internal IPhotonSocket PhotonSocket;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x40")]
	internal ConnectionStateValue peerConnectionState;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x44")]
	internal int ByteCountLastOperation;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x48")]
	internal int ByteCountCurrentDispatch;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x50")]
	internal NCommand CommandInCurrentDispatch;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x58")]
	internal int packetLossByCrc;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x5C")]
	internal int packetLossByChallenge;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x60")]
	internal readonly Queue<MyAction> ActionQueue;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x68")]
	internal short peerID;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x6C")]
	internal int serverTimeOffset;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x70")]
	internal bool serverTimeOffsetIsAvailable;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x74")]
	internal int roundTripTime;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x78")]
	internal int roundTripTimeVariance;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x7C")]
	internal int lastRoundTripTime;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x80")]
	internal int lowestRoundTripTime;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x84")]
	internal int highestRoundTripTimeVariance;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x88")]
	internal int timestampOfLastReceive;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x0")]
	internal static short peerCount;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x90")]
	internal long bytesOut;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x98")]
	internal long bytesIn;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0xA0")]
	internal object PhotonToken;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0xA8")]
	internal object CustomInitData;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0xB0")]
	public string AppId;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0xB8")]
	internal EventData reusableEventData;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0xC0")]
	private Stopwatch watch;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0xC8")]
	internal int timeoutInt;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0xCC")]
	internal int timeLastAckReceive;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0xD0")]
	internal int longestSentCall;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0xD4")]
	internal int timeLastSendAck;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0xD8")]
	internal int timeLastSendOutgoing;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0xDC")]
	internal bool ApplicationIsInitialized;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0xDD")]
	internal bool isEncryptionAvailable;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0xE0")]
	internal int outgoingCommandsInStream;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x8")]
	protected internal static Queue<StreamBuffer> MessageBufferPool;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0xE8")]
	internal byte[] messageHeader;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0xF0")]
	internal ICryptoProvider CryptoProvider;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0xF8")]
	private readonly Random lagRandomizer;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x100")]
	internal readonly LinkedList<SimulationItem> NetSimListOutgoing;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x108")]
	internal readonly LinkedList<SimulationItem> NetSimListIncoming;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x110")]
	private readonly NetworkSimulationSet networkSimulationSettings;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x118")]
	internal int TrafficPackageHeaderSize;

	[Token(Token = "0x17000039")]
	public string ServerAddress
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x3E6EAD0", Offset = "0x3E6EAD0", VA = "0x3E6EAD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x3E6EAE0", Offset = "0x3E6EAE0", VA = "0x3E6EAE0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public string ProxyServerAddress
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x3E6EAF0", Offset = "0x3E6EAF0", VA = "0x3E6EAF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x3E6EB00", Offset = "0x3E6EB00", VA = "0x3E6EB00")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	internal IPhotonPeerListener Listener
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x3E61DF0", Offset = "0x3E61DF0", VA = "0x3E61DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public DebugLevel debugOut
	{
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x3E61ED0", Offset = "0x3E61ED0", VA = "0x3E61ED0")]
		get
		{
			return default(DebugLevel);
		}
	}

	[Token(Token = "0x1700003D")]
	internal int DisconnectTimeout
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x3E68280", Offset = "0x3E68280", VA = "0x3E68280")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003E")]
	internal int timePingInterval
	{
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x3E66E10", Offset = "0x3E66E10", VA = "0x3E66E10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003F")]
	internal byte ChannelCount
	{
		[Token(Token = "0x600011A")]
		[Address(RVA = "0x3E60690", Offset = "0x3E60690", VA = "0x3E60690")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000040")]
	internal long BytesOut
	{
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x3E6EB10", Offset = "0x3E6EB10", VA = "0x3E6EB10")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000041")]
	internal long BytesIn
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x3E6EB20", Offset = "0x3E6EB20", VA = "0x3E6EB20")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000042")]
	internal abstract int QueuedIncomingCommandsCount
	{
		[Token(Token = "0x600011D")]
		get;
	}

	[Token(Token = "0x17000043")]
	internal abstract int QueuedOutgoingCommandsCount
	{
		[Token(Token = "0x600011E")]
		get;
	}

	[Token(Token = "0x17000044")]
	internal virtual int SentReliableCommandsCount
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x3E6EB30", Offset = "0x3E6EB30", VA = "0x3E6EB30", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000045")]
	public virtual string PeerID
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x3E6EB40", Offset = "0x3E6EB40", VA = "0x3E6EB40", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000046")]
	internal int timeInt
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x3E65480", Offset = "0x3E65480", VA = "0x3E65480")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000047")]
	internal static int outgoingStreamBufferSize
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x3E6EB60", Offset = "0x3E6EB60", VA = "0x3E6EB60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000048")]
	internal int mtu
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x3E60670", Offset = "0x3E60670", VA = "0x3E60670")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000049")]
	protected internal bool IsIpv6
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x3E6EBD0", Offset = "0x3E6EBD0", VA = "0x3E6EBD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004A")]
	public NetworkSimulationSet NetworkSimulationSettings
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x3E611D0", Offset = "0x3E611D0", VA = "0x3E611D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	internal bool TrafficStatsEnabled
	{
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x3E60970", Offset = "0x3E60970", VA = "0x3E60970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	internal TrafficStats TrafficStatsIncoming
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x3E68FB0", Offset = "0x3E68FB0", VA = "0x3E68FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004D")]
	internal TrafficStats TrafficStatsOutgoing
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x3E60990", Offset = "0x3E60990", VA = "0x3E60990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	internal TrafficStatsGameLevel TrafficStatsGameLevel
	{
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x3E67040", Offset = "0x3E67040", VA = "0x3E67040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3E5F9B0", Offset = "0x3E5F9B0", VA = "0x3E5F9B0")]
	protected PeerBase()
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3E67290", Offset = "0x3E67290", VA = "0x3E67290")]
	public static StreamBuffer MessageBufferPoolGet()
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3E67480", Offset = "0x3E67480", VA = "0x3E67480")]
	public static void MessageBufferPoolPut(StreamBuffer buff)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3E602A0", Offset = "0x3E602A0", VA = "0x3E602A0", Slot = "8")]
	internal virtual void Reset()
	{
	}

	[Token(Token = "0x6000129")]
	internal abstract bool Connect(string serverAddress, string proxyServerAddress, string appID, object photonToken);

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x3E6EBF0", Offset = "0x3E6EBF0", VA = "0x3E6EBF0")]
	private string GetHttpKeyValueString(Dictionary<string, string> dic)
	{
		return null;
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x3E69FE0", Offset = "0x3E69FE0", VA = "0x3E69FE0")]
	internal byte[] WriteInitRequest()
	{
		return null;
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x3E6EF00", Offset = "0x3E6EF00", VA = "0x3E6EF00")]
	private byte[] WriteInitV3()
	{
		return null;
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x3E6F300", Offset = "0x3E6F300", VA = "0x3E6F300")]
	internal string PepareWebSocketUrl(string serverAddress, string appId, object photonToken)
	{
		return null;
	}

	[Token(Token = "0x600012E")]
	public abstract void OnConnect();

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x3E6F490", Offset = "0x3E6F490", VA = "0x3E6F490")]
	internal void InitCallback()
	{
	}

	[Token(Token = "0x6000130")]
	internal abstract void Disconnect();

	[Token(Token = "0x6000131")]
	internal abstract void StopConnection();

	[Token(Token = "0x6000132")]
	internal abstract void FetchServerTimestamp();

	[Token(Token = "0x6000133")]
	internal abstract bool IsTransportEncrypted();

	[Token(Token = "0x6000134")]
	internal abstract bool EnqueuePhotonMessage(StreamBuffer opBytes, SendOptions sendParams);

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x3E6F560", Offset = "0x3E6F560", VA = "0x3E6F560")]
	internal StreamBuffer SerializeOperationToMessage(byte opCode, Dictionary<byte, object> parameters, EgMessageType messageType, bool encrypt)
	{
		return null;
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3E6F810", Offset = "0x3E6F810", VA = "0x3E6F810")]
	internal StreamBuffer SerializeOperationToMessage(byte opCode, ParameterDictionary parameters, EgMessageType messageType, bool encrypt)
	{
		return null;
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3E6FAC0", Offset = "0x3E6FAC0", VA = "0x3E6FAC0")]
	internal StreamBuffer SerializeMessageToMessage(object message, bool encrypt)
	{
		return null;
	}

	[Token(Token = "0x6000138")]
	internal abstract bool SendOutgoingCommands();

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3E6FDA0", Offset = "0x3E6FDA0", VA = "0x3E6FDA0", Slot = "17")]
	internal virtual bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x600013A")]
	internal abstract void ReceiveIncomingCommands(byte[] inBuff, int dataLength);

	[Token(Token = "0x600013B")]
	internal abstract bool DispatchIncomingCommands();

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x3E6FDB0", Offset = "0x3E6FDB0", VA = "0x3E6FDB0", Slot = "20")]
	internal virtual bool DeserializeMessageAndCallback(StreamBuffer stream)
	{
		return default(bool);
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3E69540", Offset = "0x3E69540", VA = "0x3E69540")]
	internal void UpdateRoundTripTimeAndVariance(int lastRoundtripTime)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x3E710A0", Offset = "0x3E710A0", VA = "0x3E710A0")]
	internal bool ExchangeKeysForEncryption(object lockObject)
	{
		return default(bool);
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x3E70E30", Offset = "0x3E70E30", VA = "0x3E70E30")]
	internal void DeriveSharedKey(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x3E717D0", Offset = "0x3E717D0", VA = "0x3E717D0", Slot = "21")]
	internal virtual void InitEncryption(byte[] secret)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x3E695C0", Offset = "0x3E695C0", VA = "0x3E695C0")]
	internal void EnqueueActionForDispatch(MyAction action)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3E61EF0", Offset = "0x3E61EF0", VA = "0x3E61EF0")]
	internal void EnqueueDebugReturn(DebugLevel level, string debugReturn)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x3E61BA0", Offset = "0x3E61BA0", VA = "0x3E61BA0")]
	internal void EnqueueStatusCallback(StatusCode statusValue)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3E67ED0", Offset = "0x3E67ED0", VA = "0x3E67ED0")]
	internal void SendNetworkSimulated(byte[] dataToSend)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x3E6B520", Offset = "0x3E6B520", VA = "0x3E6B520")]
	internal void ReceiveNetworkSimulated(byte[] dataReceived)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x3E71C90", Offset = "0x3E71C90", VA = "0x3E71C90")]
	protected internal void NetworkSimRun()
	{
	}
}
