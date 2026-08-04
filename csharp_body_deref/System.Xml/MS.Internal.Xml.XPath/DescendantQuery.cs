// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.DescendantQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000298")]
internal class DescendantQuery : DescendantBaseQuery
{
	[Token(Token = "0x4000E1F")]
	[FieldOffset(Offset = "0x58")]
	private XPathNodeIterator _nodeIterator;

	[Token(Token = "0x6001AC2")]
	[Address(RVA = "0x477A020", Offset = "0x477A020", VA = "0x477A020")]
	internal DescendantQuery(Query qyParent, string Name, string Prefix, XPathNodeType Type, bool matchSelf, bool abbrAxis)
	{
	}

	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x477A050", Offset = "0x477A050", VA = "0x477A050")]
	public DescendantQuery(DescendantQuery other)
	{
	}

	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x477A0A0", Offset = "0x477A0A0", VA = "0x477A0A0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x477A100", Offset = "0x477A100", VA = "0x477A100", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x477A2D0", Offset = "0x477A2D0", VA = "0x477A2D0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
