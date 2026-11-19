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
		[Address(RVA = "0x60A7030", Offset = "0x60A6030", VA = "0x60A7030")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x609B940", Offset = "0x609A940", VA = "0x609B940")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x60A70F0", Offset = "0x60A60F0", VA = "0x60A70F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x60A7100", Offset = "0x60A6100", VA = "0x60A7100")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	internal bool IsXmlResolverSet
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x60A7160", Offset = "0x60A6160", VA = "0x60A7160")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x60A7170", Offset = "0x60A6170", VA = "0x60A7170")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x60A7180", Offset = "0x60A6180", VA = "0x60A7180")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int LineNumberOffset
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x60A7210", Offset = "0x60A6210", VA = "0x60A7210")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x60A7220", Offset = "0x60A6220", VA = "0x60A7220")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public int LinePositionOffset
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x60A7260", Offset = "0x60A6260", VA = "0x60A7260")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x60A7270", Offset = "0x60A6270", VA = "0x60A7270")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public ConformanceLevel ConformanceLevel
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x60A72B0", Offset = "0x60A62B0", VA = "0x60A72B0")]
		get
		{
			return default(ConformanceLevel);
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x60A72C0", Offset = "0x60A62C0", VA = "0x60A72C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public bool CheckCharacters
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x60A7350", Offset = "0x60A6350", VA = "0x60A7350")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x60A7360", Offset = "0x60A6360", VA = "0x60A7360")]
		set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public long MaxCharactersInDocument
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x60A73B0", Offset = "0x60A63B0", VA = "0x60A73B0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x60A73C0", Offset = "0x60A63C0", VA = "0x60A73C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public long MaxCharactersFromEntities
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x60A7450", Offset = "0x60A6450", VA = "0x60A7450")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x60A7460", Offset = "0x60A6460", VA = "0x60A7460")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public bool IgnoreWhitespace
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x60A74F0", Offset = "0x60A64F0", VA = "0x60A74F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x60A7500", Offset = "0x60A6500", VA = "0x60A7500")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public bool IgnoreProcessingInstructions
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x60A7550", Offset = "0x60A6550", VA = "0x60A7550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x60A7560", Offset = "0x60A6560", VA = "0x60A7560")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public bool IgnoreComments
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x60A75B0", Offset = "0x60A65B0", VA = "0x60A75B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x60A75C0", Offset = "0x60A65C0", VA = "0x60A75C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public DtdProcessing DtdProcessing
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x60A7610", Offset = "0x60A6610", VA = "0x60A7610")]
		get
		{
			return default(DtdProcessing);
		}
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x60A7620", Offset = "0x60A6620", VA = "0x60A7620")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool CloseInput
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x60A76B0", Offset = "0x60A66B0", VA = "0x60A76B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x60A76C0", Offset = "0x60A66C0", VA = "0x60A76C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public ValidationType ValidationType
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x60A7710", Offset = "0x60A6710", VA = "0x60A7710")]
		get
		{
			return default(ValidationType);
		}
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x60A7720", Offset = "0x60A6720", VA = "0x60A7720")]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public XmlSchemaValidationFlags ValidationFlags
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x60A77B0", Offset = "0x60A67B0", VA = "0x60A77B0")]
		get
		{
			return default(XmlSchemaValidationFlags);
		}
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x60A77C0", Offset = "0x60A67C0", VA = "0x60A77C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public XmlSchemaSet Schemas
	{
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x60A7850", Offset = "0x60A6850", VA = "0x60A7850")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x60A78D0", Offset = "0x60A68D0", VA = "0x60A78D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	internal bool ReadOnly
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x60A7940", Offset = "0x60A6940", VA = "0x60A7940")]
		set
		{
		}
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x609B920", Offset = "0x609A920", VA = "0x609B920")]
	public XmlReaderSettings()
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x60A71E0", Offset = "0x60A61E0", VA = "0x60A71E0")]
	internal XmlResolver GetXmlResolver()
	{
		return null;
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x60A71F0", Offset = "0x60A61F0", VA = "0x60A71F0")]
	internal XmlResolver GetXmlResolver_CheckConfig()
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x609B8D0", Offset = "0x609A8D0", VA = "0x609B8D0")]
	public XmlReaderSettings Clone()
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x60A7930", Offset = "0x60A6930", VA = "0x60A7930")]
	internal ValidationEventHandler GetEventHandler()
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x60A6770", Offset = "0x60A5770", VA = "0x60A6770")]
	internal XmlReader CreateReader(Stream input, Uri baseUri, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x60A6970", Offset = "0x60A5970", VA = "0x60A6970")]
	internal XmlReader CreateReader(TextReader input, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x60A7040", Offset = "0x60A6040", VA = "0x60A7040")]
	private void CheckReadOnly(string propertyName)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x60A7020", Offset = "0x60A6020", VA = "0x60A7020")]
	private void Initialize()
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x60A7950", Offset = "0x60A6950", VA = "0x60A7950")]
	private void Initialize(XmlResolver resolver)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x60A7B50", Offset = "0x60A6B50", VA = "0x60A7B50")]
	private static XmlResolver CreateDefaultResolver()
	{
		return null;
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x60A6EA0", Offset = "0x60A5EA0", VA = "0x60A6EA0")]
	internal XmlReader AddValidation(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x60A7B90", Offset = "0x60A6B90", VA = "0x60A7B90")]
	private XmlValidatingReaderImpl CreateDtdValidatingReader(XmlReader baseReader)
	{
		return null;
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x60A7A50", Offset = "0x60A6A50", VA = "0x60A7A50")]
	internal static bool EnableLegacyXmlSettings()
	{
		return default(bool);
	}
}
