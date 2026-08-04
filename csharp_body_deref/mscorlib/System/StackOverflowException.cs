// ==================== AoTTG2 cross-reference ====================
// Type: System.StackOverflowException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200010C")]
public sealed class StackOverflowException : SystemException
{
	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x3CD0AD0", Offset = "0x3CD0AD0", VA = "0x3CD0AD0")]
	public StackOverflowException()
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x3CD0B80", Offset = "0x3CD0B80", VA = "0x3CD0B80")]
	public StackOverflowException(string message)
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x3CD0BE0", Offset = "0x3CD0BE0", VA = "0x3CD0BE0")]
	internal StackOverflowException(SerializationInfo info, StreamingContext context)
	{
	}
}
