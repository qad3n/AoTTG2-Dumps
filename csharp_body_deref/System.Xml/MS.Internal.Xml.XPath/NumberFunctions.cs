// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.NumberFunctions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002AF")]
internal sealed class NumberFunctions : ValueQuery
{
	[Token(Token = "0x4000E62")]
	[FieldOffset(Offset = "0x18")]
	private Query _arg;

	[Token(Token = "0x4000E63")]
	[FieldOffset(Offset = "0x20")]
	private Function.FunctionType _ftype;

	[Token(Token = "0x1700070E")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B72")]
		[Address(RVA = "0x6088AE0", Offset = "0x6087AE0", VA = "0x6088AE0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x6088400", Offset = "0x6087400", VA = "0x6088400")]
	public NumberFunctions(Function.FunctionType ftype, Query arg)
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x6088430", Offset = "0x6087430", VA = "0x6088430")]
	private NumberFunctions(NumberFunctions other)
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x6088480", Offset = "0x6087480", VA = "0x6088480", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x6084B20", Offset = "0x6083B20", VA = "0x6084B20")]
	internal static double Number(bool arg)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x6083E10", Offset = "0x6082E10", VA = "0x6083E10")]
	internal static double Number(string arg)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x60884A0", Offset = "0x60874A0", VA = "0x60884A0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x6088590", Offset = "0x6087590", VA = "0x6088590")]
	private double Number(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6E")]
	[Address(RVA = "0x6088810", Offset = "0x6087810", VA = "0x6088810")]
	private double Sum(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6F")]
	[Address(RVA = "0x6088900", Offset = "0x6087900", VA = "0x6088900")]
	private double Floor(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B70")]
	[Address(RVA = "0x60889B0", Offset = "0x60879B0", VA = "0x60889B0")]
	private double Ceiling(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B71")]
	[Address(RVA = "0x6088A60", Offset = "0x6087A60", VA = "0x6088A60")]
	private double Round(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x6088AF0", Offset = "0x6087AF0", VA = "0x6088AF0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
