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
[Token(Token = "0x200011E")]
public class AuthenticationException : SystemException
{
	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x28615E0", Offset = "0x285FBE0", VA = "0x1828615E0")]
	public AuthenticationException()
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x19E0120", Offset = "0x19DE720", VA = "0x1819E0120")]
	public AuthenticationException(string message)
	{
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x19E0110", Offset = "0x19DE710", VA = "0x1819E0110")]
	public AuthenticationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected AuthenticationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
