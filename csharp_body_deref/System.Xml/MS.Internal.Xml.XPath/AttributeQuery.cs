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
	[Address(RVA = "0x47779A0", Offset = "0x47779A0", VA = "0x47779A0")]
	public AttributeQuery(Query qyParent, string Name, string Prefix, XPathNodeType Type)
	{
	}

	[Token(Token = "0x6001A55")]
	[Address(RVA = "0x4777A60", Offset = "0x4777A60", VA = "0x4777A60")]
	private AttributeQuery(AttributeQuery other)
	{
	}

	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x4777B30", Offset = "0x4777B30", VA = "0x4777B30", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x4777BC0", Offset = "0x4777BC0", VA = "0x4777BC0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x4777CC0", Offset = "0x4777CC0", VA = "0x4777CC0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
