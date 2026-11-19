// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Parser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001E2")]
internal sealed class Parser
{
	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x10")]
	private SchemaType schemaType;

	[Token(Token = "0x40008B1")]
	[FieldOffset(Offset = "0x18")]
	private XmlNameTable nameTable;

	[Token(Token = "0x40008B2")]
	[FieldOffset(Offset = "0x20")]
	private SchemaNames schemaNames;

	[Token(Token = "0x40008B3")]
	[FieldOffset(Offset = "0x28")]
	private ValidationEventHandler eventHandler;

	[Token(Token = "0x40008B4")]
	[FieldOffset(Offset = "0x30")]
	private XmlNamespaceManager namespaceManager;

	[Token(Token = "0x40008B5")]
	[FieldOffset(Offset = "0x38")]
	private XmlReader reader;

	[Token(Token = "0x40008B6")]
	[FieldOffset(Offset = "0x40")]
	private PositionInfo positionInfo;

	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x48")]
	private bool isProcessNamespaces;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x4C")]
	private int schemaXmlDepth;

	[Token(Token = "0x40008B9")]
	[FieldOffset(Offset = "0x50")]
	private int markupDepth;

	[Token(Token = "0x40008BA")]
	[FieldOffset(Offset = "0x58")]
	private SchemaBuilder builder;

	[Token(Token = "0x40008BB")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchema schema;

	[Token(Token = "0x40008BC")]
	[FieldOffset(Offset = "0x68")]
	private SchemaInfo xdrSchema;

	[Token(Token = "0x40008BD")]
	[FieldOffset(Offset = "0x70")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x40008BE")]
	[FieldOffset(Offset = "0x78")]
	private XmlDocument dummyDocument;

	[Token(Token = "0x40008BF")]
	[FieldOffset(Offset = "0x80")]
	private bool processMarkup;

	[Token(Token = "0x40008C0")]
	[FieldOffset(Offset = "0x88")]
	private XmlNode parentNode;

	[Token(Token = "0x40008C1")]
	[FieldOffset(Offset = "0x90")]
	private XmlNamespaceManager annotationNSManager;

	[Token(Token = "0x40008C2")]
	[FieldOffset(Offset = "0x98")]
	private string xmlns;

	[Token(Token = "0x40008C3")]
	[FieldOffset(Offset = "0xA0")]
	private XmlCharType xmlCharType;

	[Token(Token = "0x17000506")]
	public XmlSchema XmlSchema
	{
		[Token(Token = "0x6001296")]
		[Address(RVA = "0x5FCCE70", Offset = "0x5FCBE70", VA = "0x5FCCE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000507")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x6001297")]
		[Address(RVA = "0x5FCCE80", Offset = "0x5FCBE80", VA = "0x5FCCE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000508")]
	public SchemaInfo XdrSchema
	{
		[Token(Token = "0x6001298")]
		[Address(RVA = "0x5FCCE90", Offset = "0x5FCBE90", VA = "0x5FCCE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001291")]
	[Address(RVA = "0x5FCBF40", Offset = "0x5FCAF40", VA = "0x5FCBF40")]
	public Parser(SchemaType schemaType, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x6001292")]
	[Address(RVA = "0x5FCC020", Offset = "0x5FCB020", VA = "0x5FCC020")]
	public SchemaType Parse(XmlReader reader, string targetNamespace)
	{
		return default(SchemaType);
	}

	[Token(Token = "0x6001293")]
	[Address(RVA = "0x5FCC090", Offset = "0x5FCB090", VA = "0x5FCC090")]
	public void StartParsing(XmlReader reader, string targetNamespace)
	{
	}

	[Token(Token = "0x6001294")]
	[Address(RVA = "0x5FCCD70", Offset = "0x5FCBD70", VA = "0x5FCCD70")]
	private bool CheckSchemaRoot(SchemaType rootType, out string code)
	{
		return default(bool);
	}

	[Token(Token = "0x6001295")]
	[Address(RVA = "0x5FCCE60", Offset = "0x5FCBE60", VA = "0x5FCCE60")]
	public SchemaType FinishParsing()
	{
		return default(SchemaType);
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x5FCC500", Offset = "0x5FCB500", VA = "0x5FCC500")]
	public bool ParseReaderNode()
	{
		return default(bool);
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x5FCCEA0", Offset = "0x5FCBEA0", VA = "0x5FCCEA0")]
	private void ProcessAppInfoDocMarkup(bool root)
	{
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x5FCD170", Offset = "0x5FCC170", VA = "0x5FCD170")]
	private XmlElement LoadElementNode(bool root)
	{
		return null;
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x5FCD7F0", Offset = "0x5FCC7F0", VA = "0x5FCD7F0")]
	private XmlAttribute CreateXmlNsAttribute(string prefix, string value)
	{
		return null;
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x5FCD5E0", Offset = "0x5FCC5E0", VA = "0x5FCD5E0")]
	private XmlAttribute LoadAttributeNode()
	{
		return null;
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x5FCD920", Offset = "0x5FCC920", VA = "0x5FCD920")]
	private XmlEntityReference LoadEntityReferenceInAttribute()
	{
		return null;
	}
}
