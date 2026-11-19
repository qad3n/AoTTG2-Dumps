// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.NamespaceQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002AD")]
internal sealed class NamespaceQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E5E")]
	[FieldOffset(Offset = "0x54")]
	private bool _onNamespace;

	[Token(Token = "0x6001B5B")]
	[Address(RVA = "0x6087C60", Offset = "0x6086C60", VA = "0x6087C60")]
	public NamespaceQuery(Query qyParent, string Name, string Prefix, XPathNodeType Type)
	{
	}

	[Token(Token = "0x6001B5C")]
	[Address(RVA = "0x6087C70", Offset = "0x6086C70", VA = "0x6087C70")]
	private NamespaceQuery(NamespaceQuery other)
	{
	}

	[Token(Token = "0x6001B5D")]
	[Address(RVA = "0x6087CA0", Offset = "0x6086CA0", VA = "0x6087CA0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001B5E")]
	[Address(RVA = "0x6087CF0", Offset = "0x6086CF0", VA = "0x6087CF0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001B5F")]
	[Address(RVA = "0x6087DE0", Offset = "0x6086DE0", VA = "0x6087DE0", Slot = "18")]
	public override bool matches(XPathNavigator e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B60")]
	[Address(RVA = "0x6087E60", Offset = "0x6086E60", VA = "0x6087E60", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
