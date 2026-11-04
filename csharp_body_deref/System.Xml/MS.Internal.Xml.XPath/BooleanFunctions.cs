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
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x26B53F0", Offset = "0x26B39F0", VA = "0x1826B53F0")]
	public BooleanFunctions(Function.FunctionType funcType, Query arg)
	{
	}

	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x26B53A0", Offset = "0x26B39A0", VA = "0x1826B53A0")]
	private BooleanFunctions(BooleanFunctions other)
	{
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x26B5380", Offset = "0x26B3980", VA = "0x1826B5380", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x26B4F10", Offset = "0x26B3510", VA = "0x1826B4F10", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x26B5610", Offset = "0x26B3C10", VA = "0x1826B5610")]
	internal static bool toBoolean(double number)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x26B5440", Offset = "0x26B3A40", VA = "0x1826B5440")]
	internal static bool toBoolean(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x26B5460", Offset = "0x26B3A60", VA = "0x1826B5460")]
	internal bool toBoolean(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x26B5320", Offset = "0x26B3920", VA = "0x1826B5320")]
	private bool Not(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x26B5230", Offset = "0x26B3830", VA = "0x1826B5230")]
	private bool Lang(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A84")]
	[Address(RVA = "0x26B4E90", Offset = "0x26B3490", VA = "0x1826B4E90", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
