using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000F2")]
public class NullReferenceException : SystemException
{
	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x4FD3990", Offset = "0x4FD3990", VA = "0x4FD3990")]
	public NullReferenceException()
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x4FD39D0", Offset = "0x4FD39D0", VA = "0x4FD39D0")]
	public NullReferenceException(string message)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x4FD39F0", Offset = "0x4FD39F0", VA = "0x4FD39F0")]
	protected NullReferenceException(SerializationInfo info, StreamingContext context)
	{
	}
}
