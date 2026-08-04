// ==================== AoTTG2 cross-reference ====================
// Type: System.UnauthorizedAccessException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000127")]
public class UnauthorizedAccessException : SystemException
{
	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x3CDA090", Offset = "0x3CDA090", VA = "0x3CDA090")]
	public UnauthorizedAccessException()
	{
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x3CDA140", Offset = "0x3CDA140", VA = "0x3CDA140")]
	public UnauthorizedAccessException(string message)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x3CDA1A0", Offset = "0x3CDA1A0", VA = "0x3CDA1A0")]
	public UnauthorizedAccessException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x3CDA200", Offset = "0x3CDA200", VA = "0x3CDA200")]
	protected UnauthorizedAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
