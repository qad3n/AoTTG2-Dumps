// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D8")]
internal struct XPathNode
{
	[Token(Token = "0x4000F02")]
	[FieldOffset(Offset = "0x0")]
	private XPathNodeInfoAtom _info;

	[Token(Token = "0x4000F03")]
	[FieldOffset(Offset = "0x8")]
	private ushort _idxSibling;

	[Token(Token = "0x4000F04")]
	[FieldOffset(Offset = "0xA")]
	private ushort _idxParent;

	[Token(Token = "0x4000F05")]
	[FieldOffset(Offset = "0xC")]
	private ushort _idxSimilar;

	[Token(Token = "0x4000F06")]
	[FieldOffset(Offset = "0xE")]
	private ushort _posOffset;

	[Token(Token = "0x4000F07")]
	[FieldOffset(Offset = "0x10")]
	private uint _props;

	[Token(Token = "0x4000F08")]
	[FieldOffset(Offset = "0x18")]
	private string _value;

	[Token(Token = "0x17000759")]
	public XPathNodeType NodeType
	{
		[Token(Token = "0x6001CAB")]
		[Address(RVA = "0x26DA2D0", Offset = "0x26D88D0", VA = "0x1826DA2D0")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700075A")]
	public string Prefix
	{
		[Token(Token = "0x6001CAC")]
		[Address(RVA = "0x26DA300", Offset = "0x26D8900", VA = "0x1826DA300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075B")]
	public string LocalName
	{
		[Token(Token = "0x6001CAD")]
		[Address(RVA = "0x194CC80", Offset = "0x194B280", VA = "0x18194CC80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075C")]
	public string Name
	{
		[Token(Token = "0x6001CAE")]
		[Address(RVA = "0x26DA240", Offset = "0x26D8840", VA = "0x1826DA240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075D")]
	public string NamespaceUri
	{
		[Token(Token = "0x6001CAF")]
		[Address(RVA = "0x26DA2B0", Offset = "0x26D88B0", VA = "0x1826DA2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075E")]
	public XPathDocument Document
	{
		[Token(Token = "0x6001CB0")]
		[Address(RVA = "0x26DA090", Offset = "0x26D8690", VA = "0x1826DA090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075F")]
	public string BaseUri
	{
		[Token(Token = "0x6001CB1")]
		[Address(RVA = "0x26DA040", Offset = "0x26D8640", VA = "0x1826DA040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000760")]
	public int LineNumber
	{
		[Token(Token = "0x6001CB2")]
		[Address(RVA = "0x26DA1F0", Offset = "0x26D87F0", VA = "0x1826DA1F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000761")]
	public int LinePosition
	{
		[Token(Token = "0x6001CB3")]
		[Address(RVA = "0x26DA220", Offset = "0x26D8820", VA = "0x1826DA220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000762")]
	public int CollapsedLinePosition
	{
		[Token(Token = "0x6001CB4")]
		[Address(RVA = "0x26DA060", Offset = "0x26D8660", VA = "0x1826DA060")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000763")]
	public XPathNodePageInfo PageInfo
	{
		[Token(Token = "0x6001CB5")]
		[Address(RVA = "0x26DA2E0", Offset = "0x26D88E0", VA = "0x1826DA2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000764")]
	public bool IsXmlNamespaceNode
	{
		[Token(Token = "0x6001CBC")]
		[Address(RVA = "0x26DA180", Offset = "0x26D8780", VA = "0x1826DA180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000765")]
	public bool HasSibling
	{
		[Token(Token = "0x6001CBD")]
		[Address(RVA = "0x26DA100", Offset = "0x26D8700", VA = "0x1826DA100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000766")]
	public bool HasCollapsedText
	{
		[Token(Token = "0x6001CBE")]
		[Address(RVA = "0x26DA0C0", Offset = "0x26D86C0", VA = "0x1826DA0C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000767")]
	public bool HasAttribute
	{
		[Token(Token = "0x6001CBF")]
		[Address(RVA = "0x26DA0B0", Offset = "0x26D86B0", VA = "0x1826DA0B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000768")]
	public bool HasContentChild
	{
		[Token(Token = "0x6001CC0")]
		[Address(RVA = "0x26DA0D0", Offset = "0x26D86D0", VA = "0x1826DA0D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000769")]
	public bool HasElementChild
	{
		[Token(Token = "0x6001CC1")]
		[Address(RVA = "0x26DA0E0", Offset = "0x26D86E0", VA = "0x1826DA0E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076A")]
	public bool IsAttrNmsp
	{
		[Token(Token = "0x6001CC2")]
		[Address(RVA = "0x26DA110", Offset = "0x26D8710", VA = "0x1826DA110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076B")]
	public bool IsText
	{
		[Token(Token = "0x6001CC3")]
		[Address(RVA = "0x26DA130", Offset = "0x26D8730", VA = "0x1826DA130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076C")]
	public bool HasNamespaceDecls
	{
		[Token(Token = "0x6001CC4")]
		[Address(RVA = "0x26DA0F0", Offset = "0x26D86F0", VA = "0x1826DA0F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076D")]
	public string Value
	{
		[Token(Token = "0x6001CC5")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CB6")]
	[Address(RVA = "0x26D9F50", Offset = "0x26D8550", VA = "0x1826D9F50")]
	public int GetRoot(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB7")]
	[Address(RVA = "0x26D9F10", Offset = "0x26D8510", VA = "0x1826D9F10")]
	public int GetParent(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB8")]
	[Address(RVA = "0x26D9F80", Offset = "0x26D8580", VA = "0x1826D9F80")]
	public int GetSibling(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x26D9FC0", Offset = "0x26D85C0", VA = "0x1826D9FC0")]
	public int GetSimilarElement(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x26DA000", Offset = "0x26D8600", VA = "0x1826DA000")]
	public bool NameMatch(string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x26D9ED0", Offset = "0x26D84D0", VA = "0x1826D9ED0")]
	public bool ElementMatch(string localName, string namespaceName)
	{
		return default(bool);
	}
}
