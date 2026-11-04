// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.BaseValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000165")]
internal class BaseValidator
{
	[Token(Token = "0x4000736")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaCollection schemaCollection;

	[Token(Token = "0x4000737")]
	[FieldOffset(Offset = "0x18")]
	private IValidationEventHandling eventHandling;

	[Token(Token = "0x4000738")]
	[FieldOffset(Offset = "0x20")]
	private XmlNameTable nameTable;

	[Token(Token = "0x4000739")]
	[FieldOffset(Offset = "0x28")]
	private SchemaNames schemaNames;

	[Token(Token = "0x400073A")]
	[FieldOffset(Offset = "0x30")]
	private PositionInfo positionInfo;

	[Token(Token = "0x400073B")]
	[FieldOffset(Offset = "0x38")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x400073C")]
	[FieldOffset(Offset = "0x40")]
	private Uri baseUri;

	[Token(Token = "0x400073D")]
	[FieldOffset(Offset = "0x48")]
	protected SchemaInfo schemaInfo;

	[Token(Token = "0x400073E")]
	[FieldOffset(Offset = "0x50")]
	protected XmlValidatingReaderImpl reader;

	[Token(Token = "0x400073F")]
	[FieldOffset(Offset = "0x58")]
	protected XmlQualifiedName elementName;

	[Token(Token = "0x4000740")]
	[FieldOffset(Offset = "0x60")]
	protected ValidationState context;

	[Token(Token = "0x4000741")]
	[FieldOffset(Offset = "0x68")]
	protected StringBuilder textValue;

	[Token(Token = "0x4000742")]
	[FieldOffset(Offset = "0x70")]
	protected string textString;

	[Token(Token = "0x4000743")]
	[FieldOffset(Offset = "0x78")]
	protected bool hasSibling;

	[Token(Token = "0x4000744")]
	[FieldOffset(Offset = "0x79")]
	protected bool checkDatatype;

	[Token(Token = "0x170003F7")]
	public XmlValidatingReaderImpl Reader
	{
		[Token(Token = "0x6000F66")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F8")]
	public XmlSchemaCollection SchemaCollection
	{
		[Token(Token = "0x6000F67")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F9")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000F68")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FA")]
	public SchemaNames SchemaNames
	{
		[Token(Token = "0x6000F69")]
		[Address(RVA = "0x2779760", Offset = "0x2777D60", VA = "0x182779760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FB")]
	public PositionInfo PositionInfo
	{
		[Token(Token = "0x6000F6A")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FC")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6000F6B")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6C")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x170003FD")]
	public Uri BaseUri
	{
		[Token(Token = "0x6000F6D")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6E")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x170003FE")]
	public ValidationEventHandler EventHandler
	{
		[Token(Token = "0x6000F6F")]
		[Address(RVA = "0x27796E0", Offset = "0x2777CE0", VA = "0x1827796E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FF")]
	public SchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000400")]
	public IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x2779810", Offset = "0x2777E10", VA = "0x182779810")]
		set
		{
		}
	}

	[Token(Token = "0x17000401")]
	public virtual bool PreserveWhitespace
	{
		[Token(Token = "0x6000F72")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x2779610", Offset = "0x2777C10", VA = "0x182779610")]
	public BaseValidator(BaseValidator other)
	{
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x2779520", Offset = "0x2777B20", VA = "0x182779520")]
	public BaseValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public virtual void Validate()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public virtual void CompleteValidation()
	{
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
	public virtual object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x2779070", Offset = "0x2777670", VA = "0x182779070")]
	public void ValidateText()
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x27793D0", Offset = "0x27779D0", VA = "0x1827793D0")]
	public void ValidateWhitespace()
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x2778A50", Offset = "0x2777050", VA = "0x182778A50")]
	private void SaveTextValue(string value)
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x2778BF0", Offset = "0x27771F0", VA = "0x182778BF0")]
	protected void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x2778F60", Offset = "0x2777560", VA = "0x182778F60")]
	protected void SendValidationEvent(string code, string[] args)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x2778DC0", Offset = "0x27773C0", VA = "0x182778DC0")]
	protected void SendValidationEvent(string code, string arg)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x2778D30", Offset = "0x2777330", VA = "0x182778D30")]
	protected void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x2778C10", Offset = "0x2777210", VA = "0x182778C10")]
	protected void SendValidationEvent(string code, string msg, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x2778AD0", Offset = "0x27770D0", VA = "0x182778AD0")]
	protected void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x2778ED0", Offset = "0x27774D0", VA = "0x182778ED0")]
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x27786D0", Offset = "0x2776CD0", VA = "0x1827786D0")]
	protected static void ProcessEntity(SchemaInfo sinfo, string name, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x27788A0", Offset = "0x2776EA0", VA = "0x1827788A0")]
	protected static void ProcessEntity(SchemaInfo sinfo, string name, IValidationEventHandling eventHandling, string baseUriStr, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x27784E0", Offset = "0x2776AE0", VA = "0x1827784E0")]
	public static BaseValidator CreateInstance(ValidationType valType, XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling, bool processIdentityConstraints)
	{
		return null;
	}
}
