using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200008D")]
public class ArithmeticException : SystemException
{
	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x4F2E240", Offset = "0x4F2E240", VA = "0x4F2E240")]
	public ArithmeticException()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4F2E280", Offset = "0x4F2E280", VA = "0x4F2E280")]
	public ArithmeticException(string message)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4F2E2A0", Offset = "0x4F2E2A0", VA = "0x4F2E2A0")]
	public ArithmeticException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4F2E2C0", Offset = "0x4F2E2C0", VA = "0x4F2E2C0")]
	protected ArithmeticException(SerializationInfo info, StreamingContext context)
	{
	}
}
