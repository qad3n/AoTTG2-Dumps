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
		[Address(RVA = "0x47903C0", Offset = "0x47903C0", VA = "0x47903C0")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700075A")]
	public string Prefix
	{
		[Token(Token = "0x6001CAC")]
		[Address(RVA = "0x47905C0", Offset = "0x47905C0", VA = "0x47905C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075B")]
	public string LocalName
	{
		[Token(Token = "0x6001CAD")]
		[Address(RVA = "0x4790410", Offset = "0x4790410", VA = "0x4790410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075C")]
	public string Name
	{
		[Token(Token = "0x6001CAE")]
		[Address(RVA = "0x4790520", Offset = "0x4790520", VA = "0x4790520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075D")]
	public string NamespaceUri
	{
		[Token(Token = "0x6001CAF")]
		[Address(RVA = "0x4790470", Offset = "0x4790470", VA = "0x4790470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075E")]
	public XPathDocument Document
	{
		[Token(Token = "0x6001CB0")]
		[Address(RVA = "0x4790740", Offset = "0x4790740", VA = "0x4790740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075F")]
	public string BaseUri
	{
		[Token(Token = "0x6001CB1")]
		[Address(RVA = "0x47906B0", Offset = "0x47906B0", VA = "0x47906B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000760")]
	public int LineNumber
	{
		[Token(Token = "0x6001CB2")]
		[Address(RVA = "0x4792F40", Offset = "0x4792F40", VA = "0x4792F40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000761")]
	public int LinePosition
	{
		[Token(Token = "0x6001CB3")]
		[Address(RVA = "0x4793010", Offset = "0x4793010", VA = "0x4793010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000762")]
	public int CollapsedLinePosition
	{
		[Token(Token = "0x6001CB4")]
		[Address(RVA = "0x4792FF0", Offset = "0x4792FF0", VA = "0x4792FF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000763")]
	public XPathNodePageInfo PageInfo
	{
		[Token(Token = "0x6001CB5")]
		[Address(RVA = "0x4793080", Offset = "0x4793080", VA = "0x4793080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000764")]
	public bool IsXmlNamespaceNode
	{
		[Token(Token = "0x6001CBC")]
		[Address(RVA = "0x4790E10", Offset = "0x4790E10", VA = "0x4790E10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000765")]
	public bool HasSibling
	{
		[Token(Token = "0x6001CBD")]
		[Address(RVA = "0x4793100", Offset = "0x4793100", VA = "0x4793100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000766")]
	public bool HasCollapsedText
	{
		[Token(Token = "0x6001CBE")]
		[Address(RVA = "0x4791290", Offset = "0x4791290", VA = "0x4791290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000767")]
	public bool HasAttribute
	{
		[Token(Token = "0x6001CBF")]
		[Address(RVA = "0x4793110", Offset = "0x4793110", VA = "0x4793110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000768")]
	public bool HasContentChild
	{
		[Token(Token = "0x6001CC0")]
		[Address(RVA = "0x4793120", Offset = "0x4793120", VA = "0x4793120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000769")]
	public bool HasElementChild
	{
		[Token(Token = "0x6001CC1")]
		[Address(RVA = "0x4793130", Offset = "0x4793130", VA = "0x4793130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076A")]
	public bool IsAttrNmsp
	{
		[Token(Token = "0x6001CC2")]
		[Address(RVA = "0x4793140", Offset = "0x4793140", VA = "0x4793140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076B")]
	public bool IsText
	{
		[Token(Token = "0x6001CC3")]
		[Address(RVA = "0x4793150", Offset = "0x4793150", VA = "0x4793150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076C")]
	public bool HasNamespaceDecls
	{
		[Token(Token = "0x6001CC4")]
		[Address(RVA = "0x47931B0", Offset = "0x47931B0", VA = "0x47931B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076D")]
	public string Value
	{
		[Token(Token = "0x6001CC5")]
		[Address(RVA = "0x47931C0", Offset = "0x47931C0", VA = "0x47931C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CB6")]
	[Address(RVA = "0x4791720", Offset = "0x4791720", VA = "0x4791720")]
	public int GetRoot(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB7")]
	[Address(RVA = "0x47906D0", Offset = "0x47906D0", VA = "0x47906D0")]
	public int GetParent(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB8")]
	[Address(RVA = "0x4790E70", Offset = "0x4790E70", VA = "0x4790E70")]
	public int GetSibling(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x47930A0", Offset = "0x47930A0", VA = "0x47930A0")]
	public int GetSimilarElement(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x47930D0", Offset = "0x47930D0", VA = "0x47930D0")]
	public bool NameMatch(string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x4793040", Offset = "0x4793040", VA = "0x4793040")]
	public bool ElementMatch(string localName, string namespaceName)
	{
		return default(bool);
	}
}
