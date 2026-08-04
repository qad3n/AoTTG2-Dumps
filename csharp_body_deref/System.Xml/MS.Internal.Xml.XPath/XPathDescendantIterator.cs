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
	[Address(RVA = "0x478A740", Offset = "0x478A740", VA = "0x478A740")]
	public XPathDescendantIterator(XPathNavigator nav, XPathNodeType type, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x478A790", Offset = "0x478A790", VA = "0x478A790")]
	public XPathDescendantIterator(XPathNavigator nav, string name, string namespaceURI, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C15")]
	[Address(RVA = "0x478A7A0", Offset = "0x478A7A0", VA = "0x478A7A0")]
	public XPathDescendantIterator(XPathDescendantIterator it)
	{
	}

	[Token(Token = "0x6001C16")]
	[Address(RVA = "0x478A7D0", Offset = "0x478A7D0", VA = "0x478A7D0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C17")]
	[Address(RVA = "0x478A830", Offset = "0x478A830", VA = "0x478A830", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
