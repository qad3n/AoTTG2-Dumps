using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000179")]
internal sealed class SequenceNode : InteriorNode
{
	[Token(Token = "0x200017A")]
	private struct SequenceConstructPosContext
	{
		[Token(Token = "0x4000781")]
		[FieldOffset(Offset = "0x0")]
		public SequenceNode this_;

		[Token(Token = "0x4000782")]
		[FieldOffset(Offset = "0x8")]
		public BitSet firstpos;

		[Token(Token = "0x4000783")]
		[FieldOffset(Offset = "0x10")]
		public BitSet lastpos;

		[Token(Token = "0x4000784")]
		[FieldOffset(Offset = "0x18")]
		public BitSet lastposLeft;

		[Token(Token = "0x4000785")]
		[FieldOffset(Offset = "0x20")]
		public BitSet firstposRight;

		[Token(Token = "0x6000FF0")]
		[Address(RVA = "0x450AB10", Offset = "0x450AB10", VA = "0x450AB10")]
		public SequenceConstructPosContext(SequenceNode node, BitSet firstpos, BitSet lastpos)
		{
		}
	}

	[Token(Token = "0x17000424")]
	public override bool IsNullable
	{
		[Token(Token = "0x6000FED")]
		[Address(RVA = "0x450AB80", Offset = "0x450AB80", VA = "0x450AB80", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x450A3A0", Offset = "0x450A3A0", VA = "0x450A3A0", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x450AD20", Offset = "0x450AD20", VA = "0x450AD20", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x450AD30", Offset = "0x450AD30", VA = "0x450AD30")]
	public SequenceNode()
	{
	}
}
