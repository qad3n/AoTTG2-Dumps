// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.SynchronizationContextTaskScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200025A")]
internal sealed class SynchronizationContextTaskScheduler : TaskScheduler
{
	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0x18")]
	private SynchronizationContext m_synchronizationContext;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SendOrPostCallback s_postCallback;

	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x3D4DAD0", Offset = "0x3D4DAD0", VA = "0x3D4DAD0")]
	internal SynchronizationContextTaskScheduler()
	{
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x3D4DD40", Offset = "0x3D4DD40", VA = "0x3D4DD40", Slot = "4")]
	protected internal override void QueueTask(Task task)
	{
	}

	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x3D4DDC0", Offset = "0x3D4DDC0", VA = "0x3D4DDC0", Slot = "5")]
	protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}
}
