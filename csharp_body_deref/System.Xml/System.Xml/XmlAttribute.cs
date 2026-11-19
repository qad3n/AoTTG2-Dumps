// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Schema;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000098")]
public class XmlAttribute : XmlNode
{
	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x18")]
	private XmlName name;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x20")]
	private XmlLinkedNode lastChild;

	[Token(Token = "0x170001C9")]
	internal int LocalNameHash
	{
		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x60CBA60", Offset = "0x60CAA60", VA = "0x60CBA60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001CA")]
	internal XmlName XmlName
	{
		[Token(Token = "0x60007C0")]
		[Address(RVA = "0x60CBBD0", Offset = "0x60CABD0", VA = "0x60CBBD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C1")]
		[Address(RVA = "0x60CBBE0", Offset = "0x60CABE0", VA = "0x60CBBE0")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x60CBCB0", Offset = "0x60CACB0", VA = "0x60CBCB0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	public override string Name
	{
		[Token(Token = "0x60007C4")]
		[Address(RVA = "0x60CBCC0", Offset = "0x60CACC0", VA = "0x60CBCC0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	public override string LocalName
	{
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x60CBCE0", Offset = "0x60CACE0", VA = "0x60CBCE0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x60CBD00", Offset = "0x60CAD00", VA = "0x60CBD00", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	public override string Prefix
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x60CBD20", Offset = "0x60CAD20", VA = "0x60CBD20", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x60CBD40", Offset = "0x60CAD40", VA = "0x60CBD40", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x60CBDE0", Offset = "0x60CADE0", VA = "0x60CBDE0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170001D1")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x60CBDF0", Offset = "0x60CADF0", VA = "0x60CBDF0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D2")]
	public override string Value
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x60CBE10", Offset = "0x60CAE10", VA = "0x60CBE10", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x60CBE30", Offset = "0x60CAE30", VA = "0x60CBE30", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x60CBE50", Offset = "0x60CAE50", VA = "0x60CBE50", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	public override string InnerText
	{
		[Token(Token = "0x60007CE")]
		[Address(RVA = "0x60CBE60", Offset = "0x60CAE60", VA = "0x60CBE60", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001D5")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x60CC1A0", Offset = "0x60CB1A0", VA = "0x60CC1A0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D6")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x60CC4A0", Offset = "0x60CB4A0", VA = "0x60CC4A0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x60CC4B0", Offset = "0x60CB4B0", VA = "0x60CC4B0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public virtual bool Specified
	{
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x60CC4D0", Offset = "0x60CB4D0", VA = "0x60CC4D0", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D8")]
	public virtual XmlElement OwnerElement
	{
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x60CC9C0", Offset = "0x60CB9C0", VA = "0x60CC9C0", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	public override string InnerXml
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x60CCA20", Offset = "0x60CBA20", VA = "0x60CCA20", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x170001DA")]
	public override string BaseURI
	{
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x60CCBB0", Offset = "0x60CBBB0", VA = "0x60CCBB0", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DB")]
	internal override XmlSpace XmlSpace
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x60CCC30", Offset = "0x60CBC30", VA = "0x60CCC30", Slot = "56")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170001DC")]
	internal override string XmlLang
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x60CCC90", Offset = "0x60CBC90", VA = "0x60CCC90", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x60CCD00", Offset = "0x60CBD00", VA = "0x60CCD00", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001DE")]
	internal override string XPLocalName
	{
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x60CCD40", Offset = "0x60CBD40", VA = "0x60CCD40", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	internal bool IsNamespace
	{
		[Token(Token = "0x60007E7")]
		[Address(RVA = "0x60C5B20", Offset = "0x60C4B20", VA = "0x60C5B20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x60CB880", Offset = "0x60CA880", VA = "0x60CB880")]
	internal XmlAttribute(XmlName name, XmlDocument doc)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x60CBA80", Offset = "0x60CAA80", VA = "0x60CBA80")]
	protected internal XmlAttribute(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x60CBBF0", Offset = "0x60CABF0", VA = "0x60CBBF0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x60CBF10", Offset = "0x60CAF10", VA = "0x60CBF10")]
	internal bool PrepareOwnerElementInElementIdAttrMap()
	{
		return default(bool);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x60CBFB0", Offset = "0x60CAFB0", VA = "0x60CBFB0")]
	internal void ResetOwnerElementInElementIdAttrMap(string oldInnerText)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x60CC1B0", Offset = "0x60CB1B0", VA = "0x60CC1B0", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x60CC4C0", Offset = "0x60CB4C0", VA = "0x60CC4C0", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x60CC4E0", Offset = "0x60CB4E0", VA = "0x60CC4E0", Slot = "23")]
	public override XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x60CC5B0", Offset = "0x60CB5B0", VA = "0x60CC5B0", Slot = "24")]
	public override XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x60CC680", Offset = "0x60CB680", VA = "0x60CC680", Slot = "25")]
	public override XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x60CC750", Offset = "0x60CB750", VA = "0x60CC750", Slot = "26")]
	public override XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x60CC820", Offset = "0x60CB820", VA = "0x60CC820", Slot = "27")]
	public override XmlNode PrependChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x60CC8F0", Offset = "0x60CB8F0", VA = "0x60CC8F0", Slot = "28")]
	public override XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x60CCAA0", Offset = "0x60CBAA0", VA = "0x60CCAA0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x60CCB50", Offset = "0x60CBB50", VA = "0x60CCB50", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x60CCC20", Offset = "0x60CBC20", VA = "0x60CCC20", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}
}
