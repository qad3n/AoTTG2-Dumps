using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x2000019")]
public class DataException : SystemException
{
	[Token(Token = "0x6000149")]
	[Address(RVA = "0x420A030", Offset = "0x420A030", VA = "0x420A030")]
	protected DataException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x420A040", Offset = "0x420A040", VA = "0x420A040")]
	public DataException()
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x420A080", Offset = "0x420A080", VA = "0x420A080")]
	public DataException(string s)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x420A0A0", Offset = "0x420A0A0", VA = "0x420A0A0")]
	public DataException(string s, Exception innerException)
	{
	}
}
