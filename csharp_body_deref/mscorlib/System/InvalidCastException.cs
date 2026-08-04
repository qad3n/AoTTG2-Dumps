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
[Token(Token = "0x20000DD")]
public class InvalidCastException : SystemException
{
	[Token(Token = "0x6000819")]
	[Address(RVA = "0x3CB6A40", Offset = "0x3CB6A40", VA = "0x3CB6A40")]
	public InvalidCastException()
	{
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x3CB4190", Offset = "0x3CB4190", VA = "0x3CB4190")]
	public InvalidCastException(string message)
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x3CB6A80", Offset = "0x3CB6A80", VA = "0x3CB6A80")]
	public InvalidCastException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x3CB6AA0", Offset = "0x3CB6AA0", VA = "0x3CB6AA0")]
	protected InvalidCastException(SerializationInfo info, StreamingContext context)
	{
	}
}
