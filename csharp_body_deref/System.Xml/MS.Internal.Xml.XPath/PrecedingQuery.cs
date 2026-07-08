using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B7")]
internal sealed class PrecedingQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E7E")]
	[FieldOffset(Offset = "0x58")]
	private XPathNodeIterator _workIterator;

	[Token(Token = "0x4000E7F")]
	[FieldOffset(Offset = "0x60")]
	private ClonableStack<XPathNavigator> _ancestorStk;

	[Token(Token = "0x1700071A")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001B9B")]
		[Address(RVA = "0x4447160", Offset = "0x4447160", VA = "0x4447160", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x4446C40", Offset = "0x4446C40", VA = "0x4446C40")]
	public PrecedingQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x4446CE0", Offset = "0x4446CE0", VA = "0x4446CE0")]
	private PrecedingQuery(PrecedingQuery other)
	{
	}

	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x4446D70", Offset = "0x4446D70", VA = "0x4446D70", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001B99")]
	[Address(RVA = "0x4446E10", Offset = "0x4446E10", VA = "0x4446E10", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001B9A")]
	[Address(RVA = "0x4447110", Offset = "0x4447110", VA = "0x4447110", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
