using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000094")]
internal sealed class DocumentXPathNodeIterator_ElemChildren_AndSelf : DocumentXPathNodeIterator_ElemChildren
{
	[Token(Token = "0x60007AA")]
	[Address(RVA = "0x4488DA0", Offset = "0x4488DA0", VA = "0x4488DA0")]
	internal DocumentXPathNodeIterator_ElemChildren_AndSelf(DocumentXPathNavigator nav, string localNameAtom, string nsAtom)
	{
	}

	[Token(Token = "0x60007AB")]
	[Address(RVA = "0x4489CA0", Offset = "0x4489CA0", VA = "0x4489CA0")]
	internal DocumentXPathNodeIterator_ElemChildren_AndSelf(DocumentXPathNodeIterator_ElemChildren_AndSelf other)
	{
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x4489CF0", Offset = "0x4489CF0", VA = "0x4489CF0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x4489D70", Offset = "0x4489D70", VA = "0x4489D70", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
