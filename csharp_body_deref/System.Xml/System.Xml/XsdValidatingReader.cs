// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XsdValidatingReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200008A")]
internal class XsdValidatingReader : XmlReader, IXmlSchemaInfo, IXmlLineInfo, IXmlNamespaceResolver
{
	[Token(Token = "0x200008B")]
	private enum ValidatingReaderState
	{
		[Token(Token = "0x4000410")]
		None = 0,
		[Token(Token = "0x4000411")]
		Init = 1,
		[Token(Token = "0x4000412")]
		Read = 2,
		[Token(Token = "0x4000413")]
		OnDefaultAttribute = -1,
		[Token(Token = "0x4000414")]
		OnReadAttributeValue = -2,
		[Token(Token = "0x4000415")]
		OnAttribute = 3,
		[Token(Token = "0x4000416")]
		ClearAttributes = 4,
		[Token(Token = "0x4000417")]
		ParseInlineSchema = 5,
		[Token(Token = "0x4000418")]
		ReadAhead = 6,
		[Token(Token = "0x4000419")]
		OnReadBinaryContent = 7,
		[Token(Token = "0x400041A")]
		ReaderClosed = 8,
		[Token(Token = "0x400041B")]
		EOF = 9,
		[Token(Token = "0x400041C")]
		Error = 10
	}

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x10")]
	private XmlReader coreReader;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x18")]
	private IXmlNamespaceResolver coreReaderNSResolver;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x20")]
	private IXmlNamespaceResolver thisNSResolver;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x28")]
	private XmlSchemaValidator validator;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x30")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x38")]
	private ValidationEventHandler validationEvent;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x40")]
	private ValidatingReaderState validationState;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x48")]
	private XmlValueGetter valueGetter;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x50")]
	private XmlNamespaceManager nsManager;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x58")]
	private bool manageNamespaces;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x59")]
	private bool processInlineSchema;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x5A")]
	private bool replayCache;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x60")]
	private ValidatingReaderNodeData cachedNode;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x68")]
	private AttributePSVIInfo attributePSVI;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x70")]
	private int attributeCount;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x74")]
	private int coreReaderAttributeCount;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x78")]
	private int currentAttrIndex;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x80")]
	private AttributePSVIInfo[] attributePSVINodes;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x88")]
	private ArrayList defaultAttributes;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x90")]
	private Parser inlineSchemaParser;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x98")]
	private object atomicValue;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0xA0")]
	private XmlSchemaInfo xmlSchemaInfo;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0xA8")]
	private string originalAtomicValueString;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0xB0")]
	private XmlNameTable coreReaderNameTable;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0xB8")]
	private XsdCachingReader cachingReader;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0xC0")]
	private ValidatingReaderNodeData textNode;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0xC8")]
	private string NsXmlNs;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0xD0")]
	private string NsXs;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0xD8")]
	private string NsXsi;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0xE0")]
	private string XsiType;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0xE8")]
	private string XsiNil;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0xF0")]
	private string XsdSchema;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0xF8")]
	private string XsiSchemaLocation;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x100")]
	private string XsiNoNamespaceSchemaLocation;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x108")]
	private XmlCharType xmlCharType;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x110")]
	private IXmlLineInfo lineInfo;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x118")]
	private ReadContentAsBinaryHelper readBinaryHelper;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x120")]
	private ValidatingReaderState savedState;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x0")]
	private static Type TypeOfString;

	[Token(Token = "0x17000197")]
	public override XmlReaderSettings Settings
	{
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x271C3D0", Offset = "0x271A9D0", VA = "0x18271C3D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000198")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x271C2B0", Offset = "0x271A8B0", VA = "0x18271C2B0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000199")]
	public override string Name
	{
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x271C130", Offset = "0x271A730", VA = "0x18271C130", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019A")]
	public override string LocalName
	{
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x271C0F0", Offset = "0x271A6F0", VA = "0x18271C0F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019B")]
	public override string NamespaceURI
	{
		[Token(Token = "0x6000708")]
		[Address(RVA = "0x271C270", Offset = "0x271A870", VA = "0x18271C270", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019C")]
	public override string Prefix
	{
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x271C350", Offset = "0x271A950", VA = "0x18271C350", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019D")]
	public override string Value
	{
		[Token(Token = "0x600070A")]
		[Address(RVA = "0x271C580", Offset = "0x271AB80", VA = "0x18271C580", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019E")]
	public override int Depth
	{
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x271BFB0", Offset = "0x271A5B0", VA = "0x18271BFB0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700019F")]
	public override string BaseURI
	{
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x25474E0", Offset = "0x2545AE0", VA = "0x1825474E0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x25475A0", Offset = "0x2545BA0", VA = "0x1825475A0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A1")]
	public override bool IsDefault
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x271BFF0", Offset = "0x271A5F0", VA = "0x18271BFF0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A2")]
	public override char QuoteChar
	{
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x1A1F300", Offset = "0x1A1D900", VA = "0x181A1F300", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170001A3")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x1A1F390", Offset = "0x1A1D990", VA = "0x181A1F390", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170001A4")]
	public override string XmlLang
	{
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x2547660", Offset = "0x2545C60", VA = "0x182547660", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A5")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000712")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A6")]
	public override Type ValueType
	{
		[Token(Token = "0x6000713")]
		[Address(RVA = "0x271C4B0", Offset = "0x271AAB0", VA = "0x18271C4B0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A7")]
	public override int AttributeCount
	{
		[Token(Token = "0x6000714")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A8")]
	public override bool EOF
	{
		[Token(Token = "0x600071E")]
		[Address(RVA = "0x2547570", Offset = "0x2545B70", VA = "0x182547570", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A9")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000720")]
		[Address(RVA = "0x271C390", Offset = "0x271A990", VA = "0x18271C390", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170001AA")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000722")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AB")]
	private bool System_002EXml_002ESchema_002EIXmlSchemaInfo_002EIsDefault
	{
		[Token(Token = "0x6000726")]
		[Address(RVA = "0x271B720", Offset = "0x2719D20", VA = "0x18271B720", Slot = "54")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AC")]
	private bool System_002EXml_002ESchema_002EIXmlSchemaInfo_002EIsNil
	{
		[Token(Token = "0x6000727")]
		[Address(RVA = "0x271B7B0", Offset = "0x2719DB0", VA = "0x18271B7B0", Slot = "55")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AD")]
	private XmlSchemaValidity System_002EXml_002ESchema_002EIXmlSchemaInfo_002EValidity
	{
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x271BAC0", Offset = "0x271A0C0", VA = "0x18271BAC0", Slot = "53")]
		get
		{
			return default(XmlSchemaValidity);
		}
	}

	[Token(Token = "0x170001AE")]
	private XmlSchemaSimpleType System_002EXml_002ESchema_002EIXmlSchemaInfo_002EMemberType
	{
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x271B800", Offset = "0x2719E00", VA = "0x18271B800", Slot = "56")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AF")]
	private XmlSchemaType System_002EXml_002ESchema_002EIXmlSchemaInfo_002ESchemaType
	{
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x271BA60", Offset = "0x271A060", VA = "0x18271BA60", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B0")]
	private XmlSchemaElement System_002EXml_002ESchema_002EIXmlSchemaInfo_002ESchemaElement
	{
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x271BA00", Offset = "0x271A000", VA = "0x18271BA00", Slot = "58")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B1")]
	private XmlSchemaAttribute System_002EXml_002ESchema_002EIXmlSchemaInfo_002ESchemaAttribute
	{
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x271B9B0", Offset = "0x2719FB0", VA = "0x18271B9B0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B2")]
	public int LineNumber
	{
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x271C030", Offset = "0x271A630", VA = "0x18271C030", Slot = "61")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B3")]
	public int LinePosition
	{
		[Token(Token = "0x600072F")]
		[Address(RVA = "0x271C090", Offset = "0x271A690", VA = "0x18271C090", Slot = "62")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B4")]
	private XmlSchemaInfo AttributeSchemaInfo
	{
		[Token(Token = "0x6000734")]
		[Address(RVA = "0x271BF90", Offset = "0x271A590", VA = "0x18271BF90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x271BD60", Offset = "0x271A360", VA = "0x18271BD60")]
	internal XsdValidatingReader(XmlReader reader, XmlResolver xmlResolver, XmlReaderSettings readerSettings, XmlSchemaObject partialValidationType)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x271BF70", Offset = "0x271A570", VA = "0x18271BF70")]
	internal XsdValidatingReader(XmlReader reader, XmlResolver xmlResolver, XmlReaderSettings readerSettings)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x2719270", Offset = "0x2717870", VA = "0x182719270")]
	private void Init()
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x271B140", Offset = "0x2719740", VA = "0x18271B140")]
	private void SetupValidator(XmlReaderSettings readerSettings, XmlReader reader, XmlSchemaObject partialValidationType)
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x2718710", Offset = "0x2716D10", VA = "0x182718710", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x2718780", Offset = "0x2716D80", VA = "0x182718780", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x2718620", Offset = "0x2716C20", VA = "0x182718620", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x2719700", Offset = "0x2717D00", VA = "0x182719700", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x27197F0", Offset = "0x2717DF0", VA = "0x1827197F0", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x2719A50", Offset = "0x2718050", VA = "0x182719A50", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x2719C30", Offset = "0x2718230", VA = "0x182719C30", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x2719A00", Offset = "0x2718000", VA = "0x182719A00", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x271AE40", Offset = "0x2719440", VA = "0x18271AE40", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x27182B0", Offset = "0x27168B0", VA = "0x1827182B0", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x271B390", Offset = "0x2719990", VA = "0x18271B390", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x27196A0", Offset = "0x2717CA0", VA = "0x1827196A0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x271B100", Offset = "0x2719700", VA = "0x18271B100", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x271ACD0", Offset = "0x27192D0", VA = "0x18271ACD0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "60")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x271B510", Offset = "0x2719B10", VA = "0x18271B510", Slot = "63")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x271B600", Offset = "0x2719C00", VA = "0x18271B600", Slot = "64")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x271B690", Offset = "0x2719C90", VA = "0x18271B690", Slot = "65")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x1A1F3F0", Offset = "0x1A1D9F0", VA = "0x181A1F3F0")]
	private object GetStringValue()
	{
		return null;
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x271A840", Offset = "0x2718E40", VA = "0x18271A840")]
	private void ProcessReaderEvent()
	{
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x2719E00", Offset = "0x2718400", VA = "0x182719E00")]
	private void ProcessElementEvent()
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x271A420", Offset = "0x2718A20", VA = "0x18271A420")]
	private void ProcessEndElementEvent()
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x271BB60", Offset = "0x271A160", VA = "0x18271BB60")]
	private void ValidateAttributes()
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x2718250", Offset = "0x2716850", VA = "0x182718250")]
	private void ClearAttributesInfo()
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x2718460", Offset = "0x2716A60", VA = "0x182718460")]
	private AttributePSVIInfo GetAttributePSVI(string name)
	{
		return null;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x27183C0", Offset = "0x27169C0", VA = "0x1827183C0")]
	private AttributePSVIInfo GetAttributePSVI(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x2718C60", Offset = "0x2717260", VA = "0x182718C60")]
	private ValidatingReaderNodeData GetDefaultAttribute(string name, bool updatePosition)
	{
		return null;
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x2718B00", Offset = "0x2717100", VA = "0x182718B00")]
	private ValidatingReaderNodeData GetDefaultAttribute(string attrLocalName, string ns, bool updatePosition)
	{
		return null;
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x2717FB0", Offset = "0x27165B0", VA = "0x182717FB0")]
	private AttributePSVIInfo AddAttributePSVI(int attIndex)
	{
		return null;
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x2719650", Offset = "0x2717C50", VA = "0x182719650")]
	private bool IsXSDRoot(string localName, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x271A720", Offset = "0x2718D20", VA = "0x18271A720")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x271AA50", Offset = "0x2719050", VA = "0x18271AA50")]
	private void ReadAheadForMemberType()
	{
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x2718DB0", Offset = "0x27173B0", VA = "0x182718DB0")]
	private void GetIsDefault()
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x27190E0", Offset = "0x27176E0", VA = "0x1827190E0")]
	private void GetMemberType()
	{
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x2718880", Offset = "0x2716E80", VA = "0x182718880")]
	private XsdCachingReader GetCachingReader()
	{
		return null;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x27182F0", Offset = "0x27168F0", VA = "0x1827182F0")]
	internal ValidatingReaderNodeData CreateDummyTextNode(string attributeValue, int depth)
	{
		return null;
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x27181F0", Offset = "0x27167F0", VA = "0x1827181F0")]
	internal void CachingCallBack(XsdCachingReader cachingReader)
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x27191F0", Offset = "0x27177F0", VA = "0x1827191F0")]
	private string GetOriginalAtomicValueStringOfElement()
	{
		return null;
	}
}
