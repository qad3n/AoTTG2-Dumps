using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C9")]
internal class XPathDescendantIterator : XPathAxisIterator
{
	[Token(Token = "0x4000EAF")]
	[FieldOffset(Offset = "0x40")]
	private int _level;

	[Token(Token = "0x6001C13")]
	[Address(RVA = "0x444CFE0", Offset = "0x444CFE0", VA = "0x444CFE0")]
	public XPathDescendantIterator(XPathNavigator nav, XPathNodeType type, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x444D030", Offset = "0x444D030", VA = "0x444D030")]
	public XPathDescendantIterator(XPathNavigator nav, string name, string namespaceURI, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C15")]
	[Address(RVA = "0x444D040", Offset = "0x444D040", VA = "0x444D040")]
	public XPathDescendantIterator(XPathDescendantIterator it)
	{
	}

	[Token(Token = "0x6001C16")]
	[Address(RVA = "0x444D070", Offset = "0x444D070", VA = "0x444D070", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C17")]
	[Address(RVA = "0x444D0D0", Offset = "0x444D0D0", VA = "0x444D0D0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
