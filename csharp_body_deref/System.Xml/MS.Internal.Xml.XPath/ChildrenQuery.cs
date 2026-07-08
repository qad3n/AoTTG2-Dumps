using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000292")]
internal class ChildrenQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E17")]
	[FieldOffset(Offset = "0x58")]
	private XPathNodeIterator _iterator;

	[Token(Token = "0x6001AA0")]
	[Address(RVA = "0x443B6C0", Offset = "0x443B6C0", VA = "0x443B6C0")]
	public ChildrenQuery(Query qyInput, string name, string prefix, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001AA1")]
	[Address(RVA = "0x443B820", Offset = "0x443B820", VA = "0x443B820")]
	protected ChildrenQuery(ChildrenQuery other)
	{
	}

	[Token(Token = "0x6001AA2")]
	[Address(RVA = "0x443B940", Offset = "0x443B940", VA = "0x443B940", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x443C120", Offset = "0x443C120", VA = "0x443C120", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AA4")]
	[Address(RVA = "0x443C320", Offset = "0x443C320", VA = "0x443C320", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
