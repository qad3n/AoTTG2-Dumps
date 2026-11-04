// ==================== AoTTG2 cross-reference ====================
// Type: System.ArithmeticException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000B6")]
public class ArithmeticException : SystemException
{
	[Token(Token = "0x600041F")]
	[Address(RVA = "0x1A78500", Offset = "0x1A76B00", VA = "0x181A78500")]
	public ArithmeticException()
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x1A78550", Offset = "0x1A76B50", VA = "0x181A78550")]
	public ArithmeticException(string message)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x1A78570", Offset = "0x1A76B70", VA = "0x181A78570")]
	public ArithmeticException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected ArithmeticException(SerializationInfo info, StreamingContext context)
	{
	}
}
