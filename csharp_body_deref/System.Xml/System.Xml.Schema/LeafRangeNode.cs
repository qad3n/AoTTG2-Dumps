// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.LeafRangeNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200017F")]
internal sealed class LeafRangeNode : LeafNode
{
	[Token(Token = "0x4000786")]
	[FieldOffset(Offset = "0x18")]
	private decimal min;

	[Token(Token = "0x4000787")]
	[FieldOffset(Offset = "0x28")]
	private decimal max;

	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x38")]
	private BitSet nextIteration;

	[Token(Token = "0x17000429")]
	public decimal Max
	{
		[Token(Token = "0x6001001")]
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0")]
		get
		{
			return 0m;
		}
	}

	[Token(Token = "0x1700042A")]
	public decimal Min
	{
		[Token(Token = "0x6001002")]
		[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
		get
		{
			return 0m;
		}
	}

	[Token(Token = "0x1700042B")]
	public BitSet NextIteration
	{
		[Token(Token = "0x6001003")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001004")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042C")]
	public override bool IsRangeNode
	{
		[Token(Token = "0x6001005")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x277F1A0", Offset = "0x277D7A0", VA = "0x18277F1A0")]
	public LeafRangeNode(decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x277F1F0", Offset = "0x277D7F0", VA = "0x18277F1F0")]
	public LeafRangeNode(int pos, decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x277F160", Offset = "0x277D760", VA = "0x18277F160", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}
}
