using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000F0")]
public class NotImplementedException : SystemException
{
	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x4FD38B0", Offset = "0x4FD38B0", VA = "0x4FD38B0")]
	public NotImplementedException()
	{
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x4FD38F0", Offset = "0x4FD38F0", VA = "0x4FD38F0")]
	public NotImplementedException(string message)
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x4FD3910", Offset = "0x4FD3910", VA = "0x4FD3910")]
	protected NotImplementedException(SerializationInfo info, StreamingContext context)
	{
	}
}
