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
		[Address(RVA = "0x4503D80", Offset = "0x4503D80", VA = "0x4503D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F8")]
	public XmlSchemaCollection SchemaCollection
	{
		[Token(Token = "0x6000F67")]
		[Address(RVA = "0x4503D90", Offset = "0x4503D90", VA = "0x4503D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F9")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000F68")]
		[Address(RVA = "0x4503DA0", Offset = "0x4503DA0", VA = "0x4503DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FA")]
	public SchemaNames SchemaNames
	{
		[Token(Token = "0x6000F69")]
		[Address(RVA = "0x4502A70", Offset = "0x4502A70", VA = "0x4502A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FB")]
	public PositionInfo PositionInfo
	{
		[Token(Token = "0x6000F6A")]
		[Address(RVA = "0x4503DB0", Offset = "0x4503DB0", VA = "0x4503DB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FC")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x6000F6B")]
		[Address(RVA = "0x4503DC0", Offset = "0x4503DC0", VA = "0x4503DC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6C")]
		[Address(RVA = "0x4503DD0", Offset = "0x4503DD0", VA = "0x4503DD0")]
		set
		{
		}
	}

	[Token(Token = "0x170003FD")]
	public Uri BaseUri
	{
		[Token(Token = "0x6000F6D")]
		[Address(RVA = "0x4503DE0", Offset = "0x4503DE0", VA = "0x4503DE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6E")]
		[Address(RVA = "0x4503DF0", Offset = "0x4503DF0", VA = "0x4503DF0")]
		set
		{
		}
	}

	[Token(Token = "0x170003FE")]
	public ValidationEventHandler EventHandler
	{
		[Token(Token = "0x6000F6F")]
		[Address(RVA = "0x4503E00", Offset = "0x4503E00", VA = "0x4503E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FF")]
	public SchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x4503EC0", Offset = "0x4503EC0", VA = "0x4503EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000400")]
	public IDtdInfo DtdInfo
	{
		[Token(Token = "0x6000F71")]
		[Address(RVA = "0x4503ED0", Offset = "0x4503ED0", VA = "0x4503ED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000401")]
	public virtual bool PreserveWhitespace
	{
		[Token(Token = "0x6000F72")]
		[Address(RVA = "0x4503FB0", Offset = "0x4503FB0", VA = "0x4503FB0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x4503CB0", Offset = "0x4503CB0", VA = "0x4503CB0")]
	public BaseValidator(BaseValidator other)
	{
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x4502480", Offset = "0x4502480", VA = "0x4502480")]
	public BaseValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x4503FC0", Offset = "0x4503FC0", VA = "0x4503FC0", Slot = "5")]
	public virtual void Validate()
	{
	}

	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x4503FD0", Offset = "0x4503FD0", VA = "0x4503FD0", Slot = "6")]
	public virtual void CompleteValidation()
	{
	}

	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4503FE0", Offset = "0x4503FE0", VA = "0x4503FE0", Slot = "7")]
	public virtual object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x4503FF0", Offset = "0x4503FF0", VA = "0x4503FF0")]
	public void ValidateText()
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x45044F0", Offset = "0x45044F0", VA = "0x45044F0")]
	public void ValidateWhitespace()
	{
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4504480", Offset = "0x4504480", VA = "0x4504480")]
	private void SaveTextValue(string value)
	{
	}

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x4504620", Offset = "0x4504620", VA = "0x4504620")]
	protected void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x4504390", Offset = "0x4504390", VA = "0x4504390")]
	protected void SendValidationEvent(string code, string[] args)
	{
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x45042A0", Offset = "0x45042A0", VA = "0x45042A0")]
	protected void SendValidationEvent(string code, string arg)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x4504640", Offset = "0x4504640", VA = "0x4504640")]
	protected void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x4504720", Offset = "0x4504720", VA = "0x4504720")]
	protected void SendValidationEvent(string code, string msg, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x4504810", Offset = "0x4504810", VA = "0x4504810")]
	protected void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x4504650", Offset = "0x4504650", VA = "0x4504650")]
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x4504900", Offset = "0x4504900", VA = "0x4504900")]
	protected static void ProcessEntity(SchemaInfo sinfo, string name, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x4504AD0", Offset = "0x4504AD0", VA = "0x4504AD0")]
	protected static void ProcessEntity(SchemaInfo sinfo, string name, IValidationEventHandling eventHandling, string baseUriStr, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4504CE0", Offset = "0x4504CE0", VA = "0x4504CE0")]
	public static BaseValidator CreateInstance(ValidationType valType, XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling, bool processIdentityConstraints)
	{
		return null;
	}
}
