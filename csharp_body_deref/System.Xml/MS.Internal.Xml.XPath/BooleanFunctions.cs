using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200028E")]
internal sealed class BooleanFunctions : ValueQuery
{
	[Token(Token = "0x4000E0E")]
	[FieldOffset(Offset = "0x18")]
	private Query _arg;

	[Token(Token = "0x4000E0F")]
	[FieldOffset(Offset = "0x20")]
	private Function.FunctionType _funcType;

	[Token(Token = "0x170006DB")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001A81")]
		[Address(RVA = "0x443B1C0", Offset = "0x443B1C0", VA = "0x443B1C0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x443AB90", Offset = "0x443AB90", VA = "0x443AB90")]
	public BooleanFunctions(Function.FunctionType funcType, Query arg)
	{
	}

	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x443ADC0", Offset = "0x443ADC0", VA = "0x443ADC0")]
	private BooleanFunctions(BooleanFunctions other)
	{
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x443AE10", Offset = "0x443AE10", VA = "0x443AE10", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x443AE30", Offset = "0x443AE30", VA = "0x443AE30", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x443B160", Offset = "0x443B160", VA = "0x443B160")]
	internal static bool toBoolean(double number)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x443B1A0", Offset = "0x443B1A0", VA = "0x443B1A0")]
	internal static bool toBoolean(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x443AF00", Offset = "0x443AF00", VA = "0x443AF00")]
	internal bool toBoolean(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x443B030", Offset = "0x443B030", VA = "0x443B030")]
	private bool Not(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x443B090", Offset = "0x443B090", VA = "0x443B090")]
	private bool Lang(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A84")]
	[Address(RVA = "0x443B1D0", Offset = "0x443B1D0", VA = "0x443B1D0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
