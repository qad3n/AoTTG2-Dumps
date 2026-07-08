using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C1")]
internal sealed class UnionExpr : Query
{
	[Token(Token = "0x4000E9C")]
	[FieldOffset(Offset = "0x18")]
	internal Query qy1;

	[Token(Token = "0x4000E9D")]
	[FieldOffset(Offset = "0x20")]
	internal Query qy2;

	[Token(Token = "0x4000E9E")]
	[FieldOffset(Offset = "0x28")]
	private bool _advance1;

	[Token(Token = "0x4000E9F")]
	[FieldOffset(Offset = "0x29")]
	private bool _advance2;

	[Token(Token = "0x4000EA0")]
	[FieldOffset(Offset = "0x30")]
	private XPathNavigator _currentNode;

	[Token(Token = "0x4000EA1")]
	[FieldOffset(Offset = "0x38")]
	private XPathNavigator _nextNode;

	[Token(Token = "0x17000724")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001BE2")]
		[Address(RVA = "0x444BDE0", Offset = "0x444BDE0", VA = "0x444BDE0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000725")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001BE4")]
		[Address(RVA = "0x444BE40", Offset = "0x444BE40", VA = "0x444BE40", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000726")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001BE5")]
		[Address(RVA = "0x444BE50", Offset = "0x444BE50", VA = "0x444BE50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BD9")]
	[Address(RVA = "0x4448A90", Offset = "0x4448A90", VA = "0x4448A90")]
	public UnionExpr(Query query1, Query query2)
	{
	}

	[Token(Token = "0x6001BDA")]
	[Address(RVA = "0x444B900", Offset = "0x444B900", VA = "0x444B900")]
	private UnionExpr(UnionExpr other)
	{
	}

	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x444BAA0", Offset = "0x444BAA0", VA = "0x444BAA0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x444BB00", Offset = "0x444BB00", VA = "0x444BB00", Slot = "13")]
	public override void SetXsltContext(XsltContext xsltContext)
	{
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x444BB50", Offset = "0x444BB50", VA = "0x444BB50", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x444BBC0", Offset = "0x444BBC0", VA = "0x444BBC0")]
	private XPathNavigator ProcessSamePosition(XPathNavigator result)
	{
		return null;
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x444BBF0", Offset = "0x444BBF0", VA = "0x444BBF0")]
	private XPathNavigator ProcessBeforePosition(XPathNavigator res1, XPathNavigator res2)
	{
		return null;
	}

	[Token(Token = "0x6001BE0")]
	[Address(RVA = "0x444BC30", Offset = "0x444BC30", VA = "0x444BC30")]
	private XPathNavigator ProcessAfterPosition(XPathNavigator res1, XPathNavigator res2)
	{
		return null;
	}

	[Token(Token = "0x6001BE1")]
	[Address(RVA = "0x444BC70", Offset = "0x444BC70", VA = "0x444BC70", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001BE3")]
	[Address(RVA = "0x444BDF0", Offset = "0x444BDF0", VA = "0x444BDF0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
