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
		[Address(RVA = "0x44A1FD0", Offset = "0x44A1FD0", VA = "0x44A1FD0")]
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
		[Address(RVA = "0x44A2000", Offset = "0x44A2000", VA = "0x44A2000")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000294")]
	public string NamespaceURI
	{
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x44A2040", Offset = "0x44A2040", VA = "0x44A2040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000295")]
	public string Name
	{
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x44A2070", Offset = "0x44A2070", VA = "0x44A2070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000296")]
	public string LocalName
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x44A2160", Offset = "0x44A2160", VA = "0x44A2160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000297")]
	internal bool CreatedOnAttribute
	{
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x44A21E0", Offset = "0x44A21E0", VA = "0x44A21E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000298")]
	public string Prefix
	{
		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x44A21F0", Offset = "0x44A21F0", VA = "0x44A21F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000299")]
	public string Value
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x44A2220", Offset = "0x44A2220", VA = "0x44A2220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029A")]
	public string BaseURI
	{
		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x44A2710", Offset = "0x44A2710", VA = "0x44A2710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029B")]
	public XmlSpace XmlSpace
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x44A2740", Offset = "0x44A2740", VA = "0x44A2740")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700029C")]
	public string XmlLang
	{
		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x44A2770", Offset = "0x44A2770", VA = "0x44A2770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029D")]
	public bool IsEmptyElement
	{
		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x44A27A0", Offset = "0x44A27A0", VA = "0x44A27A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029E")]
	public bool IsDefault
	{
		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x44A2830", Offset = "0x44A2830", VA = "0x44A2830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029F")]
	public IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x44A28F0", Offset = "0x44A28F0", VA = "0x44A28F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A0")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x44A2920", Offset = "0x44A2920", VA = "0x44A2920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A1")]
	public int AttributeCount
	{
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x44A2930", Offset = "0x44A2930", VA = "0x44A2930")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002A2")]
	private bool IsOnDeclOrDocType
	{
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x44A37D0", Offset = "0x44A37D0", VA = "0x44A37D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002A3")]
	public XmlDocument Document
	{
		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x44A5420", Offset = "0x44A5420", VA = "0x44A5420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x44A1C20", Offset = "0x44A1C20", VA = "0x44A1C20")]
	public XmlNodeReaderNavigator(XmlNode node)
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x44A2140", Offset = "0x44A2140", VA = "0x44A2140")]
	private bool IsLocalNameEmpty(XmlNodeType nt)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x44A2C10", Offset = "0x44A2C10", VA = "0x44A2C10")]
	private void CheckIndexCondition(int attributeIndex)
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x44A2520", Offset = "0x44A2520", VA = "0x44A2520")]
	private void InitDecAttr()
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x44A2C70", Offset = "0x44A2C70", VA = "0x44A2C70")]
	public string GetDeclarationAttr(XmlDeclaration decl, string name)
	{
		return null;
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x44A2D30", Offset = "0x44A2D30", VA = "0x44A2D30")]
	public string GetDeclarationAttr(int i)
	{
		return null;
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x44A2D80", Offset = "0x44A2D80", VA = "0x44A2D80")]
	public int GetDecAttrInd(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x44A2AB0", Offset = "0x44A2AB0", VA = "0x44A2AB0")]
	private void InitDocTypeAttr()
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x44A2E20", Offset = "0x44A2E20", VA = "0x44A2E20")]
	public string GetDocumentTypeAttr(XmlDocumentType docType, string name)
	{
		return null;
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x44A2EB0", Offset = "0x44A2EB0", VA = "0x44A2EB0")]
	public string GetDocumentTypeAttr(int i)
	{
		return null;
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x44A2F00", Offset = "0x44A2F00", VA = "0x44A2F00")]
	public int GetDocTypeAttrInd(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x44A2FA0", Offset = "0x44A2FA0", VA = "0x44A2FA0")]
	private string GetAttributeFromElement(XmlElement elem, string name)
	{
		return null;
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x44A2FF0", Offset = "0x44A2FF0", VA = "0x44A2FF0")]
	public string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x44A3220", Offset = "0x44A3220", VA = "0x44A3220")]
	private string GetAttributeFromElement(XmlElement elem, string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x44A3270", Offset = "0x44A3270", VA = "0x44A3270")]
	public string GetAttribute(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x44A34D0", Offset = "0x44A34D0", VA = "0x44A34D0")]
	public string GetAttribute(int attributeIndex)
	{
		return null;
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x44A3750", Offset = "0x44A3750", VA = "0x44A3750")]
	public void LogMove(int level)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x44A3790", Offset = "0x44A3790", VA = "0x44A3790")]
	public void RollBackMove(ref int level)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x44A3800", Offset = "0x44A3800", VA = "0x44A3800")]
	public void ResetToAttribute(ref int level)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x44A38D0", Offset = "0x44A38D0", VA = "0x44A38D0")]
	public void ResetMove(ref int level, ref XmlNodeType nt)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x44A3AB0", Offset = "0x44A3AB0", VA = "0x44A3AB0")]
	public bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x44A3D00", Offset = "0x44A3D00", VA = "0x44A3D00")]
	private bool MoveToAttributeFromElement(XmlElement elem, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x44A3AD0", Offset = "0x44A3AD0", VA = "0x44A3AD0")]
	public bool MoveToAttribute(string name, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x44A3DE0", Offset = "0x44A3DE0", VA = "0x44A3DE0")]
	public void MoveToAttribute(int attributeIndex)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x44A4050", Offset = "0x44A4050", VA = "0x44A4050")]
	public bool MoveToNextAttribute(ref int level)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x44A4240", Offset = "0x44A4240", VA = "0x44A4240")]
	public bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x44A4290", Offset = "0x44A4290", VA = "0x44A4290")]
	public bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x44A42E0", Offset = "0x44A42E0", VA = "0x44A42E0")]
	private bool MoveToNextSibling(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x44A4330", Offset = "0x44A4330", VA = "0x44A4330")]
	public bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x44A43C0", Offset = "0x44A43C0", VA = "0x44A43C0")]
	public bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x44A4430", Offset = "0x44A4430", VA = "0x44A4430")]
	public string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x44A46F0", Offset = "0x44A46F0", VA = "0x44A46F0")]
	internal string DefaultLookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x44A4810", Offset = "0x44A4810", VA = "0x44A4810")]
	internal string LookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x44A4C50", Offset = "0x44A4C50", VA = "0x44A4C50")]
	internal IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x44A5220", Offset = "0x44A5220", VA = "0x44A5220")]
	public bool ReadAttributeValue(ref int level, ref bool bResolveEntity, ref XmlNodeType nt)
	{
		return default(bool);
	}
}
