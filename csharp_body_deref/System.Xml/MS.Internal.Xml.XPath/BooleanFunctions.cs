// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.BooleanFunctions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4778920", Offset = "0x4778920", VA = "0x4778920", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x47782F0", Offset = "0x47782F0", VA = "0x47782F0")]
	public BooleanFunctions(Function.FunctionType funcType, Query arg)
	{
	}

	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x4778520", Offset = "0x4778520", VA = "0x4778520")]
	private BooleanFunctions(BooleanFunctions other)
	{
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x4778570", Offset = "0x4778570", VA = "0x4778570", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x4778590", Offset = "0x4778590", VA = "0x4778590", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x47788C0", Offset = "0x47788C0", VA = "0x47788C0")]
	internal static bool toBoolean(double number)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x4778900", Offset = "0x4778900", VA = "0x4778900")]
	internal static bool toBoolean(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x4778660", Offset = "0x4778660", VA = "0x4778660")]
	internal bool toBoolean(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x4778790", Offset = "0x4778790", VA = "0x4778790")]
	private bool Not(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x47787F0", Offset = "0x47787F0", VA = "0x47787F0")]
	private bool Lang(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A84")]
	[Address(RVA = "0x4778930", Offset = "0x4778930", VA = "0x4778930", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
