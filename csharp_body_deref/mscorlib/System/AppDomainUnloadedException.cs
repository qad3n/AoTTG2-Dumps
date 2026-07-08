using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000140")]
public class AppDomainUnloadedException : SystemException
{
	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x4FF7AA0", Offset = "0x4FF7AA0", VA = "0x4FF7AA0")]
	public AppDomainUnloadedException()
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x4FF7B50", Offset = "0x4FF7B50", VA = "0x4FF7B50")]
	protected AppDomainUnloadedException(SerializationInfo info, StreamingContext context)
	{
	}
}
