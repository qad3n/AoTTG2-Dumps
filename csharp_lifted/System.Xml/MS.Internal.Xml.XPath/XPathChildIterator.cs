// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathChildIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C8")]
internal class XPathChildIterator : XPathAxisIterator
{
	[Token(Token = "0x6001C0E")]
	[Address(RVA = "0x608F860", Offset = "0x608E860", VA = "0x608F860")]
	public XPathChildIterator(XPathNavigator nav, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001C0F")]
	[Address(RVA = "0x608F8A0", Offset = "0x608E8A0", VA = "0x608F8A0")]
	public XPathChildIterator(XPathNavigator nav, string name, string namespaceURI)
	{
	}

	[Token(Token = "0x6001C10")]
	[Address(RVA = "0x608F8B0", Offset = "0x608E8B0", VA = "0x608F8B0")]
	public XPathChildIterator(XPathChildIterator it)
	{
	}

	[Token(Token = "0x6001C11")]
	[Address(RVA = "0x608F8C0", Offset = "0x608E8C0", VA = "0x608F8C0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C12")]
	[Address(RVA = "0x608F910", Offset = "0x608E910", VA = "0x608F910", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
