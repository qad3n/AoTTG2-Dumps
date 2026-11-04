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
			[Address(RVA = "0x26C0860", Offset = "0x26BEE60", VA = "0x1826C0860")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B52")]
		[Address(RVA = "0x26C0790", Offset = "0x26BED90", VA = "0x1826C0790")]
		public NodeSet(object opnd)
		{
		}

		[Token(Token = "0x6001B53")]
		[Address(RVA = "0x26C0710", Offset = "0x26BED10", VA = "0x1826C0710")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001B54")]
		[Address(RVA = "0x26C0760", Offset = "0x26BED60", VA = "0x1826C0760")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000E56")]
	[FieldOffset(Offset = "0x18")]
	private Operator.Op _op;

	[Token(Token = "0x4000E57")]
	[FieldOffset(Offset = "0x20")]
	private Query _opnd1;

	[Token(Token = "0x4000E58")]
	[FieldOffset(Offset = "0x28")]
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
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x26BCF20", Offset = "0x26BB520", VA = "0x1826BCF20")]
	public LogicalExpr(Operator.Op op, Query opnd1, Query opnd2)
	{
	}

	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x26BCF70", Offset = "0x26BB570", VA = "0x1826BCF70")]
	private LogicalExpr(LogicalExpr other)
	{
	}

	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x26BB7F0", Offset = "0x26B9DF0", VA = "0x1826BB7F0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x26BB500", Offset = "0x26B9B00", VA = "0x1826BB500", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x26BDEA0", Offset = "0x26BC4A0", VA = "0x1826BDEA0")]
	private static bool cmpQueryQueryE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x26BE180", Offset = "0x26BC780", VA = "0x1826BE180")]
	private static bool cmpQueryQueryO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x26BDC10", Offset = "0x26BC210", VA = "0x1826BDC10")]
	private static bool cmpQueryNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x26BE580", Offset = "0x26BCB80", VA = "0x1826BE580")]
	private static bool cmpQueryStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x26BE760", Offset = "0x26BCD60", VA = "0x1826BE760")]
	private static bool cmpQueryStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x26BEE60", Offset = "0x26BD460", VA = "0x1826BEE60")]
	private static bool cmpRtfQueryE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x26BF0A0", Offset = "0x26BD6A0", VA = "0x1826BF0A0")]
	private static bool cmpRtfQueryO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x26BD870", Offset = "0x26BBE70", VA = "0x1826BD870")]
	private static bool cmpQueryBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x26BDA20", Offset = "0x26BC020", VA = "0x1826BDA20")]
	private static bool cmpQueryBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x26BCFE0", Offset = "0x26BB5E0", VA = "0x1826BCFE0")]
	private static bool cmpBoolBoolE(Operator.Op op, bool n1, bool n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x26BCFF0", Offset = "0x26BB5F0", VA = "0x1826BCFF0")]
	private static bool cmpBoolBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x26BD0C0", Offset = "0x26BB6C0", VA = "0x1826BD0C0")]
	private static bool cmpBoolBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x26BD1F0", Offset = "0x26BB7F0", VA = "0x1826BD1F0")]
	private static bool cmpBoolNumberE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x26BD310", Offset = "0x26BB910", VA = "0x1826BD310")]
	private static bool cmpBoolNumberO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x26BD430", Offset = "0x26BBA30", VA = "0x1826BD430")]
	private static bool cmpBoolStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x26BE9E0", Offset = "0x26BCFE0", VA = "0x1826BE9E0")]
	private static bool cmpRtfBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x26BD500", Offset = "0x26BBB00", VA = "0x1826BD500")]
	private static bool cmpBoolStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x26BEB00", Offset = "0x26BD100", VA = "0x1826BEB00")]
	private static bool cmpRtfBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x26BD800", Offset = "0x26BBE00", VA = "0x1826BD800")]
	private static bool cmpNumberNumber(Operator.Op op, double n1, double n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B41")]
	[Address(RVA = "0x26BD660", Offset = "0x26BBC60", VA = "0x1826BD660")]
	private static bool cmpNumberNumberO(Operator.Op op, double n1, double n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B42")]
	[Address(RVA = "0x26BD6A0", Offset = "0x26BBCA0", VA = "0x1826BD6A0")]
	private static bool cmpNumberNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B43")]
	[Address(RVA = "0x26BF9C0", Offset = "0x26BDFC0", VA = "0x1826BF9C0")]
	private static bool cmpStringNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x26BEC90", Offset = "0x26BD290", VA = "0x1826BEC90")]
	private static bool cmpRtfNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x26BFB50", Offset = "0x26BE150", VA = "0x1826BFB50")]
	private static bool cmpStringStringE(Operator.Op op, string n1, string n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x26BFB80", Offset = "0x26BE180", VA = "0x1826BFB80")]
	private static bool cmpStringStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x26BF6F0", Offset = "0x26BDCF0", VA = "0x1826BF6F0")]
	private static bool cmpRtfStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x26BF380", Offset = "0x26BD980", VA = "0x1826BF380")]
	private static bool cmpRtfRtfE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x26BFC50", Offset = "0x26BE250", VA = "0x1826BFC50")]
	private static bool cmpStringStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x26BF800", Offset = "0x26BDE00", VA = "0x1826BF800")]
	private static bool cmpRtfStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x26BF4E0", Offset = "0x26BDAE0", VA = "0x1826BF4E0")]
	private static bool cmpRtfRtfO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x26BB460", Offset = "0x26B9A60", VA = "0x1826BB460", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x26BB770", Offset = "0x26B9D70", VA = "0x1826BB770")]
	private static string Rtf(object o)
	{
		return null;
	}
}
