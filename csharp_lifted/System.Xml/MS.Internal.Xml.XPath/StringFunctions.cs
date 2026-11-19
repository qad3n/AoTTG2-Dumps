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
	[FieldOffset(Offset = "0x14")]
	private Function.FunctionType _funcType;

	[Token(Token = "0x4000E9A")]
	[FieldOffset(Offset = "0x18")]
	private IList<Query> _argList;

	[Token(Token = "0x4000E9B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CompareInfo s_compareInfo;

	[Token(Token = "0x17000723")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001BCD")]
		[Address(RVA = "0x608E170", Offset = "0x608D170", VA = "0x608E170", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001BC6")]
	[Address(RVA = "0x608BD80", Offset = "0x608AD80", VA = "0x608BD80")]
	public StringFunctions(Function.FunctionType funcType, IList<Query> argList)
	{
	}

	[Token(Token = "0x6001BC7")]
	[Address(RVA = "0x608C190", Offset = "0x608B190", VA = "0x608C190")]
	private StringFunctions(StringFunctions other)
	{
	}

	[Token(Token = "0x6001BC8")]
	[Address(RVA = "0x608C460", Offset = "0x608B460", VA = "0x608C460", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BC9")]
	[Address(RVA = "0x608C5E0", Offset = "0x608B5E0", VA = "0x608C5E0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCA")]
	[Address(RVA = "0x608E0D0", Offset = "0x608D0D0", VA = "0x608E0D0")]
	internal static string toString(double num)
	{
		return null;
	}

	[Token(Token = "0x6001BCB")]
	[Address(RVA = "0x608E120", Offset = "0x608D120", VA = "0x608E120")]
	internal static string toString(bool b)
	{
		return null;
	}

	[Token(Token = "0x6001BCC")]
	[Address(RVA = "0x608C6D0", Offset = "0x608B6D0", VA = "0x608C6D0")]
	private string toString(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCE")]
	[Address(RVA = "0x608CAC0", Offset = "0x608BAC0", VA = "0x608CAC0")]
	private string Concat(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCF")]
	[Address(RVA = "0x608CCB0", Offset = "0x608BCB0", VA = "0x608CCB0")]
	private bool StartsWith(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD0")]
	[Address(RVA = "0x608CE80", Offset = "0x608BE80", VA = "0x608CE80")]
	private bool Contains(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD1")]
	[Address(RVA = "0x608D080", Offset = "0x608C080", VA = "0x608D080")]
	private string SubstringBefore(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD2")]
	[Address(RVA = "0x608D2C0", Offset = "0x608C2C0", VA = "0x608D2C0")]
	private string SubstringAfter(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD3")]
	[Address(RVA = "0x608D500", Offset = "0x608C500", VA = "0x608D500")]
	private string Substring(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD4")]
	[Address(RVA = "0x608D910", Offset = "0x608C910", VA = "0x608D910")]
	private double StringLength(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001BD5")]
	[Address(RVA = "0x608DAC0", Offset = "0x608CAC0", VA = "0x608DAC0")]
	private string Normalize(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x608DD80", Offset = "0x608CD80", VA = "0x608DD80")]
	private string Translate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x608E1A0", Offset = "0x608D1A0", VA = "0x608E1A0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
