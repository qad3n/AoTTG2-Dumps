// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.FollSiblingQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200029F")]
internal sealed class FollSiblingQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E29")]
	[FieldOffset(Offset = "0x58")]
	private ClonableStack<XPathNavigator> _elementStk;

	[Token(Token = "0x4000E2A")]
	[FieldOffset(Offset = "0x60")]
	private List<XPathNavigator> _parentStk;

	[Token(Token = "0x4000E2B")]
	[FieldOffset(Offset = "0x68")]
	private XPathNavigator _nextInput;

	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x26B92C0", Offset = "0x26B78C0", VA = "0x1826B92C0")]
	public FollSiblingQuery(Query qyInput, string name, string prefix, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001AF5")]
	[Address(RVA = "0x26B9150", Offset = "0x26B7750", VA = "0x1826B9150")]
	private FollSiblingQuery(FollSiblingQuery other)
	{
	}

	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x26B8F60", Offset = "0x26B7560", VA = "0x1826B8F60", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x26B9030", Offset = "0x26B7630", VA = "0x1826B9030")]
	private bool Visited(XPathNavigator nav)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x26B8E20", Offset = "0x26B7420", VA = "0x1826B8E20")]
	private XPathNavigator FetchInput()
	{
		return null;
	}

	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x26B8A80", Offset = "0x26B7080", VA = "0x1826B8A80", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x26B8C80", Offset = "0x26B7280", VA = "0x1826B8C80", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
