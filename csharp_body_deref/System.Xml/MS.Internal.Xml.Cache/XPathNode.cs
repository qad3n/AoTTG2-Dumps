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
		[Address(RVA = "0x6095A00", Offset = "0x6094A00", VA = "0x6095A00")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700075A")]
	public string Prefix
	{
		[Token(Token = "0x6001CAC")]
		[Address(RVA = "0x6095BF0", Offset = "0x6094BF0", VA = "0x6095BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075B")]
	public string LocalName
	{
		[Token(Token = "0x6001CAD")]
		[Address(RVA = "0x6095A50", Offset = "0x6094A50", VA = "0x6095A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075C")]
	public string Name
	{
		[Token(Token = "0x6001CAE")]
		[Address(RVA = "0x6095B50", Offset = "0x6094B50", VA = "0x6095B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075D")]
	public string NamespaceUri
	{
		[Token(Token = "0x6001CAF")]
		[Address(RVA = "0x6095AB0", Offset = "0x6094AB0", VA = "0x6095AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075E")]
	public XPathDocument Document
	{
		[Token(Token = "0x6001CB0")]
		[Address(RVA = "0x6095D80", Offset = "0x6094D80", VA = "0x6095D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075F")]
	public string BaseUri
	{
		[Token(Token = "0x6001CB1")]
		[Address(RVA = "0x6095CF0", Offset = "0x6094CF0", VA = "0x6095CF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000760")]
	public int LineNumber
	{
		[Token(Token = "0x6001CB2")]
		[Address(RVA = "0x60984F0", Offset = "0x60974F0", VA = "0x60984F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000761")]
	public int LinePosition
	{
		[Token(Token = "0x6001CB3")]
		[Address(RVA = "0x60985C0", Offset = "0x60975C0", VA = "0x60985C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000762")]
	public int CollapsedLinePosition
	{
		[Token(Token = "0x6001CB4")]
		[Address(RVA = "0x60985A0", Offset = "0x60975A0", VA = "0x60985A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000763")]
	public XPathNodePageInfo PageInfo
	{
		[Token(Token = "0x6001CB5")]
		[Address(RVA = "0x6098630", Offset = "0x6097630", VA = "0x6098630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000764")]
	public bool IsXmlNamespaceNode
	{
		[Token(Token = "0x6001CBC")]
		[Address(RVA = "0x60964B0", Offset = "0x60954B0", VA = "0x60964B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000765")]
	public bool HasSibling
	{
		[Token(Token = "0x6001CBD")]
		[Address(RVA = "0x60986B0", Offset = "0x60976B0", VA = "0x60986B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000766")]
	public bool HasCollapsedText
	{
		[Token(Token = "0x6001CBE")]
		[Address(RVA = "0x60968D0", Offset = "0x60958D0", VA = "0x60968D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000767")]
	public bool HasAttribute
	{
		[Token(Token = "0x6001CBF")]
		[Address(RVA = "0x60986C0", Offset = "0x60976C0", VA = "0x60986C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000768")]
	public bool HasContentChild
	{
		[Token(Token = "0x6001CC0")]
		[Address(RVA = "0x60986D0", Offset = "0x60976D0", VA = "0x60986D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000769")]
	public bool HasElementChild
	{
		[Token(Token = "0x6001CC1")]
		[Address(RVA = "0x60986E0", Offset = "0x60976E0", VA = "0x60986E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076A")]
	public bool IsAttrNmsp
	{
		[Token(Token = "0x6001CC2")]
		[Address(RVA = "0x60986F0", Offset = "0x60976F0", VA = "0x60986F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076B")]
	public bool IsText
	{
		[Token(Token = "0x6001CC3")]
		[Address(RVA = "0x6098700", Offset = "0x6097700", VA = "0x6098700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076C")]
	public bool HasNamespaceDecls
	{
		[Token(Token = "0x6001CC4")]
		[Address(RVA = "0x6098750", Offset = "0x6097750", VA = "0x6098750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076D")]
	public string Value
	{
		[Token(Token = "0x6001CC5")]
		[Address(RVA = "0x6098760", Offset = "0x6097760", VA = "0x6098760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CB6")]
	[Address(RVA = "0x6096D40", Offset = "0x6095D40", VA = "0x6096D40")]
	public int GetRoot(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB7")]
	[Address(RVA = "0x6095D10", Offset = "0x6094D10", VA = "0x6095D10")]
	public int GetParent(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB8")]
	[Address(RVA = "0x6096510", Offset = "0x6095510", VA = "0x6096510")]
	public int GetSibling(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x6098650", Offset = "0x6097650", VA = "0x6098650")]
	public int GetSimilarElement(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x6098680", Offset = "0x6097680", VA = "0x6098680")]
	public bool NameMatch(string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x60985F0", Offset = "0x60975F0", VA = "0x60985F0")]
	public bool ElementMatch(string localName, string namespaceName)
	{
		return default(bool);
	}
}
