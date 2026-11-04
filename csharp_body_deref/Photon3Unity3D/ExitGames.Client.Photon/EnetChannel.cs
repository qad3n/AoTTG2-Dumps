// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.EnetChannel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x1CBBF80", Offset = "0x1CBA580", VA = "0x181CBBF80")]
	public EnetChannel(byte channelNumber, int commandBufferSize)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x1CBBC00", Offset = "0x1CBA200", VA = "0x181CBBC00")]
	public bool ContainsUnreliableSequenceNumber(int unreliableSequenceNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x1CBBCC0", Offset = "0x1CBA2C0", VA = "0x181CBBCC0")]
	public NCommand FetchUnreliableSequenceNumber(int unreliableSequenceNumber)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x1CBBBA0", Offset = "0x1CBA1A0", VA = "0x181CBBBA0")]
	public bool ContainsReliableSequenceNumber(int reliableSequenceNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x1CBBC60", Offset = "0x1CBA260", VA = "0x181CBBC60")]
	public NCommand FetchReliableSequenceNumber(int reliableSequenceNumber)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x1CBBF10", Offset = "0x1CBA510", VA = "0x181CBBF10")]
	public bool TryGetFragment(int reliableSequenceNumber, bool isSequenced, out NCommand fragment)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x1CBBEA0", Offset = "0x1CBA4A0", VA = "0x181CBBEA0")]
	public void RemoveFragment(int reliableSequenceNumber, bool isSequenced)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x1CBC160", Offset = "0x1CBA760", VA = "0x181CBC160")]
	public void clearAll()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x1CBBD20", Offset = "0x1CBA320", VA = "0x181CBBD20")]
	public bool QueueIncomingReliableUnsequenced(NCommand command)
	{
		return default(bool);
	}
}
