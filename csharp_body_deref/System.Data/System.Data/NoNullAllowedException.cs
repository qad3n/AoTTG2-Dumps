using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200001F")]
public class NoNullAllowedException : DataException
{
	[Token(Token = "0x600015C")]
	[Address(RVA = "0x420A2E0", Offset = "0x420A2E0", VA = "0x420A2E0")]
	protected NoNullAllowedException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x420A2F0", Offset = "0x420A2F0", VA = "0x420A2F0")]
	public NoNullAllowedException()
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x420A330", Offset = "0x420A330", VA = "0x420A330")]
	public NoNullAllowedException(string s)
	{
	}
}
