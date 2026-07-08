using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200011A")]
public class TimeoutException : SystemException
{
	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x4FED550", Offset = "0x4FED550", VA = "0x4FED550")]
	public TimeoutException()
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x4FED600", Offset = "0x4FED600", VA = "0x4FED600")]
	public TimeoutException(string message)
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x4FED660", Offset = "0x4FED660", VA = "0x4FED660")]
	protected TimeoutException(SerializationInfo info, StreamingContext context)
	{
	}
}
