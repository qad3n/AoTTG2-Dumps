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
		[Address(RVA = "0x444B7D0", Offset = "0x444B7D0", VA = "0x444B7D0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001BC6")]
	[Address(RVA = "0x44491E0", Offset = "0x44491E0", VA = "0x44491E0")]
	public StringFunctions(Function.FunctionType funcType, IList<Query> argList)
	{
	}

	[Token(Token = "0x6001BC7")]
	[Address(RVA = "0x4449610", Offset = "0x4449610", VA = "0x4449610")]
	private StringFunctions(StringFunctions other)
	{
	}

	[Token(Token = "0x6001BC8")]
	[Address(RVA = "0x44498F0", Offset = "0x44498F0", VA = "0x44498F0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BC9")]
	[Address(RVA = "0x4449A70", Offset = "0x4449A70", VA = "0x4449A70", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCA")]
	[Address(RVA = "0x444B730", Offset = "0x444B730", VA = "0x444B730")]
	internal static string toString(double num)
	{
		return null;
	}

	[Token(Token = "0x6001BCB")]
	[Address(RVA = "0x444B780", Offset = "0x444B780", VA = "0x444B780")]
	internal static string toString(bool b)
	{
		return null;
	}

	[Token(Token = "0x6001BCC")]
	[Address(RVA = "0x4449B60", Offset = "0x4449B60", VA = "0x4449B60")]
	private string toString(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCE")]
	[Address(RVA = "0x4449F80", Offset = "0x4449F80", VA = "0x4449F80")]
	private string Concat(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BCF")]
	[Address(RVA = "0x444A2B0", Offset = "0x444A2B0", VA = "0x444A2B0")]
	private bool StartsWith(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD0")]
	[Address(RVA = "0x444A480", Offset = "0x444A480", VA = "0x444A480")]
	private bool Contains(XPathNodeIterator nodeIterator)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD1")]
	[Address(RVA = "0x444A680", Offset = "0x444A680", VA = "0x444A680")]
	private string SubstringBefore(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD2")]
	[Address(RVA = "0x444A8C0", Offset = "0x444A8C0", VA = "0x444A8C0")]
	private string SubstringAfter(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD3")]
	[Address(RVA = "0x444AB00", Offset = "0x444AB00", VA = "0x444AB00")]
	private string Substring(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD4")]
	[Address(RVA = "0x444AF10", Offset = "0x444AF10", VA = "0x444AF10")]
	private double StringLength(XPathNodeIterator nodeIterator)
	{
		return default(double);
	}

	[Token(Token = "0x6001BD5")]
	[Address(RVA = "0x444B0C0", Offset = "0x444B0C0", VA = "0x444B0C0")]
	private string Normalize(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x444B380", Offset = "0x444B380", VA = "0x444B380")]
	private string Translate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x444B800", Offset = "0x444B800", VA = "0x444B800", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
