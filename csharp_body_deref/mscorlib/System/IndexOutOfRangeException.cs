// ==================== AoTTG2 cross-reference ====================
// Type: System.IndexOutOfRangeException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000100")]
public sealed class IndexOutOfRangeException : SystemException
{
	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x1B27D60", Offset = "0x1B26360", VA = "0x181B27D60")]
	public IndexOutOfRangeException()
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x1B27DB0", Offset = "0x1B263B0", VA = "0x181B27DB0")]
	public IndexOutOfRangeException(string message)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	internal IndexOutOfRangeException(SerializationInfo info, StreamingContext context)
	{
	}
}
