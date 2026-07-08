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
			[Address(RVA = "0x4440EC0", Offset = "0x4440EC0", VA = "0x4440EC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B52")]
		[Address(RVA = "0x4440DC0", Offset = "0x4440DC0", VA = "0x4440DC0")]
		public NodeSet(object opnd)
		{
		}

		[Token(Token = "0x6001B53")]
		[Address(RVA = "0x4440E80", Offset = "0x4440E80", VA = "0x4440E80")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001B54")]
		[Address(RVA = "0x4440EF0", Offset = "0x4440EF0", VA = "0x4440EF0")]
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
		[Address(RVA = "0x4443440", Offset = "0x4443440", VA = "0x4443440", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x44407E0", Offset = "0x44407E0", VA = "0x44407E0")]
	public LogicalExpr(Operator.Op op, Query opnd1, Query opnd2)
	{
	}

	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x4440830", Offset = "0x4440830", VA = "0x4440830")]
	private LogicalExpr(LogicalExpr other)
	{
	}

	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x44408A0", Offset = "0x44408A0", VA = "0x44408A0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x44408F0", Offset = "0x44408F0", VA = "0x44408F0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x4440C30", Offset = "0x4440C30", VA = "0x4440C30")]
	private static bool cmpQueryQueryE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x4440F20", Offset = "0x4440F20", VA = "0x4440F20")]
	private static bool cmpQueryQueryO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x4441370", Offset = "0x4441370", VA = "0x4441370")]
	private static bool cmpQueryNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x4441620", Offset = "0x4441620", VA = "0x4441620")]
	private static bool cmpQueryStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x4441760", Offset = "0x4441760", VA = "0x4441760")]
	private static bool cmpQueryStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x4441A50", Offset = "0x4441A50", VA = "0x4441A50")]
	private static bool cmpRtfQueryE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x4441BF0", Offset = "0x4441BF0", VA = "0x4441BF0")]
	private static bool cmpRtfQueryO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x4441E90", Offset = "0x4441E90", VA = "0x4441E90")]
	private static bool cmpQueryBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x4441F80", Offset = "0x4441F80", VA = "0x4441F80")]
	private static bool cmpQueryBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x4441F70", Offset = "0x4441F70", VA = "0x4441F70")]
	private static bool cmpBoolBoolE(Operator.Op op, bool n1, bool n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x4442120", Offset = "0x4442120", VA = "0x4442120")]
	private static bool cmpBoolBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x44421F0", Offset = "0x44421F0", VA = "0x44421F0")]
	private static bool cmpBoolBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x4442350", Offset = "0x4442350", VA = "0x4442350")]
	private static bool cmpBoolNumberE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x4442470", Offset = "0x4442470", VA = "0x4442470")]
	private static bool cmpBoolNumberO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x44425B0", Offset = "0x44425B0", VA = "0x44425B0")]
	private static bool cmpBoolStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x4442670", Offset = "0x4442670", VA = "0x4442670")]
	private static bool cmpRtfBoolE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x4442730", Offset = "0x4442730", VA = "0x4442730")]
	private static bool cmpBoolStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x44428A0", Offset = "0x44428A0", VA = "0x44428A0")]
	private static bool cmpRtfBoolO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x4441310", Offset = "0x4441310", VA = "0x4441310")]
	private static bool cmpNumberNumber(Operator.Op op, double n1, double n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B41")]
	[Address(RVA = "0x4441A10", Offset = "0x4441A10", VA = "0x4441A10")]
	private static bool cmpNumberNumberO(Operator.Op op, double n1, double n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B42")]
	[Address(RVA = "0x44429D0", Offset = "0x44429D0", VA = "0x44429D0")]
	private static bool cmpNumberNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B43")]
	[Address(RVA = "0x4442B20", Offset = "0x4442B20", VA = "0x4442B20")]
	private static bool cmpStringNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x4442CA0", Offset = "0x4442CA0", VA = "0x4442CA0")]
	private static bool cmpRtfNumber(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x4441740", Offset = "0x4441740", VA = "0x4441740")]
	private static bool cmpStringStringE(Operator.Op op, string n1, string n2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x4442DF0", Offset = "0x4442DF0", VA = "0x4442DF0")]
	private static bool cmpStringStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x4442E80", Offset = "0x4442E80", VA = "0x4442E80")]
	private static bool cmpRtfStringE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x4442F30", Offset = "0x4442F30", VA = "0x4442F30")]
	private static bool cmpRtfRtfE(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x4442FA0", Offset = "0x4442FA0", VA = "0x4442FA0")]
	private static bool cmpStringStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x4443120", Offset = "0x4443120", VA = "0x4443120")]
	private static bool cmpRtfStringO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x4443270", Offset = "0x4443270", VA = "0x4443270")]
	private static bool cmpRtfRtfO(Operator.Op op, object val1, object val2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x44433A0", Offset = "0x44433A0", VA = "0x44433A0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x4441B60", Offset = "0x4441B60", VA = "0x4441B60")]
	private static string Rtf(object o)
	{
		return null;
	}
}
