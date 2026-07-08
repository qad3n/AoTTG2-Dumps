using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000090")]
public class ArrayTypeMismatchException : SystemException
{
	[Token(Token = "0x6000410")]
	[Address(RVA = "0x4F2E2D0", Offset = "0x4F2E2D0", VA = "0x4F2E2D0")]
	public ArrayTypeMismatchException()
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x4F2E310", Offset = "0x4F2E310", VA = "0x4F2E310")]
	protected ArrayTypeMismatchException(SerializationInfo info, StreamingContext context)
	{
	}
}
