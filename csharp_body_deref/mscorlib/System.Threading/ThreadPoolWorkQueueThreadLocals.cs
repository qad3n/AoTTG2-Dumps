using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200020F")]
internal sealed class ThreadPoolWorkQueueThreadLocals
{
	[Token(Token = "0x40009F0")]
	[ThreadStatic]
	public static System.Threading.ThreadPoolWorkQueueThreadLocals threadLocals;

	[Token(Token = "0x40009F1")]
	[FieldOffset(Offset = "0x10")]
	public readonly System.Threading.ThreadPoolWorkQueue workQueue;

	[Token(Token = "0x40009F2")]
	[FieldOffset(Offset = "0x18")]
	public readonly System.Threading.ThreadPoolWorkQueue.WorkStealingQueue workStealingQueue;

	[Token(Token = "0x40009F3")]
	[FieldOffset(Offset = "0x20")]
	public readonly Random random;

	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x5051900", Offset = "0x5051900", VA = "0x5051900")]
	public ThreadPoolWorkQueueThreadLocals(System.Threading.ThreadPoolWorkQueue tpq)
	{
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x5053CB0", Offset = "0x5053CB0", VA = "0x5053CB0")]
	private void CleanUp()
	{
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x5053D90", Offset = "0x5053D90", VA = "0x5053D90", Slot = "1")]
	~ThreadPoolWorkQueueThreadLocals()
	{
	}
}
