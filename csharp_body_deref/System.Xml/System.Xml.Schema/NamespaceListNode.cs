// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.NamespaceListNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48477C0", Offset = "0x48477C0", VA = "0x48477C0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x48470D0", Offset = "0x48470D0", VA = "0x48470D0")]
	public NamespaceListNode(NamespaceList namespaceList, object particle)
	{
	}

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x4847110", Offset = "0x4847110", VA = "0x4847110", Slot = "8")]
	public virtual ICollection GetResolvedSymbols(SymbolsDictionary symbols)
	{
		return null;
	}

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x4847130", Offset = "0x4847130", VA = "0x4847130", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x4847780", Offset = "0x4847780", VA = "0x4847780", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}
}
