using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000EB")]
public class MethodAccessException : MemberAccessException
{
	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x4FD3620", Offset = "0x4FD3620", VA = "0x4FD3620")]
	public MethodAccessException()
	{
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x4FD3660", Offset = "0x4FD3660", VA = "0x4FD3660")]
	public MethodAccessException(string message)
	{
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x4FD3680", Offset = "0x4FD3680", VA = "0x4FD3680")]
	protected MethodAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
