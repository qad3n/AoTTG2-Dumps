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
		[Address(RVA = "0x4452C60", Offset = "0x4452C60", VA = "0x4452C60")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700075A")]
	public string Prefix
	{
		[Token(Token = "0x6001CAC")]
		[Address(RVA = "0x4452E60", Offset = "0x4452E60", VA = "0x4452E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075B")]
	public string LocalName
	{
		[Token(Token = "0x6001CAD")]
		[Address(RVA = "0x4452CB0", Offset = "0x4452CB0", VA = "0x4452CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075C")]
	public string Name
	{
		[Token(Token = "0x6001CAE")]
		[Address(RVA = "0x4452DC0", Offset = "0x4452DC0", VA = "0x4452DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075D")]
	public string NamespaceUri
	{
		[Token(Token = "0x6001CAF")]
		[Address(RVA = "0x4452D10", Offset = "0x4452D10", VA = "0x4452D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075E")]
	public XPathDocument Document
	{
		[Token(Token = "0x6001CB0")]
		[Address(RVA = "0x4452FE0", Offset = "0x4452FE0", VA = "0x4452FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700075F")]
	public string BaseUri
	{
		[Token(Token = "0x6001CB1")]
		[Address(RVA = "0x4452F50", Offset = "0x4452F50", VA = "0x4452F50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000760")]
	public int LineNumber
	{
		[Token(Token = "0x6001CB2")]
		[Address(RVA = "0x44557E0", Offset = "0x44557E0", VA = "0x44557E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000761")]
	public int LinePosition
	{
		[Token(Token = "0x6001CB3")]
		[Address(RVA = "0x44558B0", Offset = "0x44558B0", VA = "0x44558B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000762")]
	public int CollapsedLinePosition
	{
		[Token(Token = "0x6001CB4")]
		[Address(RVA = "0x4455890", Offset = "0x4455890", VA = "0x4455890")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000763")]
	public XPathNodePageInfo PageInfo
	{
		[Token(Token = "0x6001CB5")]
		[Address(RVA = "0x4455920", Offset = "0x4455920", VA = "0x4455920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000764")]
	public bool IsXmlNamespaceNode
	{
		[Token(Token = "0x6001CBC")]
		[Address(RVA = "0x44536B0", Offset = "0x44536B0", VA = "0x44536B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000765")]
	public bool HasSibling
	{
		[Token(Token = "0x6001CBD")]
		[Address(RVA = "0x44559A0", Offset = "0x44559A0", VA = "0x44559A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000766")]
	public bool HasCollapsedText
	{
		[Token(Token = "0x6001CBE")]
		[Address(RVA = "0x4453B30", Offset = "0x4453B30", VA = "0x4453B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000767")]
	public bool HasAttribute
	{
		[Token(Token = "0x6001CBF")]
		[Address(RVA = "0x44559B0", Offset = "0x44559B0", VA = "0x44559B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000768")]
	public bool HasContentChild
	{
		[Token(Token = "0x6001CC0")]
		[Address(RVA = "0x44559C0", Offset = "0x44559C0", VA = "0x44559C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000769")]
	public bool HasElementChild
	{
		[Token(Token = "0x6001CC1")]
		[Address(RVA = "0x44559D0", Offset = "0x44559D0", VA = "0x44559D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076A")]
	public bool IsAttrNmsp
	{
		[Token(Token = "0x6001CC2")]
		[Address(RVA = "0x44559E0", Offset = "0x44559E0", VA = "0x44559E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076B")]
	public bool IsText
	{
		[Token(Token = "0x6001CC3")]
		[Address(RVA = "0x44559F0", Offset = "0x44559F0", VA = "0x44559F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076C")]
	public bool HasNamespaceDecls
	{
		[Token(Token = "0x6001CC4")]
		[Address(RVA = "0x4455A50", Offset = "0x4455A50", VA = "0x4455A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700076D")]
	public string Value
	{
		[Token(Token = "0x6001CC5")]
		[Address(RVA = "0x4455A60", Offset = "0x4455A60", VA = "0x4455A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CB6")]
	[Address(RVA = "0x4453FC0", Offset = "0x4453FC0", VA = "0x4453FC0")]
	public int GetRoot(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB7")]
	[Address(RVA = "0x4452F70", Offset = "0x4452F70", VA = "0x4452F70")]
	public int GetParent(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB8")]
	[Address(RVA = "0x4453710", Offset = "0x4453710", VA = "0x4453710")]
	public int GetSibling(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x4455940", Offset = "0x4455940", VA = "0x4455940")]
	public int GetSimilarElement(out XPathNode[] pageNode)
	{
		return default(int);
	}

	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x4455970", Offset = "0x4455970", VA = "0x4455970")]
	public bool NameMatch(string localName, string namespaceName)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x44558E0", Offset = "0x44558E0", VA = "0x44558E0")]
	public bool ElementMatch(string localName, string namespaceName)
	{
		return default(bool);
	}
}
