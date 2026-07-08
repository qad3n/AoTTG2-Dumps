using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000121")]
public class TypeAccessException : TypeLoadException
{
	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x4FF18E0", Offset = "0x4FF18E0", VA = "0x4FF18E0")]
	public TypeAccessException()
	{
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x4FF1920", Offset = "0x4FF1920", VA = "0x4FF1920")]
	protected TypeAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
