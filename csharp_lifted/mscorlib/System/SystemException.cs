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
	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x54D5EB0", Offset = "0x54D4EB0", VA = "0x54D5EB0")]
	public SystemException()
	{
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x54CC7A0", Offset = "0x54CB7A0", VA = "0x54CC7A0")]
	public SystemException(string message)
	{
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x54CC8C0", Offset = "0x54CB8C0", VA = "0x54CC8C0")]
	public SystemException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x54CCB70", Offset = "0x54CBB70", VA = "0x54CCB70")]
	protected SystemException(SerializationInfo info, StreamingContext context)
	{
	}
}
