// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.BaseProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x613F3F0", Offset = "0x613E3F0", VA = "0x613F3F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F3")]
	protected SchemaNames SchemaNames
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x613F400", Offset = "0x613E400", VA = "0x613F400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F4")]
	protected ValidationEventHandler EventHandler
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x613F480", Offset = "0x613E480", VA = "0x613F480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F5")]
	protected XmlSchemaCompilationSettings CompilationSettings
	{
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0x613F490", Offset = "0x613E490", VA = "0x613F490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F6")]
	protected bool HasErrors
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x613F4A0", Offset = "0x613E4A0", VA = "0x613F4A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x613F2B0", Offset = "0x613E2B0", VA = "0x613F2B0")]
	public BaseProcessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x613F320", Offset = "0x613E320", VA = "0x613F320")]
	public BaseProcessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x613F4B0", Offset = "0x613E4B0", VA = "0x613F4B0")]
	protected void AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item)
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x613F920", Offset = "0x613E920", VA = "0x613F920")]
	private bool IsValidAttributeGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x613FB40", Offset = "0x613EB40", VA = "0x613FB40")]
	private bool IsValidGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x613FA30", Offset = "0x613EA30", VA = "0x613FA30")]
	private bool IsValidTypeRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x613FD10", Offset = "0x613ED10", VA = "0x613FD10")]
	protected void SendValidationEvent(string code, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x613FC30", Offset = "0x613EC30", VA = "0x613FC30")]
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x613FE90", Offset = "0x613EE90", VA = "0x613FE90")]
	protected void SendValidationEvent(string code, string msg1, string msg2, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x613FFE0", Offset = "0x613EFE0", VA = "0x613FFE0")]
	protected void SendValidationEvent(string code, string[] args, Exception innerException, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x6140100", Offset = "0x613F100", VA = "0x6140100")]
	protected void SendValidationEvent(string code, string msg1, string msg2, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x6140270", Offset = "0x613F270", VA = "0x6140270")]
	protected void SendValidationEvent(string code, XmlSchemaObject source, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x61402E0", Offset = "0x613F2E0", VA = "0x61402E0")]
	protected void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x6140370", Offset = "0x613F370", VA = "0x6140370")]
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x613FDE0", Offset = "0x613EDE0", VA = "0x613FDE0")]
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x61403F0", Offset = "0x613F3F0", VA = "0x61403F0")]
	protected void SendValidationEventNoThrow(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
