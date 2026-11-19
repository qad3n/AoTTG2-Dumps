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
[Token(Token = "0x20000AE")]
public class FieldAccessException : MemberAccessException
{
	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x549EC10", Offset = "0x549DC10", VA = "0x549EC10")]
	public FieldAccessException()
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x549EC50", Offset = "0x549DC50", VA = "0x549EC50")]
	public FieldAccessException(string message)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x549EC70", Offset = "0x549DC70", VA = "0x549EC70")]
	protected FieldAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
