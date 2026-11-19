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
[Token(Token = "0x200008D")]
public class ArithmeticException : SystemException
{
	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x5419FB0", Offset = "0x5418FB0", VA = "0x5419FB0")]
	public ArithmeticException()
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x5419FF0", Offset = "0x5418FF0", VA = "0x5419FF0")]
	public ArithmeticException(string message)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x541A010", Offset = "0x5419010", VA = "0x541A010")]
	public ArithmeticException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x541A030", Offset = "0x5419030", VA = "0x541A030")]
	protected ArithmeticException(SerializationInfo info, StreamingContext context)
	{
	}
}
