using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C5")]
internal sealed class XPathAncestorQuery : CacheAxisQuery
{
	[Token(Token = "0x4000EA5")]
	[FieldOffset(Offset = "0x60")]
	private bool _matchSelf;

	[Token(Token = "0x1700072F")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001BFC")]
		[Address(RVA = "0x444C520", Offset = "0x444C520", VA = "0x444C520", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000730")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001BFD")]
		[Address(RVA = "0x444C560", Offset = "0x444C560", VA = "0x444C560", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001BF8")]
	[Address(RVA = "0x44482C0", Offset = "0x44482C0", VA = "0x44482C0")]
	public XPathAncestorQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest, bool matchSelf)
	{
	}

	[Token(Token = "0x6001BF9")]
	[Address(RVA = "0x444C370", Offset = "0x444C370", VA = "0x444C370")]
	private XPathAncestorQuery(XPathAncestorQuery other)
	{
	}

	[Token(Token = "0x6001BFA")]
	[Address(RVA = "0x444C3A0", Offset = "0x444C3A0", VA = "0x444C3A0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001BFB")]
	[Address(RVA = "0x444C4C0", Offset = "0x444C4C0", VA = "0x444C4C0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
