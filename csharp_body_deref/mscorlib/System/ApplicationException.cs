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
	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x5419740", Offset = "0x5418740", VA = "0x5419740")]
	public ApplicationException()
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x54197B0", Offset = "0x54187B0", VA = "0x54197B0")]
	public ApplicationException(string message)
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x5419810", Offset = "0x5418810", VA = "0x5419810")]
	public ApplicationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x5419870", Offset = "0x5418870", VA = "0x5419870")]
	protected ApplicationException(SerializationInfo info, StreamingContext context)
	{
	}
}
