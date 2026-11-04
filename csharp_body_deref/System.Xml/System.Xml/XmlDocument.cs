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
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600083C")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x17000200")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x1B28F50", Offset = "0x1B27550", VA = "0x181B28F50", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000201")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000202")]
	public virtual XmlDocumentType DocumentType
	{
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x2714690", Offset = "0x2712C90", VA = "0x182714690", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000203")]
	internal virtual XmlDeclaration Declaration
	{
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x2714560", Offset = "0x2712B60", VA = "0x182714560", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000204")]
	public XmlImplementation Implementation
	{
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000205")]
	public override string Name
	{
		[Token(Token = "0x600084D")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	public override string LocalName
	{
		[Token(Token = "0x600084E")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000207")]
	public XmlElement DocumentElement
	{
		[Token(Token = "0x600084F")]
		[Address(RVA = "0x2714610", Offset = "0x2712C10", VA = "0x182714610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000208")]
	internal override bool IsContainer
	{
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700020A")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020B")]
	public XmlSchemaSet Schemas
	{
		[Token(Token = "0x6000854")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020C")]
	internal bool CanReportValidity
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020D")]
	internal bool HasSetResolver
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x27147B0", Offset = "0x2712DB0", VA = "0x1827147B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020E")]
	public virtual XmlResolver XmlResolver
	{
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x2714A80", Offset = "0x2713080", VA = "0x182714A80", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x1CB0C20", Offset = "0x1CAF220", VA = "0x181CB0C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000210")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000211")]
	internal XmlNamedNodeMap Entities
	{
		[Token(Token = "0x600087E")]
		[Address(RVA = "0x2714740", Offset = "0x2712D40", VA = "0x182714740")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x17000212")]
	internal bool IsLoading
	{
		[Token(Token = "0x6000880")]
		[Address(RVA = "0x24C5400", Offset = "0x24C3A00", VA = "0x1824C5400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x2703FD0", Offset = "0x27025D0", VA = "0x182703FD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000213")]
	internal bool ActualLoadingStatus
	{
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x1A21E30", Offset = "0x1A20430", VA = "0x181A21E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000214")]
	public override string InnerText
	{
		[Token(Token = "0x6000888")]
		[Address(RVA = "0x2714A20", Offset = "0x2713020", VA = "0x182714A20", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public override string InnerXml
	{
		[Token(Token = "0x6000889")]
		[Address(RVA = "0x1C568A0", Offset = "0x1C54EA0", VA = "0x181C568A0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000216")]
	internal string Version
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x27149F0", Offset = "0x2712FF0", VA = "0x1827149F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000217")]
	internal string Encoding
	{
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x2714710", Offset = "0x2712D10", VA = "0x182714710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000218")]
	internal string Standalone
	{
		[Token(Token = "0x6000894")]
		[Address(RVA = "0x27149C0", Offset = "0x2712FC0", VA = "0x1827149C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x27148A0", Offset = "0x2712EA0", VA = "0x1827148A0", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021A")]
	public override string BaseURI
	{
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x1C54FF0", Offset = "0x1C535F0", VA = "0x181C54FF0", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x600089A")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700021C")]
	internal bool HasEntityReferences
	{
		[Token(Token = "0x600089B")]
		[Address(RVA = "0xB5B960", Offset = "0xB59F60", VA = "0x180B5B960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021D")]
	internal XmlAttribute NamespaceXml
	{
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x27147C0", Offset = "0x2712DC0", VA = "0x1827147C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x2713F30", Offset = "0x2712530", VA = "0x182713F30")]
	public XmlDocument()
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x2713F90", Offset = "0x2712590", VA = "0x182713F90")]
	public XmlDocument(XmlNameTable nt)
	{
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x2714000", Offset = "0x2712600", VA = "0x182714000")]
	protected internal XmlDocument(XmlImplementation imp)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x2710550", Offset = "0x270EB50", VA = "0x182710550")]
	internal static void CheckName(string name)
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x270FF30", Offset = "0x270E530", VA = "0x18270FF30")]
	internal XmlName AddXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x2712120", Offset = "0x2710720", VA = "0x182712120")]
	internal XmlName GetXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x270F810", Offset = "0x270DE10", VA = "0x18270F810")]
	internal XmlName AddAttrXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x270FE50", Offset = "0x270E450", VA = "0x18270FE50")]
	internal bool AddIdInfo(XmlName eleName, XmlName attrName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x2711D40", Offset = "0x2710340", VA = "0x182711D40")]
	private XmlName GetIDInfoByElement_(XmlName eleName)
	{
		return null;
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x2711F10", Offset = "0x2710510", VA = "0x182711F10")]
	internal XmlName GetIDInfoByElement(XmlName eleName)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x2711710", Offset = "0x270FD10", VA = "0x182711710")]
	private WeakReference GetElement(ArrayList elementList, XmlElement elem)
	{
		return null;
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x270FC50", Offset = "0x270E250", VA = "0x18270FC50")]
	internal void AddElementWithId(string id, XmlElement elem)
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x2713730", Offset = "0x2711D30", VA = "0x182713730")]
	internal void RemoveElementWithId(string id, XmlElement elem)
	{
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x2710620", Offset = "0x270EC20", VA = "0x182710620", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0xA2F260", Offset = "0xA2D860", VA = "0x180A2F260")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x2712DB0", Offset = "0x27113B0", VA = "0x182712DB0", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x27122D0", Offset = "0x27108D0", VA = "0x1827122D0")]
	private bool HasNodeTypeInPrevSiblings(XmlNodeType nt, XmlNode refNode)
	{
		return default(bool);
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x2712260", Offset = "0x2710860", VA = "0x182712260")]
	private bool HasNodeTypeInNextSiblings(XmlNodeType nt, XmlNode refNode)
	{
		return default(bool);
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x27103B0", Offset = "0x270E9B0", VA = "0x1827103B0", Slot = "31")]
	internal override bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x2710270", Offset = "0x270E870", VA = "0x182710270", Slot = "32")]
	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x2710780", Offset = "0x270ED80", VA = "0x182710780")]
	public XmlAttribute CreateAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x2713AB0", Offset = "0x27120B0", VA = "0x182713AB0")]
	internal void SetDefaultNamespace(string prefix, string localName, ref string namespaceURI)
	{
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x2710930", Offset = "0x270EF30", VA = "0x182710930", Slot = "65")]
	public virtual XmlCDataSection CreateCDataSection(string data)
	{
		return null;
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x27109B0", Offset = "0x270EFB0", VA = "0x1827109B0", Slot = "66")]
	public virtual XmlComment CreateComment(string data)
	{
		return null;
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x2710B00", Offset = "0x270F100", VA = "0x182710B00", Slot = "67")]
	public virtual XmlDocumentType CreateDocumentType(string name, string publicId, string systemId, string internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x2710AA0", Offset = "0x270F0A0", VA = "0x182710AA0", Slot = "68")]
	public virtual XmlDocumentFragment CreateDocumentFragment()
	{
		return null;
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x2710C10", Offset = "0x270F210", VA = "0x182710C10")]
	public XmlElement CreateElement(string name)
	{
		return null;
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x270F940", Offset = "0x270DF40", VA = "0x18270F940")]
	internal void AddDefaultAttributes(XmlElement elem)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x2712000", Offset = "0x2710600", VA = "0x182712000")]
	private SchemaElementDecl GetSchemaElementDecl(XmlElement elem)
	{
		return null;
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x2713520", Offset = "0x2711B20", VA = "0x182713520")]
	private XmlAttribute PrepareDefaultAttribute(SchemaAttDef attdef, string attrPrefix, string attrLocalname, string attrNamespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x2710D50", Offset = "0x270F350", VA = "0x182710D50", Slot = "69")]
	public virtual XmlEntityReference CreateEntityReference(string name)
	{
		return null;
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x2711000", Offset = "0x270F600", VA = "0x182711000", Slot = "70")]
	public virtual XmlProcessingInstruction CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x27111C0", Offset = "0x270F7C0", VA = "0x1827111C0", Slot = "71")]
	public virtual XmlDeclaration CreateXmlDeclaration(string version, string encoding, string standalone)
	{
		return null;
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x27110E0", Offset = "0x270F6E0", VA = "0x1827110E0", Slot = "72")]
	public virtual XmlText CreateTextNode(string text)
	{
		return null;
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x2711070", Offset = "0x270F670", VA = "0x182711070", Slot = "73")]
	public virtual XmlSignificantWhitespace CreateSignificantWhitespace(string text)
	{
		return null;
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x2710FE0", Offset = "0x270F5E0", VA = "0x182710FE0", Slot = "7")]
	public override XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x2710DC0", Offset = "0x270F3C0", VA = "0x182710DC0", Slot = "74")]
	protected internal virtual XPathNavigator CreateNavigator(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x2712D90", Offset = "0x2711390", VA = "0x182712D90")]
	internal static bool IsTextNode(XmlNodeType nt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x2713350", Offset = "0x2711950", VA = "0x182713350")]
	private XmlNode NormalizeText(XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x2711150", Offset = "0x270F750", VA = "0x182711150", Slot = "75")]
	public virtual XmlWhitespace CreateWhitespace(string text)
	{
		return null;
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x27108A0", Offset = "0x270EEA0", VA = "0x1827108A0")]
	public XmlAttribute CreateAttribute(string qualifiedName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x2710B80", Offset = "0x270F180", VA = "0x182710B80")]
	public XmlElement CreateElement(string qualifiedName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x2711480", Offset = "0x270FA80", VA = "0x182711480", Slot = "76")]
	public virtual XmlElement GetElementById(string elementId)
	{
		return null;
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x2712D80", Offset = "0x2711380", VA = "0x182712D80", Slot = "77")]
	public virtual XmlNode ImportNode(XmlNode node, bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x2712590", Offset = "0x2710B90", VA = "0x182712590")]
	private XmlNode ImportNodeInternal(XmlNode node, bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x27123B0", Offset = "0x27109B0", VA = "0x1827123B0")]
	private void ImportAttributes(XmlNode fromElem, XmlNode toElem)
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x27124F0", Offset = "0x2710AF0", VA = "0x1827124F0")]
	private void ImportChildren(XmlNode fromNode, XmlNode toNode, bool deep)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x2710700", Offset = "0x270ED00", VA = "0x182710700", Slot = "78")]
	public virtual XmlAttribute CreateAttribute(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x2710A30", Offset = "0x270F030", VA = "0x182710A30", Slot = "79")]
	protected internal virtual XmlAttribute CreateDefaultAttribute(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x2710CA0", Offset = "0x270F2A0", VA = "0x182710CA0", Slot = "80")]
	public virtual XmlElement CreateElement(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x2713660", Offset = "0x2711C60", VA = "0x182713660", Slot = "81")]
	public virtual XmlNode ReadNode(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x2713B40", Offset = "0x2712140", VA = "0x182713B40")]
	private XmlTextReader SetupReader(XmlTextReader tr)
	{
		return null;
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x27130E0", Offset = "0x27116E0", VA = "0x1827130E0", Slot = "82")]
	public virtual void Load(string filename)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x2713220", Offset = "0x2711820", VA = "0x182713220", Slot = "83")]
	public virtual void Load(XmlReader reader)
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x2712F80", Offset = "0x2711580", VA = "0x182712F80", Slot = "84")]
	public virtual void LoadXml(string xml)
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x2713880", Offset = "0x2711E80", VA = "0x182713880", Slot = "85")]
	public virtual void Save(XmlWriter w)
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x2713DB0", Offset = "0x27123B0", VA = "0x182713DB0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x2713BB0", Offset = "0x27121B0", VA = "0x182713BB0", Slot = "47")]
	public override void WriteContentTo(XmlWriter xw)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x2711C50", Offset = "0x2710250", VA = "0x182711C50", Slot = "53")]
	internal override XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action)
	{
		return null;
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x2711F30", Offset = "0x2710530", VA = "0x182711F30")]
	internal XmlNodeChangedEventArgs GetInsertEventArgsForLoad(XmlNode node, XmlNode newParent)
	{
		return null;
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x2710210", Offset = "0x270E810", VA = "0x182710210", Slot = "54")]
	internal override void BeforeEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x270FF60", Offset = "0x270E560", VA = "0x18270FF60", Slot = "55")]
	internal override void AfterEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x2711230", Offset = "0x270F830", VA = "0x182711230")]
	internal XmlAttribute GetDefaultAttribute(XmlElement elem, string attrPrefix, string attrLocalname, string attrNamespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x2711B70", Offset = "0x2710170", VA = "0x182711B70")]
	internal XmlEntity GetEntityNode(string name)
	{
		return null;
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x1C61340", Offset = "0x1C5F940", VA = "0x181C61340")]
	internal void SetBaseURI(string inBaseURI)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x270FFC0", Offset = "0x270E5C0", VA = "0x18270FFC0", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}
}
