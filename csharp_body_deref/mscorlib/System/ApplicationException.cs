using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000089")]
public class ApplicationException : Exception
{
	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x4F2D9D0", Offset = "0x4F2D9D0", VA = "0x4F2D9D0")]
	public ApplicationException()
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x4F2DA40", Offset = "0x4F2DA40", VA = "0x4F2DA40")]
	public ApplicationException(string message)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x4F2DAA0", Offset = "0x4F2DAA0", VA = "0x4F2DAA0")]
	public ApplicationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x4F2DB00", Offset = "0x4F2DB00", VA = "0x4F2DB00")]
	protected ApplicationException(SerializationInfo info, StreamingContext context)
	{
	}
}
