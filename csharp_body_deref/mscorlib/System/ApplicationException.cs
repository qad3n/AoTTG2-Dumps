// ==================== AoTTG2 cross-reference ====================
// Type: System.ApplicationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000089")]
public class ApplicationException : Exception
{
	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x3C134F0", Offset = "0x3C134F0", VA = "0x3C134F0")]
	public ApplicationException()
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x3C13560", Offset = "0x3C13560", VA = "0x3C13560")]
	public ApplicationException(string message)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x3C135C0", Offset = "0x3C135C0", VA = "0x3C135C0")]
	public ApplicationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x3C13620", Offset = "0x3C13620", VA = "0x3C13620")]
	protected ApplicationException(SerializationInfo info, StreamingContext context)
	{
	}
}
