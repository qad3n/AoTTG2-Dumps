// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadPoolWorkQueueThreadLocals
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3D37420", Offset = "0x3D37420", VA = "0x3D37420")]
	public ThreadPoolWorkQueueThreadLocals(System.Threading.ThreadPoolWorkQueue tpq)
	{
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x3D397D0", Offset = "0x3D397D0", VA = "0x3D397D0")]
	private void CleanUp()
	{
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x3D398B0", Offset = "0x3D398B0", VA = "0x3D398B0", Slot = "1")]
	~ThreadPoolWorkQueueThreadLocals()
	{
	}
}
