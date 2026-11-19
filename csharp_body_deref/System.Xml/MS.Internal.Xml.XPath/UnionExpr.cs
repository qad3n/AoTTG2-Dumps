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
		[Address(RVA = "0x608E780", Offset = "0x608D780", VA = "0x608E780", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000725")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001BE4")]
		[Address(RVA = "0x608E7E0", Offset = "0x608D7E0", VA = "0x608E7E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000726")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001BE5")]
		[Address(RVA = "0x608E7F0", Offset = "0x608D7F0", VA = "0x608E7F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BD9")]
	[Address(RVA = "0x608B630", Offset = "0x608A630", VA = "0x608B630")]
	public UnionExpr(Query query1, Query query2)
	{
	}

	[Token(Token = "0x6001BDA")]
	[Address(RVA = "0x608E2A0", Offset = "0x608D2A0", VA = "0x608E2A0")]
	private UnionExpr(UnionExpr other)
	{
	}

	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x608E440", Offset = "0x608D440", VA = "0x608E440", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x608E4A0", Offset = "0x608D4A0", VA = "0x608E4A0", Slot = "13")]
	public override void SetXsltContext(XsltContext xsltContext)
	{
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x608E4F0", Offset = "0x608D4F0", VA = "0x608E4F0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x608E560", Offset = "0x608D560", VA = "0x608E560")]
	private XPathNavigator ProcessSamePosition(XPathNavigator result)
	{
		return null;
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x608E590", Offset = "0x608D590", VA = "0x608E590")]
	private XPathNavigator ProcessBeforePosition(XPathNavigator res1, XPathNavigator res2)
	{
		return null;
	}

	[Token(Token = "0x6001BE0")]
	[Address(RVA = "0x608E5D0", Offset = "0x608D5D0", VA = "0x608E5D0")]
	private XPathNavigator ProcessAfterPosition(XPathNavigator res1, XPathNavigator res2)
	{
		return null;
	}

	[Token(Token = "0x6001BE1")]
	[Address(RVA = "0x608E610", Offset = "0x608D610", VA = "0x608E610", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001BE3")]
	[Address(RVA = "0x608E790", Offset = "0x608D790", VA = "0x608E790", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
