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
		[Address(RVA = "0x448F0A0", Offset = "0x448F0A0", VA = "0x448F0A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600083C")]
		[Address(RVA = "0x448F0B0", Offset = "0x448F0B0", VA = "0x448F0B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000200")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x448FC20", Offset = "0x448FC20", VA = "0x448FC20", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000201")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x448FC30", Offset = "0x448FC30", VA = "0x448FC30", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000202")]
	public virtual XmlDocumentType DocumentType
	{
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x448FC40", Offset = "0x448FC40", VA = "0x448FC40", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000203")]
	internal virtual XmlDeclaration Declaration
	{
		[Token(Token = "0x600084B")]
		[Address(RVA = "0x448FCC0", Offset = "0x448FCC0", VA = "0x448FCC0", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000204")]
	public XmlImplementation Implementation
	{
		[Token(Token = "0x600084C")]
		[Address(RVA = "0x448FD50", Offset = "0x448FD50", VA = "0x448FD50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000205")]
	public override string Name
	{
		[Token(Token = "0x600084D")]
		[Address(RVA = "0x448FD60", Offset = "0x448FD60", VA = "0x448FD60", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	public override string LocalName
	{
		[Token(Token = "0x600084E")]
		[Address(RVA = "0x448FD70", Offset = "0x448FD70", VA = "0x448FD70", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000207")]
	public XmlElement DocumentElement
	{
		[Token(Token = "0x600084F")]
		[Address(RVA = "0x4484E00", Offset = "0x4484E00", VA = "0x4484E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000208")]
	internal override bool IsContainer
	{
		[Token(Token = "0x6000850")]
		[Address(RVA = "0x448FD80", Offset = "0x448FD80", VA = "0x448FD80", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x448FD90", Offset = "0x448FD90", VA = "0x448FD90", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x448FDA0", Offset = "0x448FDA0", VA = "0x448FDA0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700020A")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x448FDB0", Offset = "0x448FDB0", VA = "0x448FDB0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020B")]
	public XmlSchemaSet Schemas
	{
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x448FDC0", Offset = "0x448FDC0", VA = "0x448FDC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700020C")]
	internal bool CanReportValidity
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x448FDD0", Offset = "0x448FDD0", VA = "0x448FDD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020D")]
	internal bool HasSetResolver
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x448FDE0", Offset = "0x448FDE0", VA = "0x448FDE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020E")]
	public virtual XmlResolver XmlResolver
	{
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x448FE00", Offset = "0x448FE00", VA = "0x448FE00", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x4484670", Offset = "0x4484670", VA = "0x4484670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000210")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x44922D0", Offset = "0x44922D0", VA = "0x44922D0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000211")]
	internal XmlNamedNodeMap Entities
	{
		[Token(Token = "0x600087E")]
		[Address(RVA = "0x44922E0", Offset = "0x44922E0", VA = "0x44922E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x4492360", Offset = "0x4492360", VA = "0x4492360")]
		set
		{
		}
	}

	[Token(Token = "0x17000212")]
	internal bool IsLoading
	{
		[Token(Token = "0x6000880")]
		[Address(RVA = "0x4492370", Offset = "0x4492370", VA = "0x4492370")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x4492380", Offset = "0x4492380", VA = "0x4492380")]
		set
		{
		}
	}

	[Token(Token = "0x17000213")]
	internal bool ActualLoadingStatus
	{
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x4492390", Offset = "0x4492390", VA = "0x4492390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000214")]
	public override string InnerText
	{
		[Token(Token = "0x6000888")]
		[Address(RVA = "0x44928D0", Offset = "0x44928D0", VA = "0x44928D0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public override string InnerXml
	{
		[Token(Token = "0x6000889")]
		[Address(RVA = "0x4492930", Offset = "0x4492930", VA = "0x4492930", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000216")]
	internal string Version
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x4493060", Offset = "0x4493060", VA = "0x4493060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000217")]
	internal string Encoding
	{
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x4493080", Offset = "0x4493080", VA = "0x4493080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000218")]
	internal string Standalone
	{
		[Token(Token = "0x6000894")]
		[Address(RVA = "0x4492B50", Offset = "0x4492B50", VA = "0x4492B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x4493170", Offset = "0x4493170", VA = "0x4493170", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021A")]
	public override string BaseURI
	{
		[Token(Token = "0x6000897")]
		[Address(RVA = "0x4493320", Offset = "0x4493320", VA = "0x4493320", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x600089A")]
		[Address(RVA = "0x44935C0", Offset = "0x44935C0", VA = "0x44935C0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700021C")]
	internal bool HasEntityReferences
	{
		[Token(Token = "0x600089B")]
		[Address(RVA = "0x44935D0", Offset = "0x44935D0", VA = "0x44935D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021D")]
	internal XmlAttribute NamespaceXml
	{
		[Token(Token = "0x600089C")]
		[Address(RVA = "0x4485A30", Offset = "0x4485A30", VA = "0x4485A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x448EAD0", Offset = "0x448EAD0", VA = "0x448EAD0")]
	public XmlDocument()
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x448F040", Offset = "0x448F040", VA = "0x448F040")]
	public XmlDocument(XmlNameTable nt)
	{
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x448EB20", Offset = "0x448EB20", VA = "0x448EB20")]
	protected internal XmlDocument(XmlImplementation imp)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x448AB50", Offset = "0x448AB50", VA = "0x448AB50")]
	internal static void CheckName(string name)
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x448F0C0", Offset = "0x448F0C0", VA = "0x448F0C0")]
	internal XmlName AddXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x448F0E0", Offset = "0x448F0E0", VA = "0x448F0E0")]
	internal XmlName GetXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x448AC70", Offset = "0x448AC70", VA = "0x448AC70")]
	internal XmlName AddAttrXmlName(string prefix, string localName, string namespaceURI, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x448F100", Offset = "0x448F100", VA = "0x448F100")]
	internal bool AddIdInfo(XmlName eleName, XmlName attrName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x448F1C0", Offset = "0x448F1C0", VA = "0x448F1C0")]
	private XmlName GetIDInfoByElement_(XmlName eleName)
	{
		return null;
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x448D460", Offset = "0x448D460", VA = "0x448D460")]
	internal XmlName GetIDInfoByElement(XmlName eleName)
	{
		return null;
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x448F2A0", Offset = "0x448F2A0", VA = "0x448F2A0")]
	private WeakReference GetElement(ArrayList elementList, XmlElement elem)
	{
		return null;
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x448D470", Offset = "0x448D470", VA = "0x448D470")]
	internal void AddElementWithId(string id, XmlElement elem)
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x448D660", Offset = "0x448D660", VA = "0x448D660")]
	internal void RemoveElementWithId(string id, XmlElement elem)
	{
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x448FAB0", Offset = "0x448FAB0", VA = "0x448FAB0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x448FDF0", Offset = "0x448FDF0", VA = "0x448FDF0")]
	internal XmlResolver GetResolver()
	{
		return null;
	}

	[Token(Token = "0x6000859")]
	[Address(RVA = "0x448FFA0", Offset = "0x448FFA0", VA = "0x448FFA0", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x44900E0", Offset = "0x44900E0", VA = "0x44900E0")]
	private bool HasNodeTypeInPrevSiblings(XmlNodeType nt, XmlNode refNode)
	{
		return default(bool);
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x4490190", Offset = "0x4490190", VA = "0x4490190")]
	private bool HasNodeTypeInNextSiblings(XmlNodeType nt, XmlNode refNode)
	{
		return default(bool);
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x44901F0", Offset = "0x44901F0", VA = "0x44901F0", Slot = "31")]
	internal override bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x44903D0", Offset = "0x44903D0", VA = "0x44903D0", Slot = "32")]
	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x4490560", Offset = "0x4490560", VA = "0x4490560")]
	public XmlAttribute CreateAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x4490610", Offset = "0x4490610", VA = "0x4490610")]
	internal void SetDefaultNamespace(string prefix, string localName, ref string namespaceURI)
	{
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x44906B0", Offset = "0x44906B0", VA = "0x44906B0", Slot = "65")]
	public virtual XmlCDataSection CreateCDataSection(string data)
	{
		return null;
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x4490720", Offset = "0x4490720", VA = "0x4490720", Slot = "66")]
	public virtual XmlComment CreateComment(string data)
	{
		return null;
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x4490780", Offset = "0x4490780", VA = "0x4490780", Slot = "67")]
	public virtual XmlDocumentType CreateDocumentType(string name, string publicId, string systemId, string internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x4490800", Offset = "0x4490800", VA = "0x4490800", Slot = "68")]
	public virtual XmlDocumentFragment CreateDocumentFragment()
	{
		return null;
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x4490850", Offset = "0x4490850", VA = "0x4490850")]
	public XmlElement CreateElement(string name)
	{
		return null;
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x44908E0", Offset = "0x44908E0", VA = "0x44908E0")]
	internal void AddDefaultAttributes(XmlElement elem)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x4490BB0", Offset = "0x4490BB0", VA = "0x4490BB0")]
	private SchemaElementDecl GetSchemaElementDecl(XmlElement elem)
	{
		return null;
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x4490CB0", Offset = "0x4490CB0", VA = "0x4490CB0")]
	private XmlAttribute PrepareDefaultAttribute(SchemaAttDef attdef, string attrPrefix, string attrLocalname, string attrNamespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x4490D90", Offset = "0x4490D90", VA = "0x4490D90", Slot = "69")]
	public virtual XmlEntityReference CreateEntityReference(string name)
	{
		return null;
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x4490DF0", Offset = "0x4490DF0", VA = "0x4490DF0", Slot = "70")]
	public virtual XmlProcessingInstruction CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x4490E60", Offset = "0x4490E60", VA = "0x4490E60", Slot = "71")]
	public virtual XmlDeclaration CreateXmlDeclaration(string version, string encoding, string standalone)
	{
		return null;
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x4490ED0", Offset = "0x4490ED0", VA = "0x4490ED0", Slot = "72")]
	public virtual XmlText CreateTextNode(string text)
	{
		return null;
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x4490F30", Offset = "0x4490F30", VA = "0x4490F30", Slot = "73")]
	public virtual XmlSignificantWhitespace CreateSignificantWhitespace(string text)
	{
		return null;
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x4490F90", Offset = "0x4490F90", VA = "0x4490F90", Slot = "7")]
	public override XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x4490FB0", Offset = "0x4490FB0", VA = "0x4490FB0", Slot = "74")]
	protected internal virtual XPathNavigator CreateNavigator(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x4491360", Offset = "0x4491360", VA = "0x4491360")]
	internal static bool IsTextNode(XmlNodeType nt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x4491180", Offset = "0x4491180", VA = "0x4491180")]
	private XmlNode NormalizeText(XmlNode n)
	{
		return null;
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x4491380", Offset = "0x4491380", VA = "0x4491380", Slot = "75")]
	public virtual XmlWhitespace CreateWhitespace(string text)
	{
		return null;
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x44913E0", Offset = "0x44913E0", VA = "0x44913E0")]
	public XmlAttribute CreateAttribute(string qualifiedName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x4491470", Offset = "0x4491470", VA = "0x4491470")]
	public XmlElement CreateElement(string qualifiedName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x4491500", Offset = "0x4491500", VA = "0x4491500", Slot = "76")]
	public virtual XmlElement GetElementById(string elementId)
	{
		return null;
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x4491990", Offset = "0x4491990", VA = "0x4491990", Slot = "77")]
	public virtual XmlNode ImportNode(XmlNode node, bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x44919A0", Offset = "0x44919A0", VA = "0x44919A0")]
	private XmlNode ImportNodeInternal(XmlNode node, bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x4491FB0", Offset = "0x4491FB0", VA = "0x4491FB0")]
	private void ImportAttributes(XmlNode fromElem, XmlNode toElem)
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x448FB70", Offset = "0x448FB70", VA = "0x448FB70")]
	private void ImportChildren(XmlNode fromNode, XmlNode toNode, bool deep)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x4492140", Offset = "0x4492140", VA = "0x4492140", Slot = "78")]
	public virtual XmlAttribute CreateAttribute(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x44921C0", Offset = "0x44921C0", VA = "0x44921C0", Slot = "79")]
	protected internal virtual XmlAttribute CreateDefaultAttribute(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x4492230", Offset = "0x4492230", VA = "0x4492230", Slot = "80")]
	public virtual XmlElement CreateElement(string prefix, string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x44923A0", Offset = "0x44923A0", VA = "0x44923A0", Slot = "81")]
	public virtual XmlNode ReadNode(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x4492490", Offset = "0x4492490", VA = "0x4492490")]
	private XmlTextReader SetupReader(XmlTextReader tr)
	{
		return null;
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x44924F0", Offset = "0x44924F0", VA = "0x44924F0", Slot = "82")]
	public virtual void Load(string filename)
	{
	}

	[Token(Token = "0x6000886")]
	[Address(RVA = "0x4492630", Offset = "0x4492630", VA = "0x4492630", Slot = "83")]
	public virtual void Load(XmlReader reader)
	{
	}

	[Token(Token = "0x6000887")]
	[Address(RVA = "0x4492760", Offset = "0x4492760", VA = "0x4492760", Slot = "84")]
	public virtual void LoadXml(string xml)
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x4492950", Offset = "0x4492950", VA = "0x4492950", Slot = "85")]
	public virtual void Save(XmlWriter w)
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x4492B70", Offset = "0x4492B70", VA = "0x4492B70", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x4492B90", Offset = "0x4492B90", VA = "0x4492B90", Slot = "47")]
	public override void WriteContentTo(XmlWriter xw)
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x4492EF0", Offset = "0x4492EF0", VA = "0x4492EF0", Slot = "53")]
	internal override XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action)
	{
		return null;
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x448B600", Offset = "0x448B600", VA = "0x448B600")]
	internal XmlNodeChangedEventArgs GetInsertEventArgsForLoad(XmlNode node, XmlNode newParent)
	{
		return null;
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x4492FC0", Offset = "0x4492FC0", VA = "0x4492FC0", Slot = "54")]
	internal override void BeforeEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x4493010", Offset = "0x4493010", VA = "0x4493010", Slot = "55")]
	internal override void AfterEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x448D1A0", Offset = "0x448D1A0", VA = "0x448D1A0")]
	internal XmlAttribute GetDefaultAttribute(XmlElement elem, string attrPrefix, string attrLocalname, string attrNamespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x44930A0", Offset = "0x44930A0", VA = "0x44930A0")]
	internal XmlEntity GetEntityNode(string name)
	{
		return null;
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x4493330", Offset = "0x4493330", VA = "0x4493330")]
	internal void SetBaseURI(string inBaseURI)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x4493350", Offset = "0x4493350", VA = "0x4493350", Slot = "29")]
	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}
}
