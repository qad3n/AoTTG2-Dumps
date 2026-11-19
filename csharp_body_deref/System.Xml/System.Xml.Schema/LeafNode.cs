// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.LeafNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000176")]
internal class LeafNode : SyntaxTreeNode
{
	[Token(Token = "0x400077C")]
	[FieldOffset(Offset = "0x10")]
	private int pos;

	[Token(Token = "0x1700041F")]
	public int Pos
	{
		[Token(Token = "0x6000FDB")]
		[Address(RVA = "0x6145C20", Offset = "0x6144C20", VA = "0x6145C20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000FDC")]
		[Address(RVA = "0x6145C30", Offset = "0x6144C30", VA = "0x6145C30")]
		set
		{
		}
	}

	[Token(Token = "0x17000420")]
	public override bool IsNullable
	{
		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x6145CF0", Offset = "0x6144CF0", VA = "0x6145CF0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x6145C00", Offset = "0x6144C00", VA = "0x6145C00")]
	public LeafNode(int pos)
	{
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x6145C40", Offset = "0x6144C40", VA = "0x6145C40", Slot = "4")]
	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}

	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x6145C50", Offset = "0x6144C50", VA = "0x6145C50", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}
}
