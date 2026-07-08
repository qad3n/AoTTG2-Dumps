using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000145")]
public class OutOfMemoryException : SystemException
{
	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x4FF87E0", Offset = "0x4FF87E0", VA = "0x4FF87E0")]
	public OutOfMemoryException()
	{
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x4FF8890", Offset = "0x4FF8890", VA = "0x4FF8890")]
	public OutOfMemoryException(string message)
	{
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x4FF88F0", Offset = "0x4FF88F0", VA = "0x4FF88F0")]
	protected OutOfMemoryException(SerializationInfo info, StreamingContext context)
	{
	}
}
