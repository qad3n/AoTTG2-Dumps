using System;
using Il2CppDummyDll;

namespace UnityEngine.Assertions;

[Token(Token = "0x2000353")]
public class AssertionException : Exception
{
	[Token(Token = "0x4000B5D")]
	[FieldOffset(Offset = "0x90")]
	private string m_UserMessage;

	[Token(Token = "0x170002CB")]
	public override string Message
	{
		[Token(Token = "0x60011DA")]
		[Address(RVA = "0x4B14B40", Offset = "0x4B14B40", VA = "0x4B14B40", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x4B142C0", Offset = "0x4B142C0", VA = "0x4B142C0")]
	public AssertionException(string message, string userMessage)
	{
	}
}
