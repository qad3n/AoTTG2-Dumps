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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F3")]
	protected SchemaNames SchemaNames
	{
		[Token(Token = "0x6000F52")]
		[Address(RVA = "0x2778460", Offset = "0x2776A60", VA = "0x182778460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F4")]
	protected ValidationEventHandler EventHandler
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F5")]
	protected XmlSchemaCompilationSettings CompilationSettings
	{
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F6")]
	protected bool HasErrors
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x199D090", Offset = "0x199B690", VA = "0x18199D090")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x27782A0", Offset = "0x27768A0", VA = "0x1827782A0")]
	public BaseProcessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x27783A0", Offset = "0x27769A0", VA = "0x1827783A0")]
	public BaseProcessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x2776FA0", Offset = "0x27755A0", VA = "0x182776FA0")]
	protected void AddToTable(XmlSchemaObjectTable table, XmlQualifiedName qname, XmlSchemaObject item)
	{
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x2777650", Offset = "0x2775C50", VA = "0x182777650")]
	private bool IsValidAttributeGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F58")]
	[Address(RVA = "0x2777770", Offset = "0x2775D70", VA = "0x182777770")]
	private bool IsValidGroupRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x27778A0", Offset = "0x2775EA0", VA = "0x1827778A0")]
	private bool IsValidTypeRedefine(XmlSchemaObject existingObject, XmlSchemaObject item, XmlSchemaObjectTable table)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x2777FC0", Offset = "0x27765C0", VA = "0x182777FC0")]
	protected void SendValidationEvent(string code, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x2777C00", Offset = "0x2776200", VA = "0x182777C00")]
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x27780A0", Offset = "0x27766A0", VA = "0x1827780A0")]
	protected void SendValidationEvent(string code, string msg1, string msg2, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x2777E60", Offset = "0x2776460", VA = "0x182777E60")]
	protected void SendValidationEvent(string code, string[] args, Exception innerException, XmlSchemaObject source)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x2777CF0", Offset = "0x27762F0", VA = "0x182777CF0")]
	protected void SendValidationEvent(string code, string msg1, string msg2, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x2777B10", Offset = "0x2776110", VA = "0x182777B10")]
	protected void SendValidationEvent(string code, XmlSchemaObject source, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x27781F0", Offset = "0x27767F0", VA = "0x1827781F0")]
	protected void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x2777B80", Offset = "0x2776180", VA = "0x182777B80")]
	protected void SendValidationEvent(string code, string msg, XmlSchemaObject source, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x2777A50", Offset = "0x2776050", VA = "0x182777A50")]
	protected void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x27779C0", Offset = "0x2775FC0", VA = "0x1827779C0")]
	protected void SendValidationEventNoThrow(XmlSchemaException e, XmlSeverityType severity)
	{
	}
}
