// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.UnionExpr
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000725")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001BE4")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000726")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001BE5")]
		[Address(RVA = "0x26D3AB0", Offset = "0x26D20B0", VA = "0x1826D3AB0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BD9")]
	[Address(RVA = "0x26D3A50", Offset = "0x26D2050", VA = "0x1826D3A50")]
	public UnionExpr(Query query1, Query query2)
	{
	}

	[Token(Token = "0x6001BDA")]
	[Address(RVA = "0x26D3870", Offset = "0x26D1E70", VA = "0x1826D3870")]
	private UnionExpr(UnionExpr other)
	{
	}

	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x26D3810", Offset = "0x26D1E10", VA = "0x1826D3810", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x26B4C90", Offset = "0x26B3290", VA = "0x1826B4C90", Slot = "13")]
	public override void SetXsltContext(XsltContext xsltContext)
	{
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x26D36B0", Offset = "0x26D1CB0", VA = "0x1826D36B0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x26D37D0", Offset = "0x26D1DD0", VA = "0x1826D37D0")]
	private XPathNavigator ProcessSamePosition(XPathNavigator result)
	{
		return null;
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x26D3780", Offset = "0x26D1D80", VA = "0x1826D3780")]
	private XPathNavigator ProcessBeforePosition(XPathNavigator res1, XPathNavigator res2)
	{
		return null;
	}

	[Token(Token = "0x6001BE0")]
	[Address(RVA = "0x26D3730", Offset = "0x26D1D30", VA = "0x1826D3730")]
	private XPathNavigator ProcessAfterPosition(XPathNavigator res1, XPathNavigator res2)
	{
		return null;
	}

	[Token(Token = "0x6001BE1")]
	[Address(RVA = "0x26D34D0", Offset = "0x26D1AD0", VA = "0x1826D34D0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001BE3")]
	[Address(RVA = "0x26D3650", Offset = "0x26D1C50", VA = "0x1826D3650", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
