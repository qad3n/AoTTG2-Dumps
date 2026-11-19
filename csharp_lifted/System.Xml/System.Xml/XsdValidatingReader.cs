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
		[Address(RVA = "0x60C1CF0", Offset = "0x60C0CF0", VA = "0x60C1CF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000198")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x60C1DC0", Offset = "0x60C0DC0", VA = "0x60C1DC0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000199")]
	public override string Name
	{
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x60C1E40", Offset = "0x60C0E40", VA = "0x60C1E40", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019A")]
	public override string LocalName
	{
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x60C1F60", Offset = "0x60C0F60", VA = "0x60C1F60", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019B")]
	public override string NamespaceURI
	{
		[Token(Token = "0x6000708")]
		[Address(RVA = "0x60C1FA0", Offset = "0x60C0FA0", VA = "0x60C1FA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019C")]
	public override string Prefix
	{
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x60C1FE0", Offset = "0x60C0FE0", VA = "0x60C1FE0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019D")]
	public override string Value
	{
		[Token(Token = "0x600070A")]
		[Address(RVA = "0x60C2020", Offset = "0x60C1020", VA = "0x60C2020", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019E")]
	public override int Depth
	{
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x60C2060", Offset = "0x60C1060", VA = "0x60C2060", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700019F")]
	public override string BaseURI
	{
		[Token(Token = "0x600070C")]
		[Address(RVA = "0x60C20A0", Offset = "0x60C10A0", VA = "0x60C20A0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x600070D")]
		[Address(RVA = "0x60C20D0", Offset = "0x60C10D0", VA = "0x60C20D0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A1")]
	public override bool IsDefault
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x60C2100", Offset = "0x60C1100", VA = "0x60C2100", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A2")]
	public override char QuoteChar
	{
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x60C2130", Offset = "0x60C1130", VA = "0x60C2130", Slot = "16")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170001A3")]
	public override XmlSpace XmlSpace
	{
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x60C2160", Offset = "0x60C1160", VA = "0x60C2160", Slot = "17")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x170001A4")]
	public override string XmlLang
	{
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x60C2190", Offset = "0x60C1190", VA = "0x60C2190", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A5")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000712")]
		[Address(RVA = "0x60C21C0", Offset = "0x60C11C0", VA = "0x60C21C0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A6")]
	public override Type ValueType
	{
		[Token(Token = "0x6000713")]
		[Address(RVA = "0x60C21D0", Offset = "0x60C11D0", VA = "0x60C21D0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A7")]
	public override int AttributeCount
	{
		[Token(Token = "0x6000714")]
		[Address(RVA = "0x60C22B0", Offset = "0x60C12B0", VA = "0x60C22B0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001A8")]
	public override bool EOF
	{
		[Token(Token = "0x600071E")]
		[Address(RVA = "0x60C3540", Offset = "0x60C2540", VA = "0x60C3540", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A9")]
	public override ReadState ReadState
	{
		[Token(Token = "0x6000720")]
		[Address(RVA = "0x60C35A0", Offset = "0x60C25A0", VA = "0x60C35A0", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x170001AA")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6000722")]
		[Address(RVA = "0x60C3740", Offset = "0x60C2740", VA = "0x60C3740", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AB")]
	private bool System_002EXml_002ESchema_002EIXmlSchemaInfo_002EIsDefault
	{
		[Token(Token = "0x6000726")]
		[Address(RVA = "0x60C3A20", Offset = "0x60C2A20", VA = "0x60C3A20", Slot = "54")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AC")]
	private bool System_002EXml_002ESchema_002EIXmlSchemaInfo_002EIsNil
	{
		[Token(Token = "0x6000727")]
		[Address(RVA = "0x60C3D80", Offset = "0x60C2D80", VA = "0x60C3D80", Slot = "55")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AD")]
	private XmlSchemaValidity System_002EXml_002ESchema_002EIXmlSchemaInfo_002EValidity
	{
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x60C3DC0", Offset = "0x60C2DC0", VA = "0x60C3DC0", Slot = "53")]
		get
		{
			return default(XmlSchemaValidity);
		}
	}

	[Token(Token = "0x170001AE")]
	private XmlSchemaSimpleType System_002EXml_002ESchema_002EIXmlSchemaInfo_002EMemberType
	{
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x60C3E60", Offset = "0x60C2E60", VA = "0x60C3E60", Slot = "56")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AF")]
	private XmlSchemaType System_002EXml_002ESchema_002EIXmlSchemaInfo_002ESchemaType
	{
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x60C3FE0", Offset = "0x60C2FE0", VA = "0x60C3FE0", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B0")]
	private XmlSchemaElement System_002EXml_002ESchema_002EIXmlSchemaInfo_002ESchemaElement
	{
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x60C4030", Offset = "0x60C3030", VA = "0x60C4030", Slot = "58")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B1")]
	private XmlSchemaAttribute System_002EXml_002ESchema_002EIXmlSchemaInfo_002ESchemaAttribute
	{
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x60C4080", Offset = "0x60C3080", VA = "0x60C4080", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B2")]
	public int LineNumber
	{
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x60C40D0", Offset = "0x60C30D0", VA = "0x60C40D0", Slot = "61")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B3")]
	public int LinePosition
	{
		[Token(Token = "0x600072F")]
		[Address(RVA = "0x60C4180", Offset = "0x60C3180", VA = "0x60C4180", Slot = "62")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B4")]
	private XmlSchemaInfo AttributeSchemaInfo
	{
		[Token(Token = "0x6000734")]
		[Address(RVA = "0x60C2290", Offset = "0x60C1290", VA = "0x60C2290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x60C1490", Offset = "0x60C0490", VA = "0x60C1490")]
	internal XsdValidatingReader(XmlReader reader, XmlResolver xmlResolver, XmlReaderSettings readerSettings, XmlSchemaObject partialValidationType)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x60C1CE0", Offset = "0x60C0CE0", VA = "0x60C1CE0")]
	internal XsdValidatingReader(XmlReader reader, XmlResolver xmlResolver, XmlReaderSettings readerSettings)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x60C1690", Offset = "0x60C0690", VA = "0x60C1690")]
	private void Init()
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x60C1A90", Offset = "0x60C0A90", VA = "0x60C1A90")]
	private void SetupValidator(XmlReaderSettings readerSettings, XmlReader reader, XmlSchemaObject partialValidationType)
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x60C22C0", Offset = "0x60C12C0", VA = "0x60C22C0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x60C24D0", Offset = "0x60C14D0", VA = "0x60C24D0", Slot = "23")]
	public override string GetAttribute(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x60C2710", Offset = "0x60C1710", VA = "0x60C2710", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x60C27E0", Offset = "0x60C17E0", VA = "0x60C27E0", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x60C2B00", Offset = "0x60C1B00", VA = "0x60C2B00", Slot = "26")]
	public override void MoveToAttribute(int i)
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x60C2CE0", Offset = "0x60C1CE0", VA = "0x60C2CE0", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x60C2E90", Offset = "0x60C1E90", VA = "0x60C2E90", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x60C3030", Offset = "0x60C2030", VA = "0x60C3030", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x60C3080", Offset = "0x60C2080", VA = "0x60C3080", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x60C3570", Offset = "0x60C2570", VA = "0x60C3570", Slot = "33")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x60C35D0", Offset = "0x60C25D0", VA = "0x60C35D0", Slot = "35")]
	public override void Skip()
	{
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x60C3750", Offset = "0x60C2750", VA = "0x60C3750", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x60C3800", Offset = "0x60C2800", VA = "0x60C3800", Slot = "39")]
	public override void ResolveEntity()
	{
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x60C3840", Offset = "0x60C2840", VA = "0x60C3840", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x60C40C0", Offset = "0x60C30C0", VA = "0x60C40C0", Slot = "60")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x60C4230", Offset = "0x60C3230", VA = "0x60C4230", Slot = "63")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x60C4300", Offset = "0x60C3300", VA = "0x60C4300", Slot = "64")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x60C43D0", Offset = "0x60C33D0", VA = "0x60C43D0", Slot = "65")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x60C44A0", Offset = "0x60C34A0", VA = "0x60C44A0")]
	private object GetStringValue()
	{
		return null;
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x60C3240", Offset = "0x60C2240", VA = "0x60C3240")]
	private void ProcessReaderEvent()
	{
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x60C44D0", Offset = "0x60C34D0", VA = "0x60C44D0")]
	private void ProcessElementEvent()
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x60C4AE0", Offset = "0x60C3AE0", VA = "0x60C4AE0")]
	private void ProcessEndElementEvent()
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x60C4D60", Offset = "0x60C3D60", VA = "0x60C4D60")]
	private void ValidateAttributes()
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x60C34F0", Offset = "0x60C24F0", VA = "0x60C34F0")]
	private void ClearAttributesInfo()
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x60C28C0", Offset = "0x60C18C0", VA = "0x60C28C0")]
	private AttributePSVIInfo GetAttributePSVI(string name)
	{
		return null;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x60C52F0", Offset = "0x60C42F0", VA = "0x60C52F0")]
	private AttributePSVIInfo GetAttributePSVI(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x60C2320", Offset = "0x60C1320", VA = "0x60C2320")]
	private ValidatingReaderNodeData GetDefaultAttribute(string name, bool updatePosition)
	{
		return null;
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x60C25D0", Offset = "0x60C15D0", VA = "0x60C25D0")]
	private ValidatingReaderNodeData GetDefaultAttribute(string attrLocalName, string ns, bool updatePosition)
	{
		return null;
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x60C50E0", Offset = "0x60C40E0", VA = "0x60C50E0")]
	private AttributePSVIInfo AddAttributePSVI(int attIndex)
	{
		return null;
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x60C4D10", Offset = "0x60C3D10", VA = "0x60C4D10")]
	private bool IsXSDRoot(string localName, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x60C33D0", Offset = "0x60C23D0", VA = "0x60C33D0")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x60C5390", Offset = "0x60C4390", VA = "0x60C5390")]
	private void ReadAheadForMemberType()
	{
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x60C3AA0", Offset = "0x60C2AA0", VA = "0x60C3AA0")]
	private void GetIsDefault()
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x60C3EE0", Offset = "0x60C2EE0", VA = "0x60C3EE0")]
	private void GetMemberType()
	{
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x60C4FD0", Offset = "0x60C3FD0", VA = "0x60C4FD0")]
	private XsdCachingReader GetCachingReader()
	{
		return null;
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x60C3980", Offset = "0x60C2980", VA = "0x60C3980")]
	internal ValidatingReaderNodeData CreateDummyTextNode(string attributeValue, int depth)
	{
		return null;
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x60C5620", Offset = "0x60C4620", VA = "0x60C5620")]
	internal void CachingCallBack(XsdCachingReader cachingReader)
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x60C4F60", Offset = "0x60C3F60", VA = "0x60C4F60")]
	private string GetOriginalAtomicValueStringOfElement()
	{
		return null;
	}
}
