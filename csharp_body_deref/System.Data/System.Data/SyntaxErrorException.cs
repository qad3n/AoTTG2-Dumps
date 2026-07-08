using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200005D")]
public class SyntaxErrorException : InvalidExpressionException
{
	[Token(Token = "0x6000618")]
	[Address(RVA = "0x4270960", Offset = "0x4270960", VA = "0x4270960")]
	protected SyntaxErrorException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x4270970", Offset = "0x4270970", VA = "0x4270970")]
	public SyntaxErrorException()
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x4270980", Offset = "0x4270980", VA = "0x4270980")]
	public SyntaxErrorException(string s)
	{
	}
}
