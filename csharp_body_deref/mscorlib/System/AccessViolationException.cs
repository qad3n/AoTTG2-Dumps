using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000072")]
public class AccessViolationException : SystemException
{
	[Token(Token = "0x6000399")]
	[Address(RVA = "0x4F2C000", Offset = "0x4F2C000", VA = "0x4F2C000")]
	public AccessViolationException()
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4F2C040", Offset = "0x4F2C040", VA = "0x4F2C040")]
	protected AccessViolationException(SerializationInfo info, StreamingContext context)
	{
	}
}
