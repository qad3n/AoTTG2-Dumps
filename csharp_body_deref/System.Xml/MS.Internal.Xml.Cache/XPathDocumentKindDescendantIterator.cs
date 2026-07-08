using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D6")]
internal class XPathDocumentKindDescendantIterator : XPathDocumentBaseIterator
{
	[Token(Token = "0x4000EFA")]
	[FieldOffset(Offset = "0x28")]
	private XPathDocumentNavigator _end;

	[Token(Token = "0x4000EFB")]
	[FieldOffset(Offset = "0x30")]
	private XPathNodeType _typ;

	[Token(Token = "0x4000EFC")]
	[FieldOffset(Offset = "0x34")]
	private bool _matchSelf;

	[Token(Token = "0x6001C7A")]
	[Address(RVA = "0x4452230", Offset = "0x4452230", VA = "0x4452230")]
	public XPathDocumentKindDescendantIterator(XPathDocumentNavigator root, XPathNodeType typ, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C7B")]
	[Address(RVA = "0x4452340", Offset = "0x4452340", VA = "0x4452340")]
	public XPathDocumentKindDescendantIterator(XPathDocumentKindDescendantIterator iter)
	{
	}

	[Token(Token = "0x6001C7C")]
	[Address(RVA = "0x44523F0", Offset = "0x44523F0", VA = "0x44523F0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C7D")]
	[Address(RVA = "0x4452440", Offset = "0x4452440", VA = "0x4452440", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
