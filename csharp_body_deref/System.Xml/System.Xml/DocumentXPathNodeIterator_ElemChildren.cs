using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000093")]
internal class DocumentXPathNodeIterator_ElemChildren : DocumentXPathNodeIterator_ElemDescendants
{
	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x28")]
	protected string localNameAtom;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x30")]
	protected string nsAtom;

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x4488DE0", Offset = "0x4488DE0", VA = "0x4488DE0")]
	internal DocumentXPathNodeIterator_ElemChildren(DocumentXPathNavigator nav, string localNameAtom, string nsAtom)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x4489B60", Offset = "0x4489B60", VA = "0x4489B60")]
	internal DocumentXPathNodeIterator_ElemChildren(DocumentXPathNodeIterator_ElemChildren other)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x4489BB0", Offset = "0x4489BB0", VA = "0x4489BB0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x4489C30", Offset = "0x4489C30", VA = "0x4489C30", Slot = "12")]
	protected override bool Match(XmlNode node)
	{
		return default(bool);
	}
}
