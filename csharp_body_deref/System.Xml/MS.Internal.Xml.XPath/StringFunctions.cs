// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.StringFunctions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C0")]
internal sealed class StringFunctions : ValueQuery
{
	[Token(Token = "0x4000E99")]
	[FieldOffset(Offset = "0x18")]
	private Function.FunctionType _funcType;

	[Token(Token = "0x4000E9A")]
	[FieldOffset(Offset = "0x20")]
	private IList<Query> _argList;

	[Token(Token = "0x4000E9B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CompareInfo s_compareInfo;

	[Token(Token = "0x17000723")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001BCD")]
		[Address(RVA = "0x26D30F0", Offset = "0x26D16F0", VA = "0x1826D30F0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001BC6")]
	[Address(RVA = "0x26D2E60", Offset = "0x26D1460", VA = "0x1826D2E60")]
	public StringFunctions(Function.FunctionType funcType, IList<Query> argList)
	{
	}

	[Token(Token = "0x6001BC7")]
	[Address(RVA = "0x26D2EB0", Offset = "0x26D14B0", VA = "0x1826D2EB0")]
	private StringFunctions(StringFunctions other)
	{
	}

	[Token(Token = "0x6001BC8")]
	[Address(RVA = "0x26D2160", Offset = "0x26D0760", VA = "0x1826D2160", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BC9")]
	[Address(RVA = "0x26D1740", Offset = "0x26CFD40", VA = "0x1826D1740", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCA")]
	[Address(RVA = "0x26D3480", Offset = "0x26D1A80", VA = "0x1826D3480")]
	internal static string toString(double num)
	{
		return null;
	}

	[Token(Token = "0x6001BCB")]
	[Address(RVA = "0x26D3120", Offset = "0x26D1720", VA = "0x1826D3120")]
	internal static string toString(bool b)
	{
		return null;
	}

	[Token(Token = "0x6001BCC")]
	[Address(RVA = "0x26D3170", Offset = "0x26D1770", VA = "0x1826D3170")]
	private string toString(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCE")]
	[Address(RVA = "0x26D13D0", Offset = "0x26CF9D0", VA = "0x1826D13D0")]
	private string Concat(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCF")]
	[Address(RVA = "0x26D22F0", Offset = "0x26D08F0", VA = "0x1826D22F0")]
	private bool StartsWith(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD0")]
	[Address(RVA = "0x26D15E0", Offset = "0x26CFBE0", VA = "0x1826D15E0")]
	private bool Contains(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD1")]
	[Address(RVA = "0x26D2710", Offset = "0x26D0D10", VA = "0x1826D2710")]
	private string SubstringBefore(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD2")]
	[Address(RVA = "0x26D2540", Offset = "0x26D0B40", VA = "0x1826D2540")]
	private string SubstringAfter(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD3")]
	[Address(RVA = "0x26D28C0", Offset = "0x26D0EC0", VA = "0x1826D28C0")]
	private string Substring(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD4")]
	[Address(RVA = "0x26D2440", Offset = "0x26D0A40", VA = "0x1826D2440")]
	private double StringLength(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001BD5")]
	[Address(RVA = "0x26D1F50", Offset = "0x26D0550", VA = "0x1826D1F50")]
	private string Normalize(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x26D2B60", Offset = "0x26D1160", VA = "0x1826D2B60")]
	private string Translate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x26D1370", Offset = "0x26CF970", VA = "0x1826D1370", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
