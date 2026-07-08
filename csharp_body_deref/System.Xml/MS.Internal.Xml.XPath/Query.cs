using System.Collections.Generic;
using System.Diagnostics;
using System.Xml;
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B9")]
[DebuggerDisplay("{ToString()}")]
internal abstract class Query : ResetableIterator
{
	[Token(Token = "0x1700071B")]
	public override int Count
	{
		[Token(Token = "0x6001B9F")]
		[Address(RVA = "0x4447230", Offset = "0x4447230", VA = "0x4447230", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700071C")]
	public abstract XPathResultType StaticType
	{
		[Token(Token = "0x6001BA3")]
		get;
	}

	[Token(Token = "0x1700071D")]
	public virtual QueryProps Properties
	{
		[Token(Token = "0x6001BA4")]
		[Address(RVA = "0x4447320", Offset = "0x4447320", VA = "0x4447320", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B9C")]
	[Address(RVA = "0x4447170", Offset = "0x4447170", VA = "0x4447170")]
	public Query()
	{
	}

	[Token(Token = "0x6001B9D")]
	[Address(RVA = "0x44471B0", Offset = "0x44471B0", VA = "0x44471B0")]
	protected Query(Query other)
	{
	}

	[Token(Token = "0x6001B9E")]
	[Address(RVA = "0x4447210", Offset = "0x4447210", VA = "0x4447210", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001BA0")]
	[Address(RVA = "0x4447310", Offset = "0x4447310", VA = "0x4447310", Slot = "13")]
	public virtual void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BA1")]
	public abstract object Evaluate(XPathNodeIterator nodeIterator);

	[Token(Token = "0x6001BA2")]
	public abstract XPathNavigator Advance();

	[Token(Token = "0x6001BA5")]
	[Address(RVA = "0x4447330", Offset = "0x4447330", VA = "0x4447330")]
	public static Query Clone(Query input)
	{
		return null;
	}

	[Token(Token = "0x6001BA6")]
	[Address(RVA = "0x44473B0", Offset = "0x44473B0", VA = "0x44473B0")]
	protected static XPathNodeIterator Clone(XPathNodeIterator input)
	{
		return null;
	}

	[Token(Token = "0x6001BA7")]
	[Address(RVA = "0x44473D0", Offset = "0x44473D0", VA = "0x44473D0")]
	protected static XPathNavigator Clone(XPathNavigator input)
	{
		return null;
	}

	[Token(Token = "0x6001BA8")]
	[Address(RVA = "0x44473F0", Offset = "0x44473F0", VA = "0x44473F0")]
	public static bool Insert(List<XPathNavigator> buffer, XPathNavigator nav)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BA9")]
	[Address(RVA = "0x44476E0", Offset = "0x44476E0", VA = "0x44476E0")]
	private static int GetMedian(int l, int r)
	{
		return default(int);
	}

	[Token(Token = "0x6001BAA")]
	[Address(RVA = "0x44475C0", Offset = "0x44475C0", VA = "0x44475C0")]
	public static XmlNodeOrder CompareNodes(XPathNavigator l, XPathNavigator r)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6001BAB")]
	[Address(RVA = "0x44476F0", Offset = "0x44476F0", VA = "0x44476F0")]
	protected XPathResultType GetXPathType(object value)
	{
		return default(XPathResultType);
	}
}
