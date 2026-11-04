// ==================== AoTTG2 cross-reference ====================
// Type: System.InvalidCastException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000105")]
public class InvalidCastException : SystemException
{
	[Token(Token = "0x600084B")]
	[Address(RVA = "0x1B2ADE0", Offset = "0x1B293E0", VA = "0x181B2ADE0")]
	public InvalidCastException()
	{
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x1B2AE30", Offset = "0x1B29430", VA = "0x181B2AE30")]
	public InvalidCastException(string message)
	{
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x1B2ADC0", Offset = "0x1B293C0", VA = "0x181B2ADC0")]
	public InvalidCastException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected InvalidCastException(SerializationInfo info, StreamingContext context)
	{
	}
}
