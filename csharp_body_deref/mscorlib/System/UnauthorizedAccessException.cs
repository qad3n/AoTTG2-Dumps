using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000127")]
public class UnauthorizedAccessException : SystemException
{
	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x4FF4570", Offset = "0x4FF4570", VA = "0x4FF4570")]
	public UnauthorizedAccessException()
	{
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x4FF4620", Offset = "0x4FF4620", VA = "0x4FF4620")]
	public UnauthorizedAccessException(string message)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x4FF4680", Offset = "0x4FF4680", VA = "0x4FF4680")]
	public UnauthorizedAccessException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x4FF46E0", Offset = "0x4FF46E0", VA = "0x4FF46E0")]
	protected UnauthorizedAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
