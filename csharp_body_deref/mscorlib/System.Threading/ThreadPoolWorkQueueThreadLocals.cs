// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadPoolWorkQueueThreadLocals
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000240")]
internal sealed class ThreadPoolWorkQueueThreadLocals
{
	[Token(Token = "0x4000A4E")]
	[ThreadStatic]
	public static System.Threading.ThreadPoolWorkQueueThreadLocals threadLocals;

	[Token(Token = "0x4000A4F")]
	[FieldOffset(Offset = "0x10")]
	public readonly System.Threading.ThreadPoolWorkQueue workQueue;

	[Token(Token = "0x4000A50")]
	[FieldOffset(Offset = "0x18")]
	public readonly System.Threading.ThreadPoolWorkQueue.WorkStealingQueue workStealingQueue;

	[Token(Token = "0x4000A51")]
	[FieldOffset(Offset = "0x20")]
	public readonly Random random;

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x1BC0980", Offset = "0x1BBEF80", VA = "0x181BC0980")]
	public ThreadPoolWorkQueueThreadLocals(System.Threading.ThreadPoolWorkQueue tpq)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x1BC07F0", Offset = "0x1BBEDF0", VA = "0x181BC07F0")]
	private void CleanUp()
	{
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x1BC08F0", Offset = "0x1BBEEF0", VA = "0x181BC08F0", Slot = "1")]
	~ThreadPoolWorkQueueThreadLocals()
	{
	}
}
