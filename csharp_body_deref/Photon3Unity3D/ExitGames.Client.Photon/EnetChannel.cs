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
	[Address(RVA = "0x3E5EAD0", Offset = "0x3E5EAD0", VA = "0x3E5EAD0")]
	public EnetChannel(byte channelNumber, int commandBufferSize)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3E5ECC0", Offset = "0x3E5ECC0", VA = "0x3E5ECC0")]
	public bool ContainsUnreliableSequenceNumber(int unreliableSequenceNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3E5ED10", Offset = "0x3E5ED10", VA = "0x3E5ED10")]
	public NCommand FetchUnreliableSequenceNumber(int unreliableSequenceNumber)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3E5ED60", Offset = "0x3E5ED60", VA = "0x3E5ED60")]
	public bool ContainsReliableSequenceNumber(int reliableSequenceNumber)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3E5EDB0", Offset = "0x3E5EDB0", VA = "0x3E5EDB0")]
	public NCommand FetchReliableSequenceNumber(int reliableSequenceNumber)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3E5EE00", Offset = "0x3E5EE00", VA = "0x3E5EE00")]
	public bool TryGetFragment(int reliableSequenceNumber, bool isSequenced, out NCommand fragment)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3E5EE70", Offset = "0x3E5EE70", VA = "0x3E5EE70")]
	public void RemoveFragment(int reliableSequenceNumber, bool isSequenced)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3E5EED0", Offset = "0x3E5EED0", VA = "0x3E5EED0")]
	public void clearAll()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3E5F080", Offset = "0x3E5F080", VA = "0x3E5F080")]
	public bool QueueIncomingReliableUnsequenced(NCommand command)
	{
		return default(bool);
	}
}
