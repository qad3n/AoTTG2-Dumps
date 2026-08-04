// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.DocumentXPathNodeIterator_ElemChildren
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x47C6540", Offset = "0x47C6540", VA = "0x47C6540")]
	internal DocumentXPathNodeIterator_ElemChildren(DocumentXPathNavigator nav, string localNameAtom, string nsAtom)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x47C72C0", Offset = "0x47C72C0", VA = "0x47C72C0")]
	internal DocumentXPathNodeIterator_ElemChildren(DocumentXPathNodeIterator_ElemChildren other)
	{
	}

	[Token(Token = "0x60007A8")]
	[Address(RVA = "0x47C7310", Offset = "0x47C7310", VA = "0x47C7310", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x60007A9")]
	[Address(RVA = "0x47C7390", Offset = "0x47C7390", VA = "0x47C7390", Slot = "12")]
	protected override bool Match(XmlNode node)
	{
		return default(bool);
	}
}
