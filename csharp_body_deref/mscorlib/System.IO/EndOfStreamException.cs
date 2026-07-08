using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000539")]
public class EndOfStreamException : IOException
{
	[Token(Token = "0x60027E9")]
	[Address(RVA = "0x4F04330", Offset = "0x4F04330", VA = "0x4F04330")]
	public EndOfStreamException()
	{
	}

	[Token(Token = "0x60027EA")]
	[Address(RVA = "0x4F04370", Offset = "0x4F04370", VA = "0x4F04370")]
	public EndOfStreamException(string message)
	{
	}

	[Token(Token = "0x60027EB")]
	[Address(RVA = "0x4F04390", Offset = "0x4F04390", VA = "0x4F04390")]
	protected EndOfStreamException(SerializationInfo info, StreamingContext context)
	{
	}
}
