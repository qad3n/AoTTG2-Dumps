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
	private const byte ControlChannelNumber = 255;

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
		[Address(RVA = "0x5650060", Offset = "0x564F060", VA = "0x5650060", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	internal override int QueuedOutgoingCommandsCount
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x56501F0", Offset = "0x564F1F0", VA = "0x56501F0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	internal override int SentReliableCommandsCount
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x5650420", Offset = "0x564F420", VA = "0x5650420", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x5650460", Offset = "0x564F460", VA = "0x5650460")]
	internal EnetPeer()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x5650A30", Offset = "0x564FA30", VA = "0x5650A30", Slot = "14")]
	internal override bool IsTransportEncrypted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x5650A40", Offset = "0x564FA40", VA = "0x5650A40", Slot = "8")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x5651410", Offset = "0x5650410", VA = "0x5651410")]
	internal void ApplyRandomizedSequenceNumbers()
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x56515A0", Offset = "0x56505A0", VA = "0x56515A0")]
	private EnetChannel GetChannel(byte channelNumber)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x56515F0", Offset = "0x56505F0", VA = "0x56515F0", Slot = "9")]
	internal override bool Connect(string ipport, string proxyServerAddress, string appID, object photonToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x56516A0", Offset = "0x56506A0", VA = "0x56516A0", Slot = "10")]
	public override void OnConnect()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x5651A20", Offset = "0x5650A20", VA = "0x5651A20", Slot = "11")]
	internal override void Disconnect()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x5652760", Offset = "0x5651760", VA = "0x5652760", Slot = "12")]
	internal override void StopConnection()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x5652850", Offset = "0x5651850", VA = "0x5652850", Slot = "13")]
	internal override void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x5652F20", Offset = "0x5651F20", VA = "0x5652F20", Slot = "19")]
	internal override bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x5654B30", Offset = "0x5653B30", VA = "0x5654B30")]
	private int GetFragmentLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x5654C70", Offset = "0x5653C70", VA = "0x5654C70")]
	private int CalculatePacketSize(int inSize)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x5654D50", Offset = "0x5653D50", VA = "0x5654D50")]
	private int CalculateInitialOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x5654D90", Offset = "0x5653D90", VA = "0x5654D90", Slot = "17")]
	internal override bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x5655F50", Offset = "0x5654F50", VA = "0x5655F50", Slot = "16")]
	internal override bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x56572F0", Offset = "0x56562F0", VA = "0x56572F0", Slot = "15")]
	internal override bool EnqueuePhotonMessage(StreamBuffer opBytes, SendOptions sendParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x5652AC0", Offset = "0x5651AC0", VA = "0x5652AC0")]
	internal bool CreateAndEnqueueCommand(byte commandType, StreamBuffer payload, byte channelNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x56557C0", Offset = "0x56547C0", VA = "0x56557C0")]
	internal int SerializeAckToBuffer()
	{
		return default(int);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x5657130", Offset = "0x5656130", VA = "0x5657130")]
	internal int SerializeToBuffer(Queue<NCommand> commandList)
	{
		return default(int);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x5655A80", Offset = "0x5654A80", VA = "0x5655A80")]
	private bool SerializeCommandToBuffer(NCommand command, bool commandIsInSentQueue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x5655C30", Offset = "0x5654C30", VA = "0x5655C30")]
	internal void SendData(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x5657F30", Offset = "0x5656F30", VA = "0x5657F30")]
	private void SendToSocket(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x5657CD0", Offset = "0x5656CD0", VA = "0x5657CD0")]
	private void SendDataEncrypted(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x5657A60", Offset = "0x5656A60", VA = "0x5657A60")]
	internal void QueueSentCommand(NCommand command, bool commandIsAlreadyInSentQueue = false)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x5651880", Offset = "0x5650880", VA = "0x5651880")]
	internal void QueueOutgoingReliableCommand(NCommand command)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x5657360", Offset = "0x5656360", VA = "0x5657360")]
	internal void QueueOutgoingUnreliableCommand(NCommand command)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x56584E0", Offset = "0x56574E0", VA = "0x56584E0")]
	internal void QueueOutgoingAcknowledgement(NCommand readCommand, int sendTime)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x56586F0", Offset = "0x56576F0", VA = "0x56586F0", Slot = "18")]
	internal override void ReceiveIncomingCommands(byte[] inBuff, int inDataLength)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x5653A00", Offset = "0x5652A00", VA = "0x5653A00")]
	internal void ExecuteCommand(NCommand command)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x56597B0", Offset = "0x56587B0", VA = "0x56597B0")]
	internal bool QueueIncomingCommand(NCommand command)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x5659300", Offset = "0x5658300", VA = "0x5659300")]
	internal NCommand RemoveSentReliableCommand(int ackReceivedReliableSequenceNumber, int ackReceivedChannel, bool isUnsequenced)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x565A580", Offset = "0x5659580", VA = "0x565A580")]
	internal string CommandListToString(NCommand[] list)
	{
		return null;
	}
}
