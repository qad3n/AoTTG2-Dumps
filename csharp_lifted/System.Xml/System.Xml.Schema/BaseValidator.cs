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
		[Address(RVA = "0x6140560", Offset = "0x613F560", VA = "0x6140560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F8")]
	public XmlSchemaCollection SchemaCollection
	{
		[Token(Token = "0x6000F67")]
		[Address(RVA = "0x6140570", Offset = "0x613F570", VA = "0x6140570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F9")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000F68")]
		[Address(RVA = "0x6140580", Offset = "0x613F580", VA = "0x6140580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FA")]
	public SchemaNames SchemaNames
	{
		[Token(Token = "0x6000F69")]
		[Address(RVA = "0x613F220", Offset = "0x613E220", VA = "0x613F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FB")]
	public PositionInfo PositionInfo
	{
		[Token(Token = "0x6000F6A")]
		[Address(RVA = "0x6140590", Offset = "0x613F590", VA = "0x6140590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FC")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6000F6B")]
		[Address(RVA = "0x61405A0", Offset = "0x613F5A0", VA = "0x61405A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6C")]
		[Address(RVA = "0x61405B0", Offset = "0x613F5B0", VA = "0x61405B0")]
		set
		{
		}
	}

	[Token(Token = "0x170003FD")]
	public Uri BaseUri
	{
		[Token(Token = "0x6000F6D")]
		[Address(RVA = "0x61405C0", Offset = "0x613F5C0", VA = "0x61405C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6E")]
		[Address(RVA = "0x61405D0", Offset = "0x613F5D0", VA = "0x61405D0")]
		set
		{
		}
	}

	[Token(Token = "0x170003FE")]
	public ValidationEventHandler EventHandler
	{
		[Token(Token = "0x6000F6F")]
		[Address(RVA = "0x61405E0", Offset = "0x613F5E0", VA = "0x61405E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FF")]
	public SchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x61406A0", Offset = "0x613F6A0", VA = "0x61406A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000400")]
	public IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x61406B0", Offset = "0x613F6B0", VA = "0x61406B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000401")]
	public virtual bool PreserveWhitespace
	{
		[Token(Token = "0x6000F72")]
		[Address(RVA = "0x6140790", Offset = "0x613F790", VA = "0x6140790", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x6140490", Offset = "0x613F490", VA = "0x6140490")]
	public BaseValidator(BaseValidator other)
	{
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x613EA10", Offset = "0x613DA10", VA = "0x613EA10")]
	public BaseValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x61407A0", Offset = "0x613F7A0", VA = "0x61407A0", Slot = "5")]
	public virtual void Validate()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x61407B0", Offset = "0x613F7B0", VA = "0x61407B0", Slot = "6")]
	public virtual void CompleteValidation()
	{
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x61407C0", Offset = "0x613F7C0", VA = "0x61407C0", Slot = "7")]
	public virtual object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x61407D0", Offset = "0x613F7D0", VA = "0x61407D0")]
	public void ValidateText()
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x6140CE0", Offset = "0x613FCE0", VA = "0x6140CE0")]
	public void ValidateWhitespace()
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x6140C70", Offset = "0x613FC70", VA = "0x6140C70")]
	private void SaveTextValue(string value)
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x6140E10", Offset = "0x613FE10", VA = "0x6140E10")]
	protected void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x6140B80", Offset = "0x613FB80", VA = "0x6140B80")]
	protected void SendValidationEvent(string code, string[] args)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x6140A90", Offset = "0x613FA90", VA = "0x6140A90")]
	protected void SendValidationEvent(string code, string arg)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x6140E30", Offset = "0x613FE30", VA = "0x6140E30")]
	protected void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x6140F10", Offset = "0x613FF10", VA = "0x6140F10")]
	protected void SendValidationEvent(string code, string msg, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x6141000", Offset = "0x6140000", VA = "0x6141000")]
	protected void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x6140E40", Offset = "0x613FE40", VA = "0x6140E40")]
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x61410F0", Offset = "0x61400F0", VA = "0x61410F0")]
	protected static void ProcessEntity(SchemaInfo sinfo, string name, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x61412C0", Offset = "0x61402C0", VA = "0x61412C0")]
	protected static void ProcessEntity(SchemaInfo sinfo, string name, IValidationEventHandling eventHandling, string baseUriStr, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x61414D0", Offset = "0x61404D0", VA = "0x61414D0")]
	public static BaseValidator CreateInstance(ValidationType valType, XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling, bool processIdentityConstraints)
	{
		return null;
	}
}
