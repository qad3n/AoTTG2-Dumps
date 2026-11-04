// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.SynchronizationContextTaskScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200028A")]
internal sealed class SynchronizationContextTaskScheduler : TaskScheduler
{
	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0x18")]
	private SynchronizationContext m_synchronizationContext;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SendOrPostCallback s_postCallback;

	[Token(Token = "0x600155C")]
	[Address(RVA = "0x1BB42B0", Offset = "0x1BB28B0", VA = "0x181BB42B0")]
	internal SynchronizationContextTaskScheduler()
	{
	}

	[Token(Token = "0x600155D")]
	[Address(RVA = "0x1BB40B0", Offset = "0x1BB26B0", VA = "0x181BB40B0", Slot = "4")]
	protected internal override void QueueTask(Task task)
	{
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x1BB4140", Offset = "0x1BB2740", VA = "0x181BB4140", Slot = "5")]
	protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}
}
