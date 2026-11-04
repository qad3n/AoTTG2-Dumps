// ==================== AoTTG2 cross-reference ====================
// Type: System.NullReferenceException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200011A")]
public class NullReferenceException : SystemException
{
	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x1B2E4B0", Offset = "0x1B2CAB0", VA = "0x181B2E4B0")]
	public NullReferenceException()
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x1B2E490", Offset = "0x1B2CA90", VA = "0x181B2E490")]
	public NullReferenceException(string message)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected NullReferenceException(SerializationInfo info, StreamingContext context)
	{
	}
}
