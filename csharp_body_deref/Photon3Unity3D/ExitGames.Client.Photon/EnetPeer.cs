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
		[Address(RVA = "0x3B698B0", Offset = "0x3B698B0", VA = "0x3B698B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	internal override int QueuedOutgoingCommandsCount
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x3B69A60", Offset = "0x3B69A60", VA = "0x3B69A60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	internal override int SentReliableCommandsCount
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x3B69CE0", Offset = "0x3B69CE0", VA = "0x3B69CE0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3B69D20", Offset = "0x3B69D20", VA = "0x3B69D20")]
	internal EnetPeer()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3B6A2F0", Offset = "0x3B6A2F0", VA = "0x3B6A2F0", Slot = "14")]
	internal override bool IsTransportEncrypted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3B6A300", Offset = "0x3B6A300", VA = "0x3B6A300", Slot = "8")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3B6AD60", Offset = "0x3B6AD60", VA = "0x3B6AD60")]
	internal void ApplyRandomizedSequenceNumbers()
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3B6AF50", Offset = "0x3B6AF50", VA = "0x3B6AF50")]
	private EnetChannel GetChannel(byte channelNumber)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3B6AFB0", Offset = "0x3B6AFB0", VA = "0x3B6AFB0", Slot = "9")]
	internal override bool Connect(string ipport, string proxyServerAddress, string appID, object photonToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3B6B060", Offset = "0x3B6B060", VA = "0x3B6B060", Slot = "10")]
	public override void OnConnect()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x3B6B450", Offset = "0x3B6B450", VA = "0x3B6B450", Slot = "11")]
	internal override void Disconnect()
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x3B6C3D0", Offset = "0x3B6C3D0", VA = "0x3B6C3D0", Slot = "12")]
	internal override void StopConnection()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3B6C4C0", Offset = "0x3B6C4C0", VA = "0x3B6C4C0", Slot = "13")]
	internal override void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3B6CD30", Offset = "0x3B6CD30", VA = "0x3B6CD30", Slot = "19")]
	internal override bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3B6EB70", Offset = "0x3B6EB70", VA = "0x3B6EB70")]
	private int GetFragmentLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3B6ECD0", Offset = "0x3B6ECD0", VA = "0x3B6ECD0")]
	private int CalculatePacketSize(int inSize)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3B6EDB0", Offset = "0x3B6EDB0", VA = "0x3B6EDB0")]
	private int CalculateInitialOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3B6EDF0", Offset = "0x3B6EDF0", VA = "0x3B6EDF0", Slot = "17")]
	internal override bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3B70130", Offset = "0x3B70130", VA = "0x3B70130", Slot = "16")]
	internal override bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3B716A0", Offset = "0x3B716A0", VA = "0x3B716A0", Slot = "15")]
	internal override bool EnqueuePhotonMessage(StreamBuffer opBytes, SendOptions sendParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3B6C740", Offset = "0x3B6C740", VA = "0x3B6C740")]
	internal bool CreateAndEnqueueCommand(byte commandType, StreamBuffer payload, byte channelNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3B6F890", Offset = "0x3B6F890", VA = "0x3B6F890")]
	internal int SerializeAckToBuffer()
	{
		return default(int);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3B714E0", Offset = "0x3B714E0", VA = "0x3B714E0")]
	internal int SerializeToBuffer(Queue<NCommand> commandList)
	{
		return default(int);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3B6FB50", Offset = "0x3B6FB50", VA = "0x3B6FB50")]
	private bool SerializeCommandToBuffer(NCommand command, bool commandIsInSentQueue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3B6FD00", Offset = "0x3B6FD00", VA = "0x3B6FD00")]
	internal void SendData(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x3B72370", Offset = "0x3B72370", VA = "0x3B72370")]
	private void SendToSocket(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3B72100", Offset = "0x3B72100", VA = "0x3B72100")]
	private void SendDataEncrypted(byte[] data, int length)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3B71E80", Offset = "0x3B71E80", VA = "0x3B71E80")]
	internal void QueueSentCommand(NCommand command, bool commandIsAlreadyInSentQueue = false)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3B6B270", Offset = "0x3B6B270", VA = "0x3B6B270")]
	internal void QueueOutgoingReliableCommand(NCommand command)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3B71710", Offset = "0x3B71710", VA = "0x3B71710")]
	internal void QueueOutgoingUnreliableCommand(NCommand command)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3B72960", Offset = "0x3B72960", VA = "0x3B72960")]
	internal void QueueOutgoingAcknowledgement(NCommand readCommand, int sendTime)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3B72BA0", Offset = "0x3B72BA0", VA = "0x3B72BA0", Slot = "18")]
	internal override void ReceiveIncomingCommands(byte[] inBuff, int inDataLength)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3B6D920", Offset = "0x3B6D920", VA = "0x3B6D920")]
	internal void ExecuteCommand(NCommand command)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3B73D60", Offset = "0x3B73D60", VA = "0x3B73D60")]
	internal bool QueueIncomingCommand(NCommand command)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3B73840", Offset = "0x3B73840", VA = "0x3B73840")]
	internal NCommand RemoveSentReliableCommand(int ackReceivedReliableSequenceNumber, int ackReceivedChannel, bool isUnsequenced)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3B74CC0", Offset = "0x3B74CC0", VA = "0x3B74CC0")]
	internal string CommandListToString(NCommand[] list)
	{
		return null;
	}
}
