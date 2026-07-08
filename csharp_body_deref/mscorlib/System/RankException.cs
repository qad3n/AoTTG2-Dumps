using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000101")]
public class RankException : SystemException
{
	[Token(Token = "0x600096D")]
	[Address(RVA = "0x4FE5FF0", Offset = "0x4FE5FF0", VA = "0x4FE5FF0")]
	public RankException()
	{
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x4FE60A0", Offset = "0x4FE60A0", VA = "0x4FE60A0")]
	public RankException(string message)
	{
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x4FE6100", Offset = "0x4FE6100", VA = "0x4FE6100")]
	protected RankException(SerializationInfo info, StreamingContext context)
	{
	}
}
