using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000FB")]
public class OverflowException : ArithmeticException
{
	[Token(Token = "0x6000943")]
	[Address(RVA = "0x4FE37D0", Offset = "0x4FE37D0", VA = "0x4FE37D0")]
	public OverflowException()
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x4FE3810", Offset = "0x4FE3810", VA = "0x4FE3810")]
	public OverflowException(string message)
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x4FE3830", Offset = "0x4FE3830", VA = "0x4FE3830")]
	public OverflowException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x4FE3850", Offset = "0x4FE3850", VA = "0x4FE3850")]
	protected OverflowException(SerializationInfo info, StreamingContext context)
	{
	}
}
