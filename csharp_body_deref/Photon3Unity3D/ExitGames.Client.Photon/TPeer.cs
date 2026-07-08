using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200004C")]
internal class TPeer : PeerBase
{
	[Token(Token = "0x4000211")]
	internal const int TCP_HEADER_BYTES = 7;

	[Token(Token = "0x4000212")]
	internal const int MSG_HEADER_BYTES = 2;

	[Token(Token = "0x4000213")]
	public const int ALL_HEADER_BYTES = 9;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x120")]
	private Queue<StreamBuffer> incomingList;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x128")]
	internal List<StreamBuffer> outgoingStream;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x130")]
	private int lastPingResult;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x138")]
	private byte[] pingRequest;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly byte[] tcpFramedMessageHead;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly byte[] tcpMsgHead;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x140")]
	protected internal bool DoFraming;

	[Token(Token = "0x1700009F")]
	internal override int QueuedIncomingCommandsCount
	{
		[Token(Token = "0x6000321")]
		[Address(RVA = "0x3BA3720", Offset = "0x3BA3720", VA = "0x3BA3720", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A0")]
	internal override int QueuedOutgoingCommandsCount
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x3BA3760", Offset = "0x3BA3760", VA = "0x3BA3760", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x3BA3770", Offset = "0x3BA3770", VA = "0x3BA3770")]
	internal TPeer()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x3BA3880", Offset = "0x3BA3880", VA = "0x3BA3880", Slot = "14")]
	internal override bool IsTransportEncrypted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x3BA3890", Offset = "0x3BA3890", VA = "0x3BA3890", Slot = "8")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x3BA3960", Offset = "0x3BA3960", VA = "0x3BA3960", Slot = "9")]
	internal override bool Connect(string serverAddress, string proxyServerAddress, string appID, object photonToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x3BA3AB0", Offset = "0x3BA3AB0", VA = "0x3BA3AB0", Slot = "10")]
	public override void OnConnect()
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x3BA3D00", Offset = "0x3BA3D00", VA = "0x3BA3D00", Slot = "11")]
	internal override void Disconnect()
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x3BA3E00", Offset = "0x3BA3E00", VA = "0x3BA3E00", Slot = "12")]
	internal override void StopConnection()
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x3BA3F50", Offset = "0x3BA3F50", VA = "0x3BA3F50", Slot = "13")]
	internal override void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x3BA3B00", Offset = "0x3BA3B00", VA = "0x3BA3B00")]
	private void EnqueueInit(byte[] data)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3BA45E0", Offset = "0x3BA45E0", VA = "0x3BA45E0", Slot = "19")]
	internal override bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x3BA4970", Offset = "0x3BA4970", VA = "0x3BA4970", Slot = "16")]
	internal override bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x3BA50B0", Offset = "0x3BA50B0", VA = "0x3BA50B0", Slot = "17")]
	internal override bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x3BA5110", Offset = "0x3BA5110", VA = "0x3BA5110", Slot = "15")]
	internal override bool EnqueuePhotonMessage(StreamBuffer opBytes, SendOptions sendParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x3BA4290", Offset = "0x3BA4290", VA = "0x3BA4290")]
	internal bool EnqueueMessageAsPayload(DeliveryMode deliveryMode, StreamBuffer opMessage, byte channelId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x3BA4090", Offset = "0x3BA4090", VA = "0x3BA4090")]
	internal void SendPing()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x3BA4CB0", Offset = "0x3BA4CB0", VA = "0x3BA4CB0")]
	internal PhotonSocketError SendData(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x3BA5140", Offset = "0x3BA5140", VA = "0x3BA5140", Slot = "18")]
	internal override void ReceiveIncomingCommands(byte[] inbuff, int dataLength)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x3BA5520", Offset = "0x3BA5520", VA = "0x3BA5520")]
	private void ReadPingResult(byte[] inbuff)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x3BA5600", Offset = "0x3BA5600", VA = "0x3BA5600")]
	protected internal void ReadPingResult(OperationResponse operationResponse)
	{
	}
}
