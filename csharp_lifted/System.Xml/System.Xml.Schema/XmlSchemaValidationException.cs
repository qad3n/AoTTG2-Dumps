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
	[Address(RVA = "0x603ADC0", Offset = "0x6039DC0", VA = "0x603ADC0")]
	protected XmlSchemaValidationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x603ADD0", Offset = "0x6039DD0", VA = "0x603ADD0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x603ADE0", Offset = "0x6039DE0", VA = "0x603ADE0")]
	public XmlSchemaValidationException()
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x603ADF0", Offset = "0x6039DF0", VA = "0x603ADF0")]
	internal XmlSchemaValidationException(string res, string arg, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x603AEA0", Offset = "0x6039EA0", VA = "0x603AEA0")]
	internal XmlSchemaValidationException(string res, string[] args, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x603AED0", Offset = "0x6039ED0", VA = "0x603AED0")]
	internal XmlSchemaValidationException(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition)
	{
	}
}
