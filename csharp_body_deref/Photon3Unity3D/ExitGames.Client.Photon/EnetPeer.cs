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
		[Address(RVA = "0x1CC3740", Offset = "0x1CC1D40", VA = "0x181CC3740", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	internal override int QueuedOutgoingCommandsCount
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x1CC38B0", Offset = "0x1CC1EB0", VA = "0x181CC38B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	internal override int SentReliableCommandsCount
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x1CC3AD0", Offset = "0x1CC20D0", VA = "0x181CC3AD0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x1CC3490", Offset = "0x1CC1A90", VA = "0x181CC3490")]
	internal EnetPeer()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x1CBEB50", Offset = "0x1CBD150", VA = "0x181CBEB50", Slot = "14")]
	internal override bool IsTransportEncrypted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x1CC08B0", Offset = "0x1CBEEB0", VA = "0x181CC08B0", Slot = "8")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x1CBC2C0", Offset = "0x1CBA8C0", VA = "0x181CBC2C0")]
	internal void ApplyRandomizedSequenceNumbers()
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x1CBE990", Offset = "0x1CBCF90", VA = "0x181CBE990")]
	private EnetChannel GetChannel(byte channelNumber)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x1CBC6F0", Offset = "0x1CBACF0", VA = "0x181CBC6F0", Slot = "9")]
	internal override bool Connect(string ipport, string proxyServerAddress, string appID, object photonToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x1CBEB60", Offset = "0x1CBD160", VA = "0x181CBEB60", Slot = "10")]
	public override void OnConnect()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x1CBCCC0", Offset = "0x1CBB2C0", VA = "0x181CBCCC0", Slot = "11")]
	internal override void Disconnect()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x1CC3380", Offset = "0x1CC1980", VA = "0x181CC3380", Slot = "12")]
	internal override void StopConnection()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x1CBE8C0", Offset = "0x1CBCEC0", VA = "0x181CBE8C0", Slot = "13")]
	internal override void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x1CBD090", Offset = "0x1CBB690", VA = "0x181CBD090", Slot = "19")]
	internal override bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x1CBEA00", Offset = "0x1CBD000", VA = "0x181CBEA00")]
	private int GetFragmentLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x1CBC4C0", Offset = "0x1CBAAC0", VA = "0x181CBC4C0")]
	private int CalculatePacketSize(int inSize)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x1CBC480", Offset = "0x1CBAA80", VA = "0x181CBC480")]
	private int CalculateInitialOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x1CC0E20", Offset = "0x1CBF420", VA = "0x181CC0E20", Slot = "17")]
	internal override bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x1CC1C70", Offset = "0x1CC0270", VA = "0x181CC1C70", Slot = "16")]
	internal override bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x1CBD9F0", Offset = "0x1CBBFF0", VA = "0x181CBD9F0", Slot = "15")]
	internal override bool EnqueuePhotonMessage(StreamBuffer opBytes, SendOptions sendParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x1CBC780", Offset = "0x1CBAD80", VA = "0x181CBC780")]
	internal bool CreateAndEnqueueCommand(byte commandType, StreamBuffer payload, byte channelNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x1CC2E40", Offset = "0x1CC1440", VA = "0x181CC2E40")]
	internal int SerializeAckToBuffer()
	{
		return default(int);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x1CC3220", Offset = "0x1CC1820", VA = "0x181CC3220")]
	internal int SerializeToBuffer(Queue<NCommand> commandList)
	{
		return default(int);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x1CC3090", Offset = "0x1CC1690", VA = "0x181CC3090")]
	private bool SerializeCommandToBuffer(NCommand command, bool commandIsInSentQueue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x1CC19E0", Offset = "0x1CBFFE0", VA = "0x181CC19E0")]
	internal void SendData(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x1CC2CD0", Offset = "0x1CC12D0", VA = "0x181CC2CD0")]
	private void SendToSocket(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x1CC1730", Offset = "0x1CBFD30", VA = "0x181CC1730")]
	private void SendDataEncrypted(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x1CBF960", Offset = "0x1CBDF60", VA = "0x181CBF960")]
	internal void QueueSentCommand(NCommand command, bool commandIsAlreadyInSentQueue = false)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x1CBF600", Offset = "0x1CBDC00", VA = "0x181CBF600")]
	internal void QueueOutgoingReliableCommand(NCommand command)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x1CBF790", Offset = "0x1CBDD90", VA = "0x181CBF790")]
	internal void QueueOutgoingUnreliableCommand(NCommand command)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x1CBF400", Offset = "0x1CBDA00", VA = "0x181CBF400")]
	internal void QueueOutgoingAcknowledgement(NCommand readCommand, int sendTime)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x1CBFBD0", Offset = "0x1CBE1D0", VA = "0x181CBFBD0", Slot = "18")]
	internal override void ReceiveIncomingCommands(byte[] inBuff, int inDataLength)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x1CBDA40", Offset = "0x1CBC040", VA = "0x181CBDA40")]
	internal void ExecuteCommand(NCommand command)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x1CBEBB0", Offset = "0x1CBD1B0", VA = "0x181CBEBB0")]
	internal bool QueueIncomingCommand(NCommand command)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x1CC0570", Offset = "0x1CBEB70", VA = "0x181CC0570")]
	internal NCommand RemoveSentReliableCommand(int ackReceivedReliableSequenceNumber, int ackReceivedChannel, bool isUnsequenced)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x1CBC5A0", Offset = "0x1CBABA0", VA = "0x181CBC5A0")]
	internal string CommandListToString(NCommand[] list)
	{
		return null;
	}
}
