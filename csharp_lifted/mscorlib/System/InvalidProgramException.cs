// ==================== AoTTG2 cross-reference ====================
// Type: System.InvalidProgramException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000DF")]
public sealed class InvalidProgramException : SystemException
{
	[Token(Token = "0x600082E")]
	[Address(RVA = "0x54B9AD0", Offset = "0x54B8AD0", VA = "0x54B9AD0")]
	public InvalidProgramException()
	{
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x54B9B10", Offset = "0x54B8B10", VA = "0x54B9B10")]
	public InvalidProgramException(string message)
	{
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x54B9B30", Offset = "0x54B8B30", VA = "0x54B9B30")]
	internal InvalidProgramException(SerializationInfo info, StreamingContext context)
	{
	}
}
