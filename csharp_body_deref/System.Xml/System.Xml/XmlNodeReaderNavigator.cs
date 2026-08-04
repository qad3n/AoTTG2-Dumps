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
		[Address(RVA = "0x47DF730", Offset = "0x47DF730", VA = "0x47DF730")]
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
		[Address(RVA = "0x47DF760", Offset = "0x47DF760", VA = "0x47DF760")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000294")]
	public string NamespaceURI
	{
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x47DF7A0", Offset = "0x47DF7A0", VA = "0x47DF7A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000295")]
	public string Name
	{
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x47DF7D0", Offset = "0x47DF7D0", VA = "0x47DF7D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000296")]
	public string LocalName
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x47DF8C0", Offset = "0x47DF8C0", VA = "0x47DF8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000297")]
	internal bool CreatedOnAttribute
	{
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x47DF940", Offset = "0x47DF940", VA = "0x47DF940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000298")]
	public string Prefix
	{
		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x47DF950", Offset = "0x47DF950", VA = "0x47DF950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000299")]
	public string Value
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x47DF980", Offset = "0x47DF980", VA = "0x47DF980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029A")]
	public string BaseURI
	{
		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x47DFE70", Offset = "0x47DFE70", VA = "0x47DFE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029B")]
	public XmlSpace XmlSpace
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x47DFEA0", Offset = "0x47DFEA0", VA = "0x47DFEA0")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700029C")]
	public string XmlLang
	{
		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x47DFED0", Offset = "0x47DFED0", VA = "0x47DFED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029D")]
	public bool IsEmptyElement
	{
		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x47DFF00", Offset = "0x47DFF00", VA = "0x47DFF00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029E")]
	public bool IsDefault
	{
		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x47DFF90", Offset = "0x47DFF90", VA = "0x47DFF90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029F")]
	public IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x47E0050", Offset = "0x47E0050", VA = "0x47E0050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A0")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x47E0080", Offset = "0x47E0080", VA = "0x47E0080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A1")]
	public int AttributeCount
	{
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x47E0090", Offset = "0x47E0090", VA = "0x47E0090")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002A2")]
	private bool IsOnDeclOrDocType
	{
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x47E0F30", Offset = "0x47E0F30", VA = "0x47E0F30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A3")]
	public XmlDocument Document
	{
		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x47E2B80", Offset = "0x47E2B80", VA = "0x47E2B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x47DF380", Offset = "0x47DF380", VA = "0x47DF380")]
	public XmlNodeReaderNavigator(XmlNode node)
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x47DF8A0", Offset = "0x47DF8A0", VA = "0x47DF8A0")]
	private bool IsLocalNameEmpty(XmlNodeType nt)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x47E0370", Offset = "0x47E0370", VA = "0x47E0370")]
	private void CheckIndexCondition(int attributeIndex)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x47DFC80", Offset = "0x47DFC80", VA = "0x47DFC80")]
	private void InitDecAttr()
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x47E03D0", Offset = "0x47E03D0", VA = "0x47E03D0")]
	public string GetDeclarationAttr(XmlDeclaration decl, string name)
	{
		return null;
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x47E0490", Offset = "0x47E0490", VA = "0x47E0490")]
	public string GetDeclarationAttr(int i)
	{
		return null;
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x47E04E0", Offset = "0x47E04E0", VA = "0x47E04E0")]
	public int GetDecAttrInd(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x47E0210", Offset = "0x47E0210", VA = "0x47E0210")]
	private void InitDocTypeAttr()
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x47E0580", Offset = "0x47E0580", VA = "0x47E0580")]
	public string GetDocumentTypeAttr(XmlDocumentType docType, string name)
	{
		return null;
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x47E0610", Offset = "0x47E0610", VA = "0x47E0610")]
	public string GetDocumentTypeAttr(int i)
	{
		return null;
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x47E0660", Offset = "0x47E0660", VA = "0x47E0660")]
	public int GetDocTypeAttrInd(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x47E0700", Offset = "0x47E0700", VA = "0x47E0700")]
	private string GetAttributeFromElement(XmlElement elem, string name)
	{
		return null;
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x47E0750", Offset = "0x47E0750", VA = "0x47E0750")]
	public string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x47E0980", Offset = "0x47E0980", VA = "0x47E0980")]
	private string GetAttributeFromElement(XmlElement elem, string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x47E09D0", Offset = "0x47E09D0", VA = "0x47E09D0")]
	public string GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x47E0C30", Offset = "0x47E0C30", VA = "0x47E0C30")]
	public string GetAttribute(int attributeIndex)
	{
		return null;
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x47E0EB0", Offset = "0x47E0EB0", VA = "0x47E0EB0")]
	public void LogMove(int level)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x47E0EF0", Offset = "0x47E0EF0", VA = "0x47E0EF0")]
	public void RollBackMove(ref int level)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x47E0F60", Offset = "0x47E0F60", VA = "0x47E0F60")]
	public void ResetToAttribute(ref int level)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x47E1030", Offset = "0x47E1030", VA = "0x47E1030")]
	public void ResetMove(ref int level, ref XmlNodeType nt)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x47E1210", Offset = "0x47E1210", VA = "0x47E1210")]
	public bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x47E1460", Offset = "0x47E1460", VA = "0x47E1460")]
	private bool MoveToAttributeFromElement(XmlElement elem, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x47E1230", Offset = "0x47E1230", VA = "0x47E1230")]
	public bool MoveToAttribute(string name, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x47E1540", Offset = "0x47E1540", VA = "0x47E1540")]
	public void MoveToAttribute(int attributeIndex)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x47E17B0", Offset = "0x47E17B0", VA = "0x47E17B0")]
	public bool MoveToNextAttribute(ref int level)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x47E19A0", Offset = "0x47E19A0", VA = "0x47E19A0")]
	public bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x47E19F0", Offset = "0x47E19F0", VA = "0x47E19F0")]
	public bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x47E1A40", Offset = "0x47E1A40", VA = "0x47E1A40")]
	private bool MoveToNextSibling(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x47E1A90", Offset = "0x47E1A90", VA = "0x47E1A90")]
	public bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x47E1B20", Offset = "0x47E1B20", VA = "0x47E1B20")]
	public bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x47E1B90", Offset = "0x47E1B90", VA = "0x47E1B90")]
	public string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x47E1E50", Offset = "0x47E1E50", VA = "0x47E1E50")]
	internal string DefaultLookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x47E1F70", Offset = "0x47E1F70", VA = "0x47E1F70")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x47E23B0", Offset = "0x47E23B0", VA = "0x47E23B0")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x47E2980", Offset = "0x47E2980", VA = "0x47E2980")]
	public bool ReadAttributeValue(ref int level, ref bool bResolveEntity, ref XmlNodeType nt)
	{
		return default(bool);
	}
}
