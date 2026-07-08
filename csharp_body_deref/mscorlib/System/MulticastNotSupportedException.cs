using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000EE")]
public sealed class MulticastNotSupportedException : SystemException
{
	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x4FD3830", Offset = "0x4FD3830", VA = "0x4FD3830")]
	public MulticastNotSupportedException()
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x4FD3870", Offset = "0x4FD3870", VA = "0x4FD3870")]
	public MulticastNotSupportedException(string message)
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x4FD3890", Offset = "0x4FD3890", VA = "0x4FD3890")]
	internal MulticastNotSupportedException(SerializationInfo info, StreamingContext context)
	{
	}
}
