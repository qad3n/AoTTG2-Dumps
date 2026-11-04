// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathDescendantIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x26D4730", Offset = "0x26D2D30", VA = "0x1826D4730")]
	public XPathDescendantIterator(XPathNavigator nav, XPathNodeType type, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x26D4820", Offset = "0x26D2E20", VA = "0x1826D4820")]
	public XPathDescendantIterator(XPathNavigator nav, string name, string namespaceURI, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C15")]
	[Address(RVA = "0x26D4EB0", Offset = "0x26D34B0", VA = "0x1826D4EB0")]
	public XPathDescendantIterator(XPathDescendantIterator it)
	{
	}

	[Token(Token = "0x6001C16")]
	[Address(RVA = "0x26D4D00", Offset = "0x26D3300", VA = "0x1826D4D00", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C17")]
	[Address(RVA = "0x26D4DD0", Offset = "0x26D33D0", VA = "0x1826D4DD0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
