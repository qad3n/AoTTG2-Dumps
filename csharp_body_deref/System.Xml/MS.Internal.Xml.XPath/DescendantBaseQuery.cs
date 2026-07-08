using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000297")]
internal abstract class DescendantBaseQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E1D")]
	[FieldOffset(Offset = "0x54")]
	protected bool matchSelf;

	[Token(Token = "0x4000E1E")]
	[FieldOffset(Offset = "0x55")]
	protected bool abbrAxis;

	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x443C860", Offset = "0x443C860", VA = "0x443C860")]
	public DescendantBaseQuery(Query qyParent, string Name, string Prefix, XPathNodeType Type, bool matchSelf, bool abbrAxis)
	{
	}

	[Token(Token = "0x6001AC1")]
	[Address(RVA = "0x443C890", Offset = "0x443C890", VA = "0x443C890")]
	public DescendantBaseQuery(DescendantBaseQuery other)
	{
	}
}
