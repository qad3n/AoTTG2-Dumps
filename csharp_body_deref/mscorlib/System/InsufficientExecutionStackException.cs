using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000D9")]
public sealed class InsufficientExecutionStackException : SystemException
{
	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x4FCC730", Offset = "0x4FCC730", VA = "0x4FCC730")]
	public InsufficientExecutionStackException()
	{
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x4FCC770", Offset = "0x4FCC770", VA = "0x4FCC770")]
	internal InsufficientExecutionStackException(SerializationInfo info, StreamingContext context)
	{
	}
}
