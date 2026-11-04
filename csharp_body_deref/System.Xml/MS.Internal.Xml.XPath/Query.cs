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
		[Address(RVA = "0x26D11B0", Offset = "0x26CF7B0", VA = "0x1826D11B0", Slot = "10")]
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
		[Address(RVA = "0x846EF0", Offset = "0x8454F0", VA = "0x180846EF0", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B9C")]
	[Address(RVA = "0x26D1150", Offset = "0x26CF750", VA = "0x1826D1150")]
	public Query()
	{
	}

	[Token(Token = "0x6001B9D")]
	[Address(RVA = "0x26D1170", Offset = "0x26CF770", VA = "0x1826D1170")]
	protected Query(Query other)
	{
	}

	[Token(Token = "0x6001B9E")]
	[Address(RVA = "0x26D1130", Offset = "0x26CF730", VA = "0x1826D1130", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001BA0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	public virtual void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001BA1")]
	public abstract object Evaluate(XPathNodeIterator nodeIterator);

	[Token(Token = "0x6001BA2")]
	public abstract XPathNavigator Advance();

	[Token(Token = "0x6001BA5")]
	[Address(RVA = "0x26D0C80", Offset = "0x26CF280", VA = "0x1826D0C80")]
	public static Query Clone(Query input)
	{
		return null;
	}

	[Token(Token = "0x6001BA6")]
	[Address(RVA = "0x26D0D10", Offset = "0x26CF310", VA = "0x1826D0D10")]
	protected static XPathNodeIterator Clone(XPathNodeIterator input)
	{
		return null;
	}

	[Token(Token = "0x6001BA7")]
	[Address(RVA = "0x26D0D30", Offset = "0x26CF330", VA = "0x1826D0D30")]
	protected static XPathNavigator Clone(XPathNavigator input)
	{
		return null;
	}

	[Token(Token = "0x6001BA8")]
	[Address(RVA = "0x26D0F60", Offset = "0x26CF560", VA = "0x1826D0F60")]
	public static bool Insert(List<XPathNavigator> buffer, XPathNavigator nav)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BA9")]
	[Address(RVA = "0x26D0E80", Offset = "0x26CF480", VA = "0x1826D0E80")]
	private static int GetMedian(int l, int r)
	{
		return default(int);
	}

	[Token(Token = "0x6001BAA")]
	[Address(RVA = "0x26D0D50", Offset = "0x26CF350", VA = "0x1826D0D50")]
	public static XmlNodeOrder CompareNodes(XPathNavigator l, XPathNavigator r)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6001BAB")]
	[Address(RVA = "0x26D0E90", Offset = "0x26CF490", VA = "0x1826D0E90")]
	protected XPathResultType GetXPathType(object value)
	{
		return default(XPathResultType);
	}
}
