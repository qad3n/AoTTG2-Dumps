using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000AE")]
public class FieldAccessException : MemberAccessException
{
	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x4FB53E0", Offset = "0x4FB53E0", VA = "0x4FB53E0")]
	public FieldAccessException()
	{
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x4FB5420", Offset = "0x4FB5420", VA = "0x4FB5420")]
	public FieldAccessException(string message)
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x4FB5440", Offset = "0x4FB5440", VA = "0x4FB5440")]
	protected FieldAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
