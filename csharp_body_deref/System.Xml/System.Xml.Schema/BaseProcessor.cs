using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000164")]
internal class BaseProcessor
{
	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0x10")]
	private XmlNameTable nameTable;

	[Token(Token = "0x4000731")]
	[FieldOffset(Offset = "0x18")]
	private SchemaNames schemaNames;

	[Token(Token = "0x4000732")]
	[FieldOffset(Offset = "0x20")]
	private ValidationEventHandler eventHandler;

	[Token(Token = "0x4000733")]
	[FieldOffset(Offset = "0x28")]
	private XmlSchemaCompilationSettings compilationSettings;

	[Token(Token = "0x4000734")]
	[FieldOffset(Offset = "0x30")]
	private int errorCount;

	[Token(Token = "0x4000735")]
	[FieldOffset(Offset = "0x38")]
	private string NsXml;

	[Token(Token = "0x170003F2")]
	protected XmlNameTable NameTable
	{
		[Token(Token = "0x6000F51")]
		[Address(RVA = "0x4502C40", Offset = "0x4502C40", VA = "0x4502C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F3")]
	protected SchemaNames SchemaNames
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x4502C50", Offset = "0x4502C50", VA = "0x4502C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F4")]
	protected ValidationEventHandler EventHandler
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x4502CD0", Offset = "0x4502CD0", VA = "0x4502CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F5")]
	protected XmlSchemaCompilationSettings CompilationSettings
	{
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0x4502CE0", Offset = "0x4502CE0", VA = "0x4502CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F6")]
	protected bool HasErrors
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x4502CF0", Offset = "0x4502CF0", VA = "0x4502CF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x4502B00", Offset = "0x4502B00", VA = "0x4502B00")]
	public BaseProcessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x4502B70", Offset = "0x4502B70", VA = "0x4502B70")]
	public BaseProcessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x4502D00", Offset = "0x4502D00", VA = "0x4502D00")]
	protected void AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item)
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x4503170", Offset = "0x4503170", VA = "0x4503170")]
	private bool IsValidAttributeGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x4503370", Offset = "0x4503370", VA = "0x4503370")]
	private bool IsValidGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x4503270", Offset = "0x4503270", VA = "0x4503270")]
	private bool IsValidTypeRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x4503530", Offset = "0x4503530", VA = "0x4503530")]
	protected void SendValidationEvent(string code, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x4503450", Offset = "0x4503450", VA = "0x4503450")]
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x45036B0", Offset = "0x45036B0", VA = "0x45036B0")]
	protected void SendValidationEvent(string code, string msg1, string msg2, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x4503800", Offset = "0x4503800", VA = "0x4503800")]
	protected void SendValidationEvent(string code, string[] args, Exception innerException, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x4503920", Offset = "0x4503920", VA = "0x4503920")]
	protected void SendValidationEvent(string code, string msg1, string msg2, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x4503A90", Offset = "0x4503A90", VA = "0x4503A90")]
	protected void SendValidationEvent(string code, XmlSchemaObject source, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x4503B00", Offset = "0x4503B00", VA = "0x4503B00")]
	protected void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x4503B90", Offset = "0x4503B90", VA = "0x4503B90")]
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x4503600", Offset = "0x4503600", VA = "0x4503600")]
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x4503C10", Offset = "0x4503C10", VA = "0x4503C10")]
	protected void SendValidationEventNoThrow(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
