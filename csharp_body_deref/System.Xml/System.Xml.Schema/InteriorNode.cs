using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000178")]
internal abstract class InteriorNode : SyntaxTreeNode
{
	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x10")]
	private SyntaxTreeNode leftChild;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x18")]
	private SyntaxTreeNode rightChild;

	[Token(Token = "0x17000422")]
	public SyntaxTreeNode LeftChild
	{
		[Token(Token = "0x6000FE5")]
		[Address(RVA = "0x450A0A0", Offset = "0x450A0A0", VA = "0x450A0A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE6")]
		[Address(RVA = "0x450A0B0", Offset = "0x450A0B0", VA = "0x450A0B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000423")]
	public SyntaxTreeNode RightChild
	{
		[Token(Token = "0x6000FE7")]
		[Address(RVA = "0x450A0C0", Offset = "0x450A0C0", VA = "0x450A0C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE8")]
		[Address(RVA = "0x450A0D0", Offset = "0x450A0D0", VA = "0x450A0D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x450A0E0", Offset = "0x450A0E0", VA = "0x450A0E0")]
	protected void ExpandTreeNoRecursive(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x450A330", Offset = "0x450A330", VA = "0x450A330", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x450A390", Offset = "0x450A390", VA = "0x450A390")]
	protected InteriorNode()
	{
	}
}
