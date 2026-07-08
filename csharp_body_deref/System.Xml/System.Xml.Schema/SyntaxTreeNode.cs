using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000175")]
internal abstract class SyntaxTreeNode
{
	[Token(Token = "0x1700041D")]
	public abstract bool IsNullable
	{
		[Token(Token = "0x6000FD7")]
		get;
	}

	[Token(Token = "0x1700041E")]
	public virtual bool IsRangeNode
	{
		[Token(Token = "0x6000FD8")]
		[Address(RVA = "0x4509850", Offset = "0x4509850", VA = "0x4509850", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FD5")]
	public abstract void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions);

	[Token(Token = "0x6000FD6")]
	public abstract void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos);

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x4509860", Offset = "0x4509860", VA = "0x4509860")]
	protected SyntaxTreeNode()
	{
	}
}
