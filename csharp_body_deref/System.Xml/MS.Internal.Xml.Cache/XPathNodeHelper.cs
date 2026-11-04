// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathNodeHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002DA")]
internal abstract class XPathNodeHelper
{
	[Token(Token = "0x6001CCA")]
	[Address(RVA = "0x26D9960", Offset = "0x26D7F60", VA = "0x1826D9960")]
	public static int GetLocalNamespaces(XPathNode[] pageElem, int idxElem, out XPathNode[] pageNmsp)
	{
		return default(int);
	}

	[Token(Token = "0x6001CCB")]
	[Address(RVA = "0x26D9810", Offset = "0x26D7E10", VA = "0x1826D9810")]
	public static int GetInScopeNamespaces(XPathNode[] pageElem, int idxElem, out XPathNode[] pageNmsp)
	{
		return default(int);
	}

	[Token(Token = "0x6001CCC")]
	[Address(RVA = "0x26D9790", Offset = "0x26D7D90", VA = "0x1826D9790")]
	public static bool GetFirstAttribute(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCD")]
	[Address(RVA = "0x26D9A30", Offset = "0x26D8030", VA = "0x1826D9A30")]
	public static bool GetNextAttribute(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCE")]
	[Address(RVA = "0x26D8D70", Offset = "0x26D7370", VA = "0x1826D8D70")]
	public static bool GetContentChild(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCF")]
	[Address(RVA = "0x26D9100", Offset = "0x26D7700", VA = "0x1826D9100")]
	public static bool GetContentSibling(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD0")]
	[Address(RVA = "0x26D9BE0", Offset = "0x26D81E0", VA = "0x1826D9BE0")]
	public static bool GetParent(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD1")]
	[Address(RVA = "0x26D99F0", Offset = "0x26D7FF0", VA = "0x1826D99F0")]
	public static int GetLocation(XPathNode[] pageNode, int idxNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CD2")]
	[Address(RVA = "0x26D91B0", Offset = "0x26D77B0", VA = "0x1826D91B0")]
	public static bool GetElementChild(ref XPathNode[] pageNode, ref int idxNode, string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD3")]
	[Address(RVA = "0x26D9670", Offset = "0x26D7C70", VA = "0x1826D9670")]
	public static bool GetElementSibling(ref XPathNode[] pageNode, ref int idxNode, string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD4")]
	[Address(RVA = "0x26D8BF0", Offset = "0x26D71F0", VA = "0x1826D8BF0")]
	public static bool GetContentChild(ref XPathNode[] pageNode, ref int idxNode, XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD5")]
	[Address(RVA = "0x26D8FD0", Offset = "0x26D75D0", VA = "0x1826D8FD0")]
	public static bool GetContentSibling(ref XPathNode[] pageNode, ref int idxNode, XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD6")]
	[Address(RVA = "0x26D8A00", Offset = "0x26D7000", VA = "0x1826D8A00")]
	public static bool GetAttribute(ref XPathNode[] pageNode, ref int idxNode, string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD7")]
	[Address(RVA = "0x26D9320", Offset = "0x26D7920", VA = "0x1826D9320")]
	public static bool GetElementFollowing(ref XPathNode[] pageCurrent, ref int idxCurrent, XPathNode[] pageEnd, int idxEnd, string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD8")]
	[Address(RVA = "0x26D8E90", Offset = "0x26D7490", VA = "0x1826D8E90")]
	public static bool GetContentFollowing(ref XPathNode[] pageCurrent, ref int idxCurrent, XPathNode[] pageEnd, int idxEnd, XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CD9")]
	[Address(RVA = "0x26D9C70", Offset = "0x26D8270", VA = "0x1826D9C70")]
	public static bool GetTextFollowing(ref XPathNode[] pageCurrent, ref int idxCurrent, XPathNode[] pageEnd, int idxEnd)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x26D9AE0", Offset = "0x26D80E0", VA = "0x1826D9AE0")]
	public static bool GetNonDescendant(ref XPathNode[] pageNode, ref int idxNode)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CDB")]
	[Address(RVA = "0x26D8B90", Offset = "0x26D7190", VA = "0x1826D8B90")]
	private static void GetChild(ref XPathNode[] pageNode, ref int idxNode)
	{
	}
}
