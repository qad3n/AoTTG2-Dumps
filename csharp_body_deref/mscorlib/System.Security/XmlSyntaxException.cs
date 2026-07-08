using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security;

[Serializable]
[Token(Token = "0x200029F")]
public sealed class XmlSyntaxException : SystemException
{
	[Token(Token = "0x6001762")]
	[Address(RVA = "0x4E364E0", Offset = "0x4E364E0", VA = "0x4E364E0")]
	public XmlSyntaxException()
	{
	}

	[Token(Token = "0x6001763")]
	[Address(RVA = "0x4E364F0", Offset = "0x4E364F0", VA = "0x4E364F0")]
	public XmlSyntaxException(int lineNumber)
	{
	}

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x4E36500", Offset = "0x4E36500", VA = "0x4E36500")]
	public XmlSyntaxException(int lineNumber, string message)
	{
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x4E36510", Offset = "0x4E36510", VA = "0x4E36510")]
	private XmlSyntaxException(SerializationInfo info, StreamingContext context)
	{
	}
}
