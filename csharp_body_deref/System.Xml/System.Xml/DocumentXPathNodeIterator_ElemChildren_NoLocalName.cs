using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000091")]
internal class DocumentXPathNodeIterator_ElemChildren_NoLocalName : DocumentXPathNodeIterator_ElemDescendants
{
	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x28")]
	private string nsAtom;

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x4488D70", Offset = "0x4488D70", VA = "0x4488D70")]
	internal DocumentXPathNodeIterator_ElemChildren_NoLocalName(DocumentXPathNavigator nav, string nsAtom)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x4489880", Offset = "0x4489880", VA = "0x4489880")]
	internal DocumentXPathNodeIterator_ElemChildren_NoLocalName(DocumentXPathNodeIterator_ElemChildren_NoLocalName other)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x44898C0", Offset = "0x44898C0", VA = "0x44898C0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x4489930", Offset = "0x4489930", VA = "0x4489930", Slot = "12")]
	protected override bool Match(XmlNode node)
	{
		return default(bool);
	}
}
