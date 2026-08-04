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
		[Address(RVA = "0x4848D20", Offset = "0x4848D20", VA = "0x4848D20")]
		get
		{
			return default(decimal);
		}
	}

	[Token(Token = "0x1700042A")]
	public decimal Min
	{
		[Token(Token = "0x6001002")]
		[Address(RVA = "0x4848D30", Offset = "0x4848D30", VA = "0x4848D30")]
		get
		{
			return default(decimal);
		}
	}

	[Token(Token = "0x1700042B")]
	public BitSet NextIteration
	{
		[Token(Token = "0x6001003")]
		[Address(RVA = "0x4848D40", Offset = "0x4848D40", VA = "0x4848D40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001004")]
		[Address(RVA = "0x4848D50", Offset = "0x4848D50", VA = "0x4848D50")]
		set
		{
		}
	}

	[Token(Token = "0x1700042C")]
	public override bool IsRangeNode
	{
		[Token(Token = "0x6001005")]
		[Address(RVA = "0x4848D60", Offset = "0x4848D60", VA = "0x4848D60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x4848C90", Offset = "0x4848C90", VA = "0x4848C90")]
	public LeafRangeNode(decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x4848CD0", Offset = "0x4848CD0", VA = "0x4848CD0")]
	public LeafRangeNode(int pos, decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x4848D70", Offset = "0x4848D70", VA = "0x4848D70", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}
}
