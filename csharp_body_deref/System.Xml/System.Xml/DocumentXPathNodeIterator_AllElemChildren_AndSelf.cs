using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000090")]
internal sealed class DocumentXPathNodeIterator_AllElemChildren_AndSelf : DocumentXPathNodeIterator_AllElemChildren
{
	[Token(Token = "0x600079A")]
	[Address(RVA = "0x4488F20", Offset = "0x4488F20", VA = "0x4488F20")]
	internal DocumentXPathNodeIterator_AllElemChildren_AndSelf(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x44896E0", Offset = "0x44896E0", VA = "0x44896E0")]
	internal DocumentXPathNodeIterator_AllElemChildren_AndSelf(DocumentXPathNodeIterator_AllElemChildren_AndSelf other)
	{
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x44896F0", Offset = "0x44896F0", VA = "0x44896F0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x4489740", Offset = "0x4489740", VA = "0x4489740", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
