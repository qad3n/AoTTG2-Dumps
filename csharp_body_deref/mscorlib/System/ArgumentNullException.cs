using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200008B")]
public class ArgumentNullException : ArgumentException
{
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4F2DDE0", Offset = "0x4F2DDE0", VA = "0x4F2DDE0")]
	public ArgumentNullException()
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4F25240", Offset = "0x4F25240", VA = "0x4F25240")]
	public ArgumentNullException(string paramName)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4F2DE20", Offset = "0x4F2DE20", VA = "0x4F2DE20")]
	public ArgumentNullException(string paramName, string message)
	{
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x4F2DE60", Offset = "0x4F2DE60", VA = "0x4F2DE60")]
	protected ArgumentNullException(SerializationInfo info, StreamingContext context)
	{
	}
}
