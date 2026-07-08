using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200005C")]
public class EvaluateException : InvalidExpressionException
{
	[Token(Token = "0x6000615")]
	[Address(RVA = "0x4270930", Offset = "0x4270930", VA = "0x4270930")]
	protected EvaluateException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x4270940", Offset = "0x4270940", VA = "0x4270940")]
	public EvaluateException()
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x4270950", Offset = "0x4270950", VA = "0x4270950")]
	public EvaluateException(string s)
	{
	}
}
