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
	[Address(RVA = "0x4733F20", Offset = "0x4733F20", VA = "0x4733F20")]
	protected XmlSchemaValidationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x4733F30", Offset = "0x4733F30", VA = "0x4733F30", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x4733F40", Offset = "0x4733F40", VA = "0x4733F40")]
	public XmlSchemaValidationException()
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x4733F50", Offset = "0x4733F50", VA = "0x4733F50")]
	internal XmlSchemaValidationException(string res, string arg, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x4734000", Offset = "0x4734000", VA = "0x4734000")]
	internal XmlSchemaValidationException(string res, string[] args, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x4734030", Offset = "0x4734030", VA = "0x4734030")]
	internal XmlSchemaValidationException(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition)
	{
	}
}
