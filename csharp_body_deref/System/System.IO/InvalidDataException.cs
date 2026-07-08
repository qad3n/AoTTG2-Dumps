using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000368")]
public sealed class InvalidDataException : SystemException
{
	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x45C9C50", Offset = "0x45C9C50", VA = "0x45C9C50")]
	public InvalidDataException()
	{
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x45C9CA0", Offset = "0x45C9CA0", VA = "0x45C9CA0")]
	public InvalidDataException(string message)
	{
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x45C9CC0", Offset = "0x45C9CC0", VA = "0x45C9CC0")]
	private InvalidDataException(SerializationInfo info, StreamingContext context)
	{
	}
}
