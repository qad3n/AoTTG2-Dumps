using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000DF")]
public sealed class InvalidProgramException : SystemException
{
	[Token(Token = "0x6000821")]
	[Address(RVA = "0x4FD1020", Offset = "0x4FD1020", VA = "0x4FD1020")]
	public InvalidProgramException()
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x4FD1060", Offset = "0x4FD1060", VA = "0x4FD1060")]
	public InvalidProgramException(string message)
	{
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x4FD1080", Offset = "0x4FD1080", VA = "0x4FD1080")]
	internal InvalidProgramException(SerializationInfo info, StreamingContext context)
	{
	}
}
