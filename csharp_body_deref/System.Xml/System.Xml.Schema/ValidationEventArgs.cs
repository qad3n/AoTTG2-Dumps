// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ValidationEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001F8")]
public class ValidationEventArgs : EventArgs
{
	[Token(Token = "0x4000A63")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaException ex;

	[Token(Token = "0x4000A64")]
	[FieldOffset(Offset = "0x18")]
	private XmlSeverityType severity;

	[Token(Token = "0x17000569")]
	public XmlSeverityType Severity
	{
		[Token(Token = "0x600143D")]
		[Address(RVA = "0x6014940", Offset = "0x6013940", VA = "0x6014940")]
		get
		{
			return default(XmlSeverityType);
		}
	}

	[Token(Token = "0x1700056A")]
	public XmlSchemaException Exception
	{
		[Token(Token = "0x600143E")]
		[Address(RVA = "0x6014950", Offset = "0x6013950", VA = "0x6014950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x6014860", Offset = "0x6013860", VA = "0x6014860")]
	internal ValidationEventArgs(XmlSchemaException ex)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x60148D0", Offset = "0x60138D0", VA = "0x60148D0")]
	internal ValidationEventArgs(XmlSchemaException ex, XmlSeverityType severity)
	{
	}
}
