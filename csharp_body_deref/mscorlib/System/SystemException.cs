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
[Token(Token = "0x200013C")]
public class SystemException : Exception
{
	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x1B4D390", Offset = "0x1B4B990", VA = "0x181B4D390")]
	public SystemException()
	{
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x1B4D400", Offset = "0x1B4BA00", VA = "0x181B4D400")]
	public SystemException(string message)
	{
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x1B4D310", Offset = "0x1B4B910", VA = "0x181B4D310")]
	public SystemException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x1B3E0C0", Offset = "0x1B3C6C0", VA = "0x181B3E0C0")]
	protected SystemException(SerializationInfo info, StreamingContext context)
	{
	}
}
