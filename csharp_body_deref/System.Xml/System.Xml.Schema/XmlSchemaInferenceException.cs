using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Serializable]
[Token(Token = "0x20001DE")]
public class XmlSchemaInferenceException : XmlSchemaException
{
	[Token(Token = "0x600127C")]
	[Address(RVA = "0x437B980", Offset = "0x437B980", VA = "0x437B980")]
	protected XmlSchemaInferenceException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x437B990", Offset = "0x437B990", VA = "0x437B990", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x437B9A0", Offset = "0x437B9A0", VA = "0x437B9A0")]
	public XmlSchemaInferenceException()
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x4379770", Offset = "0x4379770", VA = "0x4379770")]
	internal XmlSchemaInferenceException(string res, string arg)
	{
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x4371910", Offset = "0x4371910", VA = "0x4371910")]
	internal XmlSchemaInferenceException(string res, int lineNumber, int linePosition)
	{
	}
}
