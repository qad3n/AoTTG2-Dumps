using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000B0")]
public class FormatException : SystemException
{
	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x4FB5460", Offset = "0x4FB5460", VA = "0x4FB5460")]
	public FormatException()
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x4FB54A0", Offset = "0x4FB54A0", VA = "0x4FB54A0")]
	public FormatException(string message)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x4FB54C0", Offset = "0x4FB54C0", VA = "0x4FB54C0")]
	public FormatException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x4FB54E0", Offset = "0x4FB54E0", VA = "0x4FB54E0")]
	protected FormatException(SerializationInfo info, StreamingContext context)
	{
	}
}
