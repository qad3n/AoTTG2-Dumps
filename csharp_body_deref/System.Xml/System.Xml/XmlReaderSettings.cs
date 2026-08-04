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
		[Address(RVA = "0x47A1DC0", Offset = "0x47A1DC0", VA = "0x47A1DC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x47963C0", Offset = "0x47963C0", VA = "0x47963C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x47A1E80", Offset = "0x47A1E80", VA = "0x47A1E80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x47A1E90", Offset = "0x47A1E90", VA = "0x47A1E90")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	internal bool IsXmlResolverSet
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x47A1EF0", Offset = "0x47A1EF0", VA = "0x47A1EF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x47A1F00", Offset = "0x47A1F00", VA = "0x47A1F00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x47A1F10", Offset = "0x47A1F10", VA = "0x47A1F10")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int LineNumberOffset
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x47A1FA0", Offset = "0x47A1FA0", VA = "0x47A1FA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x47A1FB0", Offset = "0x47A1FB0", VA = "0x47A1FB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public int LinePositionOffset
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x47A1FF0", Offset = "0x47A1FF0", VA = "0x47A1FF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x47A2000", Offset = "0x47A2000", VA = "0x47A2000")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public ConformanceLevel ConformanceLevel
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x47A2040", Offset = "0x47A2040", VA = "0x47A2040")]
		get
		{
			return default(ConformanceLevel);
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x47A2050", Offset = "0x47A2050", VA = "0x47A2050")]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public bool CheckCharacters
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x47A20E0", Offset = "0x47A20E0", VA = "0x47A20E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x47A20F0", Offset = "0x47A20F0", VA = "0x47A20F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public long MaxCharactersInDocument
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x47A2140", Offset = "0x47A2140", VA = "0x47A2140")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x47A2150", Offset = "0x47A2150", VA = "0x47A2150")]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public long MaxCharactersFromEntities
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x47A21E0", Offset = "0x47A21E0", VA = "0x47A21E0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x47A21F0", Offset = "0x47A21F0", VA = "0x47A21F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public bool IgnoreWhitespace
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x47A2280", Offset = "0x47A2280", VA = "0x47A2280")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x47A2290", Offset = "0x47A2290", VA = "0x47A2290")]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public bool IgnoreProcessingInstructions
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x47A22E0", Offset = "0x47A22E0", VA = "0x47A22E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x47A22F0", Offset = "0x47A22F0", VA = "0x47A22F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	public bool IgnoreComments
	{
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x47A2340", Offset = "0x47A2340", VA = "0x47A2340")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x47A2350", Offset = "0x47A2350", VA = "0x47A2350")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public DtdProcessing DtdProcessing
	{
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x47A23A0", Offset = "0x47A23A0", VA = "0x47A23A0")]
		get
		{
			return default(DtdProcessing);
		}
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x47A23B0", Offset = "0x47A23B0", VA = "0x47A23B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool CloseInput
	{
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x47A2440", Offset = "0x47A2440", VA = "0x47A2440")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x47A2450", Offset = "0x47A2450", VA = "0x47A2450")]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public ValidationType ValidationType
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x47A24A0", Offset = "0x47A24A0", VA = "0x47A24A0")]
		get
		{
			return default(ValidationType);
		}
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x47A24B0", Offset = "0x47A24B0", VA = "0x47A24B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public XmlSchemaValidationFlags ValidationFlags
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x47A2540", Offset = "0x47A2540", VA = "0x47A2540")]
		get
		{
			return default(XmlSchemaValidationFlags);
		}
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x47A2550", Offset = "0x47A2550", VA = "0x47A2550")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public XmlSchemaSet Schemas
	{
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x47A25E0", Offset = "0x47A25E0", VA = "0x47A25E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x47A2660", Offset = "0x47A2660", VA = "0x47A2660")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	internal bool ReadOnly
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x47A26D0", Offset = "0x47A26D0", VA = "0x47A26D0")]
		set
		{
		}
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x47963A0", Offset = "0x47963A0", VA = "0x47963A0")]
	public XmlReaderSettings()
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x47A1F70", Offset = "0x47A1F70", VA = "0x47A1F70")]
	internal XmlResolver GetXmlResolver()
	{
		return null;
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x47A1F80", Offset = "0x47A1F80", VA = "0x47A1F80")]
	internal XmlResolver GetXmlResolver_CheckConfig()
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x4796350", Offset = "0x4796350", VA = "0x4796350")]
	public XmlReaderSettings Clone()
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x47A26C0", Offset = "0x47A26C0", VA = "0x47A26C0")]
	internal ValidationEventHandler GetEventHandler()
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x47A1500", Offset = "0x47A1500", VA = "0x47A1500")]
	internal XmlReader CreateReader(Stream input, Uri baseUri, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x47A1700", Offset = "0x47A1700", VA = "0x47A1700")]
	internal XmlReader CreateReader(TextReader input, string baseUriString, XmlParserContext inputContext)
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x47A1DD0", Offset = "0x47A1DD0", VA = "0x47A1DD0")]
	private void CheckReadOnly(string propertyName)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x47A1DB0", Offset = "0x47A1DB0", VA = "0x47A1DB0")]
	private void Initialize()
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x47A26E0", Offset = "0x47A26E0", VA = "0x47A26E0")]
	private void Initialize(XmlResolver resolver)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x47A27B0", Offset = "0x47A27B0", VA = "0x47A27B0")]
	private static XmlResolver CreateDefaultResolver()
	{
		return null;
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x47A1C30", Offset = "0x47A1C30", VA = "0x47A1C30")]
	internal XmlReader AddValidation(XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x47A28F0", Offset = "0x47A28F0", VA = "0x47A28F0")]
	private XmlValidatingReaderImpl CreateDtdValidatingReader(XmlReader baseReader)
	{
		return null;
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x47A27F0", Offset = "0x47A27F0", VA = "0x47A27F0")]
	internal static bool EnableLegacyXmlSettings()
	{
		return default(bool);
	}
}
