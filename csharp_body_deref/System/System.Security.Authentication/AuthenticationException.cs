using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Authentication;

[Serializable]
[Token(Token = "0x20000DE")]
public class AuthenticationException : SystemException
{
	[Token(Token = "0x6000503")]
	[Address(RVA = "0x46079C0", Offset = "0x46079C0", VA = "0x46079C0")]
	public AuthenticationException()
	{
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x4607A00", Offset = "0x4607A00", VA = "0x4607A00")]
	public AuthenticationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x4607A10", Offset = "0x4607A10", VA = "0x4607A10")]
	protected AuthenticationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
