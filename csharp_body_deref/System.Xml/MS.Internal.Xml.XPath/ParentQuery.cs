// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.ParentQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B5")]
internal sealed class ParentQuery : CacheAxisQuery
{
	[Token(Token = "0x6001B8C")]
	[Address(RVA = "0x4783CC0", Offset = "0x4783CC0", VA = "0x4783CC0")]
	public ParentQuery(Query qyInput, string Name, string Prefix, XPathNodeType Type)
	{
	}

	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x4783D60", Offset = "0x4783D60", VA = "0x4783D60")]
	private ParentQuery(ParentQuery other)
	{
	}

	[Token(Token = "0x6001B8E")]
	[Address(RVA = "0x4783D70", Offset = "0x4783D70", VA = "0x4783D70", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B8F")]
	[Address(RVA = "0x4783E20", Offset = "0x4783E20", VA = "0x4783E20", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
