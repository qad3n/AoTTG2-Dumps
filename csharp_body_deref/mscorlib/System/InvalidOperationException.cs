using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000DE")]
public class InvalidOperationException : SystemException
{
	[Token(Token = "0x600081D")]
	[Address(RVA = "0x4FD0F90", Offset = "0x4FD0F90", VA = "0x4FD0F90")]
	public InvalidOperationException()
	{
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x4FD0FD0", Offset = "0x4FD0FD0", VA = "0x4FD0FD0")]
	public InvalidOperationException(string message)
	{
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x4FD0FF0", Offset = "0x4FD0FF0", VA = "0x4FD0FF0")]
	public InvalidOperationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x4FD1010", Offset = "0x4FD1010", VA = "0x4FD1010")]
	protected InvalidOperationException(SerializationInfo info, StreamingContext context)
	{
	}
}
