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
	[Token(Token = "0x6000959")]
	[Address(RVA = "0x54CCBE0", Offset = "0x54CBBE0", VA = "0x54CCBE0")]
	public OverflowException()
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x54CCC20", Offset = "0x54CBC20", VA = "0x54CCC20")]
	public OverflowException(string message)
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x54CCC40", Offset = "0x54CBC40", VA = "0x54CCC40")]
	public OverflowException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x54CCC60", Offset = "0x54CBC60", VA = "0x54CCC60")]
	protected OverflowException(SerializationInfo info, StreamingContext context)
	{
	}
}
