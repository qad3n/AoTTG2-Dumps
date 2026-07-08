using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x2000022")]
public class VersionNotFoundException : DataException
{
	[Token(Token = "0x6000165")]
	[Address(RVA = "0x420A430", Offset = "0x420A430", VA = "0x420A430")]
	protected VersionNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x420A440", Offset = "0x420A440", VA = "0x420A440")]
	public VersionNotFoundException()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x420A480", Offset = "0x420A480", VA = "0x420A480")]
	public VersionNotFoundException(string s)
	{
	}
}
