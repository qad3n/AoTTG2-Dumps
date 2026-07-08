using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D4")]
internal class XPathDocumentKindChildIterator : XPathDocumentBaseIterator
{
	[Token(Token = "0x4000EF5")]
	[FieldOffset(Offset = "0x24")]
	private XPathNodeType _typ;

	[Token(Token = "0x6001C72")]
	[Address(RVA = "0x4451C10", Offset = "0x4451C10", VA = "0x4451C10")]
	public XPathDocumentKindChildIterator(XPathDocumentNavigator parent, XPathNodeType typ)
	{
	}

	[Token(Token = "0x6001C73")]
	[Address(RVA = "0x4451C90", Offset = "0x4451C90", VA = "0x4451C90")]
	public XPathDocumentKindChildIterator(XPathDocumentKindChildIterator iter)
	{
	}

	[Token(Token = "0x6001C74")]
	[Address(RVA = "0x4451D20", Offset = "0x4451D20", VA = "0x4451D20", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C75")]
	[Address(RVA = "0x4451DE0", Offset = "0x4451DE0", VA = "0x4451DE0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
