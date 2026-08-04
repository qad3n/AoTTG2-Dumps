// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.PreSiblingQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B6")]
internal class PreSiblingQuery : CacheAxisQuery
{
	[Token(Token = "0x17000719")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001B95")]
		[Address(RVA = "0x4784390", Offset = "0x4784390", VA = "0x4784390", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B90")]
	[Address(RVA = "0x4783E70", Offset = "0x4783E70", VA = "0x4783E70")]
	public PreSiblingQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001B91")]
	[Address(RVA = "0x4783F10", Offset = "0x4783F10", VA = "0x4783F10")]
	protected PreSiblingQuery(PreSiblingQuery other)
	{
	}

	[Token(Token = "0x6001B92")]
	[Address(RVA = "0x4783F20", Offset = "0x4783F20", VA = "0x4783F20")]
	private static bool NotVisited(XPathNavigator nav, List<XPathNavigator> parentStk)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B93")]
	[Address(RVA = "0x4784050", Offset = "0x4784050", VA = "0x4784050", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B94")]
	[Address(RVA = "0x4784340", Offset = "0x4784340", VA = "0x4784340", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
