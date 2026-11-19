// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNodeReaderNavigator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B3")]
internal class XmlNodeReaderNavigator
{
	[Token(Token = "0x20000B4")]
	internal struct VirtualAttribute
	{
		[Token(Token = "0x40004B2")]
		[FieldOffset(Offset = "0x0")]
		internal string name;

		[Token(Token = "0x40004B3")]
		[FieldOffset(Offset = "0x8")]
		internal string value;

		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x60E22D0", Offset = "0x60E12D0", VA = "0x60E22D0")]
		internal VirtualAttribute(string name, string value)
		{
		}
	}

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x10")]
	private XmlNode curNode;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x18")]
	private XmlNode elemNode;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x20")]
	private XmlNode logNode;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x28")]
	private int attrIndex;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x2C")]
	private int logAttrIndex;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x30")]
	private XmlNameTable nameTable;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x38")]
	private XmlDocument doc;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x40")]
	private int nAttrInd;

	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x44")]
	private int nDeclarationAttrCount;

	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x48")]
	private int nDocTypeAttrCount;

	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x4C")]
	private int nLogLevel;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x50")]
	private int nLogAttrInd;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x54")]
	private bool bLogOnAttrVal;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x55")]
	private bool bCreatedOnAttribute;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x58")]
	internal VirtualAttribute[] decNodeAttributes;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x60")]
	internal VirtualAttribute[] docTypeNodeAttributes;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x68")]
	private bool bOnAttrVal;

	[Token(Token = "0x17000293")]
	public XmlNodeType NodeType
	{
		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x60E2300", Offset = "0x60E1300", VA = "0x60E2300")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000294")]
	public string NamespaceURI
	{
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x60E2340", Offset = "0x60E1340", VA = "0x60E2340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000295")]
	public string Name
	{
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x60E2370", Offset = "0x60E1370", VA = "0x60E2370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000296")]
	public string LocalName
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x60E2450", Offset = "0x60E1450", VA = "0x60E2450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000297")]
	internal bool CreatedOnAttribute
	{
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x60E24D0", Offset = "0x60E14D0", VA = "0x60E24D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000298")]
	public string Prefix
	{
		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x60E24E0", Offset = "0x60E14E0", VA = "0x60E24E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000299")]
	public string Value
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x60E2510", Offset = "0x60E1510", VA = "0x60E2510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029A")]
	public string BaseURI
	{
		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x60E29F0", Offset = "0x60E19F0", VA = "0x60E29F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029B")]
	public XmlSpace XmlSpace
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x60E2A20", Offset = "0x60E1A20", VA = "0x60E2A20")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700029C")]
	public string XmlLang
	{
		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x60E2A50", Offset = "0x60E1A50", VA = "0x60E2A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029D")]
	public bool IsEmptyElement
	{
		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x60E2A80", Offset = "0x60E1A80", VA = "0x60E2A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029E")]
	public bool IsDefault
	{
		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x60E2B10", Offset = "0x60E1B10", VA = "0x60E2B10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029F")]
	public IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x60E2BA0", Offset = "0x60E1BA0", VA = "0x60E2BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A0")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x60E2BD0", Offset = "0x60E1BD0", VA = "0x60E2BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A1")]
	public int AttributeCount
	{
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x60E2BE0", Offset = "0x60E1BE0", VA = "0x60E2BE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002A2")]
	private bool IsOnDeclOrDocType
	{
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x60E39D0", Offset = "0x60E29D0", VA = "0x60E39D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A3")]
	public XmlDocument Document
	{
		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x60E55E0", Offset = "0x60E45E0", VA = "0x60E55E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x60E1F20", Offset = "0x60E0F20", VA = "0x60E1F20")]
	public XmlNodeReaderNavigator(XmlNode node)
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x60E2430", Offset = "0x60E1430", VA = "0x60E2430")]
	private bool IsLocalNameEmpty(XmlNodeType nt)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x60E2E80", Offset = "0x60E1E80", VA = "0x60E2E80")]
	private void CheckIndexCondition(int attributeIndex)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x60E2800", Offset = "0x60E1800", VA = "0x60E2800")]
	private void InitDecAttr()
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x60E2EE0", Offset = "0x60E1EE0", VA = "0x60E2EE0")]
	public string GetDeclarationAttr(XmlDeclaration decl, string name)
	{
		return null;
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x60E2FA0", Offset = "0x60E1FA0", VA = "0x60E2FA0")]
	public string GetDeclarationAttr(int i)
	{
		return null;
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x60E2FF0", Offset = "0x60E1FF0", VA = "0x60E2FF0")]
	public int GetDecAttrInd(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x60E2D30", Offset = "0x60E1D30", VA = "0x60E2D30")]
	private void InitDocTypeAttr()
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x60E3080", Offset = "0x60E2080", VA = "0x60E3080")]
	public string GetDocumentTypeAttr(XmlDocumentType docType, string name)
	{
		return null;
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x60E3110", Offset = "0x60E2110", VA = "0x60E3110")]
	public string GetDocumentTypeAttr(int i)
	{
		return null;
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x60E3160", Offset = "0x60E2160", VA = "0x60E3160")]
	public int GetDocTypeAttrInd(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x60E31F0", Offset = "0x60E21F0", VA = "0x60E31F0")]
	private string GetAttributeFromElement(XmlElement elem, string name)
	{
		return null;
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x60E3240", Offset = "0x60E2240", VA = "0x60E3240")]
	public string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x60E3470", Offset = "0x60E2470", VA = "0x60E3470")]
	private string GetAttributeFromElement(XmlElement elem, string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x60E34C0", Offset = "0x60E24C0", VA = "0x60E34C0")]
	public string GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x60E3720", Offset = "0x60E2720", VA = "0x60E3720")]
	public string GetAttribute(int attributeIndex)
	{
		return null;
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x60E3950", Offset = "0x60E2950", VA = "0x60E3950")]
	public void LogMove(int level)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x60E3990", Offset = "0x60E2990", VA = "0x60E3990")]
	public void RollBackMove(ref int level)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x60E3A00", Offset = "0x60E2A00", VA = "0x60E3A00")]
	public void ResetToAttribute(ref int level)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x60E3AD0", Offset = "0x60E2AD0", VA = "0x60E3AD0")]
	public void ResetMove(ref int level, ref XmlNodeType nt)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x60E3C90", Offset = "0x60E2C90", VA = "0x60E3C90")]
	public bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x60E3ED0", Offset = "0x60E2ED0", VA = "0x60E3ED0")]
	private bool MoveToAttributeFromElement(XmlElement elem, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x60E3CB0", Offset = "0x60E2CB0", VA = "0x60E3CB0")]
	public bool MoveToAttribute(string name, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x60E3FB0", Offset = "0x60E2FB0", VA = "0x60E3FB0")]
	public void MoveToAttribute(int attributeIndex)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x60E41E0", Offset = "0x60E31E0", VA = "0x60E41E0")]
	public bool MoveToNextAttribute(ref int level)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x60E43D0", Offset = "0x60E33D0", VA = "0x60E43D0")]
	public bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x60E4430", Offset = "0x60E3430", VA = "0x60E4430")]
	public bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x60E4490", Offset = "0x60E3490", VA = "0x60E4490")]
	private bool MoveToNextSibling(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x60E44F0", Offset = "0x60E34F0", VA = "0x60E44F0")]
	public bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x60E4580", Offset = "0x60E3580", VA = "0x60E4580")]
	public bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x60E4600", Offset = "0x60E3600", VA = "0x60E4600")]
	public string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x60E48C0", Offset = "0x60E38C0", VA = "0x60E48C0")]
	internal string DefaultLookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x60E49E0", Offset = "0x60E39E0", VA = "0x60E49E0")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x60E4E00", Offset = "0x60E3E00", VA = "0x60E4E00")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x60E53D0", Offset = "0x60E43D0", VA = "0x60E53D0")]
	public bool ReadAttributeValue(ref int level, ref bool bResolveEntity, ref XmlNodeType nt)
	{
		return default(bool);
	}
}
