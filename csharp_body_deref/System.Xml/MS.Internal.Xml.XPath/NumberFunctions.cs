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
		[Address(RVA = "0x4445E50", Offset = "0x4445E50", VA = "0x4445E50", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x4445720", Offset = "0x4445720", VA = "0x4445720")]
	public NumberFunctions(Function.FunctionType ftype, Query arg)
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x4445750", Offset = "0x4445750", VA = "0x4445750")]
	private NumberFunctions(NumberFunctions other)
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x44457A0", Offset = "0x44457A0", VA = "0x44457A0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x4442100", Offset = "0x4442100", VA = "0x4442100")]
	internal static double Number(bool arg)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x44412A0", Offset = "0x44412A0", VA = "0x44412A0")]
	internal static double Number(string arg)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x44457C0", Offset = "0x44457C0", VA = "0x44457C0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x44458B0", Offset = "0x44458B0", VA = "0x44458B0")]
	private double Number(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6E")]
	[Address(RVA = "0x4445B80", Offset = "0x4445B80", VA = "0x4445B80")]
	private double Sum(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6F")]
	[Address(RVA = "0x4445C70", Offset = "0x4445C70", VA = "0x4445C70")]
	private double Floor(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B70")]
	[Address(RVA = "0x4445D20", Offset = "0x4445D20", VA = "0x4445D20")]
	private double Ceiling(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B71")]
	[Address(RVA = "0x4445DD0", Offset = "0x4445DD0", VA = "0x4445DD0")]
	private double Round(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x4445E60", Offset = "0x4445E60", VA = "0x4445E60", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
