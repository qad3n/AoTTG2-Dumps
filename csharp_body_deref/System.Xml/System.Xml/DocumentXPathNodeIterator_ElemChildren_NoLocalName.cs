// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.DocumentXPathNodeIterator_ElemChildren_NoLocalName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x270AC20", Offset = "0x2709220", VA = "0x18270AC20")]
	internal DocumentXPathNodeIterator_ElemChildren_NoLocalName(DocumentXPathNavigator nav, string nsAtom)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x270ABE0", Offset = "0x27091E0", VA = "0x18270ABE0")]
	internal DocumentXPathNodeIterator_ElemChildren_NoLocalName(DocumentXPathNodeIterator_ElemChildren_NoLocalName other)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x270AE10", Offset = "0x2709410", VA = "0x18270AE10", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x270AE80", Offset = "0x2709480", VA = "0x18270AE80", Slot = "12")]
	protected override bool Match(XmlNode node)
	{
		return default(bool);
	}
}
