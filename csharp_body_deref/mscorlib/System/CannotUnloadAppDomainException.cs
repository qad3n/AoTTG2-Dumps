using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000141")]
public class CannotUnloadAppDomainException : SystemException
{
	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x4FF7BC0", Offset = "0x4FF7BC0", VA = "0x4FF7BC0")]
	public CannotUnloadAppDomainException()
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x4FF7C70", Offset = "0x4FF7C70", VA = "0x4FF7C70")]
	public CannotUnloadAppDomainException(string message)
	{
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x4FF7CD0", Offset = "0x4FF7CD0", VA = "0x4FF7CD0")]
	protected CannotUnloadAppDomainException(SerializationInfo info, StreamingContext context)
	{
	}
}
