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
[Token(Token = "0x2000123")]
public class OverflowException : ArithmeticException
{
	[Token(Token = "0x600097E")]
	[Address(RVA = "0x1B45C20", Offset = "0x1B44220", VA = "0x181B45C20")]
	public OverflowException()
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x1B45C00", Offset = "0x1B44200", VA = "0x181B45C00")]
	public OverflowException(string message)
	{
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x1B45C70", Offset = "0x1B44270", VA = "0x181B45C70")]
	public OverflowException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x1A42BE0", Offset = "0x1A411E0", VA = "0x181A42BE0")]
	protected OverflowException(SerializationInfo info, StreamingContext context)
	{
	}
}
