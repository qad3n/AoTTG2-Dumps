// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ThreadPoolTaskScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000265")]
internal sealed class ThreadPoolTaskScheduler : TaskScheduler
{
	[Token(Token = "0x4000AAF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ParameterizedThreadStart s_longRunningThreadWork;

	[Token(Token = "0x1700020E")]
	internal override bool RequiresAtomicStartTransition
	{
		[Token(Token = "0x6001540")]
		[Address(RVA = "0x554F0C0", Offset = "0x554E0C0", VA = "0x554F0C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600153B")]
	[Address(RVA = "0x554E9B0", Offset = "0x554D9B0", VA = "0x554E9B0")]
	internal ThreadPoolTaskScheduler()
	{
	}

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x554EC90", Offset = "0x554DC90", VA = "0x554EC90", Slot = "4")]
	protected internal override void QueueTask(Task task)
	{
	}

	[Token(Token = "0x600153D")]
	[Address(RVA = "0x554EFC0", Offset = "0x554DFC0", VA = "0x554EFC0", Slot = "5")]
	protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}

	[Token(Token = "0x600153E")]
	[Address(RVA = "0x554F0A0", Offset = "0x554E0A0", VA = "0x554F0A0", Slot = "6")]
	protected internal override bool TryDequeue(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x600153F")]
	[Address(RVA = "0x554F0B0", Offset = "0x554E0B0", VA = "0x554F0B0", Slot = "7")]
	internal override void NotifyWorkItemProgress()
	{
	}
}
