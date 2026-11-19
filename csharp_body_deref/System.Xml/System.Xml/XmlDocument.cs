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
		[Address(RVA = "0x60CFE50", Offset = "0x60CEE50", VA = "0x60CFE50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600083C")]
		[Address(RVA = "0x60CFE60", Offset = "0x60CEE60", VA = "0x60CFE60")]
		set
		{
		}
	}

	[Token(Token = "0x17000200")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x60D0870", Offset = "0x60CF870", VA = "0x60D0870", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000201")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x60D0880", Offset = "0x60CF880", VA = "0x60D0880", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000202")]
	public virtual XmlDocumentType DocumentType
	{
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x60D0890", Offset = "0x60CF890", VA = "0x60D0890", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000203")]
	internal virtual XmlDeclaration Declaration
	{
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x60D0910", Offset = "0x60CF910", VA = "0x60D0910", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000204")]
	public XmlImplementation Implementation
	{
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x60D09A0", Offset = "0x60CF9A0", VA = "0x60D09A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000205")]
	public override string Name
	{
		[Token(Token = "0x600084D")]
		[Address(RVA = "0x60D09B0", Offset = "0x60CF9B0", VA = "0x60D09B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	public override string LocalName
	{
		[Token(Token = "0x600084E")]
		[Address(RVA = "0x60D09C0", Offset = "0x60CF9C0", VA = "0x60D09C0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000207")]
	public XmlElement DocumentElement
	{
		[Token(Token = "0x600084F")]
		[Address(RVA = "0x60C60A0", Offset = "0x60C50A0", VA = "0x60C60A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000208")]
	internal override bool IsContainer
	{
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x60D09D0", Offset = "0x60CF9D0", VA = "0x60D09D0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x60D09E0", Offset = "0x60CF9E0", VA = "0x60D09E0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x60D09F0", Offset = "0x60CF9F0", VA = "0x60D09F0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700020A")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x60D0A00", Offset = "0x60CFA00", VA = "0x60D0A00", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020B")]
	public XmlSchemaSet Schemas
	{
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x60D0A10", Offset = "0x60CFA10", VA = "0x60D0A10")]
		set
		{
		}
	}

	[Token(Token = "0x1700020C")]
	internal bool CanReportValidity
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x60D0A20", Offset = "0x60CFA20", VA = "0x60D0A20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020D")]
	internal bool HasSetResolver
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x60D0A30", Offset = "0x60CFA30", VA = "0x60D0A30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020E")]
	public virtual XmlResolver XmlResolver
	{
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x60D0A50", Offset = "0x60CFA50", VA = "0x60D0A50", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x60C5930", Offset = "0x60C4930", VA = "0x60C5930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000210")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x60D2EE0", Offset = "0x60D1EE0", VA = "0x60D2EE0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000211")]
	internal XmlNamedNodeMap Entities
	{
		[Token(Token = "0x600087E")]
		[Address(RVA = "0x60D2EF0", Offset = "0x60D1EF0", VA = "0x60D2EF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x60D2F70", Offset = "0x60D1F70", VA = "0x60D2F70")]
		set
		{
		}
	}

	[Token(Token = "0x17000212")]
	internal bool IsLoading
	{
		[Token(Token = "0x6000880")]
		[Address(RVA = "0x60D2F80", Offset = "0x60D1F80", VA = "0x60D2F80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x60D2F90", Offset = "0x60D1F90", VA = "0x60D2F90")]
		set
		{
		}
	}

	[Token(Token = "0x17000213")]
	internal bool ActualLoadingStatus
	{
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x60D2FA0", Offset = "0x60D1FA0", VA = "0x60D2FA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000214")]
	public override string InnerText
	{
		[Token(Token = "0x6000888")]
		[Address(RVA = "0x60D34D0", Offset = "0x60D24D0", VA = "0x60D34D0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public override string InnerXml
	{
		[Token(Token = "0x6000889")]
		[Address(RVA = "0x60D3530", Offset = "0x60D2530", VA = "0x60D3530", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000216")]
	internal string Version
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x60D3BD0", Offset = "0x60D2BD0", VA = "0x60D3BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000217")]
	internal string Encoding
	{
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x60D3BF0", Offset = "0x60D2BF0", VA = "0x60D3BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000218")]
	internal string Standalone
	{
		[Token(Token = "0x6000894")]
		[Address(RVA = "0x60D3750", Offset = "0x60D2750", VA = "0x60D3750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x60D3CE0", Offset = "0x60D2CE0", VA = "0x60D3CE0", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021A")]
	public override string BaseURI
	{
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x60D3EB0", Offset = "0x60D2EB0", VA = "0x60D3EB0", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x600089A")]
		[Address(RVA = "0x60D4150", Offset = "0x60D3150", VA = "0x60D4150", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700021C")]
	internal bool HasEntityReferences
	{
		[Token(Token = "0x600089B")]
		[Address(RVA = "0x60D4160", Offset = "0x60D3160", VA = "0x60D4160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021D")]
	internal XmlAttribute NamespaceXml
	{
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x60C6C50", Offset = "0x60C5C50", VA = "0x60C6C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x60CF870", Offset = "0x60CE870", VA = "0x60CF870")]
	public XmlDocument()
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x60CFDF0", Offset = "0x60CEDF0", VA = "0x60CFDF0")]
	public XmlDocument(XmlNameTable nt)
	{
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x60CF8D0", Offset = "0x60CE8D0", VA = "0x60CF8D0")]
	protected internal XmlDocument(XmlImplementation imp)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x60CB9A0", Offset = "0x60CA9A0", VA = "0x60CB9A0")]
	internal static void CheckName(string name)
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x60CFE70", Offset = "0x60CEE70", VA = "0x60CFE70")]
	internal XmlName AddXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x60CFE90", Offset = "0x60CEE90", VA = "0x60CFE90")]
	internal XmlName GetXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x60CBAC0", Offset = "0x60CAAC0", VA = "0x60CBAC0")]
	internal XmlName AddAttrXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x60CFEB0", Offset = "0x60CEEB0", VA = "0x60CFEB0")]
	internal bool AddIdInfo(XmlName eleName, XmlName attrName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x60CFF70", Offset = "0x60CEF70", VA = "0x60CFF70")]
	private XmlName GetIDInfoByElement_(XmlName eleName)
	{
		return null;
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x60CE230", Offset = "0x60CD230", VA = "0x60CE230")]
	internal XmlName GetIDInfoByElement(XmlName eleName)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x60D0050", Offset = "0x60CF050", VA = "0x60D0050")]
	private WeakReference GetElement(ArrayList elementList, XmlElement elem)
	{
		return null;
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x60CE240", Offset = "0x60CD240", VA = "0x60CE240")]
	internal void AddElementWithId(string id, XmlElement elem)
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x60CE430", Offset = "0x60CD430", VA = "0x60CE430")]
	internal void RemoveElementWithId(string id, XmlElement elem)
	{
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x60D0700", Offset = "0x60CF700", VA = "0x60D0700", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x60D0A40", Offset = "0x60CFA40", VA = "0x60D0A40")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x60D0BF0", Offset = "0x60CFBF0", VA = "0x60D0BF0", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x60D0D30", Offset = "0x60CFD30", VA = "0x60D0D30")]
	private bool HasNodeTypeInPrevSiblings(XmlNodeType nt, XmlNode refNode)
	{
		return default(bool);
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x60D0E00", Offset = "0x60CFE00", VA = "0x60D0E00")]
	private bool HasNodeTypeInNextSiblings(XmlNodeType nt, XmlNode refNode)
	{
		return default(bool);
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x60D0E60", Offset = "0x60CFE60", VA = "0x60D0E60", Slot = "31")]
	internal override bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x60D1050", Offset = "0x60D0050", VA = "0x60D1050", Slot = "32")]
	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x60D11C0", Offset = "0x60D01C0", VA = "0x60D11C0")]
	public XmlAttribute CreateAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x60D12C0", Offset = "0x60D02C0", VA = "0x60D12C0")]
	internal void SetDefaultNamespace(string prefix, string localName, ref string namespaceURI)
	{
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x60D1360", Offset = "0x60D0360", VA = "0x60D1360", Slot = "65")]
	public virtual XmlCDataSection CreateCDataSection(string data)
	{
		return null;
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x60D13D0", Offset = "0x60D03D0", VA = "0x60D13D0", Slot = "66")]
	public virtual XmlComment CreateComment(string data)
	{
		return null;
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x60D1430", Offset = "0x60D0430", VA = "0x60D1430", Slot = "67")]
	public virtual XmlDocumentType CreateDocumentType(string name, string publicId, string systemId, string internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x60D14B0", Offset = "0x60D04B0", VA = "0x60D14B0", Slot = "68")]
	public virtual XmlDocumentFragment CreateDocumentFragment()
	{
		return null;
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x60D1500", Offset = "0x60D0500", VA = "0x60D1500")]
	public XmlElement CreateElement(string name)
	{
		return null;
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x60D1580", Offset = "0x60D0580", VA = "0x60D1580")]
	internal void AddDefaultAttributes(XmlElement elem)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x60D1830", Offset = "0x60D0830", VA = "0x60D1830")]
	private SchemaElementDecl GetSchemaElementDecl(XmlElement elem)
	{
		return null;
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x60D1920", Offset = "0x60D0920", VA = "0x60D1920")]
	private XmlAttribute PrepareDefaultAttribute(SchemaAttDef attdef, string attrPrefix, string attrLocalname, string attrNamespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x60D1A70", Offset = "0x60D0A70", VA = "0x60D1A70", Slot = "69")]
	public virtual XmlEntityReference CreateEntityReference(string name)
	{
		return null;
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x60D1AD0", Offset = "0x60D0AD0", VA = "0x60D1AD0", Slot = "70")]
	public virtual XmlProcessingInstruction CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x60D1B40", Offset = "0x60D0B40", VA = "0x60D1B40", Slot = "71")]
	public virtual XmlDeclaration CreateXmlDeclaration(string version, string encoding, string standalone)
	{
		return null;
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x60D1BB0", Offset = "0x60D0BB0", VA = "0x60D1BB0", Slot = "72")]
	public virtual XmlText CreateTextNode(string text)
	{
		return null;
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x60D1C10", Offset = "0x60D0C10", VA = "0x60D1C10", Slot = "73")]
	public virtual XmlSignificantWhitespace CreateSignificantWhitespace(string text)
	{
		return null;
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x60D1C70", Offset = "0x60D0C70", VA = "0x60D1C70", Slot = "7")]
	public override XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x60D1C90", Offset = "0x60D0C90", VA = "0x60D1C90", Slot = "74")]
	protected internal virtual XPathNavigator CreateNavigator(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x60D2040", Offset = "0x60D1040", VA = "0x60D2040")]
	internal static bool IsTextNode(XmlNodeType nt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x60D1E60", Offset = "0x60D0E60", VA = "0x60D1E60")]
	private XmlNode NormalizeText(XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x60D2060", Offset = "0x60D1060", VA = "0x60D2060", Slot = "75")]
	public virtual XmlWhitespace CreateWhitespace(string text)
	{
		return null;
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x60D20C0", Offset = "0x60D10C0", VA = "0x60D20C0")]
	public XmlAttribute CreateAttribute(string qualifiedName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x60D2140", Offset = "0x60D1140", VA = "0x60D2140")]
	public XmlElement CreateElement(string qualifiedName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x60D21C0", Offset = "0x60D11C0", VA = "0x60D21C0", Slot = "76")]
	public virtual XmlElement GetElementById(string elementId)
	{
		return null;
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x60D25A0", Offset = "0x60D15A0", VA = "0x60D25A0", Slot = "77")]
	public virtual XmlNode ImportNode(XmlNode node, bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x60D25B0", Offset = "0x60D15B0", VA = "0x60D25B0")]
	private XmlNode ImportNodeInternal(XmlNode node, bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x60D2BC0", Offset = "0x60D1BC0", VA = "0x60D2BC0")]
	private void ImportAttributes(XmlNode fromElem, XmlNode toElem)
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x60D07C0", Offset = "0x60CF7C0", VA = "0x60D07C0")]
	private void ImportChildren(XmlNode fromNode, XmlNode toNode, bool deep)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x60D2D50", Offset = "0x60D1D50", VA = "0x60D2D50", Slot = "78")]
	public virtual XmlAttribute CreateAttribute(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x60D2DD0", Offset = "0x60D1DD0", VA = "0x60D2DD0", Slot = "79")]
	protected internal virtual XmlAttribute CreateDefaultAttribute(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x60D2E40", Offset = "0x60D1E40", VA = "0x60D2E40", Slot = "80")]
	public virtual XmlElement CreateElement(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x60D2FB0", Offset = "0x60D1FB0", VA = "0x60D2FB0", Slot = "81")]
	public virtual XmlNode ReadNode(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x60D3090", Offset = "0x60D2090", VA = "0x60D3090")]
	private XmlTextReader SetupReader(XmlTextReader tr)
	{
		return null;
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x60D30F0", Offset = "0x60D20F0", VA = "0x60D30F0", Slot = "82")]
	public virtual void Load(string filename)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x60D3240", Offset = "0x60D2240", VA = "0x60D3240", Slot = "83")]
	public virtual void Load(XmlReader reader)
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x60D3360", Offset = "0x60D2360", VA = "0x60D3360", Slot = "84")]
	public virtual void LoadXml(string xml)
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x60D3550", Offset = "0x60D2550", VA = "0x60D3550", Slot = "85")]
	public virtual void Save(XmlWriter w)
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x60D3770", Offset = "0x60D2770", VA = "0x60D3770", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x60D3790", Offset = "0x60D2790", VA = "0x60D3790", Slot = "47")]
	public override void WriteContentTo(XmlWriter xw)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x60D3A60", Offset = "0x60D2A60", VA = "0x60D3A60", Slot = "53")]
	internal override XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action)
	{
		return null;
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x60CC400", Offset = "0x60CB400", VA = "0x60CC400")]
	internal XmlNodeChangedEventArgs GetInsertEventArgsForLoad(XmlNode node, XmlNode newParent)
	{
		return null;
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x60D3B30", Offset = "0x60D2B30", VA = "0x60D3B30", Slot = "54")]
	internal override void BeforeEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x60D3B80", Offset = "0x60D2B80", VA = "0x60D3B80", Slot = "55")]
	internal override void AfterEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x60CDF60", Offset = "0x60CCF60", VA = "0x60CDF60")]
	internal XmlAttribute GetDefaultAttribute(XmlElement elem, string attrPrefix, string attrLocalname, string attrNamespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x60D3C10", Offset = "0x60D2C10", VA = "0x60D3C10")]
	internal XmlEntity GetEntityNode(string name)
	{
		return null;
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x60D3EC0", Offset = "0x60D2EC0", VA = "0x60D3EC0")]
	internal void SetBaseURI(string inBaseURI)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x60D3EE0", Offset = "0x60D2EE0", VA = "0x60D3EE0", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}
}
