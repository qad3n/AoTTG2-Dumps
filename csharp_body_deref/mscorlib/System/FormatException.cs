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
	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x549EC90", Offset = "0x549DC90", VA = "0x549EC90")]
	public FormatException()
	{
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x549ECD0", Offset = "0x549DCD0", VA = "0x549ECD0")]
	public FormatException(string message)
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x549ECF0", Offset = "0x549DCF0", VA = "0x549ECF0")]
	public FormatException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x549ED10", Offset = "0x549DD10", VA = "0x549ED10")]
	protected FormatException(SerializationInfo info, StreamingContext context)
	{
	}
}
