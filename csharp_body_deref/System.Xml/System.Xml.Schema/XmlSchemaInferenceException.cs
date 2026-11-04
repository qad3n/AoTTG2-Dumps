// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaInferenceException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Serializable]
[Token(Token = "0x20001DE")]
public class XmlSchemaInferenceException : XmlSchemaException
{
	[Token(Token = "0x600127C")]
	[Address(RVA = "0x2612300", Offset = "0x2610900", VA = "0x182612300")]
	protected XmlSchemaInferenceException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x2612210", Offset = "0x2610810", VA = "0x182612210", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600127E")]
	[Address(RVA = "0x2612320", Offset = "0x2610920", VA = "0x182612320")]
	public XmlSchemaInferenceException()
	{
	}

	[Token(Token = "0x600127F")]
	[Address(RVA = "0x2612260", Offset = "0x2610860", VA = "0x182612260")]
	internal XmlSchemaInferenceException(string res, string arg)
	{
	}

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x2612230", Offset = "0x2610830", VA = "0x182612230")]
	internal XmlSchemaInferenceException(string res, int lineNumber, int linePosition)
	{
	}
}
