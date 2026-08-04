// ==================== AoTTG2 cross-reference ====================
// Type: System.SystemException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000114")]
public class SystemException : Exception
{
	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x3CD1F10", Offset = "0x3CD1F10", VA = "0x3CD1F10")]
	public SystemException()
	{
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x3CC8EB0", Offset = "0x3CC8EB0", VA = "0x3CC8EB0")]
	public SystemException(string message)
	{
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x3CC8FD0", Offset = "0x3CC8FD0", VA = "0x3CC8FD0")]
	public SystemException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x3CC9280", Offset = "0x3CC9280", VA = "0x3CC9280")]
	protected SystemException(SerializationInfo info, StreamingContext context)
	{
	}
}
