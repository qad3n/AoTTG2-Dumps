using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200001C")]
public class DuplicateNameException : DataException
{
	[Token(Token = "0x6000153")]
	[Address(RVA = "0x420A190", Offset = "0x420A190", VA = "0x420A190")]
	protected DuplicateNameException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x420A1A0", Offset = "0x420A1A0", VA = "0x420A1A0")]
	public DuplicateNameException()
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x420A1E0", Offset = "0x420A1E0", VA = "0x420A1E0")]
	public DuplicateNameException(string s)
	{
	}
}
