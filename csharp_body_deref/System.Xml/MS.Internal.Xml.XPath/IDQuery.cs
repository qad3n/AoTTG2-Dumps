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
	[Address(RVA = "0x26B7950", Offset = "0x26B5F50", VA = "0x1826B7950")]
	public IDQuery(Query arg)
	{
	}

	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x26B7940", Offset = "0x26B5F40", VA = "0x1826B7940")]
	private IDQuery(IDQuery other)
	{
	}

	[Token(Token = "0x6001B21")]
	[Address(RVA = "0x26BAC40", Offset = "0x26B9240", VA = "0x1826BAC40", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x26BB1B0", Offset = "0x26B97B0", VA = "0x1826BB1B0")]
	private void ProcessIds(XPathNavigator contextNode, string val)
	{
	}

	[Token(Token = "0x6001B23")]
	[Address(RVA = "0x26BABE0", Offset = "0x26B91E0", VA = "0x1826BABE0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
