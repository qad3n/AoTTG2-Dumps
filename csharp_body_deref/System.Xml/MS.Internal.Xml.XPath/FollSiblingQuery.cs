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
	[Address(RVA = "0x443DE30", Offset = "0x443DE30", VA = "0x443DE30")]
	public FollSiblingQuery(Query qyInput, string name, string prefix, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001AF5")]
	[Address(RVA = "0x443DF10", Offset = "0x443DF10", VA = "0x443DF10")]
	private FollSiblingQuery(FollSiblingQuery other)
	{
	}

	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x443E000", Offset = "0x443E000", VA = "0x443E000", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x443E0D0", Offset = "0x443E0D0", VA = "0x443E0D0")]
	private bool Visited(XPathNavigator nav)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x443E200", Offset = "0x443E200", VA = "0x443E200")]
	private XPathNavigator FetchInput()
	{
		return null;
	}

	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x443E270", Offset = "0x443E270", VA = "0x443E270", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x443E530", Offset = "0x443E530", VA = "0x443E530", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
