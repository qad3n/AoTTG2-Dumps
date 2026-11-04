// ==================== AoTTG2 cross-reference ====================
// Type: System.DivideByZeroException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000CE")]
public class DivideByZeroException : ArithmeticException
{
	[Token(Token = "0x600069E")]
	[Address(RVA = "0x1B21A00", Offset = "0x1B20000", VA = "0x181B21A00")]
	public DivideByZeroException()
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x1B219E0", Offset = "0x1B1FFE0", VA = "0x181B219E0")]
	public DivideByZeroException(string message)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x1A42BE0", Offset = "0x1A411E0", VA = "0x181A42BE0")]
	protected DivideByZeroException(SerializationInfo info, StreamingContext context)
	{
	}
}
