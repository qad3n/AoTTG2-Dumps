// ==================== AoTTG2 cross-reference ====================
// Type: System.OverflowException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000FB")]
public class OverflowException : ArithmeticException
{
	[Token(Token = "0x6000943")]
	[Address(RVA = "0x3CC92F0", Offset = "0x3CC92F0", VA = "0x3CC92F0")]
	public OverflowException()
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x3CC9330", Offset = "0x3CC9330", VA = "0x3CC9330")]
	public OverflowException(string message)
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x3CC9350", Offset = "0x3CC9350", VA = "0x3CC9350")]
	public OverflowException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x3CC9370", Offset = "0x3CC9370", VA = "0x3CC9370")]
	protected OverflowException(SerializationInfo info, StreamingContext context)
	{
	}
}
