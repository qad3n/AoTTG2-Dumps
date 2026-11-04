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
	[FieldOffset(Offset = "0x18")]
	private Operator.Op _op;

	[Token(Token = "0x4000E65")]
	[FieldOffset(Offset = "0x20")]
	private Query _opnd1;

	[Token(Token = "0x4000E66")]
	[FieldOffset(Offset = "0x28")]
	private Query _opnd2;

	[Token(Token = "0x1700070F")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B79")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B74")]
	[Address(RVA = "0x26C13B0", Offset = "0x26BF9B0", VA = "0x1826C13B0")]
	public NumericExpr(Operator.Op op, Query opnd1, Query opnd2)
	{
	}

	[Token(Token = "0x6001B75")]
	[Address(RVA = "0x26BCF70", Offset = "0x26BB570", VA = "0x1826BCF70")]
	private NumericExpr(NumericExpr other)
	{
	}

	[Token(Token = "0x6001B76")]
	[Address(RVA = "0x26BB7F0", Offset = "0x26B9DF0", VA = "0x1826BB7F0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x26C1240", Offset = "0x26BF840", VA = "0x1826C1240", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B78")]
	[Address(RVA = "0x26C1370", Offset = "0x26BF970", VA = "0x1826C1370")]
	private static double GetValue(Operator.Op op, double n1, double n2)
	{
		return default(double);
	}

	[Token(Token = "0x6001B7A")]
	[Address(RVA = "0x26C11A0", Offset = "0x26BF7A0", VA = "0x1826C11A0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
