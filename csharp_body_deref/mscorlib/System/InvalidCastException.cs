using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000DD")]
public class InvalidCastException : SystemException
{
	[Token(Token = "0x6000819")]
	[Address(RVA = "0x4FD0F20", Offset = "0x4FD0F20", VA = "0x4FD0F20")]
	public InvalidCastException()
	{
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x4FCE670", Offset = "0x4FCE670", VA = "0x4FCE670")]
	public InvalidCastException(string message)
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x4FD0F60", Offset = "0x4FD0F60", VA = "0x4FD0F60")]
	public InvalidCastException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x4FD0F80", Offset = "0x4FD0F80", VA = "0x4FD0F80")]
	protected InvalidCastException(SerializationInfo info, StreamingContext context)
	{
	}
}
