using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200029A")]
internal sealed class DocumentOrderQuery : CacheOutputQuery
{
	[Token(Token = "0x6001ACE")]
	[Address(RVA = "0x443CF80", Offset = "0x443CF80", VA = "0x443CF80")]
	public DocumentOrderQuery(Query qyParent)
	{
	}

	[Token(Token = "0x6001ACF")]
	[Address(RVA = "0x443CF90", Offset = "0x443CF90", VA = "0x443CF90")]
	private DocumentOrderQuery(DocumentOrderQuery other)
	{
	}

	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x443CFA0", Offset = "0x443CFA0", VA = "0x443CFA0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x443D060", Offset = "0x443D060", VA = "0x443D060", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
