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
		[Address(RVA = "0x4464660", Offset = "0x4464660", VA = "0x4464660")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x4458C60", Offset = "0x4458C60", VA = "0x4458C60")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x4464720", Offset = "0x4464720", VA = "0x4464720")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x4464730", Offset = "0x4464730", VA = "0x4464730")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	internal bool IsXmlResolverSet
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x4464790", Offset = "0x4464790", VA = "0x4464790")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x44647A0", Offset = "0x44647A0", VA = "0x44647A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x44647B0", Offset = "0x44647B0", VA = "0x44647B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int LineNumberOffset
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x4464840", Offset = "0x4464840", VA = "0x4464840")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x4464850", Offset = "0x4464850", VA = "0x4464850")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public int LinePositionOffset
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x4464890", Offset = "0x4464890", VA = "0x4464890")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x44648A0", Offset = "0x44648A0", VA = "0x44648A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public ConformanceLevel ConformanceLevel
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x44648E0", Offset = "0x44648E0", VA = "0x44648E0")]
		get
		{
			return default(ConformanceLevel);
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x44648F0", Offset = "0x44648F0", VA = "0x44648F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public bool CheckCharacters
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x4464980", Offset = "0x4464980", VA = "0x4464980")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x4464990", Offset = "0x4464990", VA = "0x4464990")]
		set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public long MaxCharactersInDocument
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x44649E0", Offset = "0x44649E0", VA = "0x44649E0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x44649F0", Offset = "0x44649F0", VA = "0x44649F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public long MaxCharactersFromEntities
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x4464A80", Offset = "0x4464A80", VA = "0x4464A80")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x4464A90", Offset = "0x4464A90", VA = "0x4464A90")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public bool IgnoreWhitespace
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x4464B20", Offset = "0x4464B20", VA = "0x4464B20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x4464B30", Offset = "0x4464B30", VA = "0x4464B30")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public bool IgnoreProcessingInstructions
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x4464B80", Offset = "0x4464B80", VA = "0x4464B80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x4464B90", Offset = "0x4464B90", VA = "0x4464B90")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public bool IgnoreComments
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x4464BE0", Offset = "0x4464BE0", VA = "0x4464BE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x4464BF0", Offset = "0x4464BF0", VA = "0x4464BF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public DtdProcessing DtdProcessing
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x4464C40", Offset = "0x4464C40", VA = "0x4464C40")]
		get
		{
			return default(DtdProcessing);
		}
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x4464C50", Offset = "0x4464C50", VA = "0x4464C50")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool CloseInput
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x4464CE0", Offset = "0x4464CE0", VA = "0x4464CE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x4464CF0", Offset = "0x4464CF0", VA = "0x4464CF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public ValidationType ValidationType
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x4464D40", Offset = "0x4464D40", VA = "0x4464D40")]
		get
		{
			return default(ValidationType);
		}
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x4464D50", Offset = "0x4464D50", VA = "0x4464D50")]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public XmlSchemaValidationFlags ValidationFlags
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x4464DE0", Offset = "0x4464DE0", VA = "0x4464DE0")]
		get
		{
			return default(XmlSchemaValidationFlags);
		}
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x4464DF0", Offset = "0x4464DF0", VA = "0x4464DF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public XmlSchemaSet Schemas
	{
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x4464E80", Offset = "0x4464E80", VA = "0x4464E80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x4464F00", Offset = "0x4464F00", VA = "0x4464F00")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	internal bool ReadOnly
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x4464F70", Offset = "0x4464F70", VA = "0x4464F70")]
		set
		{
		}
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x4458C40", Offset = "0x4458C40", VA = "0x4458C40")]
	public XmlReaderSettings()
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x4464810", Offset = "0x4464810", VA = "0x4464810")]
	internal XmlResolver GetXmlResolver()
	{
		return null;
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x4464820", Offset = "0x4464820", VA = "0x4464820")]
	internal XmlResolver GetXmlResolver_CheckConfig()
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x4458BF0", Offset = "0x4458BF0", VA = "0x4458BF0")]
	public XmlReaderSettings Clone()
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x4464F60", Offset = "0x4464F60", VA = "0x4464F60")]
	internal ValidationEventHandler GetEventHandler()
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x4463DA0", Offset = "0x4463DA0", VA = "0x4463DA0")]
	internal XmlReader CreateReader(Stream input, Uri baseUri, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x4463FA0", Offset = "0x4463FA0", VA = "0x4463FA0")]
	internal XmlReader CreateReader(TextReader input, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4464670", Offset = "0x4464670", VA = "0x4464670")]
	private void CheckReadOnly(string propertyName)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x4464650", Offset = "0x4464650", VA = "0x4464650")]
	private void Initialize()
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x4464F80", Offset = "0x4464F80", VA = "0x4464F80")]
	private void Initialize(XmlResolver resolver)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x4465050", Offset = "0x4465050", VA = "0x4465050")]
	private static XmlResolver CreateDefaultResolver()
	{
		return null;
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x44644D0", Offset = "0x44644D0", VA = "0x44644D0")]
	internal XmlReader AddValidation(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4465190", Offset = "0x4465190", VA = "0x4465190")]
	private XmlValidatingReaderImpl CreateDtdValidatingReader(XmlReader baseReader)
	{
		return null;
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4465090", Offset = "0x4465090", VA = "0x4465090")]
	internal static bool EnableLegacyXmlSettings()
	{
		return default(bool);
	}
}
