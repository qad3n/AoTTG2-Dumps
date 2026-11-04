// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ChoiceNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200017B")]
internal sealed class ChoiceNode : InteriorNode
{
	[Token(Token = "0x17000425")]
	public override bool IsNullable
	{
		[Token(Token = "0x6000FF3")]
		[Address(RVA = "0x277A860", Offset = "0x2778E60", VA = "0x18277A860", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x277A3A0", Offset = "0x27789A0", VA = "0x18277A3A0")]
	private static void ConstructChildPos(SyntaxTreeNode child, BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x277A5D0", Offset = "0x2778BD0", VA = "0x18277A5D0", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x277A850", Offset = "0x2778E50", VA = "0x18277A850", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ChoiceNode()
	{
	}
}
