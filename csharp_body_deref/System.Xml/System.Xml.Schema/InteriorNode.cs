// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.InteriorNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x6146350", Offset = "0x6145350", VA = "0x6146350")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE6")]
		[Address(RVA = "0x6146360", Offset = "0x6145360", VA = "0x6146360")]
		set
		{
		}
	}

	[Token(Token = "0x17000423")]
	public SyntaxTreeNode RightChild
	{
		[Token(Token = "0x6000FE7")]
		[Address(RVA = "0x6146370", Offset = "0x6145370", VA = "0x6146370")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE8")]
		[Address(RVA = "0x6146380", Offset = "0x6145380", VA = "0x6146380")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x6146390", Offset = "0x6145390", VA = "0x6146390")]
	protected void ExpandTreeNoRecursive(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x61465D0", Offset = "0x61455D0", VA = "0x61465D0", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x6146630", Offset = "0x6145630", VA = "0x6146630")]
	protected InteriorNode()
	{
	}
}
