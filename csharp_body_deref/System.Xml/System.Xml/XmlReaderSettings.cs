// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlReaderSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.CompilerServices;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000052")]
public sealed class XmlReaderSettings
{
	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x10")]
	private bool useAsync;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x18")]
	private XmlNameTable nameTable;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x20")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x28")]
	private int lineNumberOffset;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x2C")]
	private int linePositionOffset;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x30")]
	private ConformanceLevel conformanceLevel;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x34")]
	private bool checkCharacters;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x38")]
	private long maxCharactersInDocument;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x40")]
	private long maxCharactersFromEntities;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x48")]
	private bool ignoreWhitespace;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x49")]
	private bool ignorePIs;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x4A")]
	private bool ignoreComments;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x4C")]
	private DtdProcessing dtdProcessing;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x50")]
	private ValidationType validationType;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x54")]
	private XmlSchemaValidationFlags validationFlags;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaSet schemas;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x60")]
	private ValidationEventHandler valEventHandler;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x68")]
	private bool closeInput;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x69")]
	private bool isReadOnly;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x0")]
	private static bool? s_enableLegacyXmlSettings;

	[Token(Token = "0x170000A7")]
	public bool Async
	{
		[Token(Token = "0x6000370")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x26EDD00", Offset = "0x26EC300", VA = "0x1826EDD00")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x26EE210", Offset = "0x26EC810", VA = "0x1826EE210")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	internal bool IsXmlResolverSet
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x26EDC80", Offset = "0x26EC280", VA = "0x1826EDC80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x26EE020", Offset = "0x26EC620", VA = "0x1826EE020")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x26EE410", Offset = "0x26ECA10", VA = "0x1826EE410")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int LineNumberOffset
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x26EE030", Offset = "0x26EC630", VA = "0x1826EE030")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public int LinePositionOffset
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x26EE080", Offset = "0x26EC680", VA = "0x1826EE080")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public ConformanceLevel ConformanceLevel
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(ConformanceLevel);
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x26EDDF0", Offset = "0x26EC3F0", VA = "0x1826EDDF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public bool CheckCharacters
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x26EDD50", Offset = "0x26EC350", VA = "0x1826EDD50")]
		set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public long MaxCharactersInDocument
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x26EE170", Offset = "0x26EC770", VA = "0x1826EE170")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public long MaxCharactersFromEntities
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x26EE0D0", Offset = "0x26EC6D0", VA = "0x1826EE0D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public bool IgnoreWhitespace
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x26EDFD0", Offset = "0x26EC5D0", VA = "0x1826EDFD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public bool IgnoreProcessingInstructions
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x58A880", Offset = "0x588E80", VA = "0x18058A880")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x26EDF80", Offset = "0x26EC580", VA = "0x1826EDF80")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public bool IgnoreComments
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x26EDC70", Offset = "0x26EC270", VA = "0x1826EDC70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x26EDF30", Offset = "0x26EC530", VA = "0x1826EDF30")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public DtdProcessing DtdProcessing
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		get
		{
			return default(DtdProcessing);
		}
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x26EDE90", Offset = "0x26EC490", VA = "0x1826EDE90")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool CloseInput
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x26EDDA0", Offset = "0x26EC3A0", VA = "0x1826EDDA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public ValidationType ValidationType
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(ValidationType);
		}
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x26EE370", Offset = "0x26EC970", VA = "0x1826EE370")]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public XmlSchemaValidationFlags ValidationFlags
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0xB57820", Offset = "0xB55E20", VA = "0x180B57820")]
		get
		{
			return default(XmlSchemaValidationFlags);
		}
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x26EE2D0", Offset = "0x26EC8D0", VA = "0x1826EE2D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public XmlSchemaSet Schemas
	{
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x26EDC90", Offset = "0x26EC290", VA = "0x1826EDC90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x26EE270", Offset = "0x26EC870", VA = "0x1826EE270")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	internal bool ReadOnly
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x12BF1C0", Offset = "0x12BD7C0", VA = "0x1812BF1C0")]
		set
		{
		}
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x26EDB90", Offset = "0x26EC190", VA = "0x1826EDB90")]
	public XmlReaderSettings()
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
	internal XmlResolver GetXmlResolver()
	{
		return null;
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x26ED9C0", Offset = "0x26EBFC0", VA = "0x1826ED9C0")]
	internal XmlResolver GetXmlResolver_CheckConfig()
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x26ED520", Offset = "0x26EBB20", VA = "0x1826ED520")]
	public XmlReaderSettings Clone()
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
	internal ValidationEventHandler GetEventHandler()
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x26ED750", Offset = "0x26EBD50", VA = "0x1826ED750")]
	internal XmlReader CreateReader(Stream input, Uri baseUri, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x26ED640", Offset = "0x26EBC40", VA = "0x1826ED640")]
	internal XmlReader CreateReader(TextReader input, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x26ED470", Offset = "0x26EBA70", VA = "0x1826ED470")]
	private void CheckReadOnly(string propertyName)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x26EDAC0", Offset = "0x26EC0C0", VA = "0x1826EDAC0")]
	private void Initialize()
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x26ED9F0", Offset = "0x26EBFF0", VA = "0x1826ED9F0")]
	private void Initialize(XmlResolver resolver)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x26ED580", Offset = "0x26EBB80", VA = "0x1826ED580")]
	private static XmlResolver CreateDefaultResolver()
	{
		return null;
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x26ED330", Offset = "0x26EB930", VA = "0x1826ED330")]
	internal XmlReader AddValidation(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x26ED5D0", Offset = "0x26EBBD0", VA = "0x1826ED5D0")]
	private XmlValidatingReaderImpl CreateDtdValidatingReader(XmlReader baseReader)
	{
		return null;
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x26ED8F0", Offset = "0x26EBEF0", VA = "0x1826ED8F0")]
	internal static bool EnableLegacyXmlSettings()
	{
		return default(bool);
	}
}
