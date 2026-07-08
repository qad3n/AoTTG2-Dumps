using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002DA")]
internal abstract class XPathNodeHelper
{
	[Token(Token = "0x6001CCA")]
	[Address(RVA = "0x4453540", Offset = "0x4453540", VA = "0x4453540")]
	public static int GetLocalNamespaces(XPathNode[] pageElem, int idxElem, out XPathNode[] pageNmsp)
	{
		return default(int);
	}

	[Token(Token = "0x6001CCB")]
	[Address(RVA = "0x44535A0", Offset = "0x44535A0", VA = "0x44535A0")]
	public static int GetInScopeNamespaces(XPathNode[] pageElem, int idxElem, out XPathNode[] pageNmsp)
	{
		return default(int);
	}

	[Token(Token = "0x6001CCC")]
	[Address(RVA = "0x4453090", Offset = "0x4453090", VA = "0x4453090")]
	public static bool GetFirstAttribute(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCD")]
	[Address(RVA = "0x4453110", Offset = "0x4453110", VA = "0x4453110")]
	public static bool GetNextAttribute(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCE")]
	[Address(RVA = "0x4453B40", Offset = "0x4453B40", VA = "0x4453B40")]
	public static bool GetContentChild(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCF")]
	[Address(RVA = "0x4453A00", Offset = "0x4453A00", VA = "0x4453A00")]
	public static bool GetContentSibling(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD0")]
	[Address(RVA = "0x4453D00", Offset = "0x4453D00", VA = "0x4453D00")]
	public static bool GetParent(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD1")]
	[Address(RVA = "0x44556C0", Offset = "0x44556C0", VA = "0x44556C0")]
	public static int GetLocation(XPathNode[] pageNode, int idxNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CD2")]
	[Address(RVA = "0x4454060", Offset = "0x4454060", VA = "0x4454060")]
	public static bool GetElementChild(ref XPathNode[] pageNode, ref int idxNode, string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD3")]
	[Address(RVA = "0x4454250", Offset = "0x4454250", VA = "0x4454250")]
	public static bool GetElementSibling(ref XPathNode[] pageNode, ref int idxNode, string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD4")]
	[Address(RVA = "0x4454430", Offset = "0x4454430", VA = "0x4454430")]
	public static bool GetContentChild(ref XPathNode[] pageNode, ref int idxNode, XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD5")]
	[Address(RVA = "0x44545C0", Offset = "0x44545C0", VA = "0x44545C0")]
	public static bool GetContentSibling(ref XPathNode[] pageNode, ref int idxNode, XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD6")]
	[Address(RVA = "0x4453260", Offset = "0x4453260", VA = "0x4453260")]
	public static bool GetAttribute(ref XPathNode[] pageNode, ref int idxNode, string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD7")]
	[Address(RVA = "0x44548F0", Offset = "0x44548F0", VA = "0x44548F0")]
	public static bool GetElementFollowing(ref XPathNode[] pageCurrent, ref int idxCurrent, XPathNode[] pageEnd, int idxEnd, string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD8")]
	[Address(RVA = "0x4454FE0", Offset = "0x4454FE0", VA = "0x4454FE0")]
	public static bool GetContentFollowing(ref XPathNode[] pageCurrent, ref int idxCurrent, XPathNode[] pageEnd, int idxEnd, XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD9")]
	[Address(RVA = "0x4452940", Offset = "0x4452940", VA = "0x4452940")]
	public static bool GetTextFollowing(ref XPathNode[] pageCurrent, ref int idxCurrent, XPathNode[] pageEnd, int idxEnd)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x4452860", Offset = "0x4452860", VA = "0x4452860")]
	public static bool GetNonDescendant(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CDB")]
	[Address(RVA = "0x4455AF0", Offset = "0x4455AF0", VA = "0x4455AF0")]
	private static void GetChild(ref XPathNode[] pageNode, ref int idxNode)
	{
	}
}
