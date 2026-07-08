using System;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200001A")]
internal class NCommand : IComparable<NCommand>
{
	[Token(Token = "0x4000086")]
	internal const byte FV_UNRELIABLE = 0;

	[Token(Token = "0x4000087")]
	internal const byte FV_RELIABLE = 1;

	[Token(Token = "0x4000088")]
	internal const byte FV_UNRELIABLE_UNSEQUENCED = 2;

	[Token(Token = "0x4000089")]
	internal const byte FV_RELIBALE_UNSEQUENCED = 3;

	[Token(Token = "0x400008A")]
	internal const byte CT_NONE = 0;

	[Token(Token = "0x400008B")]
	internal const byte CT_ACK = 1;

	[Token(Token = "0x400008C")]
	internal const byte CT_CONNECT = 2;

	[Token(Token = "0x400008D")]
	internal const byte CT_VERIFYCONNECT = 3;

	[Token(Token = "0x400008E")]
	internal const byte CT_DISCONNECT = 4;

	[Token(Token = "0x400008F")]
	internal const byte CT_PING = 5;

	[Token(Token = "0x4000090")]
	internal const byte CT_SENDRELIABLE = 6;

	[Token(Token = "0x4000091")]
	internal const byte CT_SENDUNRELIABLE = 7;

	[Token(Token = "0x4000092")]
	internal const byte CT_SENDFRAGMENT = 8;

	[Token(Token = "0x4000093")]
	internal const byte CT_SENDUNSEQUENCED = 11;

	[Token(Token = "0x4000094")]
	internal const byte CT_EG_SERVERTIME = 12;

	[Token(Token = "0x4000095")]
	internal const byte CT_EG_SEND_UNRELIABLE_PROCESSED = 13;

	[Token(Token = "0x4000096")]
	internal const byte CT_EG_SEND_RELIABLE_UNSEQUENCED = 14;

	[Token(Token = "0x4000097")]
	internal const byte CT_EG_SEND_FRAGMENT_UNSEQUENCED = 15;

	[Token(Token = "0x4000098")]
	internal const byte CT_EG_ACK_UNSEQUENCED = 16;

	[Token(Token = "0x4000099")]
	internal const int HEADER_UDP_PACK_LENGTH = 12;

	[Token(Token = "0x400009A")]
	internal const int CmdSizeMinimum = 12;

	[Token(Token = "0x400009B")]
	internal const int CmdSizeAck = 20;

	[Token(Token = "0x400009C")]
	internal const int CmdSizeConnect = 44;

	[Token(Token = "0x400009D")]
	internal const int CmdSizeVerifyConnect = 44;

	[Token(Token = "0x400009E")]
	internal const int CmdSizeDisconnect = 12;

	[Token(Token = "0x400009F")]
	internal const int CmdSizePing = 12;

	[Token(Token = "0x40000A0")]
	internal const int CmdSizeReliableHeader = 12;

	[Token(Token = "0x40000A1")]
	internal const int CmdSizeUnreliableHeader = 16;

	[Token(Token = "0x40000A2")]
	internal const int CmdSizeUnsequensedHeader = 16;

	[Token(Token = "0x40000A3")]
	internal const int CmdSizeFragmentHeader = 32;

	[Token(Token = "0x40000A4")]
	internal const int CmdSizeMaxHeader = 36;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x10")]
	internal byte commandFlags;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x11")]
	internal byte commandType;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x12")]
	internal byte commandChannelID;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x14")]
	internal int reliableSequenceNumber;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x18")]
	internal int unreliableSequenceNumber;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x1C")]
	internal int unsequencedGroupNumber;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x20")]
	internal byte reservedByte;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x24")]
	internal int startSequenceNumber;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x28")]
	internal int fragmentCount;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x2C")]
	internal int fragmentNumber;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x30")]
	internal int totalLength;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x34")]
	internal int fragmentOffset;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x38")]
	internal int fragmentsRemaining;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x3C")]
	internal int commandSentTime;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x40")]
	internal byte commandSentCount;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x44")]
	internal int roundTripTimeout;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x48")]
	internal int timeoutTime;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x4C")]
	internal int ackReceivedReliableSequenceNumber;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x50")]
	internal int ackReceivedSentTime;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x54")]
	internal int Size;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x58")]
	internal StreamBuffer Payload;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x60")]
	internal NCommandPool returnPool;

	[Token(Token = "0x1700002A")]
	protected internal int SizeOfPayload
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x3B71E40", Offset = "0x3B71E40", VA = "0x3B71E40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002B")]
	protected internal bool IsFlaggedUnsequenced
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x3B72950", Offset = "0x3B72950", VA = "0x3B72950")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002C")]
	protected internal bool IsFlaggedReliable
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x3B716E0", Offset = "0x3B716E0", VA = "0x3B716E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x3B72A70", Offset = "0x3B72A70", VA = "0x3B72A70")]
	internal static void CreateAck(byte[] buffer, int offset, NCommand commandToAck, int sentTime)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x3B77400", Offset = "0x3B77400", VA = "0x3B77400")]
	internal NCommand(EnetPeer peer, byte commandType, StreamBuffer payload, byte channel)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3B77440", Offset = "0x3B77440", VA = "0x3B77440")]
	internal void Initialize(EnetPeer peer, byte commandType, StreamBuffer payload, byte channel)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x3B770A0", Offset = "0x3B770A0", VA = "0x3B770A0")]
	internal NCommand(EnetPeer peer, byte[] inBuff, ref int readingOffset)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3B770E0", Offset = "0x3B770E0", VA = "0x3B770E0")]
	internal void Initialize(EnetPeer peer, byte[] inBuff, ref int readingOffset)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x3B77870", Offset = "0x3B77870", VA = "0x3B77870")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x3B71C90", Offset = "0x3B71C90", VA = "0x3B71C90")]
	internal void SerializeHeader(byte[] buffer, ref int bufferIndex)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x3B71E60", Offset = "0x3B71E60", VA = "0x3B71E60")]
	internal byte[] Serialize()
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3B6EAE0", Offset = "0x3B6EAE0", VA = "0x3B6EAE0")]
	public void FreePayload()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3B6EB50", Offset = "0x3B6EB50", VA = "0x3B6EB50")]
	public void Release()
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3B778B0", Offset = "0x3B778B0", VA = "0x3B778B0", Slot = "4")]
	public int CompareTo(NCommand other)
	{
		return default(int);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3B778E0", Offset = "0x3B778E0", VA = "0x3B778E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
