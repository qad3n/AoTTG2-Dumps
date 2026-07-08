using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D3")]
internal class XPathDocumentElementChildIterator : XPathDocumentBaseIterator
{
	[Token(Token = "0x4000EF3")]
	[FieldOffset(Offset = "0x28")]
	private string _localName;

	[Token(Token = "0x4000EF4")]
	[FieldOffset(Offset = "0x30")]
	private string _namespaceUri;

	[Token(Token = "0x6001C6E")]
	[Address(RVA = "0x4451990", Offset = "0x4451990", VA = "0x4451990")]
	public XPathDocumentElementChildIterator(XPathDocumentNavigator parent, string name, string namespaceURI)
	{
	}

	[Token(Token = "0x6001C6F")]
	[Address(RVA = "0x4451AB0", Offset = "0x4451AB0", VA = "0x4451AB0")]
	public XPathDocumentElementChildIterator(XPathDocumentElementChildIterator iter)
	{
	}

	[Token(Token = "0x6001C70")]
	[Address(RVA = "0x4451B60", Offset = "0x4451B60", VA = "0x4451B60", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C71")]
	[Address(RVA = "0x4451BB0", Offset = "0x4451BB0", VA = "0x4451BB0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
