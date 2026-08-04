// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.EnetPeer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200000D")]
internal class EnetPeer : PeerBase
{
	[Token(Token = "0x4000032")]
	private const int CRC_LENGTH = 4;

	[Token(Token = "0x4000033")]
	private const int EncryptedDataGramHeaderSize = 7;

	[Token(Token = "0x4000034")]
	private const int EncryptedHeaderSize = 5;

	[Token(Token = "0x4000035")]
	private const int QUICK_RESEND_QUEUELIMIT = 25;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x120")]
	internal NCommandPool nCommandPool;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x128")]
	private List<NCommand> sentReliableCommands;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x130")]
	private StreamBuffer outgoingAcknowledgementsPool;

	[Token(Token = "0x4000039")]
	internal const int UnsequencedWindowSize = 128;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x138")]
	internal readonly int[] unsequencedWindow;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x140")]
	internal int outgoingUnsequencedGroupNumber;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x144")]
	internal int incomingUnsequencedGroupNumber;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x148")]
	private byte udpCommandCount;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x150")]
	private byte[] udpBuffer;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x158")]
	private int udpBufferIndex;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x160")]
	private byte[] bufferForEncryption;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x168")]
	private int commandBufferSize;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x16C")]
	internal int challenge;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x170")]
	internal int reliableCommandsRepeated;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x174")]
	internal int reliableCommandsSent;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x178")]
	internal int serverSentTime;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly byte[] udpHeader0xF3;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x17C")]
	protected bool datagramEncryptedConnection;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x180")]
	private EnetChannel[] channelArray;

	[Token(Token = "0x4000049")]
	private const byte ControlChannelNumber = byte.MaxValue;

	[Token(Token = "0x400004A")]
	protected internal const short PeerIdForConnect = -1;

	[Token(Token = "0x400004B")]
	protected internal const short PeerIdForConnectTrace = -2;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x188")]
	private Queue<int> commandsToRemove;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x190")]
	private int fragmentLength;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x194")]
	private int fragmentLengthDatagramEncrypt;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x198")]
	private int fragmentLengthMtuValue;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x1A0")]
	private Queue<NCommand> CommandQueue;

	[Token(Token = "0x17000017")]
	internal override int QueuedIncomingCommandsCount
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x3E5F200", Offset = "0x3E5F200", VA = "0x3E5F200", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	internal override int QueuedOutgoingCommandsCount
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x3E5F3B0", Offset = "0x3E5F3B0", VA = "0x3E5F3B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	internal override int SentReliableCommandsCount
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x3E5F630", Offset = "0x3E5F630", VA = "0x3E5F630", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3E5F670", Offset = "0x3E5F670", VA = "0x3E5F670")]
	internal EnetPeer()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3E5FC40", Offset = "0x3E5FC40", VA = "0x3E5FC40", Slot = "14")]
	internal override bool IsTransportEncrypted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3E5FC50", Offset = "0x3E5FC50", VA = "0x3E5FC50", Slot = "8")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3E606B0", Offset = "0x3E606B0", VA = "0x3E606B0")]
	internal void ApplyRandomizedSequenceNumbers()
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3E608A0", Offset = "0x3E608A0", VA = "0x3E608A0")]
	private EnetChannel GetChannel(byte channelNumber)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3E60900", Offset = "0x3E60900", VA = "0x3E60900", Slot = "9")]
	internal override bool Connect(string ipport, string proxyServerAddress, string appID, object photonToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3E609B0", Offset = "0x3E609B0", VA = "0x3E609B0", Slot = "10")]
	public override void OnConnect()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x3E60DA0", Offset = "0x3E60DA0", VA = "0x3E60DA0", Slot = "11")]
	internal override void Disconnect()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x3E61D20", Offset = "0x3E61D20", VA = "0x3E61D20", Slot = "12")]
	internal override void StopConnection()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3E61E10", Offset = "0x3E61E10", VA = "0x3E61E10", Slot = "13")]
	internal override void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3E62680", Offset = "0x3E62680", VA = "0x3E62680", Slot = "19")]
	internal override bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3E644C0", Offset = "0x3E644C0", VA = "0x3E644C0")]
	private int GetFragmentLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3E64620", Offset = "0x3E64620", VA = "0x3E64620")]
	private int CalculatePacketSize(int inSize)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3E64700", Offset = "0x3E64700", VA = "0x3E64700")]
	private int CalculateInitialOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3E64740", Offset = "0x3E64740", VA = "0x3E64740", Slot = "17")]
	internal override bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3E65A80", Offset = "0x3E65A80", VA = "0x3E65A80", Slot = "16")]
	internal override bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3E66FF0", Offset = "0x3E66FF0", VA = "0x3E66FF0", Slot = "15")]
	internal override bool EnqueuePhotonMessage(StreamBuffer opBytes, SendOptions sendParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3E62090", Offset = "0x3E62090", VA = "0x3E62090")]
	internal bool CreateAndEnqueueCommand(byte commandType, StreamBuffer payload, byte channelNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3E651E0", Offset = "0x3E651E0", VA = "0x3E651E0")]
	internal int SerializeAckToBuffer()
	{
		return default(int);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3E66E30", Offset = "0x3E66E30", VA = "0x3E66E30")]
	internal int SerializeToBuffer(Queue<NCommand> commandList)
	{
		return default(int);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3E654A0", Offset = "0x3E654A0", VA = "0x3E654A0")]
	private bool SerializeCommandToBuffer(NCommand command, bool commandIsInSentQueue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3E65650", Offset = "0x3E65650", VA = "0x3E65650")]
	internal void SendData(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x3E67CC0", Offset = "0x3E67CC0", VA = "0x3E67CC0")]
	private void SendToSocket(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3E67A50", Offset = "0x3E67A50", VA = "0x3E67A50")]
	private void SendDataEncrypted(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3E677D0", Offset = "0x3E677D0", VA = "0x3E677D0")]
	internal void QueueSentCommand(NCommand command, bool commandIsAlreadyInSentQueue = false)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3E60BC0", Offset = "0x3E60BC0", VA = "0x3E60BC0")]
	internal void QueueOutgoingReliableCommand(NCommand command)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3E67060", Offset = "0x3E67060", VA = "0x3E67060")]
	internal void QueueOutgoingUnreliableCommand(NCommand command)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3E682B0", Offset = "0x3E682B0", VA = "0x3E682B0")]
	internal void QueueOutgoingAcknowledgement(NCommand readCommand, int sendTime)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3E684F0", Offset = "0x3E684F0", VA = "0x3E684F0", Slot = "18")]
	internal override void ReceiveIncomingCommands(byte[] inBuff, int inDataLength)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3E63270", Offset = "0x3E63270", VA = "0x3E63270")]
	internal void ExecuteCommand(NCommand command)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3E696B0", Offset = "0x3E696B0", VA = "0x3E696B0")]
	internal bool QueueIncomingCommand(NCommand command)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3E69190", Offset = "0x3E69190", VA = "0x3E69190")]
	internal NCommand RemoveSentReliableCommand(int ackReceivedReliableSequenceNumber, int ackReceivedChannel, bool isUnsequenced)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3E6A610", Offset = "0x3E6A610", VA = "0x3E6A610")]
	internal string CommandListToString(NCommand[] list)
	{
		return null;
	}
}
