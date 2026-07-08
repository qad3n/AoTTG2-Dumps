using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200008F")]
internal class DocumentXPathNodeIterator_AllElemChildren : DocumentXPathNodeIterator_ElemDescendants
{
	[Token(Token = "0x6000796")]
	[Address(RVA = "0x4488F30", Offset = "0x4488F30", VA = "0x4488F30")]
	internal DocumentXPathNodeIterator_AllElemChildren(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x4489650", Offset = "0x4489650", VA = "0x4489650")]
	internal DocumentXPathNodeIterator_AllElemChildren(DocumentXPathNodeIterator_AllElemChildren other)
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x4489660", Offset = "0x4489660", VA = "0x4489660", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x44896B0", Offset = "0x44896B0", VA = "0x44896B0", Slot = "12")]
	protected override bool Match(XmlNode node)
	{
		return default(bool);
	}
}
