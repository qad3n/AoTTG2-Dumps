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
		[Address(RVA = "0x48487D0", Offset = "0x48487D0", VA = "0x48487D0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x48484A0", Offset = "0x48484A0", VA = "0x48484A0")]
	private static void ConstructChildPos(SyntaxTreeNode child, BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x4848610", Offset = "0x4848610", VA = "0x4848610", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x4848890", Offset = "0x4848890", VA = "0x4848890", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x4847770", Offset = "0x4847770", VA = "0x4847770")]
	public ChoiceNode()
	{
	}
}
