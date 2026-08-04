// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlDocument
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Xml.Schema;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A0")]
public class XmlDocument : XmlNode
{
	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x18")]
	private XmlImplementation implementation;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x20")]
	private DomNameTable domNameTable;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x28")]
	private XmlLinkedNode lastChild;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x30")]
	private XmlNamedNodeMap entities;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x38")]
	private Hashtable htElementIdMap;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x40")]
	private Hashtable htElementIDAttrDecl;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x48")]
	private SchemaInfo schemaInfo;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaSet schemas;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x58")]
	private bool reportValidity;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x59")]
	private bool actualLoadingStatus;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x60")]
	private XmlNodeChangedEventHandler onNodeInsertingDelegate;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x68")]
	private XmlNodeChangedEventHandler onNodeInsertedDelegate;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x70")]
	private XmlNodeChangedEventHandler onNodeRemovingDelegate;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x78")]
	private XmlNodeChangedEventHandler onNodeRemovedDelegate;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x80")]
	private XmlNodeChangedEventHandler onNodeChangingDelegate;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x88")]
	private XmlNodeChangedEventHandler onNodeChangedDelegate;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x90")]
	internal bool fEntRefNodesPresent;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x91")]
	internal bool fCDataNodesPresent;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x92")]
	private bool preserveWhitespace;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x93")]
	private bool isLoading;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x98")]
	internal string strDocumentName;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0xA0")]
	internal string strDocumentFragmentName;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0xA8")]
	internal string strCommentName;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0xB0")]
	internal string strTextName;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0xB8")]
	internal string strCDataSectionName;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0xC0")]
	internal string strEntityName;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0xC8")]
	internal string strID;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0xD0")]
	internal string strXmlns;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0xD8")]
	internal string strXml;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0xE0")]
	internal string strSpace;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0xE8")]
	internal string strLang;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0xF0")]
	internal string strEmpty;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0xF8")]
	internal string strNonSignificantWhitespaceName;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x100")]
	internal string strSignificantWhitespaceName;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x108")]
	internal string strReservedXmlns;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x110")]
	internal string strReservedXml;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x118")]
	internal string baseURI;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x120")]
	private XmlResolver resolver;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x128")]
	internal bool bSetResolver;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x130")]
	internal object objLock;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x138")]
	private XmlAttribute namespaceXml;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x0")]
	internal static EmptyEnumerator EmptyEnumerator;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x8")]
	internal static IXmlSchemaInfo NotKnownSchemaInfo;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x10")]
	internal static IXmlSchemaInfo ValidSchemaInfo;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x18")]
	internal static IXmlSchemaInfo InvalidSchemaInfo;

	[Token(Token = "0x170001FF")]
	internal SchemaInfo DtdSchemaInfo
	{
		[Token(Token = "0x600083B")]
		[Address(RVA = "0x47CC800", Offset = "0x47CC800", VA = "0x47CC800")]
		get
		{
			return null;
		}
		[Token(Token = "0x600083C")]
		[Address(RVA = "0x47CC810", Offset = "0x47CC810", VA = "0x47CC810")]
		set
		{
		}
	}

	[Token(Token = "0x17000200")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x47CD380", Offset = "0x47CD380", VA = "0x47CD380", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000201")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x47CD390", Offset = "0x47CD390", VA = "0x47CD390", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000202")]
	public virtual XmlDocumentType DocumentType
	{
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x47CD3A0", Offset = "0x47CD3A0", VA = "0x47CD3A0", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000203")]
	internal virtual XmlDeclaration Declaration
	{
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x47CD420", Offset = "0x47CD420", VA = "0x47CD420", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000204")]
	public XmlImplementation Implementation
	{
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x47CD4B0", Offset = "0x47CD4B0", VA = "0x47CD4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000205")]
	public override string Name
	{
		[Token(Token = "0x600084D")]
		[Address(RVA = "0x47CD4C0", Offset = "0x47CD4C0", VA = "0x47CD4C0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	public override string LocalName
	{
		[Token(Token = "0x600084E")]
		[Address(RVA = "0x47CD4D0", Offset = "0x47CD4D0", VA = "0x47CD4D0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000207")]
	public XmlElement DocumentElement
	{
		[Token(Token = "0x600084F")]
		[Address(RVA = "0x47C2560", Offset = "0x47C2560", VA = "0x47C2560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000208")]
	internal override bool IsContainer
	{
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x47CD4E0", Offset = "0x47CD4E0", VA = "0x47CD4E0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x47CD4F0", Offset = "0x47CD4F0", VA = "0x47CD4F0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x47CD500", Offset = "0x47CD500", VA = "0x47CD500", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700020A")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x47CD510", Offset = "0x47CD510", VA = "0x47CD510", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020B")]
	public XmlSchemaSet Schemas
	{
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x47CD520", Offset = "0x47CD520", VA = "0x47CD520")]
		set
		{
		}
	}

	[Token(Token = "0x1700020C")]
	internal bool CanReportValidity
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x47CD530", Offset = "0x47CD530", VA = "0x47CD530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020D")]
	internal bool HasSetResolver
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x47CD540", Offset = "0x47CD540", VA = "0x47CD540")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020E")]
	public virtual XmlResolver XmlResolver
	{
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x47CD560", Offset = "0x47CD560", VA = "0x47CD560", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x47C1DD0", Offset = "0x47C1DD0", VA = "0x47C1DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000210")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x47CFA30", Offset = "0x47CFA30", VA = "0x47CFA30", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000211")]
	internal XmlNamedNodeMap Entities
	{
		[Token(Token = "0x600087E")]
		[Address(RVA = "0x47CFA40", Offset = "0x47CFA40", VA = "0x47CFA40")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x47CFAC0", Offset = "0x47CFAC0", VA = "0x47CFAC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000212")]
	internal bool IsLoading
	{
		[Token(Token = "0x6000880")]
		[Address(RVA = "0x47CFAD0", Offset = "0x47CFAD0", VA = "0x47CFAD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x47CFAE0", Offset = "0x47CFAE0", VA = "0x47CFAE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000213")]
	internal bool ActualLoadingStatus
	{
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x47CFAF0", Offset = "0x47CFAF0", VA = "0x47CFAF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000214")]
	public override string InnerText
	{
		[Token(Token = "0x6000888")]
		[Address(RVA = "0x47D0030", Offset = "0x47D0030", VA = "0x47D0030", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public override string InnerXml
	{
		[Token(Token = "0x6000889")]
		[Address(RVA = "0x47D0090", Offset = "0x47D0090", VA = "0x47D0090", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000216")]
	internal string Version
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x47D07C0", Offset = "0x47D07C0", VA = "0x47D07C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000217")]
	internal string Encoding
	{
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x47D07E0", Offset = "0x47D07E0", VA = "0x47D07E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000218")]
	internal string Standalone
	{
		[Token(Token = "0x6000894")]
		[Address(RVA = "0x47D02B0", Offset = "0x47D02B0", VA = "0x47D02B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x47D08D0", Offset = "0x47D08D0", VA = "0x47D08D0", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021A")]
	public override string BaseURI
	{
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x47D0A80", Offset = "0x47D0A80", VA = "0x47D0A80", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x600089A")]
		[Address(RVA = "0x47D0D20", Offset = "0x47D0D20", VA = "0x47D0D20", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700021C")]
	internal bool HasEntityReferences
	{
		[Token(Token = "0x600089B")]
		[Address(RVA = "0x47D0D30", Offset = "0x47D0D30", VA = "0x47D0D30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021D")]
	internal XmlAttribute NamespaceXml
	{
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x47C3190", Offset = "0x47C3190", VA = "0x47C3190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x47CC230", Offset = "0x47CC230", VA = "0x47CC230")]
	public XmlDocument()
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x47CC7A0", Offset = "0x47CC7A0", VA = "0x47CC7A0")]
	public XmlDocument(XmlNameTable nt)
	{
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x47CC280", Offset = "0x47CC280", VA = "0x47CC280")]
	protected internal XmlDocument(XmlImplementation imp)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x47C82B0", Offset = "0x47C82B0", VA = "0x47C82B0")]
	internal static void CheckName(string name)
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x47CC820", Offset = "0x47CC820", VA = "0x47CC820")]
	internal XmlName AddXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x47CC840", Offset = "0x47CC840", VA = "0x47CC840")]
	internal XmlName GetXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x47C83D0", Offset = "0x47C83D0", VA = "0x47C83D0")]
	internal XmlName AddAttrXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x47CC860", Offset = "0x47CC860", VA = "0x47CC860")]
	internal bool AddIdInfo(XmlName eleName, XmlName attrName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x47CC920", Offset = "0x47CC920", VA = "0x47CC920")]
	private XmlName GetIDInfoByElement_(XmlName eleName)
	{
		return null;
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x47CABC0", Offset = "0x47CABC0", VA = "0x47CABC0")]
	internal XmlName GetIDInfoByElement(XmlName eleName)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x47CCA00", Offset = "0x47CCA00", VA = "0x47CCA00")]
	private WeakReference GetElement(ArrayList elementList, XmlElement elem)
	{
		return null;
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x47CABD0", Offset = "0x47CABD0", VA = "0x47CABD0")]
	internal void AddElementWithId(string id, XmlElement elem)
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x47CADC0", Offset = "0x47CADC0", VA = "0x47CADC0")]
	internal void RemoveElementWithId(string id, XmlElement elem)
	{
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x47CD210", Offset = "0x47CD210", VA = "0x47CD210", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x47CD550", Offset = "0x47CD550", VA = "0x47CD550")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x47CD700", Offset = "0x47CD700", VA = "0x47CD700", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x47CD840", Offset = "0x47CD840", VA = "0x47CD840")]
	private bool HasNodeTypeInPrevSiblings(XmlNodeType nt, XmlNode refNode)
	{
		return default(bool);
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x47CD8F0", Offset = "0x47CD8F0", VA = "0x47CD8F0")]
	private bool HasNodeTypeInNextSiblings(XmlNodeType nt, XmlNode refNode)
	{
		return default(bool);
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x47CD950", Offset = "0x47CD950", VA = "0x47CD950", Slot = "31")]
	internal override bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x47CDB30", Offset = "0x47CDB30", VA = "0x47CDB30", Slot = "32")]
	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x47CDCC0", Offset = "0x47CDCC0", VA = "0x47CDCC0")]
	public XmlAttribute CreateAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x47CDD70", Offset = "0x47CDD70", VA = "0x47CDD70")]
	internal void SetDefaultNamespace(string prefix, string localName, ref string namespaceURI)
	{
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x47CDE10", Offset = "0x47CDE10", VA = "0x47CDE10", Slot = "65")]
	public virtual XmlCDataSection CreateCDataSection(string data)
	{
		return null;
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x47CDE80", Offset = "0x47CDE80", VA = "0x47CDE80", Slot = "66")]
	public virtual XmlComment CreateComment(string data)
	{
		return null;
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x47CDEE0", Offset = "0x47CDEE0", VA = "0x47CDEE0", Slot = "67")]
	public virtual XmlDocumentType CreateDocumentType(string name, string publicId, string systemId, string internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x47CDF60", Offset = "0x47CDF60", VA = "0x47CDF60", Slot = "68")]
	public virtual XmlDocumentFragment CreateDocumentFragment()
	{
		return null;
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x47CDFB0", Offset = "0x47CDFB0", VA = "0x47CDFB0")]
	public XmlElement CreateElement(string name)
	{
		return null;
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x47CE040", Offset = "0x47CE040", VA = "0x47CE040")]
	internal void AddDefaultAttributes(XmlElement elem)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x47CE310", Offset = "0x47CE310", VA = "0x47CE310")]
	private SchemaElementDecl GetSchemaElementDecl(XmlElement elem)
	{
		return null;
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x47CE410", Offset = "0x47CE410", VA = "0x47CE410")]
	private XmlAttribute PrepareDefaultAttribute(SchemaAttDef attdef, string attrPrefix, string attrLocalname, string attrNamespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x47CE4F0", Offset = "0x47CE4F0", VA = "0x47CE4F0", Slot = "69")]
	public virtual XmlEntityReference CreateEntityReference(string name)
	{
		return null;
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x47CE550", Offset = "0x47CE550", VA = "0x47CE550", Slot = "70")]
	public virtual XmlProcessingInstruction CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x47CE5C0", Offset = "0x47CE5C0", VA = "0x47CE5C0", Slot = "71")]
	public virtual XmlDeclaration CreateXmlDeclaration(string version, string encoding, string standalone)
	{
		return null;
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x47CE630", Offset = "0x47CE630", VA = "0x47CE630", Slot = "72")]
	public virtual XmlText CreateTextNode(string text)
	{
		return null;
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x47CE690", Offset = "0x47CE690", VA = "0x47CE690", Slot = "73")]
	public virtual XmlSignificantWhitespace CreateSignificantWhitespace(string text)
	{
		return null;
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x47CE6F0", Offset = "0x47CE6F0", VA = "0x47CE6F0", Slot = "7")]
	public override XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x47CE710", Offset = "0x47CE710", VA = "0x47CE710", Slot = "74")]
	protected internal virtual XPathNavigator CreateNavigator(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x47CEAC0", Offset = "0x47CEAC0", VA = "0x47CEAC0")]
	internal static bool IsTextNode(XmlNodeType nt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x47CE8E0", Offset = "0x47CE8E0", VA = "0x47CE8E0")]
	private XmlNode NormalizeText(XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x47CEAE0", Offset = "0x47CEAE0", VA = "0x47CEAE0", Slot = "75")]
	public virtual XmlWhitespace CreateWhitespace(string text)
	{
		return null;
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x47CEB40", Offset = "0x47CEB40", VA = "0x47CEB40")]
	public XmlAttribute CreateAttribute(string qualifiedName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x47CEBD0", Offset = "0x47CEBD0", VA = "0x47CEBD0")]
	public XmlElement CreateElement(string qualifiedName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x47CEC60", Offset = "0x47CEC60", VA = "0x47CEC60", Slot = "76")]
	public virtual XmlElement GetElementById(string elementId)
	{
		return null;
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x47CF0F0", Offset = "0x47CF0F0", VA = "0x47CF0F0", Slot = "77")]
	public virtual XmlNode ImportNode(XmlNode node, bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x47CF100", Offset = "0x47CF100", VA = "0x47CF100")]
	private XmlNode ImportNodeInternal(XmlNode node, bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x47CF710", Offset = "0x47CF710", VA = "0x47CF710")]
	private void ImportAttributes(XmlNode fromElem, XmlNode toElem)
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x47CD2D0", Offset = "0x47CD2D0", VA = "0x47CD2D0")]
	private void ImportChildren(XmlNode fromNode, XmlNode toNode, bool deep)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x47CF8A0", Offset = "0x47CF8A0", VA = "0x47CF8A0", Slot = "78")]
	public virtual XmlAttribute CreateAttribute(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x47CF920", Offset = "0x47CF920", VA = "0x47CF920", Slot = "79")]
	protected internal virtual XmlAttribute CreateDefaultAttribute(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x47CF990", Offset = "0x47CF990", VA = "0x47CF990", Slot = "80")]
	public virtual XmlElement CreateElement(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x47CFB00", Offset = "0x47CFB00", VA = "0x47CFB00", Slot = "81")]
	public virtual XmlNode ReadNode(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x47CFBF0", Offset = "0x47CFBF0", VA = "0x47CFBF0")]
	private XmlTextReader SetupReader(XmlTextReader tr)
	{
		return null;
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x47CFC50", Offset = "0x47CFC50", VA = "0x47CFC50", Slot = "82")]
	public virtual void Load(string filename)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x47CFD90", Offset = "0x47CFD90", VA = "0x47CFD90", Slot = "83")]
	public virtual void Load(XmlReader reader)
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x47CFEC0", Offset = "0x47CFEC0", VA = "0x47CFEC0", Slot = "84")]
	public virtual void LoadXml(string xml)
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x47D00B0", Offset = "0x47D00B0", VA = "0x47D00B0", Slot = "85")]
	public virtual void Save(XmlWriter w)
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x47D02D0", Offset = "0x47D02D0", VA = "0x47D02D0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x47D02F0", Offset = "0x47D02F0", VA = "0x47D02F0", Slot = "47")]
	public override void WriteContentTo(XmlWriter xw)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x47D0650", Offset = "0x47D0650", VA = "0x47D0650", Slot = "53")]
	internal override XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action)
	{
		return null;
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x47C8D60", Offset = "0x47C8D60", VA = "0x47C8D60")]
	internal XmlNodeChangedEventArgs GetInsertEventArgsForLoad(XmlNode node, XmlNode newParent)
	{
		return null;
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x47D0720", Offset = "0x47D0720", VA = "0x47D0720", Slot = "54")]
	internal override void BeforeEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x47D0770", Offset = "0x47D0770", VA = "0x47D0770", Slot = "55")]
	internal override void AfterEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x47CA900", Offset = "0x47CA900", VA = "0x47CA900")]
	internal XmlAttribute GetDefaultAttribute(XmlElement elem, string attrPrefix, string attrLocalname, string attrNamespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x47D0800", Offset = "0x47D0800", VA = "0x47D0800")]
	internal XmlEntity GetEntityNode(string name)
	{
		return null;
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x47D0A90", Offset = "0x47D0A90", VA = "0x47D0A90")]
	internal void SetBaseURI(string inBaseURI)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x47D0AB0", Offset = "0x47D0AB0", VA = "0x47D0AB0", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}
}
