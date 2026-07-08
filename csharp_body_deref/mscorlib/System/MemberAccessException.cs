using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000E7")]
public class MemberAccessException : SystemException
{
	[Token(Token = "0x6000882")]
	[Address(RVA = "0x4FD2B50", Offset = "0x4FD2B50", VA = "0x4FD2B50")]
	public MemberAccessException()
	{
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x4FD2B90", Offset = "0x4FD2B90", VA = "0x4FD2B90")]
	public MemberAccessException(string message)
	{
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x4FD2BB0", Offset = "0x4FD2BB0", VA = "0x4FD2BB0")]
	protected MemberAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
