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
		[Address(RVA = "0x448AC10", Offset = "0x448AC10", VA = "0x448AC10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001CA")]
	internal XmlName XmlName
	{
		[Token(Token = "0x60007C0")]
		[Address(RVA = "0x448AD80", Offset = "0x448AD80", VA = "0x448AD80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C1")]
		[Address(RVA = "0x448AD90", Offset = "0x448AD90", VA = "0x448AD90")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x448AE60", Offset = "0x448AE60", VA = "0x448AE60", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	public override string Name
	{
		[Token(Token = "0x60007C4")]
		[Address(RVA = "0x448AE70", Offset = "0x448AE70", VA = "0x448AE70", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	public override string LocalName
	{
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x448AE90", Offset = "0x448AE90", VA = "0x448AE90", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x448AEB0", Offset = "0x448AEB0", VA = "0x448AEB0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	public override string Prefix
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x448AED0", Offset = "0x448AED0", VA = "0x448AED0", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x448AEF0", Offset = "0x448AEF0", VA = "0x448AEF0", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x448AF90", Offset = "0x448AF90", VA = "0x448AF90", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170001D1")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x448AFA0", Offset = "0x448AFA0", VA = "0x448AFA0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D2")]
	public override string Value
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x448AFC0", Offset = "0x448AFC0", VA = "0x448AFC0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x448AFE0", Offset = "0x448AFE0", VA = "0x448AFE0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x448B000", Offset = "0x448B000", VA = "0x448B000", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	public override string InnerText
	{
		[Token(Token = "0x60007CE")]
		[Address(RVA = "0x448B010", Offset = "0x448B010", VA = "0x448B010", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001D5")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x448B360", Offset = "0x448B360", VA = "0x448B360", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D6")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x448B6A0", Offset = "0x448B6A0", VA = "0x448B6A0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x448B6B0", Offset = "0x448B6B0", VA = "0x448B6B0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public virtual bool Specified
	{
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x448B6D0", Offset = "0x448B6D0", VA = "0x448B6D0", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D8")]
	public virtual XmlElement OwnerElement
	{
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x448BBC0", Offset = "0x448BBC0", VA = "0x448BBC0", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	public override string InnerXml
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x448BC20", Offset = "0x448BC20", VA = "0x448BC20", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x170001DA")]
	public override string BaseURI
	{
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x448BDB0", Offset = "0x448BDB0", VA = "0x448BDB0", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DB")]
	internal override XmlSpace XmlSpace
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x448BE30", Offset = "0x448BE30", VA = "0x448BE30", Slot = "56")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170001DC")]
	internal override string XmlLang
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x448BE90", Offset = "0x448BE90", VA = "0x448BE90", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x448BF00", Offset = "0x448BF00", VA = "0x448BF00", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001DE")]
	internal override string XPLocalName
	{
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x448BF40", Offset = "0x448BF40", VA = "0x448BF40", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	internal bool IsNamespace
	{
		[Token(Token = "0x60007E7")]
		[Address(RVA = "0x4484860", Offset = "0x4484860", VA = "0x4484860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x448AA30", Offset = "0x448AA30", VA = "0x448AA30")]
	internal XmlAttribute(XmlName name, XmlDocument doc)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x448AC30", Offset = "0x448AC30", VA = "0x448AC30")]
	protected internal XmlAttribute(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x448ADA0", Offset = "0x448ADA0", VA = "0x448ADA0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x448B0C0", Offset = "0x448B0C0", VA = "0x448B0C0")]
	internal bool PrepareOwnerElementInElementIdAttrMap()
	{
		return default(bool);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x448B160", Offset = "0x448B160", VA = "0x448B160")]
	internal void ResetOwnerElementInElementIdAttrMap(string oldInnerText)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x448B370", Offset = "0x448B370", VA = "0x448B370", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x448B6C0", Offset = "0x448B6C0", VA = "0x448B6C0", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x448B6E0", Offset = "0x448B6E0", VA = "0x448B6E0", Slot = "23")]
	public override XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x448B7B0", Offset = "0x448B7B0", VA = "0x448B7B0", Slot = "24")]
	public override XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x448B880", Offset = "0x448B880", VA = "0x448B880", Slot = "25")]
	public override XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x448B950", Offset = "0x448B950", VA = "0x448B950", Slot = "26")]
	public override XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x448BA20", Offset = "0x448BA20", VA = "0x448BA20", Slot = "27")]
	public override XmlNode PrependChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x448BAF0", Offset = "0x448BAF0", VA = "0x448BAF0", Slot = "28")]
	public override XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x448BCA0", Offset = "0x448BCA0", VA = "0x448BCA0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x448BD50", Offset = "0x448BD50", VA = "0x448BD50", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x448BE20", Offset = "0x448BE20", VA = "0x448BE20", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}
}
