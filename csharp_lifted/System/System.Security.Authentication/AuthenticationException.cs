// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Authentication.AuthenticationException
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Authentication;

[Serializable]
[Token(Token = "0x20000DF")]
public class AuthenticationException : SystemException
{
	[Token(Token = "0x600052D")]
	[Address(RVA = "0x62085A0", Offset = "0x62075A0", VA = "0x62085A0")]
	public AuthenticationException()
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x62085E0", Offset = "0x62075E0", VA = "0x62085E0")]
	public AuthenticationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x62085F0", Offset = "0x62075F0", VA = "0x62085F0")]
	protected AuthenticationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
