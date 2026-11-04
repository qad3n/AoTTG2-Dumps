// ==================== AoTTG2 cross-reference ====================
// Type: System.UnauthorizedAccessException
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200014E")]
public class UnauthorizedAccessException : SystemException
{
	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x1B57B70", Offset = "0x1B56170", VA = "0x181B57B70")]
	public UnauthorizedAccessException()
	{
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x1B57C00", Offset = "0x1B56200", VA = "0x181B57C00")]
	public UnauthorizedAccessException(string message)
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x1B3E0C0", Offset = "0x1B3C6C0", VA = "0x181B3E0C0")]
	protected UnauthorizedAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
