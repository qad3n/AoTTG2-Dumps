using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x200025C")]
public class InvalidEnumArgumentException : ArgumentException
{
	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x455D9F0", Offset = "0x455D9F0", VA = "0x455D9F0")]
	public InvalidEnumArgumentException()
	{
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x455DA00", Offset = "0x455DA00", VA = "0x455DA00")]
	public InvalidEnumArgumentException(string message)
	{
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x455DA10", Offset = "0x455DA10", VA = "0x455DA10")]
	public InvalidEnumArgumentException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x455DA20", Offset = "0x455DA20", VA = "0x455DA20")]
	public InvalidEnumArgumentException(string argumentName, int invalidValue, Type enumClass)
	{
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x455DAF0", Offset = "0x455DAF0", VA = "0x455DAF0")]
	protected InvalidEnumArgumentException(SerializationInfo info, StreamingContext context)
	{
	}
}
