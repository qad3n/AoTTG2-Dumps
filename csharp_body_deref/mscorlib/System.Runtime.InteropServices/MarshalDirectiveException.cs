using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Serializable]
[Token(Token = "0x2000433")]
public class MarshalDirectiveException : SystemException
{
	[Token(Token = "0x60021B2")]
	[Address(RVA = "0x4ED7390", Offset = "0x4ED7390", VA = "0x4ED7390")]
	public MarshalDirectiveException()
	{
	}

	[Token(Token = "0x60021B3")]
	[Address(RVA = "0x4ED73D0", Offset = "0x4ED73D0", VA = "0x4ED73D0")]
	public MarshalDirectiveException(string message)
	{
	}

	[Token(Token = "0x60021B4")]
	[Address(RVA = "0x4ED73F0", Offset = "0x4ED73F0", VA = "0x4ED73F0")]
	protected MarshalDirectiveException(SerializationInfo info, StreamingContext context)
	{
	}
}
