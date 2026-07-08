using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000ED")]
public class MissingMethodException : MissingMemberException
{
	[Token(Token = "0x17000098")]
	public override string Message
	{
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x4FD3750", Offset = "0x4FD3750", VA = "0x4FD3750", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x4FD3690", Offset = "0x4FD3690", VA = "0x4FD3690")]
	public MissingMethodException()
	{
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x4FD36D0", Offset = "0x4FD36D0", VA = "0x4FD36D0")]
	public MissingMethodException(string message)
	{
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x4FD36F0", Offset = "0x4FD36F0", VA = "0x4FD36F0")]
	public MissingMethodException(string className, string methodName)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x4FD3740", Offset = "0x4FD3740", VA = "0x4FD3740")]
	protected MissingMethodException(SerializationInfo info, StreamingContext context)
	{
	}
}
