using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200010C")]
public sealed class StackOverflowException : SystemException
{
	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x4FEAFB0", Offset = "0x4FEAFB0", VA = "0x4FEAFB0")]
	public StackOverflowException()
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x4FEB060", Offset = "0x4FEB060", VA = "0x4FEB060")]
	public StackOverflowException(string message)
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x4FEB0C0", Offset = "0x4FEB0C0", VA = "0x4FEB0C0")]
	internal StackOverflowException(SerializationInfo info, StreamingContext context)
	{
	}
}
