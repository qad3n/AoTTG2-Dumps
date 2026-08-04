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
		[Address(RVA = "0x47C8370", Offset = "0x47C8370", VA = "0x47C8370")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001CA")]
	internal XmlName XmlName
	{
		[Token(Token = "0x60007C0")]
		[Address(RVA = "0x47C84E0", Offset = "0x47C84E0", VA = "0x47C84E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C1")]
		[Address(RVA = "0x47C84F0", Offset = "0x47C84F0", VA = "0x47C84F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x47C85C0", Offset = "0x47C85C0", VA = "0x47C85C0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	public override string Name
	{
		[Token(Token = "0x60007C4")]
		[Address(RVA = "0x47C85D0", Offset = "0x47C85D0", VA = "0x47C85D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	public override string LocalName
	{
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x47C85F0", Offset = "0x47C85F0", VA = "0x47C85F0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x47C8610", Offset = "0x47C8610", VA = "0x47C8610", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	public override string Prefix
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x47C8630", Offset = "0x47C8630", VA = "0x47C8630", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x47C8650", Offset = "0x47C8650", VA = "0x47C8650", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x47C86F0", Offset = "0x47C86F0", VA = "0x47C86F0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170001D1")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x47C8700", Offset = "0x47C8700", VA = "0x47C8700", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D2")]
	public override string Value
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x47C8720", Offset = "0x47C8720", VA = "0x47C8720", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x47C8740", Offset = "0x47C8740", VA = "0x47C8740", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x47C8760", Offset = "0x47C8760", VA = "0x47C8760", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	public override string InnerText
	{
		[Token(Token = "0x60007CE")]
		[Address(RVA = "0x47C8770", Offset = "0x47C8770", VA = "0x47C8770", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001D5")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x47C8AC0", Offset = "0x47C8AC0", VA = "0x47C8AC0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D6")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x47C8E00", Offset = "0x47C8E00", VA = "0x47C8E00", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x47C8E10", Offset = "0x47C8E10", VA = "0x47C8E10", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public virtual bool Specified
	{
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x47C8E30", Offset = "0x47C8E30", VA = "0x47C8E30", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D8")]
	public virtual XmlElement OwnerElement
	{
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x47C9320", Offset = "0x47C9320", VA = "0x47C9320", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	public override string InnerXml
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x47C9380", Offset = "0x47C9380", VA = "0x47C9380", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x170001DA")]
	public override string BaseURI
	{
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x47C9510", Offset = "0x47C9510", VA = "0x47C9510", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DB")]
	internal override XmlSpace XmlSpace
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x47C9590", Offset = "0x47C9590", VA = "0x47C9590", Slot = "56")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170001DC")]
	internal override string XmlLang
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x47C95F0", Offset = "0x47C95F0", VA = "0x47C95F0", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x47C9660", Offset = "0x47C9660", VA = "0x47C9660", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001DE")]
	internal override string XPLocalName
	{
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x47C96A0", Offset = "0x47C96A0", VA = "0x47C96A0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	internal bool IsNamespace
	{
		[Token(Token = "0x60007E7")]
		[Address(RVA = "0x47C1FC0", Offset = "0x47C1FC0", VA = "0x47C1FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x47C8190", Offset = "0x47C8190", VA = "0x47C8190")]
	internal XmlAttribute(XmlName name, XmlDocument doc)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x47C8390", Offset = "0x47C8390", VA = "0x47C8390")]
	protected internal XmlAttribute(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x47C8500", Offset = "0x47C8500", VA = "0x47C8500", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x47C8820", Offset = "0x47C8820", VA = "0x47C8820")]
	internal bool PrepareOwnerElementInElementIdAttrMap()
	{
		return default(bool);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x47C88C0", Offset = "0x47C88C0", VA = "0x47C88C0")]
	internal void ResetOwnerElementInElementIdAttrMap(string oldInnerText)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x47C8AD0", Offset = "0x47C8AD0", VA = "0x47C8AD0", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x47C8E20", Offset = "0x47C8E20", VA = "0x47C8E20", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x47C8E40", Offset = "0x47C8E40", VA = "0x47C8E40", Slot = "23")]
	public override XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x47C8F10", Offset = "0x47C8F10", VA = "0x47C8F10", Slot = "24")]
	public override XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x47C8FE0", Offset = "0x47C8FE0", VA = "0x47C8FE0", Slot = "25")]
	public override XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x47C90B0", Offset = "0x47C90B0", VA = "0x47C90B0", Slot = "26")]
	public override XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x47C9180", Offset = "0x47C9180", VA = "0x47C9180", Slot = "27")]
	public override XmlNode PrependChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x47C9250", Offset = "0x47C9250", VA = "0x47C9250", Slot = "28")]
	public override XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x47C9400", Offset = "0x47C9400", VA = "0x47C9400", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x47C94B0", Offset = "0x47C94B0", VA = "0x47C94B0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x47C9580", Offset = "0x47C9580", VA = "0x47C9580", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}
}
