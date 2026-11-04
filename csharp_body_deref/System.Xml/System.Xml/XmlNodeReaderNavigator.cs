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
		[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
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
		[Address(RVA = "0x2736710", Offset = "0x2734D10", VA = "0x182736710")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000294")]
	public string NamespaceURI
	{
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x1CBA960", Offset = "0x1CB8F60", VA = "0x181CBA960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000295")]
	public string Name
	{
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x2736600", Offset = "0x2734C00", VA = "0x182736600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000296")]
	public string LocalName
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x2736550", Offset = "0x2734B50", VA = "0x182736550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000297")]
	internal bool CreatedOnAttribute
	{
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x27363B0", Offset = "0x27349B0", VA = "0x1827363B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000298")]
	public string Prefix
	{
		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x19244D0", Offset = "0x1922AD0", VA = "0x1819244D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000299")]
	public string Value
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x2736780", Offset = "0x2734D80", VA = "0x182736780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029A")]
	public string BaseURI
	{
		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x2736380", Offset = "0x2734980", VA = "0x182736380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029B")]
	public XmlSpace XmlSpace
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x2736A30", Offset = "0x2735030", VA = "0x182736A30")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700029C")]
	public string XmlLang
	{
		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x2736A00", Offset = "0x2735000", VA = "0x182736A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029D")]
	public bool IsEmptyElement
	{
		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x2736470", Offset = "0x2734A70", VA = "0x182736470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029E")]
	public bool IsDefault
	{
		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x27363C0", Offset = "0x27349C0", VA = "0x1827363C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029F")]
	public IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x2736750", Offset = "0x2734D50", VA = "0x182736750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A0")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A1")]
	public int AttributeCount
	{
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x2736240", Offset = "0x2734840", VA = "0x182736240")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002A2")]
	private bool IsOnDeclOrDocType
	{
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x2736510", Offset = "0x2734B10", VA = "0x182736510")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A3")]
	public XmlDocument Document
	{
		[Token(Token = "0x60009EC")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x2735ED0", Offset = "0x27344D0", VA = "0x182735ED0")]
	public XmlNodeReaderNavigator(XmlNode node)
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x2734850", Offset = "0x2732E50", VA = "0x182734850")]
	private bool IsLocalNameEmpty(XmlNodeType nt)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x2733180", Offset = "0x2731780", VA = "0x182733180")]
	private void CheckIndexCondition(int attributeIndex)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x2734490", Offset = "0x2732A90", VA = "0x182734490")]
	private void InitDecAttr()
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x2733D00", Offset = "0x2732300", VA = "0x182733D00")]
	public string GetDeclarationAttr(XmlDeclaration decl, string name)
	{
		return null;
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x2733CB0", Offset = "0x27322B0", VA = "0x182733CB0")]
	public string GetDeclarationAttr(int i)
	{
		return null;
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x2733C10", Offset = "0x2732210", VA = "0x182733C10")]
	public int GetDecAttrInd(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x27346D0", Offset = "0x2732CD0", VA = "0x1827346D0")]
	private void InitDocTypeAttr()
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x2733ED0", Offset = "0x27324D0", VA = "0x182733ED0")]
	public string GetDocumentTypeAttr(XmlDocumentType docType, string name)
	{
		return null;
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x2733E80", Offset = "0x2732480", VA = "0x182733E80")]
	public string GetDocumentTypeAttr(int i)
	{
		return null;
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x2733DE0", Offset = "0x27323E0", VA = "0x182733DE0")]
	public int GetDocTypeAttrInd(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x27333A0", Offset = "0x27319A0", VA = "0x1827333A0")]
	private string GetAttributeFromElement(XmlElement elem, string name)
	{
		return null;
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x27333F0", Offset = "0x27319F0", VA = "0x1827333F0")]
	public string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x2733340", Offset = "0x2731940", VA = "0x182733340")]
	private string GetAttributeFromElement(XmlElement elem, string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x27336C0", Offset = "0x2731CC0", VA = "0x1827336C0")]
	public string GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x27339C0", Offset = "0x2731FC0", VA = "0x1827339C0")]
	public string GetAttribute(int attributeIndex)
	{
		return null;
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x27348A0", Offset = "0x2732EA0", VA = "0x1827348A0")]
	public void LogMove(int level)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x2735E80", Offset = "0x2734480", VA = "0x182735E80")]
	public void RollBackMove(ref int level)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x2735DA0", Offset = "0x27343A0", VA = "0x182735DA0")]
	public void ResetToAttribute(ref int level)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x2735B20", Offset = "0x2734120", VA = "0x182735B20")]
	public void ResetMove(ref int level, ref XmlNodeType nt)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x27354C0", Offset = "0x2733AC0", VA = "0x1827354C0")]
	public bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x2734FD0", Offset = "0x27335D0", VA = "0x182734FD0")]
	private bool MoveToAttributeFromElement(XmlElement elem, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x2735290", Offset = "0x2733890", VA = "0x182735290")]
	public bool MoveToAttribute(string name, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x27350B0", Offset = "0x27336B0", VA = "0x1827350B0")]
	public void MoveToAttribute(int attributeIndex)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x27355D0", Offset = "0x2733BD0", VA = "0x1827355D0")]
	public bool MoveToNextAttribute(ref int level)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x27358A0", Offset = "0x2733EA0", VA = "0x1827358A0")]
	public bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x2735570", Offset = "0x2733B70", VA = "0x182735570")]
	public bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x27357C0", Offset = "0x2733DC0", VA = "0x1827357C0")]
	private bool MoveToNextSibling(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x2735820", Offset = "0x2733E20", VA = "0x182735820")]
	public bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x27354E0", Offset = "0x2733AE0", VA = "0x1827354E0")]
	public bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x27348F0", Offset = "0x2732EF0", VA = "0x1827348F0")]
	public string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x27331F0", Offset = "0x27317F0", VA = "0x1827331F0")]
	internal string DefaultLookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x2734BE0", Offset = "0x27331E0", VA = "0x182734BE0")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x2733F70", Offset = "0x2732570", VA = "0x182733F70")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x2735900", Offset = "0x2733F00", VA = "0x182735900")]
	public bool ReadAttributeValue(ref int level, ref bool bResolveEntity, ref XmlNodeType nt)
	{
		return default(bool);
	}
}
