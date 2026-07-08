using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A7")]
internal sealed class IDQuery : CacheOutputQuery
{
	[Token(Token = "0x6001B1F")]
	[Address(RVA = "0x44401E0", Offset = "0x44401E0", VA = "0x44401E0")]
	public IDQuery(Query arg)
	{
	}

	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x44401F0", Offset = "0x44401F0", VA = "0x44401F0")]
	private IDQuery(IDQuery other)
	{
	}

	[Token(Token = "0x6001B21")]
	[Address(RVA = "0x4440200", Offset = "0x4440200", VA = "0x4440200", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x44404D0", Offset = "0x44404D0", VA = "0x44404D0")]
	private void ProcessIds(XPathNavigator contextNode, string val)
	{
	}

	[Token(Token = "0x6001B23")]
	[Address(RVA = "0x44405B0", Offset = "0x44405B0", VA = "0x44405B0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
