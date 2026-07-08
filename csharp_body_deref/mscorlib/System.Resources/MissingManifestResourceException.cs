using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Resources;

[Serializable]
[Token(Token = "0x20004AC")]
public class MissingManifestResourceException : SystemException
{
	[Token(Token = "0x6002335")]
	[Address(RVA = "0x4EDE750", Offset = "0x4EDE750", VA = "0x4EDE750")]
	public MissingManifestResourceException()
	{
	}

	[Token(Token = "0x6002336")]
	[Address(RVA = "0x4EDE790", Offset = "0x4EDE790", VA = "0x4EDE790")]
	public MissingManifestResourceException(string message)
	{
	}

	[Token(Token = "0x6002337")]
	[Address(RVA = "0x4EDE7B0", Offset = "0x4EDE7B0", VA = "0x4EDE7B0")]
	protected MissingManifestResourceException(SerializationInfo info, StreamingContext context)
	{
	}
}
