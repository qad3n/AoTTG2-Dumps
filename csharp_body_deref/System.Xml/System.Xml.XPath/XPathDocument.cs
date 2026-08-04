// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XPath.XPathDocument
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using MS.Internal.Xml.Cache;

namespace System.Xml.XPath;

[Token(Token = "0x20000F5")]
public class XPathDocument
{
	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x10")]
	private XPathNode[] pageText;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x18")]
	private XPathNode[] pageRoot;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x20")]
	private XPathNode[] pageXmlNmsp;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x28")]
	private int idxText;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x2C")]
	private int idxRoot;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x30")]
	private int idxXmlNmsp;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x38")]
	private XmlNameTable nameTable;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x40")]
	private bool hasLineInfo;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<XPathNodeRef, XPathNodeRef> mapNmsp;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<string, XPathNodeRef> idValueMap;

	[Token(Token = "0x1700030E")]
	internal XmlNameTable NameTable
	{
		[Token(Token = "0x6000C36")]
		[Address(RVA = "0x4803610", Offset = "0x4803610", VA = "0x4803610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030F")]
	internal bool HasLineInfo
	{
		[Token(Token = "0x6000C37")]
		[Address(RVA = "0x4803620", Offset = "0x4803620", VA = "0x4803620")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x4803630", Offset = "0x4803630", VA = "0x4803630")]
	internal int GetCollapsedTextNode(out XPathNode[] pageText)
	{
		return default(int);
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x4803650", Offset = "0x4803650", VA = "0x4803650")]
	internal int GetRootNode(out XPathNode[] pageRoot)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x4803670", Offset = "0x4803670", VA = "0x4803670")]
	internal int GetXmlNamespaceNode(out XPathNode[] pageXmlNmsp)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x4803690", Offset = "0x4803690", VA = "0x4803690")]
	internal int LookupNamespaces(XPathNode[] pageElem, int idxElem, out XPathNode[] pageNmsp)
	{
		return default(int);
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x4803770", Offset = "0x4803770", VA = "0x4803770")]
	internal int LookupIdElement(string id, out XPathNode[] pageElem)
	{
		return default(int);
	}
}
