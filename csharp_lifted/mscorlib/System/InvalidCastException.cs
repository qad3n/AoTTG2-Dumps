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
	[Token(Token = "0x6000826")]
	[Address(RVA = "0x54B99D0", Offset = "0x54B89D0", VA = "0x54B99D0")]
	public InvalidCastException()
	{
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x54B7250", Offset = "0x54B6250", VA = "0x54B7250")]
	public InvalidCastException(string message)
	{
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x54B9A10", Offset = "0x54B8A10", VA = "0x54B9A10")]
	public InvalidCastException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x54B9A30", Offset = "0x54B8A30", VA = "0x54B9A30")]
	protected InvalidCastException(SerializationInfo info, StreamingContext context)
	{
	}
}
