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
		[Address(RVA = "0x1CFD600", Offset = "0x1CFBC00", VA = "0x181CFD600", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A0")]
	internal override int QueuedOutgoingCommandsCount
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x1CFD640", Offset = "0x1CFBC40", VA = "0x181CFD640", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x1CFD4F0", Offset = "0x1CFBAF0", VA = "0x181CFD4F0")]
	internal TPeer()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x1CFC390", Offset = "0x1CFA990", VA = "0x181CFC390", Slot = "14")]
	internal override bool IsTransportEncrypted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x1CFCA60", Offset = "0x1CFB060", VA = "0x181CFCA60", Slot = "8")]
	internal override void Reset()
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x1CFB780", Offset = "0x1CF9D80", VA = "0x181CFB780", Slot = "9")]
	internal override bool Connect(string serverAddress, string proxyServerAddress, string appID, object photonToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x1CFC3A0", Offset = "0x1CFA9A0", VA = "0x181CFC3A0", Slot = "10")]
	public override void OnConnect()
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x1CFB8F0", Offset = "0x1CF9EF0", VA = "0x181CFB8F0", Slot = "11")]
	internal override void Disconnect()
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x1CFD2E0", Offset = "0x1CFB8E0", VA = "0x181CFD2E0", Slot = "12")]
	internal override void StopConnection()
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x1CFC2A0", Offset = "0x1CFA8A0", VA = "0x181CFC2A0", Slot = "13")]
	internal override void FetchServerTimestamp()
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x1CFBCE0", Offset = "0x1CFA2E0", VA = "0x181CFBCE0")]
	private void EnqueueInit(byte[] data)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x1CFB990", Offset = "0x1CF9F90", VA = "0x181CFB990", Slot = "19")]
	internal override bool DispatchIncomingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x1CFCDC0", Offset = "0x1CFB3C0", VA = "0x181CFCDC0", Slot = "16")]
	internal override bool SendOutgoingCommands()
	{
		return default(bool);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x1CFCB40", Offset = "0x1CFB140", VA = "0x181CFCB40", Slot = "17")]
	internal override bool SendAcksOnly()
	{
		return default(bool);
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x1CFC270", Offset = "0x1CFA870", VA = "0x181CFC270", Slot = "15")]
	internal override bool EnqueuePhotonMessage(StreamBuffer opBytes, SendOptions sendParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x1CFBF00", Offset = "0x1CFA500", VA = "0x181CFBF00")]
	internal bool EnqueueMessageAsPayload(DeliveryMode deliveryMode, StreamBuffer opMessage, byte channelId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x1CFD0C0", Offset = "0x1CFB6C0", VA = "0x181CFD0C0")]
	internal void SendPing()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x1CFCBB0", Offset = "0x1CFB1B0", VA = "0x181CFCBB0")]
	internal PhotonSocketError SendData(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x1CFC5F0", Offset = "0x1CFABF0", VA = "0x181CFC5F0", Slot = "18")]
	internal override void ReceiveIncomingCommands(byte[] inbuff, int dataLength)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x1CFC400", Offset = "0x1CFAA00", VA = "0x181CFC400")]
	private void ReadPingResult(byte[] inbuff)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x1CFC4E0", Offset = "0x1CFAAE0", VA = "0x181CFC4E0")]
	protected internal void ReadPingResult(OperationResponse operationResponse)
	{
	}
}
