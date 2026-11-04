// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathSelfQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002D0")]
internal sealed class XPathSelfQuery : BaseAxisQuery
{
	[Token(Token = "0x6001C5D")]
	[Address(RVA = "0x26DF270", Offset = "0x26DD870", VA = "0x1826DF270")]
	public XPathSelfQuery(Query qyInput, string Name, string Prefix, XPathNodeType Type)
	{
	}

	[Token(Token = "0x6001C5E")]
	[Address(RVA = "0x26DF260", Offset = "0x26DD860", VA = "0x1826DF260")]
	private XPathSelfQuery(XPathSelfQuery other)
	{
	}

	[Token(Token = "0x6001C5F")]
	[Address(RVA = "0x26DF160", Offset = "0x26DD760", VA = "0x1826DF160", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001C60")]
	[Address(RVA = "0x26DF200", Offset = "0x26DD800", VA = "0x1826DF200", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
