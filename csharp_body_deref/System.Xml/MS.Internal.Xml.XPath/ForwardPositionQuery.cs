using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A1")]
internal class ForwardPositionQuery : CacheOutputQuery
{
	[Token(Token = "0x6001B00")]
	[Address(RVA = "0x443E9D0", Offset = "0x443E9D0", VA = "0x443E9D0")]
	public ForwardPositionQuery(Query input)
	{
	}

	[Token(Token = "0x6001B01")]
	[Address(RVA = "0x443E9E0", Offset = "0x443E9E0", VA = "0x443E9E0")]
	protected ForwardPositionQuery(ForwardPositionQuery other)
	{
	}

	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x443E9F0", Offset = "0x443E9F0", VA = "0x443E9F0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B03")]
	[Address(RVA = "0x443EB70", Offset = "0x443EB70", VA = "0x443EB70", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
