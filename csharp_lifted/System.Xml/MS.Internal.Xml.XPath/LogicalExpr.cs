// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.LogicalExpr
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A9")]
internal sealed class LogicalExpr : ValueQuery
{
	[Token(Token = "0x20002AA")]
	private delegate bool cmpXslt(Operator.Op op, object val1, object val2);

	[Token(Token = "0x20002AB")]
	private struct NodeSet
	{
		[Token(Token = "0x4000E5B")]
		[FieldOffset(Offset = "0x0")]
		private Query _opnd;

		[Token(Token = "0x4000E5C")]
		[FieldOffset(Offset = "0x8")]
		private XPathNavigator _current;

		[Token(Token = "0x1700070C")]
		public string Value
		{
			[Token(Token = "0x6001B55")]
			[Address(RVA = "0x6083AF0", Offset = "0x6082AF0", VA = "0x6083AF0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B52")]
		[Address(RVA = "0x60839F0", Offset = "0x60829F0", VA = "0x60839F0")]
		public NodeSet(object opnd)
		{
		}

		[Token(Token = "0x6001B53")]
		[Address(RVA = "0x6083AB0", Offset = "0x6082AB0", VA = "0x6083AB0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001B54")]
		[Address(RVA = "0x6083B20", Offset = "0x6082B20", VA = "0x6083B20")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000E56")]
	[FieldOffset(Offset = "0x14")]
	private Operator.Op _op;

	[Token(Token = "0x4000E57")]
	[FieldOffset(Offset = "0x18")]
	private Query _opnd1;

	[Token(Token = "0x4000E58")]
	[FieldOffset(Offset = "0x20")]
	private Query _opnd2;

	[Token(Token = "0x4000E59")]
	[FieldOffset(Offset = "0x0")]
	private static readonly cmpXslt[][] s_CompXsltE;

	[Token(Token = "0x4000E5A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly cmpXslt[][] s_CompXsltO;

	[Token(Token = "0x1700070B")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B4E")]
		[Address(RVA = "0x60862F0", Offset = "0x60852F0", VA = "0x60862F0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x6083440", Offset = "0x6082440", VA = "0x6083440")]
	public LogicalExpr(Operator.Op op, Query opnd1, Query opnd2)
	{
	}

	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x6083490", Offset = "0x6082490", VA = "0x6083490")]
	private LogicalExpr(LogicalExpr other)
	{
	}

	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x6083500", Offset = "0x6082500", VA = "0x6083500", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x6083550", Offset = "0x6082550", VA = "0x6083550", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x6083860", Offset = "0x6082860", VA = "0x6083860")]
	private static bool cmpQueryQueryE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x6083B50", Offset = "0x6082B50", VA = "0x6083B50")]
	private static bool cmpQueryQueryO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x6083EE0", Offset = "0x6082EE0", VA = "0x6083EE0")]
	private static bool cmpQueryNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x60840E0", Offset = "0x60830E0", VA = "0x60840E0")]
	private static bool cmpQueryStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x6084210", Offset = "0x6083210", VA = "0x6084210")]
	private static bool cmpQueryStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x6084440", Offset = "0x6083440", VA = "0x6084440")]
	private static bool cmpRtfQueryE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x6084640", Offset = "0x6083640", VA = "0x6084640")]
	private static bool cmpRtfQueryO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x60848B0", Offset = "0x60838B0", VA = "0x60848B0")]
	private static bool cmpQueryBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x60849A0", Offset = "0x60839A0", VA = "0x60849A0")]
	private static bool cmpQueryBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x6084990", Offset = "0x6083990", VA = "0x6084990")]
	private static bool cmpBoolBoolE(Operator.Op op, bool n1, bool n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x6084B40", Offset = "0x6083B40", VA = "0x6084B40")]
	private static bool cmpBoolBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x6084C10", Offset = "0x6083C10", VA = "0x6084C10")]
	private static bool cmpBoolBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x6084D80", Offset = "0x6083D80", VA = "0x6084D80")]
	private static bool cmpBoolNumberE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x6084EA0", Offset = "0x6083EA0", VA = "0x6084EA0")]
	private static bool cmpBoolNumberO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x6084FE0", Offset = "0x6083FE0", VA = "0x6084FE0")]
	private static bool cmpBoolStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x60850A0", Offset = "0x60840A0", VA = "0x60850A0")]
	private static bool cmpRtfBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x60851D0", Offset = "0x60841D0", VA = "0x60851D0")]
	private static bool cmpBoolStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x6085340", Offset = "0x6084340", VA = "0x6085340")]
	private static bool cmpRtfBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x6083E80", Offset = "0x6082E80", VA = "0x6083E80")]
	private static bool cmpNumberNumber(Operator.Op op, double n1, double n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B41")]
	[Address(RVA = "0x6084400", Offset = "0x6083400", VA = "0x6084400")]
	private static bool cmpNumberNumberO(Operator.Op op, double n1, double n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B42")]
	[Address(RVA = "0x6085500", Offset = "0x6084500", VA = "0x6085500")]
	private static bool cmpNumberNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B43")]
	[Address(RVA = "0x6085650", Offset = "0x6084650", VA = "0x6085650")]
	private static bool cmpStringNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x60857C0", Offset = "0x60847C0", VA = "0x60857C0")]
	private static bool cmpRtfNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x60841F0", Offset = "0x60831F0", VA = "0x60841F0")]
	private static bool cmpStringStringE(Operator.Op op, string n1, string n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x6085990", Offset = "0x6084990", VA = "0x6085990")]
	private static bool cmpStringStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x6085A20", Offset = "0x6084A20", VA = "0x6085A20")]
	private static bool cmpRtfStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x6085B50", Offset = "0x6084B50", VA = "0x6085B50")]
	private static bool cmpRtfRtfE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x6085CB0", Offset = "0x6084CB0", VA = "0x6085CB0")]
	private static bool cmpStringStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x6085E30", Offset = "0x6084E30", VA = "0x6085E30")]
	private static bool cmpRtfStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x6086020", Offset = "0x6085020", VA = "0x6086020")]
	private static bool cmpRtfRtfO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x6086250", Offset = "0x6085250", VA = "0x6086250", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x60845D0", Offset = "0x60835D0", VA = "0x60845D0")]
	private static string Rtf(object o)
	{
		return null;
	}
}
