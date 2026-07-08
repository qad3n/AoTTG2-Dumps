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
	[Address(RVA = "0x443C8C0", Offset = "0x443C8C0", VA = "0x443C8C0")]
	internal DescendantQuery(Query qyParent, string Name, string Prefix, XPathNodeType Type, bool matchSelf, bool abbrAxis)
	{
	}

	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x443C8F0", Offset = "0x443C8F0", VA = "0x443C8F0")]
	public DescendantQuery(DescendantQuery other)
	{
	}

	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x443C940", Offset = "0x443C940", VA = "0x443C940", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x443C9A0", Offset = "0x443C9A0", VA = "0x443C9A0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x443CB70", Offset = "0x443CB70", VA = "0x443CB70", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
