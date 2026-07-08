using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000114")]
public class SystemException : Exception
{
	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x4FEC3F0", Offset = "0x4FEC3F0", VA = "0x4FEC3F0")]
	public SystemException()
	{
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x4FE3390", Offset = "0x4FE3390", VA = "0x4FE3390")]
	public SystemException(string message)
	{
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x4FE34B0", Offset = "0x4FE34B0", VA = "0x4FE34B0")]
	public SystemException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x4FE3760", Offset = "0x4FE3760", VA = "0x4FE3760")]
	protected SystemException(SerializationInfo info, StreamingContext context)
	{
	}
}
