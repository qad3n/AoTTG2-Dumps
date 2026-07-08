using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002AC")]
internal sealed class MergeFilterQuery : CacheOutputQuery
{
	[Token(Token = "0x4000E5D")]
	[FieldOffset(Offset = "0x28")]
	private Query _child;

	[Token(Token = "0x6001B56")]
	[Address(RVA = "0x4444D10", Offset = "0x4444D10", VA = "0x4444D10")]
	public MergeFilterQuery(Query input, Query child)
	{
	}

	[Token(Token = "0x6001B57")]
	[Address(RVA = "0x4444D40", Offset = "0x4444D40", VA = "0x4444D40")]
	private MergeFilterQuery(MergeFilterQuery other)
	{
	}

	[Token(Token = "0x6001B58")]
	[Address(RVA = "0x4444D80", Offset = "0x4444D80", VA = "0x4444D80", Slot = "13")]
	public override void SetXsltContext(XsltContext xsltContext)
	{
	}

	[Token(Token = "0x6001B59")]
	[Address(RVA = "0x4444DD0", Offset = "0x4444DD0", VA = "0x4444DD0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B5A")]
	[Address(RVA = "0x4444EE0", Offset = "0x4444EE0", VA = "0x4444EE0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
