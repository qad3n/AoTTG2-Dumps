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
		[Address(RVA = "0x4789540", Offset = "0x4789540", VA = "0x4789540", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000725")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001BE4")]
		[Address(RVA = "0x47895A0", Offset = "0x47895A0", VA = "0x47895A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000726")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001BE5")]
		[Address(RVA = "0x47895B0", Offset = "0x47895B0", VA = "0x47895B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BD9")]
	[Address(RVA = "0x47861F0", Offset = "0x47861F0", VA = "0x47861F0")]
	public UnionExpr(Query query1, Query query2)
	{
	}

	[Token(Token = "0x6001BDA")]
	[Address(RVA = "0x4789060", Offset = "0x4789060", VA = "0x4789060")]
	private UnionExpr(UnionExpr other)
	{
	}

	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x4789200", Offset = "0x4789200", VA = "0x4789200", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x4789260", Offset = "0x4789260", VA = "0x4789260", Slot = "13")]
	public override void SetXsltContext(XsltContext xsltContext)
	{
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x47892B0", Offset = "0x47892B0", VA = "0x47892B0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x4789320", Offset = "0x4789320", VA = "0x4789320")]
	private XPathNavigator ProcessSamePosition(XPathNavigator result)
	{
		return null;
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x4789350", Offset = "0x4789350", VA = "0x4789350")]
	private XPathNavigator ProcessBeforePosition(XPathNavigator res1, XPathNavigator res2)
	{
		return null;
	}

	[Token(Token = "0x6001BE0")]
	[Address(RVA = "0x4789390", Offset = "0x4789390", VA = "0x4789390")]
	private XPathNavigator ProcessAfterPosition(XPathNavigator res1, XPathNavigator res2)
	{
		return null;
	}

	[Token(Token = "0x6001BE1")]
	[Address(RVA = "0x47893D0", Offset = "0x47893D0", VA = "0x47893D0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001BE3")]
	[Address(RVA = "0x4789550", Offset = "0x4789550", VA = "0x4789550", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
