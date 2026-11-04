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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE6")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000423")]
	public SyntaxTreeNode RightChild
	{
		[Token(Token = "0x6000FE7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE8")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x277E520", Offset = "0x277CB20", VA = "0x18277E520")]
	protected void ExpandTreeNoRecursive(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x277E720", Offset = "0x277CD20", VA = "0x18277E720", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected InteriorNode()
	{
	}
}
