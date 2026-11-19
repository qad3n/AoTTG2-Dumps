// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.StarNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200017E")]
internal sealed class StarNode : InteriorNode
{
	[Token(Token = "0x17000428")]
	public override bool IsNullable
	{
		[Token(Token = "0x6000FFD")]
		[Address(RVA = "0x61477F0", Offset = "0x61467F0", VA = "0x61477F0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x6147670", Offset = "0x6146670", VA = "0x6147670", Slot = "5")]
	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x6147800", Offset = "0x6146800", VA = "0x6147800")]
	public StarNode()
	{
	}
}
