// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SequenceNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000179")]
internal sealed class SequenceNode : InteriorNode
{
	[Token(Token = "0x200017A")]
	private struct SequenceConstructPosContext
	{
		[Token(Token = "0x4000781")]
		[FieldOffset(Offset = "0x0")]
		public SequenceNode this_;

		[Token(Token = "0x4000782")]
		[FieldOffset(Offset = "0x8")]
		public BitSet firstpos;

		[Token(Token = "0x4000783")]
		[FieldOffset(Offset = "0x10")]
		public BitSet lastpos;

		[Token(Token = "0x4000784")]
		[FieldOffset(Offset = "0x18")]
		public BitSet lastposLeft;

		[Token(Token = "0x4000785")]
		[FieldOffset(Offset = "0x20")]
		public BitSet firstposRight;

		[Token(Token = "0x6000FF0")]
		[Address(RVA = "0x4848270", Offset = "0x4848270", VA = "0x4848270")]
		public SequenceConstructPosContext(SequenceNode node, BitSet firstpos, BitSet lastpos)
		{
		}
	}

	[Token(Token = "0x17000424")]
	public override bool IsNullable
	{
		[Token(Token = "0x6000FED")]
		[Address(RVA = "0x48482E0", Offset = "0x48482E0", VA = "0x48482E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x4847B00", Offset = "0x4847B00", VA = "0x4847B00", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x4848480", Offset = "0x4848480", VA = "0x4848480", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x4848490", Offset = "0x4848490", VA = "0x4848490")]
	public SequenceNode()
	{
	}
}
