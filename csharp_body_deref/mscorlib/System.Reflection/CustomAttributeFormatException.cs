using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004D4")]
public class CustomAttributeFormatException : FormatException
{
	[Token(Token = "0x60023ED")]
	[Address(RVA = "0x4EEAE20", Offset = "0x4EEAE20", VA = "0x4EEAE20")]
	public CustomAttributeFormatException()
	{
	}

	[Token(Token = "0x60023EE")]
	[Address(RVA = "0x4EEAE60", Offset = "0x4EEAE60", VA = "0x4EEAE60")]
	public CustomAttributeFormatException(string message)
	{
	}

	[Token(Token = "0x60023EF")]
	[Address(RVA = "0x4EEAE80", Offset = "0x4EEAE80", VA = "0x4EEAE80")]
	public CustomAttributeFormatException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60023F0")]
	[Address(RVA = "0x4EEAEA0", Offset = "0x4EEAEA0", VA = "0x4EEAEA0")]
	protected CustomAttributeFormatException(SerializationInfo info, StreamingContext context)
	{
	}
}
