using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000FF")]
public class PlatformNotSupportedException : NotSupportedException
{
	[Token(Token = "0x600095E")]
	[Address(RVA = "0x4FE55C0", Offset = "0x4FE55C0", VA = "0x4FE55C0")]
	public PlatformNotSupportedException()
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x4FE5600", Offset = "0x4FE5600", VA = "0x4FE5600")]
	public PlatformNotSupportedException(string message)
	{
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x4FE5620", Offset = "0x4FE5620", VA = "0x4FE5620")]
	protected PlatformNotSupportedException(SerializationInfo info, StreamingContext context)
	{
	}
}
