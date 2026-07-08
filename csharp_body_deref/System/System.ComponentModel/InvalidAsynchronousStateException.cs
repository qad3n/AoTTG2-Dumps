using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x20002AB")]
public class InvalidAsynchronousStateException : ArgumentException
{
	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x456FDD0", Offset = "0x456FDD0", VA = "0x456FDD0")]
	public InvalidAsynchronousStateException()
	{
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x456FDE0", Offset = "0x456FDE0", VA = "0x456FDE0")]
	public InvalidAsynchronousStateException(string message)
	{
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x456FDF0", Offset = "0x456FDF0", VA = "0x456FDF0")]
	public InvalidAsynchronousStateException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x456FE00", Offset = "0x456FE00", VA = "0x456FE00")]
	protected InvalidAsynchronousStateException(SerializationInfo info, StreamingContext context)
	{
	}
}
