using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D5")]
internal class XPathDocumentElementDescendantIterator : XPathDocumentBaseIterator
{
	[Token(Token = "0x4000EF6")]
	[FieldOffset(Offset = "0x28")]
	private XPathDocumentNavigator _end;

	[Token(Token = "0x4000EF7")]
	[FieldOffset(Offset = "0x30")]
	private string _localName;

	[Token(Token = "0x4000EF8")]
	[FieldOffset(Offset = "0x38")]
	private string _namespaceUri;

	[Token(Token = "0x4000EF9")]
	[FieldOffset(Offset = "0x40")]
	private bool _matchSelf;

	[Token(Token = "0x6001C76")]
	[Address(RVA = "0x4451E30", Offset = "0x4451E30", VA = "0x4451E30")]
	public XPathDocumentElementDescendantIterator(XPathDocumentNavigator root, string name, string namespaceURI, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C77")]
	[Address(RVA = "0x4451FE0", Offset = "0x4451FE0", VA = "0x4451FE0")]
	public XPathDocumentElementDescendantIterator(XPathDocumentElementDescendantIterator iter)
	{
	}

	[Token(Token = "0x6001C78")]
	[Address(RVA = "0x44520A0", Offset = "0x44520A0", VA = "0x44520A0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C79")]
	[Address(RVA = "0x44520F0", Offset = "0x44520F0", VA = "0x44520F0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
