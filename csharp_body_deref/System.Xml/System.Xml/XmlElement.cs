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
		[Address(RVA = "0x47D1EE0", Offset = "0x47D1EE0", VA = "0x47D1EE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C2")]
		[Address(RVA = "0x47D1EF0", Offset = "0x47D1EF0", VA = "0x47D1EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000233")]
	public override string Name
	{
		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x47D26B0", Offset = "0x47D26B0", VA = "0x47D26B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000234")]
	public override string LocalName
	{
		[Token(Token = "0x60008C5")]
		[Address(RVA = "0x47D28C0", Offset = "0x47D28C0", VA = "0x47D28C0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000235")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x47D28E0", Offset = "0x47D28E0", VA = "0x47D28E0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000236")]
	public override string Prefix
	{
		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x47D2900", Offset = "0x47D2900", VA = "0x47D2900", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x47D2920", Offset = "0x47D2920", VA = "0x47D2920", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000237")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x47D29C0", Offset = "0x47D29C0", VA = "0x47D29C0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000238")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x47D29D0", Offset = "0x47D29D0", VA = "0x47D29D0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x47D29E0", Offset = "0x47D29E0", VA = "0x47D29E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023A")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x47D2A00", Offset = "0x47D2A00", VA = "0x47D2A00", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023B")]
	public bool IsEmpty
	{
		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x47D25F0", Offset = "0x47D25F0", VA = "0x47D25F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008CF")]
		[Address(RVA = "0x47D2600", Offset = "0x47D2600", VA = "0x47D2600")]
		set
		{
		}
	}

	[Token(Token = "0x1700023C")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x47D2C60", Offset = "0x47D2C60", VA = "0x47D2C60", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008D1")]
		[Address(RVA = "0x47D2C70", Offset = "0x47D2C70", VA = "0x47D2C70", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	public override XmlAttributeCollection Attributes
	{
		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x47D2CA0", Offset = "0x47D2CA0", VA = "0x47D2CA0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023E")]
	public virtual bool HasAttributes
	{
		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x47D2DF0", Offset = "0x47D2DF0", VA = "0x47D2DF0", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023F")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60008E5")]
		[Address(RVA = "0x47D3920", Offset = "0x47D3920", VA = "0x47D3920", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000240")]
	public override string InnerXml
	{
		[Token(Token = "0x60008E6")]
		[Address(RVA = "0x47D3930", Offset = "0x47D3930", VA = "0x47D3930", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000241")]
	public override string InnerText
	{
		[Token(Token = "0x60008E7")]
		[Address(RVA = "0x47D3AC0", Offset = "0x47D3AC0", VA = "0x47D3AC0", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008E8")]
		[Address(RVA = "0x47D3BD0", Offset = "0x47D3BD0", VA = "0x47D3BD0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000242")]
	public override XmlNode NextSibling
	{
		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x47D3D00", Offset = "0x47D3D00", VA = "0x47D3D00", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000243")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60008EB")]
		[Address(RVA = "0x47D3D40", Offset = "0x47D3D40", VA = "0x47D3D40", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x17000244")]
	internal override string XPLocalName
	{
		[Token(Token = "0x60008EC")]
		[Address(RVA = "0x47D3D50", Offset = "0x47D3D50", VA = "0x47D3D50", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x47D1D40", Offset = "0x47D1D40", VA = "0x47D1D40")]
	internal XmlElement(XmlName name, bool empty, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x47D1EA0", Offset = "0x47D1EA0", VA = "0x47D1EA0")]
	protected internal XmlElement(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x47D1F00", Offset = "0x47D1F00", VA = "0x47D1F00", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x47D2A10", Offset = "0x47D2A10", VA = "0x47D2A10", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x47D2C80", Offset = "0x47D2C80", VA = "0x47D2C80", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x47D2E20", Offset = "0x47D2E20", VA = "0x47D2E20", Slot = "63")]
	public virtual string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x47D2E70", Offset = "0x47D2E70", VA = "0x47D2E70", Slot = "64")]
	public virtual void SetAttribute(string name, string value)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x47D2F30", Offset = "0x47D2F30", VA = "0x47D2F30", Slot = "65")]
	public virtual XmlAttribute GetAttributeNode(string name)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x47D2F90", Offset = "0x47D2F90", VA = "0x47D2F90", Slot = "66")]
	public virtual XmlAttribute SetAttributeNode(XmlAttribute newAttr)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x47D30A0", Offset = "0x47D30A0", VA = "0x47D30A0", Slot = "67")]
	public virtual string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x47D30F0", Offset = "0x47D30F0", VA = "0x47D30F0", Slot = "68")]
	public virtual string SetAttribute(string localName, string namespaceURI, string value)
	{
		return null;
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x47D31E0", Offset = "0x47D31E0", VA = "0x47D31E0", Slot = "69")]
	public virtual XmlAttribute GetAttributeNode(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x47D3240", Offset = "0x47D3240", VA = "0x47D3240", Slot = "70")]
	public virtual XmlAttribute SetAttributeNode(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x47D32F0", Offset = "0x47D32F0", VA = "0x47D32F0", Slot = "71")]
	public virtual bool HasAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x47D3310", Offset = "0x47D3310", VA = "0x47D3310", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x47D3410", Offset = "0x47D3410", VA = "0x47D3410")]
	private static void WriteElementTo(XmlWriter writer, XmlElement e)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x47D36A0", Offset = "0x47D36A0", VA = "0x47D36A0")]
	private void WriteStartElement(XmlWriter w)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x47D37C0", Offset = "0x47D37C0", VA = "0x47D37C0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x47D3820", Offset = "0x47D3820", VA = "0x47D3820", Slot = "72")]
	public virtual void RemoveAllAttributes()
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x47D3850", Offset = "0x47D3850", VA = "0x47D3850", Slot = "48")]
	public override void RemoveAll()
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x47D2C00", Offset = "0x47D2C00", VA = "0x47D2C00")]
	internal void RemoveAllChildren()
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x47D3D30", Offset = "0x47D3D30", VA = "0x47D3D30", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}
}
