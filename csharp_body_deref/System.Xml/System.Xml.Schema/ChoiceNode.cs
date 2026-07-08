using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200017B")]
internal sealed class ChoiceNode : InteriorNode
{
	[Token(Token = "0x17000425")]
	public override bool IsNullable
	{
		[Token(Token = "0x6000FF3")]
		[Address(RVA = "0x450B070", Offset = "0x450B070", VA = "0x450B070", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x450AD40", Offset = "0x450AD40", VA = "0x450AD40")]
	private static void ConstructChildPos(SyntaxTreeNode child, BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x450AEB0", Offset = "0x450AEB0", VA = "0x450AEB0", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x450B130", Offset = "0x450B130", VA = "0x450B130", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x450A010", Offset = "0x450A010", VA = "0x450A010")]
	public ChoiceNode()
	{
	}
}
