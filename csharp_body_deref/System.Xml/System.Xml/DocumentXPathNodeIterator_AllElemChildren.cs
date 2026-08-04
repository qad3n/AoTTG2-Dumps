// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.DocumentXPathNodeIterator_AllElemChildren
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200008F")]
internal class DocumentXPathNodeIterator_AllElemChildren : DocumentXPathNodeIterator_ElemDescendants
{
	[Token(Token = "0x6000796")]
	[Address(RVA = "0x47C6690", Offset = "0x47C6690", VA = "0x47C6690")]
	internal DocumentXPathNodeIterator_AllElemChildren(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x47C6DB0", Offset = "0x47C6DB0", VA = "0x47C6DB0")]
	internal DocumentXPathNodeIterator_AllElemChildren(DocumentXPathNodeIterator_AllElemChildren other)
	{
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x47C6DC0", Offset = "0x47C6DC0", VA = "0x47C6DC0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x47C6E10", Offset = "0x47C6E10", VA = "0x47C6E10", Slot = "12")]
	protected override bool Match(XmlNode node)
	{
		return default(bool);
	}
}
