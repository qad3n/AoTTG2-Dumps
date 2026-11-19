// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.AttributeQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000289")]
internal sealed class AttributeQuery : BaseAxisQuery
{
	[Token(Token = "0x4000DEC")]
	[FieldOffset(Offset = "0x54")]
	private bool _onAttribute;

	[Token(Token = "0x6001A54")]
	[Address(RVA = "0x607D0D0", Offset = "0x607C0D0", VA = "0x607D0D0")]
	public AttributeQuery(Query qyParent, string Name, string Prefix, XPathNodeType Type)
	{
	}

	[Token(Token = "0x6001A55")]
	[Address(RVA = "0x607D190", Offset = "0x607C190", VA = "0x607D190")]
	private AttributeQuery(AttributeQuery other)
	{
	}

	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x607D260", Offset = "0x607C260", VA = "0x607D260", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x607D2F0", Offset = "0x607C2F0", VA = "0x607D2F0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x607D3F0", Offset = "0x607C3F0", VA = "0x607D3F0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
