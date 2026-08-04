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
	[Address(RVA = "0x478A620", Offset = "0x478A620", VA = "0x478A620")]
	public XPathChildIterator(XPathNavigator nav, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001C0F")]
	[Address(RVA = "0x478A660", Offset = "0x478A660", VA = "0x478A660")]
	public XPathChildIterator(XPathNavigator nav, string name, string namespaceURI)
	{
	}

	[Token(Token = "0x6001C10")]
	[Address(RVA = "0x478A670", Offset = "0x478A670", VA = "0x478A670")]
	public XPathChildIterator(XPathChildIterator it)
	{
	}

	[Token(Token = "0x6001C11")]
	[Address(RVA = "0x478A680", Offset = "0x478A680", VA = "0x478A680", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C12")]
	[Address(RVA = "0x478A6D0", Offset = "0x478A6D0", VA = "0x478A6D0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
