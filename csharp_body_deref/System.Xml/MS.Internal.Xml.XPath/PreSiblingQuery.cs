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
		[Address(RVA = "0x26C39F0", Offset = "0x26C1FF0", VA = "0x1826C39F0", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B90")]
	[Address(RVA = "0x26C1810", Offset = "0x26BFE10", VA = "0x1826C1810")]
	public PreSiblingQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001B91")]
	[Address(RVA = "0x26C1820", Offset = "0x26BFE20", VA = "0x1826C1820")]
	protected PreSiblingQuery(PreSiblingQuery other)
	{
	}

	[Token(Token = "0x6001B92")]
	[Address(RVA = "0x26C38F0", Offset = "0x26C1EF0", VA = "0x1826C38F0")]
	private static bool NotVisited(XPathNavigator nav, List<XPathNavigator> parentStk)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B93")]
	[Address(RVA = "0x26C3660", Offset = "0x26C1C60", VA = "0x1826C3660", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001B94")]
	[Address(RVA = "0x26C3600", Offset = "0x26C1C00", VA = "0x1826C3600", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
