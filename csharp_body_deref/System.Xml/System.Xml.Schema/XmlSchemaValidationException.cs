// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaValidationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Serializable]
[Token(Token = "0x200025F")]
public class XmlSchemaValidationException : XmlSchemaException
{
	[Token(Token = "0x60017A7")]
	[Address(RVA = "0x2612300", Offset = "0x2610900", VA = "0x182612300")]
	protected XmlSchemaValidationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x2612210", Offset = "0x2610810", VA = "0x182612210", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x2612320", Offset = "0x2610920", VA = "0x182612320")]
	public XmlSchemaValidationException()
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x267FFE0", Offset = "0x267E5E0", VA = "0x18267FFE0")]
	internal XmlSchemaValidationException(string res, string arg, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x266B760", Offset = "0x2669D60", VA = "0x18266B760")]
	internal XmlSchemaValidationException(string res, string[] args, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x267FFA0", Offset = "0x267E5A0", VA = "0x18267FFA0")]
	internal XmlSchemaValidationException(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition)
	{
	}
}
