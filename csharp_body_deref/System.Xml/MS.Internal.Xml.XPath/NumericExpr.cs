using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B0")]
internal sealed class NumericExpr : ValueQuery
{
	[Token(Token = "0x4000E64")]
	[FieldOffset(Offset = "0x14")]
	private Operator.Op _op;

	[Token(Token = "0x4000E65")]
	[FieldOffset(Offset = "0x18")]
	private Query _opnd1;

	[Token(Token = "0x4000E66")]
	[FieldOffset(Offset = "0x20")]
	private Query _opnd2;

	[Token(Token = "0x1700070F")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B79")]
		[Address(RVA = "0x4446240", Offset = "0x4446240", VA = "0x4446240", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B74")]
	[Address(RVA = "0x4445EE0", Offset = "0x4445EE0", VA = "0x4445EE0")]
	public NumericExpr(Operator.Op op, Query opnd1, Query opnd2)
	{
	}

	[Token(Token = "0x6001B75")]
	[Address(RVA = "0x4446000", Offset = "0x4446000", VA = "0x4446000")]
	private NumericExpr(NumericExpr other)
	{
	}

	[Token(Token = "0x6001B76")]
	[Address(RVA = "0x4446070", Offset = "0x4446070", VA = "0x4446070", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x44460C0", Offset = "0x44460C0", VA = "0x44460C0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B78")]
	[Address(RVA = "0x4446200", Offset = "0x4446200", VA = "0x4446200")]
	private static double GetValue(Operator.Op op, double n1, double n2)
	{
		return default(double);
	}

	[Token(Token = "0x6001B7A")]
	[Address(RVA = "0x4446250", Offset = "0x4446250", VA = "0x4446250", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
