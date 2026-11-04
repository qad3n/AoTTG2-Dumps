// ==================== AoTTG2 cross-reference ====================
// Type: System.FieldAccessException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000D6")]
public class FieldAccessException : MemberAccessException
{
	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x1B22E70", Offset = "0x1B21470", VA = "0x181B22E70")]
	public FieldAccessException()
	{
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x1B22E50", Offset = "0x1B21450", VA = "0x181B22E50")]
	public FieldAccessException(string message)
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x1A42BE0", Offset = "0x1A411E0", VA = "0x181A42BE0")]
	protected FieldAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
