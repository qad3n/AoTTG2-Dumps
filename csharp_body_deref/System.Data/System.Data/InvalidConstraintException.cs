using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200001E")]
public class InvalidConstraintException : DataException
{
	[Token(Token = "0x6000159")]
	[Address(RVA = "0x420A270", Offset = "0x420A270", VA = "0x420A270")]
	protected InvalidConstraintException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x420A280", Offset = "0x420A280", VA = "0x420A280")]
	public InvalidConstraintException()
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x420A2C0", Offset = "0x420A2C0", VA = "0x420A2C0")]
	public InvalidConstraintException(string s)
	{
	}
}
