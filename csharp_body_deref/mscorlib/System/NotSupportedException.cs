// ==================== AoTTG2 cross-reference ====================
// Type: System.NotSupportedException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000F1")]
public class NotSupportedException : SystemException
{
	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x3CB9440", Offset = "0x3CB9440", VA = "0x3CB9440")]
	public NotSupportedException()
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x3CB2120", Offset = "0x3CB2120", VA = "0x3CB2120")]
	public NotSupportedException(string message)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x3CB9480", Offset = "0x3CB9480", VA = "0x3CB9480")]
	public NotSupportedException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x3CB94A0", Offset = "0x3CB94A0", VA = "0x3CB94A0")]
	protected NotSupportedException(SerializationInfo info, StreamingContext context)
	{
	}
}
