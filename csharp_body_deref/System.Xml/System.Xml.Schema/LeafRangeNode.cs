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
		[Address(RVA = "0x450B5C0", Offset = "0x450B5C0", VA = "0x450B5C0")]
		get
		{
			return default(decimal);
		}
	}

	[Token(Token = "0x1700042A")]
	public decimal Min
	{
		[Token(Token = "0x6001002")]
		[Address(RVA = "0x450B5D0", Offset = "0x450B5D0", VA = "0x450B5D0")]
		get
		{
			return default(decimal);
		}
	}

	[Token(Token = "0x1700042B")]
	public BitSet NextIteration
	{
		[Token(Token = "0x6001003")]
		[Address(RVA = "0x450B5E0", Offset = "0x450B5E0", VA = "0x450B5E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001004")]
		[Address(RVA = "0x450B5F0", Offset = "0x450B5F0", VA = "0x450B5F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042C")]
	public override bool IsRangeNode
	{
		[Token(Token = "0x6001005")]
		[Address(RVA = "0x450B600", Offset = "0x450B600", VA = "0x450B600", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x450B530", Offset = "0x450B530", VA = "0x450B530")]
	public LeafRangeNode(decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x450B570", Offset = "0x450B570", VA = "0x450B570")]
	public LeafRangeNode(int pos, decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x450B610", Offset = "0x450B610", VA = "0x450B610", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}
}
