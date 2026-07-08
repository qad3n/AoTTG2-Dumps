using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Serializable]
[Token(Token = "0x200025F")]
public class XmlSchemaValidationException : XmlSchemaException
{
	[Token(Token = "0x60017A7")]
	[Address(RVA = "0x43F67C0", Offset = "0x43F67C0", VA = "0x43F67C0")]
	protected XmlSchemaValidationException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x43F67D0", Offset = "0x43F67D0", VA = "0x43F67D0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x43F67E0", Offset = "0x43F67E0", VA = "0x43F67E0")]
	public XmlSchemaValidationException()
	{
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x43F67F0", Offset = "0x43F67F0", VA = "0x43F67F0")]
	internal XmlSchemaValidationException(string res, string arg, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x43F68A0", Offset = "0x43F68A0", VA = "0x43F68A0")]
	internal XmlSchemaValidationException(string res, string[] args, string sourceUri, int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x43F68D0", Offset = "0x43F68D0", VA = "0x43F68D0")]
	internal XmlSchemaValidationException(string res, string[] args, Exception innerException, string sourceUri, int lineNumber, int linePosition)
	{
	}
}
