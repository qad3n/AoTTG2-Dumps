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
		[Address(RVA = "0x48403A0", Offset = "0x48403A0", VA = "0x48403A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F3")]
	protected SchemaNames SchemaNames
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x48403B0", Offset = "0x48403B0", VA = "0x48403B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F4")]
	protected ValidationEventHandler EventHandler
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x4840430", Offset = "0x4840430", VA = "0x4840430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F5")]
	protected XmlSchemaCompilationSettings CompilationSettings
	{
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0x4840440", Offset = "0x4840440", VA = "0x4840440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F6")]
	protected bool HasErrors
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x4840450", Offset = "0x4840450", VA = "0x4840450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x4840260", Offset = "0x4840260", VA = "0x4840260")]
	public BaseProcessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x48402D0", Offset = "0x48402D0", VA = "0x48402D0")]
	public BaseProcessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x4840460", Offset = "0x4840460", VA = "0x4840460")]
	protected void AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item)
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x48408D0", Offset = "0x48408D0", VA = "0x48408D0")]
	private bool IsValidAttributeGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x4840AD0", Offset = "0x4840AD0", VA = "0x4840AD0")]
	private bool IsValidGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x48409D0", Offset = "0x48409D0", VA = "0x48409D0")]
	private bool IsValidTypeRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x4840C90", Offset = "0x4840C90", VA = "0x4840C90")]
	protected void SendValidationEvent(string code, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x4840BB0", Offset = "0x4840BB0", VA = "0x4840BB0")]
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x4840E10", Offset = "0x4840E10", VA = "0x4840E10")]
	protected void SendValidationEvent(string code, string msg1, string msg2, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x4840F60", Offset = "0x4840F60", VA = "0x4840F60")]
	protected void SendValidationEvent(string code, string[] args, Exception innerException, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x4841080", Offset = "0x4841080", VA = "0x4841080")]
	protected void SendValidationEvent(string code, string msg1, string msg2, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x48411F0", Offset = "0x48411F0", VA = "0x48411F0")]
	protected void SendValidationEvent(string code, XmlSchemaObject source, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x4841260", Offset = "0x4841260", VA = "0x4841260")]
	protected void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x48412F0", Offset = "0x48412F0", VA = "0x48412F0")]
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x4840D60", Offset = "0x4840D60", VA = "0x4840D60")]
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x4841370", Offset = "0x4841370", VA = "0x4841370")]
	protected void SendValidationEventNoThrow(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
