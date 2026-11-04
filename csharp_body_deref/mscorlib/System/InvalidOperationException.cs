// ==================== AoTTG2 cross-reference ====================
// Type: System.InvalidOperationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000106")]
public class InvalidOperationException : SystemException
{
	[Token(Token = "0x600084F")]
	[Address(RVA = "0x1B2AE50", Offset = "0x1B29450", VA = "0x181B2AE50")]
	public InvalidOperationException()
	{
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x1B2AEC0", Offset = "0x1B294C0", VA = "0x181B2AEC0")]
	public InvalidOperationException(string message)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x1B2AEA0", Offset = "0x1B294A0", VA = "0x181B2AEA0")]
	public InvalidOperationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected InvalidOperationException(SerializationInfo info, StreamingContext context)
	{
	}
}
