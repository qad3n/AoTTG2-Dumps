using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x20001D3")]
public class SynchronizationLockException : SystemException
{
	[Token(Token = "0x6001170")]
	[Address(RVA = "0x5042A00", Offset = "0x5042A00", VA = "0x5042A00")]
	public SynchronizationLockException()
	{
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x5042A40", Offset = "0x5042A40", VA = "0x5042A40")]
	public SynchronizationLockException(string message)
	{
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x5042A60", Offset = "0x5042A60", VA = "0x5042A60")]
	protected SynchronizationLockException(SerializationInfo info, StreamingContext context)
	{
	}
}
