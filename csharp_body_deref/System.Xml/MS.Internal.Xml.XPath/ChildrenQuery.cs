// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.ChildrenQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000292")]
internal class ChildrenQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E17")]
	[FieldOffset(Offset = "0x58")]
	private XPathNodeIterator _iterator;

	[Token(Token = "0x6001AA0")]
	[Address(RVA = "0x4778E20", Offset = "0x4778E20", VA = "0x4778E20")]
	public ChildrenQuery(Query qyInput, string name, string prefix, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001AA1")]
	[Address(RVA = "0x4778F80", Offset = "0x4778F80", VA = "0x4778F80")]
	protected ChildrenQuery(ChildrenQuery other)
	{
	}

	[Token(Token = "0x6001AA2")]
	[Address(RVA = "0x47790A0", Offset = "0x47790A0", VA = "0x47790A0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x4779880", Offset = "0x4779880", VA = "0x4779880", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AA4")]
	[Address(RVA = "0x4779A80", Offset = "0x4779A80", VA = "0x4779A80", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
