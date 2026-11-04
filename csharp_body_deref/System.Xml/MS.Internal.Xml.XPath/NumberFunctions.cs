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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x26B53F0", Offset = "0x26B39F0", VA = "0x1826B53F0")]
	public NumberFunctions(Function.FunctionType ftype, Query arg)
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x26B53A0", Offset = "0x26B39A0", VA = "0x1826B53A0")]
	private NumberFunctions(NumberFunctions other)
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x26B5380", Offset = "0x26B3980", VA = "0x1826B5380", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x26C0D60", Offset = "0x26BF360", VA = "0x1826C0D60")]
	internal static double Number(bool arg)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x26C0D80", Offset = "0x26BF380", VA = "0x1826C0D80")]
	internal static double Number(string arg)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x26C09C0", Offset = "0x26BEFC0", VA = "0x1826C09C0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x26C0DD0", Offset = "0x26BF3D0", VA = "0x1826C0DD0")]
	private double Number(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6E")]
	[Address(RVA = "0x26C10D0", Offset = "0x26BF6D0", VA = "0x1826C10D0")]
	private double Sum(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6F")]
	[Address(RVA = "0x26C0CB0", Offset = "0x26BF2B0", VA = "0x1826C0CB0")]
	private double Floor(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B70")]
	[Address(RVA = "0x26C0890", Offset = "0x26BEE90", VA = "0x1826C0890")]
	private double Ceiling(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B71")]
	[Address(RVA = "0x26C1040", Offset = "0x26BF640", VA = "0x1826C1040")]
	private double Round(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x26C0940", Offset = "0x26BEF40", VA = "0x1826C0940", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
