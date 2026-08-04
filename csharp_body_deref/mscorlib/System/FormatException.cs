// ==================== AoTTG2 cross-reference ====================
// Type: System.FormatException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000B0")]
public class FormatException : SystemException
{
	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x3C9AF80", Offset = "0x3C9AF80", VA = "0x3C9AF80")]
	public FormatException()
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x3C9AFC0", Offset = "0x3C9AFC0", VA = "0x3C9AFC0")]
	public FormatException(string message)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x3C9AFE0", Offset = "0x3C9AFE0", VA = "0x3C9AFE0")]
	public FormatException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x3C9B000", Offset = "0x3C9B000", VA = "0x3C9B000")]
	protected FormatException(SerializationInfo info, StreamingContext context)
	{
	}
}
