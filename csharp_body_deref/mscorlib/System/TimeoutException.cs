// ==================== AoTTG2 cross-reference ====================
// Type: System.TimeoutException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000141")]
public class TimeoutException : SystemException
{
	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x1B4FFD0", Offset = "0x1B4E5D0", VA = "0x181B4FFD0")]
	public TimeoutException()
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x1B50060", Offset = "0x1B4E660", VA = "0x181B50060")]
	public TimeoutException(string message)
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x1B3E0C0", Offset = "0x1B3C6C0", VA = "0x181B3E0C0")]
	protected TimeoutException(SerializationInfo info, StreamingContext context)
	{
	}
}
