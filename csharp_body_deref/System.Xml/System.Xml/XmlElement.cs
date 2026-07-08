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
		[Address(RVA = "0x4494780", Offset = "0x4494780", VA = "0x4494780")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C2")]
		[Address(RVA = "0x4494790", Offset = "0x4494790", VA = "0x4494790")]
		set
		{
		}
	}

	[Token(Token = "0x17000233")]
	public override string Name
	{
		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x4494F50", Offset = "0x4494F50", VA = "0x4494F50", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000234")]
	public override string LocalName
	{
		[Token(Token = "0x60008C5")]
		[Address(RVA = "0x4495160", Offset = "0x4495160", VA = "0x4495160", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000235")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x4495180", Offset = "0x4495180", VA = "0x4495180", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000236")]
	public override string Prefix
	{
		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x44951A0", Offset = "0x44951A0", VA = "0x44951A0", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x44951C0", Offset = "0x44951C0", VA = "0x44951C0", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000237")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x4495260", Offset = "0x4495260", VA = "0x4495260", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000238")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x4495270", Offset = "0x4495270", VA = "0x4495270", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x4495280", Offset = "0x4495280", VA = "0x4495280", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023A")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x44952A0", Offset = "0x44952A0", VA = "0x44952A0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023B")]
	public bool IsEmpty
	{
		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x4494E90", Offset = "0x4494E90", VA = "0x4494E90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008CF")]
		[Address(RVA = "0x4494EA0", Offset = "0x4494EA0", VA = "0x4494EA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700023C")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x4495500", Offset = "0x4495500", VA = "0x4495500", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008D1")]
		[Address(RVA = "0x4495510", Offset = "0x4495510", VA = "0x4495510", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	public override XmlAttributeCollection Attributes
	{
		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x4495540", Offset = "0x4495540", VA = "0x4495540", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023E")]
	public virtual bool HasAttributes
	{
		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x4495690", Offset = "0x4495690", VA = "0x4495690", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023F")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60008E5")]
		[Address(RVA = "0x44961C0", Offset = "0x44961C0", VA = "0x44961C0", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000240")]
	public override string InnerXml
	{
		[Token(Token = "0x60008E6")]
		[Address(RVA = "0x44961D0", Offset = "0x44961D0", VA = "0x44961D0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000241")]
	public override string InnerText
	{
		[Token(Token = "0x60008E7")]
		[Address(RVA = "0x4496360", Offset = "0x4496360", VA = "0x4496360", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008E8")]
		[Address(RVA = "0x4496470", Offset = "0x4496470", VA = "0x4496470", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000242")]
	public override XmlNode NextSibling
	{
		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x44965A0", Offset = "0x44965A0", VA = "0x44965A0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000243")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60008EB")]
		[Address(RVA = "0x44965E0", Offset = "0x44965E0", VA = "0x44965E0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x17000244")]
	internal override string XPLocalName
	{
		[Token(Token = "0x60008EC")]
		[Address(RVA = "0x44965F0", Offset = "0x44965F0", VA = "0x44965F0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x44945E0", Offset = "0x44945E0", VA = "0x44945E0")]
	internal XmlElement(XmlName name, bool empty, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x4494740", Offset = "0x4494740", VA = "0x4494740")]
	protected internal XmlElement(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x44947A0", Offset = "0x44947A0", VA = "0x44947A0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x44952B0", Offset = "0x44952B0", VA = "0x44952B0", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x4495520", Offset = "0x4495520", VA = "0x4495520", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x44956C0", Offset = "0x44956C0", VA = "0x44956C0", Slot = "63")]
	public virtual string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x4495710", Offset = "0x4495710", VA = "0x4495710", Slot = "64")]
	public virtual void SetAttribute(string name, string value)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x44957D0", Offset = "0x44957D0", VA = "0x44957D0", Slot = "65")]
	public virtual XmlAttribute GetAttributeNode(string name)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x4495830", Offset = "0x4495830", VA = "0x4495830", Slot = "66")]
	public virtual XmlAttribute SetAttributeNode(XmlAttribute newAttr)
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x4495940", Offset = "0x4495940", VA = "0x4495940", Slot = "67")]
	public virtual string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x4495990", Offset = "0x4495990", VA = "0x4495990", Slot = "68")]
	public virtual string SetAttribute(string localName, string namespaceURI, string value)
	{
		return null;
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x4495A80", Offset = "0x4495A80", VA = "0x4495A80", Slot = "69")]
	public virtual XmlAttribute GetAttributeNode(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x4495AE0", Offset = "0x4495AE0", VA = "0x4495AE0", Slot = "70")]
	public virtual XmlAttribute SetAttributeNode(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x4495B90", Offset = "0x4495B90", VA = "0x4495B90", Slot = "71")]
	public virtual bool HasAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x4495BB0", Offset = "0x4495BB0", VA = "0x4495BB0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x4495CB0", Offset = "0x4495CB0", VA = "0x4495CB0")]
	private static void WriteElementTo(XmlWriter writer, XmlElement e)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x4495F40", Offset = "0x4495F40", VA = "0x4495F40")]
	private void WriteStartElement(XmlWriter w)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x4496060", Offset = "0x4496060", VA = "0x4496060", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x44960C0", Offset = "0x44960C0", VA = "0x44960C0", Slot = "72")]
	public virtual void RemoveAllAttributes()
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x44960F0", Offset = "0x44960F0", VA = "0x44960F0", Slot = "48")]
	public override void RemoveAll()
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x44954A0", Offset = "0x44954A0", VA = "0x44954A0")]
	internal void RemoveAllChildren()
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x44965D0", Offset = "0x44965D0", VA = "0x44965D0", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}
}
