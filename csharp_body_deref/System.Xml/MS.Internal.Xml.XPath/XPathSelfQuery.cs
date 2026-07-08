using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002D0")]
internal sealed class XPathSelfQuery : BaseAxisQuery
{
	[Token(Token = "0x6001C5D")]
	[Address(RVA = "0x44482E0", Offset = "0x44482E0", VA = "0x44482E0")]
	public XPathSelfQuery(Query qyInput, string Name, string Prefix, XPathNodeType Type)
	{
	}

	[Token(Token = "0x6001C5E")]
	[Address(RVA = "0x44514F0", Offset = "0x44514F0", VA = "0x44514F0")]
	private XPathSelfQuery(XPathSelfQuery other)
	{
	}

	[Token(Token = "0x6001C5F")]
	[Address(RVA = "0x4451500", Offset = "0x4451500", VA = "0x4451500", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001C60")]
	[Address(RVA = "0x4451590", Offset = "0x4451590", VA = "0x4451590", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
