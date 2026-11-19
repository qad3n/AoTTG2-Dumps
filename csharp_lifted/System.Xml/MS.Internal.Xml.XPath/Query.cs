// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.Query
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x6089EA0", Offset = "0x6088EA0", VA = "0x6089EA0", Slot = "10")]
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
		[Address(RVA = "0x6089F80", Offset = "0x6088F80", VA = "0x6089F80", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B9C")]
	[Address(RVA = "0x6089DE0", Offset = "0x6088DE0", VA = "0x6089DE0")]
	public Query()
	{
	}

	[Token(Token = "0x6001B9D")]
	[Address(RVA = "0x6089E20", Offset = "0x6088E20", VA = "0x6089E20")]
	protected Query(Query other)
	{
	}

	[Token(Token = "0x6001B9E")]
	[Address(RVA = "0x6089E80", Offset = "0x6088E80", VA = "0x6089E80", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001BA0")]
	[Address(RVA = "0x6089F70", Offset = "0x6088F70", VA = "0x6089F70", Slot = "13")]
	public virtual void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BA1")]
	public abstract object Evaluate(XPathNodeIterator nodeIterator);

	[Token(Token = "0x6001BA2")]
	public abstract XPathNavigator Advance();

	[Token(Token = "0x6001BA5")]
	[Address(RVA = "0x6089F90", Offset = "0x6088F90", VA = "0x6089F90")]
	public static Query Clone(Query input)
	{
		return null;
	}

	[Token(Token = "0x6001BA6")]
	[Address(RVA = "0x608A010", Offset = "0x6089010", VA = "0x608A010")]
	protected static XPathNodeIterator Clone(XPathNodeIterator input)
	{
		return null;
	}

	[Token(Token = "0x6001BA7")]
	[Address(RVA = "0x608A030", Offset = "0x6089030", VA = "0x608A030")]
	protected static XPathNavigator Clone(XPathNavigator input)
	{
		return null;
	}

	[Token(Token = "0x6001BA8")]
	[Address(RVA = "0x608A050", Offset = "0x6089050", VA = "0x608A050")]
	public static bool Insert(List<XPathNavigator> buffer, XPathNavigator nav)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BA9")]
	[Address(RVA = "0x608A320", Offset = "0x6089320", VA = "0x608A320")]
	private static int GetMedian(int l, int r)
	{
		return default(int);
	}

	[Token(Token = "0x6001BAA")]
	[Address(RVA = "0x608A210", Offset = "0x6089210", VA = "0x608A210")]
	public static XmlNodeOrder CompareNodes(XPathNavigator l, XPathNavigator r)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6001BAB")]
	[Address(RVA = "0x608A330", Offset = "0x6089330", VA = "0x608A330")]
	protected XPathResultType GetXPathType(object value)
	{
		return default(XPathResultType);
	}
}
