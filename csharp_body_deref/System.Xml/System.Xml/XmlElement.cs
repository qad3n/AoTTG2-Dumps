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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C2")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000233")]
	public override string Name
	{
		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x272B9B0", Offset = "0x2729FB0", VA = "0x18272B9B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000234")]
	public override string LocalName
	{
		[Token(Token = "0x60008C5")]
		[Address(RVA = "0x1D959B0", Offset = "0x1D93FB0", VA = "0x181D959B0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000235")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x272B9D0", Offset = "0x2729FD0", VA = "0x18272B9D0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000236")]
	public override string Prefix
	{
		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x1D959D0", Offset = "0x1D93FD0", VA = "0x181D959D0", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x272BD60", Offset = "0x272A360", VA = "0x18272BD60", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000237")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000238")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x272BA30", Offset = "0x272A030", VA = "0x18272BA30", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023A")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023B")]
	public bool IsEmpty
	{
		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x272B990", Offset = "0x2729F90", VA = "0x18272B990")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008CF")]
		[Address(RVA = "0x272BD00", Offset = "0x272A300", VA = "0x18272BD00")]
		set
		{
		}
	}

	[Token(Token = "0x1700023C")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x272B9A0", Offset = "0x2729FA0", VA = "0x18272B9A0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008D1")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	public override XmlAttributeCollection Attributes
	{
		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x272B820", Offset = "0x2729E20", VA = "0x18272B820", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023E")]
	public virtual bool HasAttributes
	{
		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x272B950", Offset = "0x2729F50", VA = "0x18272B950", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023F")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60008E5")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000240")]
	public override string InnerXml
	{
		[Token(Token = "0x60008E6")]
		[Address(RVA = "0x272BB30", Offset = "0x272A130", VA = "0x18272BB30", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000241")]
	public override string InnerText
	{
		[Token(Token = "0x60008E7")]
		[Address(RVA = "0x272B980", Offset = "0x2729F80", VA = "0x18272B980", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008E8")]
		[Address(RVA = "0x272BA50", Offset = "0x272A050", VA = "0x18272BA50", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000242")]
	public override XmlNode NextSibling
	{
		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x272B9F0", Offset = "0x2729FF0", VA = "0x18272B9F0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000243")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60008EB")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x17000244")]
	internal override string XPLocalName
	{
		[Token(Token = "0x60008EC")]
		[Address(RVA = "0x1AC6710", Offset = "0x1AC4D10", VA = "0x181AC6710", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x272B660", Offset = "0x2729C60", VA = "0x18272B660")]
	internal XmlElement(XmlName name, bool empty, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x272B600", Offset = "0x2729C00", VA = "0x18272B600")]
	protected internal XmlElement(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x272A6D0", Offset = "0x2728CD0", VA = "0x18272A6D0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x272A4F0", Offset = "0x2728AF0", VA = "0x18272A4F0", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x272AD40", Offset = "0x2729340", VA = "0x18272AD40", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x272AC80", Offset = "0x2729280", VA = "0x18272AC80", Slot = "63")]
	public virtual string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x272B000", Offset = "0x2729600", VA = "0x18272B000", Slot = "64")]
	public virtual void SetAttribute(string name, string value)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x272AB90", Offset = "0x2729190", VA = "0x18272AB90", Slot = "65")]
	public virtual XmlAttribute GetAttributeNode(string name)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x272AED0", Offset = "0x27294D0", VA = "0x18272AED0", Slot = "66")]
	public virtual XmlAttribute SetAttributeNode(XmlAttribute newAttr)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x272ACD0", Offset = "0x27292D0", VA = "0x18272ACD0", Slot = "67")]
	public virtual string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x272B0E0", Offset = "0x27296E0", VA = "0x18272B0E0", Slot = "68")]
	public virtual string SetAttribute(string localName, string namespaceURI, string value)
	{
		return null;
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x272AC00", Offset = "0x2729200", VA = "0x18272AC00", Slot = "69")]
	public virtual XmlAttribute GetAttributeNode(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x272AE20", Offset = "0x2729420", VA = "0x18272AE20", Slot = "70")]
	public virtual XmlAttribute SetAttributeNode(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x272AD20", Offset = "0x2729320", VA = "0x18272AD20", Slot = "71")]
	public virtual bool HasAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x272B500", Offset = "0x2729B00", VA = "0x18272B500", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x272B1E0", Offset = "0x27297E0", VA = "0x18272B1E0")]
	private static void WriteElementTo(XmlWriter writer, XmlElement e)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x272B3F0", Offset = "0x27299F0", VA = "0x18272B3F0")]
	private void WriteStartElement(XmlWriter w)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x270DE70", Offset = "0x270C470", VA = "0x18270DE70", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x272ADA0", Offset = "0x27293A0", VA = "0x18272ADA0", Slot = "72")]
	public virtual void RemoveAllAttributes()
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x272ADF0", Offset = "0x27293F0", VA = "0x18272ADF0", Slot = "48")]
	public override void RemoveAll()
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x272ADE0", Offset = "0x27293E0", VA = "0x18272ADE0")]
	internal void RemoveAllChildren()
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}
}
