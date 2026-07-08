using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000176")]
internal class LeafNode : SyntaxTreeNode
{
	[Token(Token = "0x400077C")]
	[FieldOffset(Offset = "0x10")]
	private int pos;

	[Token(Token = "0x1700041F")]
	public int Pos
	{
		[Token(Token = "0x6000FDB")]
		[Address(RVA = "0x4509890", Offset = "0x4509890", VA = "0x4509890")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000FDC")]
		[Address(RVA = "0x45098A0", Offset = "0x45098A0", VA = "0x45098A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000420")]
	public override bool IsNullable
	{
		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x4509960", Offset = "0x4509960", VA = "0x4509960", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x4509870", Offset = "0x4509870", VA = "0x4509870")]
	public LeafNode(int pos)
	{
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x45098B0", Offset = "0x45098B0", VA = "0x45098B0", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x45098C0", Offset = "0x45098C0", VA = "0x45098C0", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}
}
