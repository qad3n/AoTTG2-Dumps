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
		[Address(RVA = "0x270E1B0", Offset = "0x270C7B0", VA = "0x18270E1B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001CA")]
	internal XmlName XmlName
	{
		[Token(Token = "0x60007C0")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C1")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	public override string Name
	{
		[Token(Token = "0x60007C4")]
		[Address(RVA = "0x270E1D0", Offset = "0x270C7D0", VA = "0x18270E1D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	public override string LocalName
	{
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x1CB0BD0", Offset = "0x1CAF1D0", VA = "0x181CB0BD0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x1CB0C00", Offset = "0x1CAF200", VA = "0x181CB0C00", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	public override string Prefix
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x1CB0C20", Offset = "0x1CAF220", VA = "0x181CB0C20", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x270E530", Offset = "0x270CB30", VA = "0x18270E530", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170001D1")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x1CB0D80", Offset = "0x1CAF380", VA = "0x181CB0D80", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D2")]
	public override string Value
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x270E270", Offset = "0x270C870", VA = "0x18270E270", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x270E5E0", Offset = "0x270CBE0", VA = "0x18270E5E0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	public override string InnerText
	{
		[Token(Token = "0x60007CE")]
		[Address(RVA = "0x270E430", Offset = "0x270CA30", VA = "0x18270E430", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001D5")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60007D1")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D6")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public virtual bool Specified
	{
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D8")]
	public virtual XmlElement OwnerElement
	{
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x270E1F0", Offset = "0x270C7F0", VA = "0x18270E1F0", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	public override string InnerXml
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x270E4A0", Offset = "0x270CAA0", VA = "0x18270E4A0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x170001DA")]
	public override string BaseURI
	{
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x270E100", Offset = "0x270C700", VA = "0x18270E100", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DB")]
	internal override XmlSpace XmlSpace
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x270E3D0", Offset = "0x270C9D0", VA = "0x18270E3D0", Slot = "56")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170001DC")]
	internal override string XmlLang
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x270E360", Offset = "0x270C960", VA = "0x18270E360", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x270E320", Offset = "0x270C920", VA = "0x18270E320", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001DE")]
	internal override string XPLocalName
	{
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x270E290", Offset = "0x270C890", VA = "0x18270E290", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	internal bool IsNamespace
	{
		[Token(Token = "0x60007E7")]
		[Address(RVA = "0x270E170", Offset = "0x270C770", VA = "0x18270E170")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x270DFE0", Offset = "0x270C5E0", VA = "0x18270DFE0")]
	internal XmlAttribute(XmlName name, XmlDocument doc)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x270DF90", Offset = "0x270C590", VA = "0x18270DF90")]
	protected internal XmlAttribute(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x270D800", Offset = "0x270BE00", VA = "0x18270D800", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x270DA20", Offset = "0x270C020", VA = "0x18270DA20")]
	internal bool PrepareOwnerElementInElementIdAttrMap()
	{
		return default(bool);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x270DD40", Offset = "0x270C340", VA = "0x18270DD40")]
	internal void ResetOwnerElementInElementIdAttrMap(string oldInnerText)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x270D5D0", Offset = "0x270BBD0", VA = "0x18270D5D0", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x270DA10", Offset = "0x270C010", VA = "0x18270DA10", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x270D970", Offset = "0x270BF70", VA = "0x18270D970", Slot = "23")]
	public override XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x270D8D0", Offset = "0x270BED0", VA = "0x18270D8D0", Slot = "24")]
	public override XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x270DCA0", Offset = "0x270C2A0", VA = "0x18270DCA0", Slot = "25")]
	public override XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x270DC20", Offset = "0x270C220", VA = "0x18270DC20", Slot = "26")]
	public override XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x270DBA0", Offset = "0x270C1A0", VA = "0x18270DBA0", Slot = "27")]
	public override XmlNode PrependChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x270D780", Offset = "0x270BD80", VA = "0x18270D780", Slot = "28")]
	public override XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x270DEE0", Offset = "0x270C4E0", VA = "0x18270DEE0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x270DE70", Offset = "0x270C470", VA = "0x18270DE70", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}
}
