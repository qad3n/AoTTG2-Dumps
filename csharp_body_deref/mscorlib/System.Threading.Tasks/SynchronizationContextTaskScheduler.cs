// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.SynchronizationContextTaskScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000262")]
internal sealed class SynchronizationContextTaskScheduler : TaskScheduler
{
	[Token(Token = "0x4000AAA")]
	[FieldOffset(Offset = "0x18")]
	private SynchronizationContext m_synchronizationContext;

	[Token(Token = "0x4000AAB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SendOrPostCallback s_postCallback;

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x554E7A0", Offset = "0x554D7A0", VA = "0x554E7A0")]
	internal SynchronizationContextTaskScheduler()
	{
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x554EA20", Offset = "0x554DA20", VA = "0x554EA20", Slot = "4")]
	protected internal override void QueueTask(Task task)
	{
	}

	[Token(Token = "0x6001535")]
	[Address(RVA = "0x554EAA0", Offset = "0x554DAA0", VA = "0x554EAA0", Slot = "5")]
	protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}
}
