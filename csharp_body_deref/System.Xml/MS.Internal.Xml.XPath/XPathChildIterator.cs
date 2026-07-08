using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C8")]
internal class XPathChildIterator : XPathAxisIterator
{
	[Token(Token = "0x6001C0E")]
	[Address(RVA = "0x444CEC0", Offset = "0x444CEC0", VA = "0x444CEC0")]
	public XPathChildIterator(XPathNavigator nav, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001C0F")]
	[Address(RVA = "0x444CF00", Offset = "0x444CF00", VA = "0x444CF00")]
	public XPathChildIterator(XPathNavigator nav, string name, string namespaceURI)
	{
	}

	[Token(Token = "0x6001C10")]
	[Address(RVA = "0x444CF10", Offset = "0x444CF10", VA = "0x444CF10")]
	public XPathChildIterator(XPathChildIterator it)
	{
	}

	[Token(Token = "0x6001C11")]
	[Address(RVA = "0x444CF20", Offset = "0x444CF20", VA = "0x444CF20", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C12")]
	[Address(RVA = "0x444CF70", Offset = "0x444CF70", VA = "0x444CF70", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
