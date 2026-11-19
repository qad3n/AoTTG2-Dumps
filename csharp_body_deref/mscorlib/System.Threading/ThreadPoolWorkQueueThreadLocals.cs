// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadPoolWorkQueueThreadLocals
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000218")]
internal sealed class ThreadPoolWorkQueueThreadLocals
{
	[Token(Token = "0x40009AC")]
	[ThreadStatic]
	public static System.Threading.ThreadPoolWorkQueueThreadLocals threadLocals;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x10")]
	public readonly System.Threading.ThreadPoolWorkQueue workQueue;

	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0x18")]
	public readonly System.Threading.ThreadPoolWorkQueue.WorkStealingQueue workStealingQueue;

	[Token(Token = "0x40009AF")]
	[FieldOffset(Offset = "0x20")]
	public readonly Random random;

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x553A240", Offset = "0x5539240", VA = "0x553A240")]
	public ThreadPoolWorkQueueThreadLocals(System.Threading.ThreadPoolWorkQueue tpq)
	{
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x553C1F0", Offset = "0x553B1F0", VA = "0x553C1F0")]
	private void CleanUp()
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x553C2E0", Offset = "0x553B2E0", VA = "0x553C2E0", Slot = "1")]
	~ThreadPoolWorkQueueThreadLocals()
	{
	}
}
