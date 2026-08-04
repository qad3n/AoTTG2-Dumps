// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.TPeer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E99070", Offset = "0x3E99070", VA = "0x3E99070", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A0")]
	internal override int QueuedOutgoingCommandsCount
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x3E990B0", Offset = "0x3E990B0", VA = "0x3E990B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x3E990C0", Offset = "0x3E990C0", VA = "0x3E990C0")]
	internal TPeer()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x3E991D0", Offset = "0x3E991D0", VA = "0x3E991D0", Slot = "14")]
	internal override bool IsTransportEncrypted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x3E991E0", Offset = "0x3E991E0", VA = "0x3E991E0", Slot = "8")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x3E992B0", Offset = "0x3E992B0", VA = "0x3E992B0", Slot = "9")]
	internal override bool Connect(string serverAddress, string proxyServerAddress, string appID, object photonToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x3E99400", Offset = "0x3E99400", VA = "0x3E99400", Slot = "10")]
	public override void OnConnect()
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x3E99650", Offset = "0x3E99650", VA = "0x3E99650", Slot = "11")]
	internal override void Disconnect()
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x3E99750", Offset = "0x3E99750", VA = "0x3E99750", Slot = "12")]
	internal override void StopConnection()
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x3E998A0", Offset = "0x3E998A0", VA = "0x3E998A0", Slot = "13")]
	internal override void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x3E99450", Offset = "0x3E99450", VA = "0x3E99450")]
	private void EnqueueInit(byte[] data)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3E99F30", Offset = "0x3E99F30", VA = "0x3E99F30", Slot = "19")]
	internal override bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x3E9A2C0", Offset = "0x3E9A2C0", VA = "0x3E9A2C0", Slot = "16")]
	internal override bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x3E9AA00", Offset = "0x3E9AA00", VA = "0x3E9AA00", Slot = "17")]
	internal override bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x3E9AA60", Offset = "0x3E9AA60", VA = "0x3E9AA60", Slot = "15")]
	internal override bool EnqueuePhotonMessage(StreamBuffer opBytes, SendOptions sendParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x3E99BE0", Offset = "0x3E99BE0", VA = "0x3E99BE0")]
	internal bool EnqueueMessageAsPayload(DeliveryMode deliveryMode, StreamBuffer opMessage, byte channelId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x3E999E0", Offset = "0x3E999E0", VA = "0x3E999E0")]
	internal void SendPing()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x3E9A600", Offset = "0x3E9A600", VA = "0x3E9A600")]
	internal PhotonSocketError SendData(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x3E9AA90", Offset = "0x3E9AA90", VA = "0x3E9AA90", Slot = "18")]
	internal override void ReceiveIncomingCommands(byte[] inbuff, int dataLength)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x3E9AE70", Offset = "0x3E9AE70", VA = "0x3E9AE70")]
	private void ReadPingResult(byte[] inbuff)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x3E9AF50", Offset = "0x3E9AF50", VA = "0x3E9AF50")]
	protected internal void ReadPingResult(OperationResponse operationResponse)
	{
	}
}
