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
	[Address(RVA = "0x4444F60", Offset = "0x4444F60", VA = "0x4444F60")]
	public NamespaceQuery(Query qyParent, string Name, string Prefix, XPathNodeType Type)
	{
	}

	[Token(Token = "0x6001B5C")]
	[Address(RVA = "0x4444F70", Offset = "0x4444F70", VA = "0x4444F70")]
	private NamespaceQuery(NamespaceQuery other)
	{
	}

	[Token(Token = "0x6001B5D")]
	[Address(RVA = "0x4444FA0", Offset = "0x4444FA0", VA = "0x4444FA0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001B5E")]
	[Address(RVA = "0x4444FF0", Offset = "0x4444FF0", VA = "0x4444FF0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001B5F")]
	[Address(RVA = "0x44450E0", Offset = "0x44450E0", VA = "0x44450E0", Slot = "18")]
	public override bool matches(XPathNavigator e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B60")]
	[Address(RVA = "0x4445160", Offset = "0x4445160", VA = "0x4445160", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
