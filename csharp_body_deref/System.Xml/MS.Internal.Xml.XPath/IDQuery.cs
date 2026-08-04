// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.IDQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A7")]
internal sealed class IDQuery : CacheOutputQuery
{
	[Token(Token = "0x6001B1F")]
	[Address(RVA = "0x477D940", Offset = "0x477D940", VA = "0x477D940")]
	public IDQuery(Query arg)
	{
	}

	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x477D950", Offset = "0x477D950", VA = "0x477D950")]
	private IDQuery(IDQuery other)
	{
	}

	[Token(Token = "0x6001B21")]
	[Address(RVA = "0x477D960", Offset = "0x477D960", VA = "0x477D960", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x477DC30", Offset = "0x477DC30", VA = "0x477DC30")]
	private void ProcessIds(XPathNavigator contextNode, string val)
	{
	}

	[Token(Token = "0x6001B23")]
	[Address(RVA = "0x477DD10", Offset = "0x477DD10", VA = "0x477DD10", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
