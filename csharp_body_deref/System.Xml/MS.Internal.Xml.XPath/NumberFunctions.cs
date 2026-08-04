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
		[Address(RVA = "0x47835B0", Offset = "0x47835B0", VA = "0x47835B0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x4782E80", Offset = "0x4782E80", VA = "0x4782E80")]
	public NumberFunctions(Function.FunctionType ftype, Query arg)
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x4782EB0", Offset = "0x4782EB0", VA = "0x4782EB0")]
	private NumberFunctions(NumberFunctions other)
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x4782F00", Offset = "0x4782F00", VA = "0x4782F00", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x477F860", Offset = "0x477F860", VA = "0x477F860")]
	internal static double Number(bool arg)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x477EA00", Offset = "0x477EA00", VA = "0x477EA00")]
	internal static double Number(string arg)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x4782F20", Offset = "0x4782F20", VA = "0x4782F20", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x4783010", Offset = "0x4783010", VA = "0x4783010")]
	private double Number(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6E")]
	[Address(RVA = "0x47832E0", Offset = "0x47832E0", VA = "0x47832E0")]
	private double Sum(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B6F")]
	[Address(RVA = "0x47833D0", Offset = "0x47833D0", VA = "0x47833D0")]
	private double Floor(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B70")]
	[Address(RVA = "0x4783480", Offset = "0x4783480", VA = "0x4783480")]
	private double Ceiling(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B71")]
	[Address(RVA = "0x4783530", Offset = "0x4783530", VA = "0x4783530")]
	private double Round(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x47835C0", Offset = "0x47835C0", VA = "0x47835C0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
