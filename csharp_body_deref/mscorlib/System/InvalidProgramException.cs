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
[Token(Token = "0x2000107")]
public sealed class InvalidProgramException : SystemException
{
	[Token(Token = "0x6000853")]
	[Address(RVA = "0x1B2AEE0", Offset = "0x1B294E0", VA = "0x181B2AEE0")]
	public InvalidProgramException()
	{
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x1B2AF30", Offset = "0x1B29530", VA = "0x181B2AF30")]
	public InvalidProgramException(string message)
	{
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	internal InvalidProgramException(SerializationInfo info, StreamingContext context)
	{
	}
}
