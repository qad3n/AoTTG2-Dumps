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
	[Token(Token = "0x6000821")]
	[Address(RVA = "0x3CB6B40", Offset = "0x3CB6B40", VA = "0x3CB6B40")]
	public InvalidProgramException()
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x3CB6B80", Offset = "0x3CB6B80", VA = "0x3CB6B80")]
	public InvalidProgramException(string message)
	{
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x3CB6BA0", Offset = "0x3CB6BA0", VA = "0x3CB6BA0")]
	internal InvalidProgramException(SerializationInfo info, StreamingContext context)
	{
	}
}
