using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200012B")]
public abstract class OperatorException : InvalidCastException
{
	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x4A08280", Offset = "0x4A08280", VA = "0x4A08280")]
	protected OperatorException()
	{
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x4A08290", Offset = "0x4A08290", VA = "0x4A08290")]
	protected OperatorException(string message)
	{
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x4A082A0", Offset = "0x4A082A0", VA = "0x4A082A0")]
	protected OperatorException(string message, Exception innerException)
	{
	}
}
