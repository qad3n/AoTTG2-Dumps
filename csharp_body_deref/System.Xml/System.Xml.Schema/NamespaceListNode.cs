using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000177")]
internal class NamespaceListNode : SyntaxTreeNode
{
	[Token(Token = "0x400077D")]
	[FieldOffset(Offset = "0x10")]
	protected NamespaceList namespaceList;

	[Token(Token = "0x400077E")]
	[FieldOffset(Offset = "0x18")]
	protected object particle;

	[Token(Token = "0x17000421")]
	public override bool IsNullable
	{
		[Token(Token = "0x6000FE4")]
		[Address(RVA = "0x450A060", Offset = "0x450A060", VA = "0x450A060", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x4509970", Offset = "0x4509970", VA = "0x4509970")]
	public NamespaceListNode(NamespaceList namespaceList, object particle)
	{
	}

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x45099B0", Offset = "0x45099B0", VA = "0x45099B0", Slot = "8")]
	public virtual ICollection GetResolvedSymbols(SymbolsDictionary symbols)
	{
		return null;
	}

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x45099D0", Offset = "0x45099D0", VA = "0x45099D0", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x450A020", Offset = "0x450A020", VA = "0x450A020", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}
}
