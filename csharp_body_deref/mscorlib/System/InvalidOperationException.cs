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
[Token(Token = "0x20000DE")]
public class InvalidOperationException : SystemException
{
	[Token(Token = "0x600081D")]
	[Address(RVA = "0x3CB6AB0", Offset = "0x3CB6AB0", VA = "0x3CB6AB0")]
	public InvalidOperationException()
	{
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x3CB6AF0", Offset = "0x3CB6AF0", VA = "0x3CB6AF0")]
	public InvalidOperationException(string message)
	{
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x3CB6B10", Offset = "0x3CB6B10", VA = "0x3CB6B10")]
	public InvalidOperationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x3CB6B30", Offset = "0x3CB6B30", VA = "0x3CB6B30")]
	protected InvalidOperationException(SerializationInfo info, StreamingContext context)
	{
	}
}
