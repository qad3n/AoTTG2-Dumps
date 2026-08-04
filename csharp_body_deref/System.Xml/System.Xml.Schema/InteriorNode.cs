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
		[Address(RVA = "0x4847800", Offset = "0x4847800", VA = "0x4847800")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE6")]
		[Address(RVA = "0x4847810", Offset = "0x4847810", VA = "0x4847810")]
		set
		{
		}
	}

	[Token(Token = "0x17000423")]
	public SyntaxTreeNode RightChild
	{
		[Token(Token = "0x6000FE7")]
		[Address(RVA = "0x4847820", Offset = "0x4847820", VA = "0x4847820")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FE8")]
		[Address(RVA = "0x4847830", Offset = "0x4847830", VA = "0x4847830")]
		set
		{
		}
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x4847840", Offset = "0x4847840", VA = "0x4847840")]
	protected void ExpandTreeNoRecursive(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x4847A90", Offset = "0x4847A90", VA = "0x4847A90", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x4847AF0", Offset = "0x4847AF0", VA = "0x4847AF0")]
	protected InteriorNode()
	{
	}
}
