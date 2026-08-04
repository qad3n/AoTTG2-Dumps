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
		[Address(RVA = "0x4788F30", Offset = "0x4788F30", VA = "0x4788F30", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001BC6")]
	[Address(RVA = "0x4786940", Offset = "0x4786940", VA = "0x4786940")]
	public StringFunctions(Function.FunctionType funcType, IList<Query> argList)
	{
	}

	[Token(Token = "0x6001BC7")]
	[Address(RVA = "0x4786D70", Offset = "0x4786D70", VA = "0x4786D70")]
	private StringFunctions(StringFunctions other)
	{
	}

	[Token(Token = "0x6001BC8")]
	[Address(RVA = "0x4787050", Offset = "0x4787050", VA = "0x4787050", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BC9")]
	[Address(RVA = "0x47871D0", Offset = "0x47871D0", VA = "0x47871D0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCA")]
	[Address(RVA = "0x4788E90", Offset = "0x4788E90", VA = "0x4788E90")]
	internal static string toString(double num)
	{
		return null;
	}

	[Token(Token = "0x6001BCB")]
	[Address(RVA = "0x4788EE0", Offset = "0x4788EE0", VA = "0x4788EE0")]
	internal static string toString(bool b)
	{
		return null;
	}

	[Token(Token = "0x6001BCC")]
	[Address(RVA = "0x47872C0", Offset = "0x47872C0", VA = "0x47872C0")]
	private string toString(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCE")]
	[Address(RVA = "0x47876E0", Offset = "0x47876E0", VA = "0x47876E0")]
	private string Concat(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCF")]
	[Address(RVA = "0x4787A10", Offset = "0x4787A10", VA = "0x4787A10")]
	private bool StartsWith(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD0")]
	[Address(RVA = "0x4787BE0", Offset = "0x4787BE0", VA = "0x4787BE0")]
	private bool Contains(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD1")]
	[Address(RVA = "0x4787DE0", Offset = "0x4787DE0", VA = "0x4787DE0")]
	private string SubstringBefore(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD2")]
	[Address(RVA = "0x4788020", Offset = "0x4788020", VA = "0x4788020")]
	private string SubstringAfter(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD3")]
	[Address(RVA = "0x4788260", Offset = "0x4788260", VA = "0x4788260")]
	private string Substring(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD4")]
	[Address(RVA = "0x4788670", Offset = "0x4788670", VA = "0x4788670")]
	private double StringLength(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001BD5")]
	[Address(RVA = "0x4788820", Offset = "0x4788820", VA = "0x4788820")]
	private string Normalize(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x4788AE0", Offset = "0x4788AE0", VA = "0x4788AE0")]
	private string Translate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x4788F60", Offset = "0x4788F60", VA = "0x4788F60", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
