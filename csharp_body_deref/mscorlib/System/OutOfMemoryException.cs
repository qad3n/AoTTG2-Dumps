// ==================== AoTTG2 cross-reference ====================
// Type: System.OutOfMemoryException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200016D")]
public class OutOfMemoryException : SystemException
{
	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x1B45B00", Offset = "0x1B44100", VA = "0x181B45B00")]
	public OutOfMemoryException()
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x1B45B90", Offset = "0x1B44190", VA = "0x181B45B90")]
	public OutOfMemoryException(string message)
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x1B3E0C0", Offset = "0x1B3C6C0", VA = "0x181B3E0C0")]
	protected OutOfMemoryException(SerializationInfo info, StreamingContext context)
	{
	}
}
