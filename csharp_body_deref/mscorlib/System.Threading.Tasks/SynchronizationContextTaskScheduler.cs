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
	[Address(RVA = "0x5067FB0", Offset = "0x5067FB0", VA = "0x5067FB0")]
	internal SynchronizationContextTaskScheduler()
	{
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x5068220", Offset = "0x5068220", VA = "0x5068220", Slot = "4")]
	protected internal override void QueueTask(Task task)
	{
	}

	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x50682A0", Offset = "0x50682A0", VA = "0x50682A0", Slot = "5")]
	protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}
}
