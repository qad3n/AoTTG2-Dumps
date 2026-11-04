// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.FollowingQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A0")]
internal sealed class FollowingQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E2C")]
	[FieldOffset(Offset = "0x58")]
	private XPathNavigator _input;

	[Token(Token = "0x4000E2D")]
	[FieldOffset(Offset = "0x60")]
	private XPathNodeIterator _iterator;

	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x26B45E0", Offset = "0x26B2BE0", VA = "0x1826B45E0")]
	public FollowingQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x26B97F0", Offset = "0x26B7DF0", VA = "0x1826B97F0")]
	private FollowingQuery(FollowingQuery other)
	{
	}

	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x26B77C0", Offset = "0x26B5DC0", VA = "0x1826B77C0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AFE")]
	[Address(RVA = "0x26B9410", Offset = "0x26B7A10", VA = "0x1826B9410", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x26B96E0", Offset = "0x26B7CE0", VA = "0x1826B96E0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
