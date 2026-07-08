using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000216")]
internal class LockQueue
{
	[Token(Token = "0x4000A05")]
	[FieldOffset(Offset = "0x10")]
	private ReaderWriterLock rwlock;

	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x18")]
	private int lockCount;

	[Token(Token = "0x170001D1")]
	public bool IsEmpty
	{
		[Token(Token = "0x6001339")]
		[Address(RVA = "0x5055F60", Offset = "0x5055F60", VA = "0x5055F60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x5055D70", Offset = "0x5055D70", VA = "0x5055D70")]
	public LockQueue(ReaderWriterLock rwlock)
	{
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x5055DA0", Offset = "0x5055DA0", VA = "0x5055DA0")]
	public bool Wait(int timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x5056020", Offset = "0x5056020", VA = "0x5056020")]
	public void Pulse()
	{
	}
}
