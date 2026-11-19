// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Schema;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A3")]
public class XmlElement : XmlLinkedNode
{
	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x20")]
	private XmlName name;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x28")]
	private XmlAttributeCollection attributes;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x30")]
	private XmlLinkedNode lastChild;

	[Token(Token = "0x17000232")]
	internal XmlName XmlName
	{
		[Token(Token = "0x60008C1")]
		[Address(RVA = "0x60D5250", Offset = "0x60D4250", VA = "0x60D5250")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C2")]
		[Address(RVA = "0x60D5260", Offset = "0x60D4260", VA = "0x60D5260")]
		set
		{
		}
	}

	[Token(Token = "0x17000233")]
	public override string Name
	{
		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x60D5900", Offset = "0x60D4900", VA = "0x60D5900", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000234")]
	public override string LocalName
	{
		[Token(Token = "0x60008C5")]
		[Address(RVA = "0x60D5AF0", Offset = "0x60D4AF0", VA = "0x60D5AF0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000235")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x60D5B10", Offset = "0x60D4B10", VA = "0x60D5B10", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000236")]
	public override string Prefix
	{
		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x60D5B30", Offset = "0x60D4B30", VA = "0x60D5B30", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x60D5B50", Offset = "0x60D4B50", VA = "0x60D5B50", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000237")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x60D5BF0", Offset = "0x60D4BF0", VA = "0x60D5BF0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000238")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x60D5C00", Offset = "0x60D4C00", VA = "0x60D5C00", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x60D5C10", Offset = "0x60D4C10", VA = "0x60D5C10", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023A")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x60D5C30", Offset = "0x60D4C30", VA = "0x60D5C30", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023B")]
	public bool IsEmpty
	{
		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x60D5840", Offset = "0x60D4840", VA = "0x60D5840")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008CF")]
		[Address(RVA = "0x60D5850", Offset = "0x60D4850", VA = "0x60D5850")]
		set
		{
		}
	}

	[Token(Token = "0x1700023C")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x60D5EA0", Offset = "0x60D4EA0", VA = "0x60D5EA0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008D1")]
		[Address(RVA = "0x60D5EB0", Offset = "0x60D4EB0", VA = "0x60D5EB0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	public override XmlAttributeCollection Attributes
	{
		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x60D5EE0", Offset = "0x60D4EE0", VA = "0x60D5EE0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023E")]
	public virtual bool HasAttributes
	{
		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x60D6010", Offset = "0x60D5010", VA = "0x60D6010", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023F")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60008E5")]
		[Address(RVA = "0x60D6B50", Offset = "0x60D5B50", VA = "0x60D6B50", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000240")]
	public override string InnerXml
	{
		[Token(Token = "0x60008E6")]
		[Address(RVA = "0x60D6B60", Offset = "0x60D5B60", VA = "0x60D6B60", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000241")]
	public override string InnerText
	{
		[Token(Token = "0x60008E7")]
		[Address(RVA = "0x60D6CF0", Offset = "0x60D5CF0", VA = "0x60D6CF0", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008E8")]
		[Address(RVA = "0x60D6E00", Offset = "0x60D5E00", VA = "0x60D6E00", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000242")]
	public override XmlNode NextSibling
	{
		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x60D6F30", Offset = "0x60D5F30", VA = "0x60D6F30", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000243")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60008EB")]
		[Address(RVA = "0x60D6F70", Offset = "0x60D5F70", VA = "0x60D6F70", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x17000244")]
	internal override string XPLocalName
	{
		[Token(Token = "0x60008EC")]
		[Address(RVA = "0x60D6F80", Offset = "0x60D5F80", VA = "0x60D6F80", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x60D50B0", Offset = "0x60D40B0", VA = "0x60D50B0")]
	internal XmlElement(XmlName name, bool empty, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x60D5210", Offset = "0x60D4210", VA = "0x60D5210")]
	protected internal XmlElement(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x60D5270", Offset = "0x60D4270", VA = "0x60D5270", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x60D5C40", Offset = "0x60D4C40", VA = "0x60D5C40", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x60D5EC0", Offset = "0x60D4EC0", VA = "0x60D5EC0", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x60D6040", Offset = "0x60D5040", VA = "0x60D6040", Slot = "63")]
	public virtual string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x60D6090", Offset = "0x60D5090", VA = "0x60D6090", Slot = "64")]
	public virtual void SetAttribute(string name, string value)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x60D6150", Offset = "0x60D5150", VA = "0x60D6150", Slot = "65")]
	public virtual XmlAttribute GetAttributeNode(string name)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x60D61B0", Offset = "0x60D51B0", VA = "0x60D61B0", Slot = "66")]
	public virtual XmlAttribute SetAttributeNode(XmlAttribute newAttr)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x60D62C0", Offset = "0x60D52C0", VA = "0x60D62C0", Slot = "67")]
	public virtual string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x60D6310", Offset = "0x60D5310", VA = "0x60D6310", Slot = "68")]
	public virtual string SetAttribute(string localName, string namespaceURI, string value)
	{
		return null;
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x60D6400", Offset = "0x60D5400", VA = "0x60D6400", Slot = "69")]
	public virtual XmlAttribute GetAttributeNode(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x60D6460", Offset = "0x60D5460", VA = "0x60D6460", Slot = "70")]
	public virtual XmlAttribute SetAttributeNode(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x60D6510", Offset = "0x60D5510", VA = "0x60D6510", Slot = "71")]
	public virtual bool HasAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x60D6530", Offset = "0x60D5530", VA = "0x60D6530", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x60D6630", Offset = "0x60D5630", VA = "0x60D6630")]
	private static void WriteElementTo(XmlWriter writer, XmlElement e)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x60D68D0", Offset = "0x60D58D0", VA = "0x60D68D0")]
	private void WriteStartElement(XmlWriter w)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x60D69F0", Offset = "0x60D59F0", VA = "0x60D69F0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x60D6A50", Offset = "0x60D5A50", VA = "0x60D6A50", Slot = "72")]
	public virtual void RemoveAllAttributes()
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x60D6A80", Offset = "0x60D5A80", VA = "0x60D6A80", Slot = "48")]
	public override void RemoveAll()
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x60D5E40", Offset = "0x60D4E40", VA = "0x60D5E40")]
	internal void RemoveAllChildren()
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x60D6F60", Offset = "0x60D5F60", VA = "0x60D6F60", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}
}
