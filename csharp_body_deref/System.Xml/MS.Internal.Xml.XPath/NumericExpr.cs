// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.NumericExpr
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x47839A0", Offset = "0x47839A0", VA = "0x47839A0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B74")]
	[Address(RVA = "0x4783640", Offset = "0x4783640", VA = "0x4783640")]
	public NumericExpr(Operator.Op op, Query opnd1, Query opnd2)
	{
	}

	[Token(Token = "0x6001B75")]
	[Address(RVA = "0x4783760", Offset = "0x4783760", VA = "0x4783760")]
	private NumericExpr(NumericExpr other)
	{
	}

	[Token(Token = "0x6001B76")]
	[Address(RVA = "0x47837D0", Offset = "0x47837D0", VA = "0x47837D0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x4783820", Offset = "0x4783820", VA = "0x4783820", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B78")]
	[Address(RVA = "0x4783960", Offset = "0x4783960", VA = "0x4783960")]
	private static double GetValue(Operator.Op op, double n1, double n2)
	{
		return default(double);
	}

	[Token(Token = "0x6001B7A")]
	[Address(RVA = "0x47839B0", Offset = "0x47839B0", VA = "0x47839B0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
