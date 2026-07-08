using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x2000020")]
public class ReadOnlyException : DataException
{
	[Token(Token = "0x600015F")]
	[Address(RVA = "0x420A350", Offset = "0x420A350", VA = "0x420A350")]
	protected ReadOnlyException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x420A360", Offset = "0x420A360", VA = "0x420A360")]
	public ReadOnlyException()
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x420A3A0", Offset = "0x420A3A0", VA = "0x420A3A0")]
	public ReadOnlyException(string s)
	{
	}
}
