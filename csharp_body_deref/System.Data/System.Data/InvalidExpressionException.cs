using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200005B")]
public class InvalidExpressionException : DataException
{
	[Token(Token = "0x6000612")]
	[Address(RVA = "0x4270900", Offset = "0x4270900", VA = "0x4270900")]
	protected InvalidExpressionException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x4270910", Offset = "0x4270910", VA = "0x4270910")]
	public InvalidExpressionException()
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x4270920", Offset = "0x4270920", VA = "0x4270920")]
	public InvalidExpressionException(string s)
	{
	}
}
