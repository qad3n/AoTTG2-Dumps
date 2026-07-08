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
	[Address(RVA = "0x443E580", Offset = "0x443E580", VA = "0x443E580")]
	public FollowingQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x443E590", Offset = "0x443E590", VA = "0x443E590")]
	private FollowingQuery(FollowingQuery other)
	{
	}

	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x443E5F0", Offset = "0x443E5F0", VA = "0x443E5F0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AFE")]
	[Address(RVA = "0x443E650", Offset = "0x443E650", VA = "0x443E650", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x443E940", Offset = "0x443E940", VA = "0x443E940", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
