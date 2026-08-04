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
		[Address(RVA = "0x48414E0", Offset = "0x48414E0", VA = "0x48414E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F8")]
	public XmlSchemaCollection SchemaCollection
	{
		[Token(Token = "0x6000F67")]
		[Address(RVA = "0x48414F0", Offset = "0x48414F0", VA = "0x48414F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F9")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000F68")]
		[Address(RVA = "0x4841500", Offset = "0x4841500", VA = "0x4841500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FA")]
	public SchemaNames SchemaNames
	{
		[Token(Token = "0x6000F69")]
		[Address(RVA = "0x48401D0", Offset = "0x48401D0", VA = "0x48401D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FB")]
	public PositionInfo PositionInfo
	{
		[Token(Token = "0x6000F6A")]
		[Address(RVA = "0x4841510", Offset = "0x4841510", VA = "0x4841510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FC")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6000F6B")]
		[Address(RVA = "0x4841520", Offset = "0x4841520", VA = "0x4841520")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6C")]
		[Address(RVA = "0x4841530", Offset = "0x4841530", VA = "0x4841530")]
		set
		{
		}
	}

	[Token(Token = "0x170003FD")]
	public Uri BaseUri
	{
		[Token(Token = "0x6000F6D")]
		[Address(RVA = "0x4841540", Offset = "0x4841540", VA = "0x4841540")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6E")]
		[Address(RVA = "0x4841550", Offset = "0x4841550", VA = "0x4841550")]
		set
		{
		}
	}

	[Token(Token = "0x170003FE")]
	public ValidationEventHandler EventHandler
	{
		[Token(Token = "0x6000F6F")]
		[Address(RVA = "0x4841560", Offset = "0x4841560", VA = "0x4841560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FF")]
	public SchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x4841620", Offset = "0x4841620", VA = "0x4841620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000400")]
	public IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x4841630", Offset = "0x4841630", VA = "0x4841630")]
		set
		{
		}
	}

	[Token(Token = "0x17000401")]
	public virtual bool PreserveWhitespace
	{
		[Token(Token = "0x6000F72")]
		[Address(RVA = "0x4841710", Offset = "0x4841710", VA = "0x4841710", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x4841410", Offset = "0x4841410", VA = "0x4841410")]
	public BaseValidator(BaseValidator other)
	{
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x483FBE0", Offset = "0x483FBE0", VA = "0x483FBE0")]
	public BaseValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x4841720", Offset = "0x4841720", VA = "0x4841720", Slot = "5")]
	public virtual void Validate()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x4841730", Offset = "0x4841730", VA = "0x4841730", Slot = "6")]
	public virtual void CompleteValidation()
	{
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4841740", Offset = "0x4841740", VA = "0x4841740", Slot = "7")]
	public virtual object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x4841750", Offset = "0x4841750", VA = "0x4841750")]
	public void ValidateText()
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x4841C50", Offset = "0x4841C50", VA = "0x4841C50")]
	public void ValidateWhitespace()
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4841BE0", Offset = "0x4841BE0", VA = "0x4841BE0")]
	private void SaveTextValue(string value)
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x4841D80", Offset = "0x4841D80", VA = "0x4841D80")]
	protected void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x4841AF0", Offset = "0x4841AF0", VA = "0x4841AF0")]
	protected void SendValidationEvent(string code, string[] args)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x4841A00", Offset = "0x4841A00", VA = "0x4841A00")]
	protected void SendValidationEvent(string code, string arg)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x4841DA0", Offset = "0x4841DA0", VA = "0x4841DA0")]
	protected void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x4841E80", Offset = "0x4841E80", VA = "0x4841E80")]
	protected void SendValidationEvent(string code, string msg, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x4841F70", Offset = "0x4841F70", VA = "0x4841F70")]
	protected void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x4841DB0", Offset = "0x4841DB0", VA = "0x4841DB0")]
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x4842060", Offset = "0x4842060", VA = "0x4842060")]
	protected static void ProcessEntity(SchemaInfo sinfo, string name, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x4842230", Offset = "0x4842230", VA = "0x4842230")]
	protected static void ProcessEntity(SchemaInfo sinfo, string name, IValidationEventHandling eventHandling, string baseUriStr, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4842440", Offset = "0x4842440", VA = "0x4842440")]
	public static BaseValidator CreateInstance(ValidationType valType, XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling, bool processIdentityConstraints)
	{
		return null;
	}
}
