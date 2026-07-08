using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200001A")]
public class ConstraintException : DataException
{
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x420A0B0", Offset = "0x420A0B0", VA = "0x420A0B0")]
	protected ConstraintException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x420A0C0", Offset = "0x420A0C0", VA = "0x420A0C0")]
	public ConstraintException()
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x420A100", Offset = "0x420A100", VA = "0x420A100")]
	public ConstraintException(string s)
	{
	}
}
