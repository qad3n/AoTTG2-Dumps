using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000A6")]
public class DivideByZeroException : ArithmeticException
{
	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4FB3EA0", Offset = "0x4FB3EA0", VA = "0x4FB3EA0")]
	public DivideByZeroException()
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4FB3EE0", Offset = "0x4FB3EE0", VA = "0x4FB3EE0")]
	public DivideByZeroException(string message)
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x4FB3F00", Offset = "0x4FB3F00", VA = "0x4FB3F00")]
	protected DivideByZeroException(SerializationInfo info, StreamingContext context)
	{
	}
}
