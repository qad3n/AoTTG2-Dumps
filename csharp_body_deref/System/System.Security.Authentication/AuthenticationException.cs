// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Authentication.AuthenticationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Authentication;

[Serializable]
[Token(Token = "0x20000DE")]
public class AuthenticationException : SystemException
{
	[Token(Token = "0x6000503")]
	[Address(RVA = "0x492CAC0", Offset = "0x492CAC0", VA = "0x492CAC0")]
	public AuthenticationException()
	{
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x492CB00", Offset = "0x492CB00", VA = "0x492CB00")]
	public AuthenticationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x492CB10", Offset = "0x492CB10", VA = "0x492CB10")]
	protected AuthenticationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
