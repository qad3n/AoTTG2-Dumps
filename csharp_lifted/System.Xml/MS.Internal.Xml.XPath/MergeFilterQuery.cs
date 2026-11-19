// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.MergeFilterQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002AC")]
internal sealed class MergeFilterQuery : CacheOutputQuery
{
	[Token(Token = "0x4000E5D")]
	[FieldOffset(Offset = "0x28")]
	private Query _child;

	[Token(Token = "0x6001B56")]
	[Address(RVA = "0x6087A10", Offset = "0x6086A10", VA = "0x6087A10")]
	public MergeFilterQuery(Query input, Query child)
	{
	}

	[Token(Token = "0x6001B57")]
	[Address(RVA = "0x6087A40", Offset = "0x6086A40", VA = "0x6087A40")]
	private MergeFilterQuery(MergeFilterQuery other)
	{
	}

	[Token(Token = "0x6001B58")]
	[Address(RVA = "0x6087A80", Offset = "0x6086A80", VA = "0x6087A80", Slot = "13")]
	public override void SetXsltContext(XsltContext xsltContext)
	{
	}

	[Token(Token = "0x6001B59")]
	[Address(RVA = "0x6087AD0", Offset = "0x6086AD0", VA = "0x6087AD0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B5A")]
	[Address(RVA = "0x6087BE0", Offset = "0x6086BE0", VA = "0x6087BE0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
