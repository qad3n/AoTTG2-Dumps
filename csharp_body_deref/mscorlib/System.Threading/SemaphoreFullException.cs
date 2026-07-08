using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x20001D1")]
public class SemaphoreFullException : SystemException
{
	[Token(Token = "0x600116C")]
	[Address(RVA = "0x5042880", Offset = "0x5042880", VA = "0x5042880")]
	public SemaphoreFullException()
	{
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x50428C0", Offset = "0x50428C0", VA = "0x50428C0")]
	protected SemaphoreFullException(SerializationInfo info, StreamingContext context)
	{
	}
}
