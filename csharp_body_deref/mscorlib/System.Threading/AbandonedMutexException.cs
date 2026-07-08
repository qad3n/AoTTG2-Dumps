using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x20001C6")]
public class AbandonedMutexException : SystemException
{
	[Token(Token = "0x4000928")]
	[FieldOffset(Offset = "0x8C")]
	private int _mutexIndex;

	[Token(Token = "0x4000929")]
	[FieldOffset(Offset = "0x90")]
	private Mutex _mutex;

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x50423C0", Offset = "0x50423C0", VA = "0x50423C0")]
	public AbandonedMutexException()
	{
	}

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x5042410", Offset = "0x5042410", VA = "0x5042410")]
	public AbandonedMutexException(int location, WaitHandle handle)
	{
	}

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x5042550", Offset = "0x5042550", VA = "0x5042550")]
	protected AbandonedMutexException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x50424D0", Offset = "0x50424D0", VA = "0x50424D0")]
	private void SetupException(int location, WaitHandle handle)
	{
	}
}
