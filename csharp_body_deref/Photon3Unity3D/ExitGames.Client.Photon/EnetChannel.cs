using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200000C")]
internal class EnetChannel
{
	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x10")]
	internal byte ChannelNumber;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x18")]
	internal NonAllocDictionary<int, NCommand> incomingReliableCommandsList;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x20")]
	internal NonAllocDictionary<int, NCommand> incomingUnreliableCommandsList;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x28")]
	internal Queue<NCommand> incomingUnsequencedCommandsList;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x30")]
	internal NonAllocDictionary<int, NCommand> incomingUnsequencedFragments;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x38")]
	internal Queue<NCommand> outgoingReliableCommandsList;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x40")]
	internal Queue<NCommand> outgoingUnreliableCommandsList;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x48")]
	internal int incomingReliableSequenceNumber;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x4C")]
	internal int incomingUnreliableSequenceNumber;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x50")]
	internal int outgoingReliableSequenceNumber;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x54")]
	internal int outgoingUnreliableSequenceNumber;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x58")]
	internal int outgoingReliableUnsequencedNumber;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x5C")]
	private int reliableUnsequencedNumbersCompletelyReceived;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x60")]
	private HashSet<int> reliableUnsequencedNumbersReceived;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x68")]
	internal int highestReceivedAck;

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3B69180", Offset = "0x3B69180", VA = "0x3B69180")]
	public EnetChannel(byte channelNumber, int commandBufferSize)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3B69370", Offset = "0x3B69370", VA = "0x3B69370")]
	public bool ContainsUnreliableSequenceNumber(int unreliableSequenceNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3B693C0", Offset = "0x3B693C0", VA = "0x3B693C0")]
	public NCommand FetchUnreliableSequenceNumber(int unreliableSequenceNumber)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3B69410", Offset = "0x3B69410", VA = "0x3B69410")]
	public bool ContainsReliableSequenceNumber(int reliableSequenceNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3B69460", Offset = "0x3B69460", VA = "0x3B69460")]
	public NCommand FetchReliableSequenceNumber(int reliableSequenceNumber)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3B694B0", Offset = "0x3B694B0", VA = "0x3B694B0")]
	public bool TryGetFragment(int reliableSequenceNumber, bool isSequenced, out NCommand fragment)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3B69520", Offset = "0x3B69520", VA = "0x3B69520")]
	public void RemoveFragment(int reliableSequenceNumber, bool isSequenced)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3B69580", Offset = "0x3B69580", VA = "0x3B69580")]
	public void clearAll()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3B69730", Offset = "0x3B69730", VA = "0x3B69730")]
	public bool QueueIncomingReliableUnsequenced(NCommand command)
	{
		return default(bool);
	}
}
