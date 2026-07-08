using System.Collections.Generic;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B6")]
internal class PreSiblingQuery : CacheAxisQuery
{
	[Token(Token = "0x17000719")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001B95")]
		[Address(RVA = "0x4446C30", Offset = "0x4446C30", VA = "0x4446C30", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B90")]
	[Address(RVA = "0x4446710", Offset = "0x4446710", VA = "0x4446710")]
	public PreSiblingQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001B91")]
	[Address(RVA = "0x44467B0", Offset = "0x44467B0", VA = "0x44467B0")]
	protected PreSiblingQuery(PreSiblingQuery other)
	{
	}

	[Token(Token = "0x6001B92")]
	[Address(RVA = "0x44467C0", Offset = "0x44467C0", VA = "0x44467C0")]
	private static bool NotVisited(XPathNavigator nav, List<XPathNavigator> parentStk)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B93")]
	[Address(RVA = "0x44468F0", Offset = "0x44468F0", VA = "0x44468F0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B94")]
	[Address(RVA = "0x4446BE0", Offset = "0x4446BE0", VA = "0x4446BE0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
