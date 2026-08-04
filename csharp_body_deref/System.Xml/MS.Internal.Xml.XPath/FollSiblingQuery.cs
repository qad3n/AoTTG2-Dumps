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
	[Address(RVA = "0x477B590", Offset = "0x477B590", VA = "0x477B590")]
	public FollSiblingQuery(Query qyInput, string name, string prefix, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001AF5")]
	[Address(RVA = "0x477B670", Offset = "0x477B670", VA = "0x477B670")]
	private FollSiblingQuery(FollSiblingQuery other)
	{
	}

	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x477B760", Offset = "0x477B760", VA = "0x477B760", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x477B830", Offset = "0x477B830", VA = "0x477B830")]
	private bool Visited(XPathNavigator nav)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x477B960", Offset = "0x477B960", VA = "0x477B960")]
	private XPathNavigator FetchInput()
	{
		return null;
	}

	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x477B9D0", Offset = "0x477B9D0", VA = "0x477B9D0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x477BC90", Offset = "0x477BC90", VA = "0x477BC90", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
