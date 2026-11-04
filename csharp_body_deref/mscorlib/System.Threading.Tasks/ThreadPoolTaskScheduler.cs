// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ThreadPoolTaskScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200028D")]
internal sealed class ThreadPoolTaskScheduler : TaskScheduler
{
	[Token(Token = "0x4000B51")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ParameterizedThreadStart s_longRunningThreadWork;

	[Token(Token = "0x1700020F")]
	internal override bool RequiresAtomicStartTransition
	{
		[Token(Token = "0x6001569")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001564")]
	[Address(RVA = "0x1BC07A0", Offset = "0x1BBEDA0", VA = "0x181BC07A0")]
	internal ThreadPoolTaskScheduler()
	{
	}

	[Token(Token = "0x6001565")]
	[Address(RVA = "0x1BC0350", Offset = "0x1BBE950", VA = "0x181BC0350", Slot = "4")]
	protected internal override void QueueTask(Task task)
	{
	}

	[Token(Token = "0x6001566")]
	[Address(RVA = "0x1BC0600", Offset = "0x1BBEC00", VA = "0x181BC0600", Slot = "5")]
	protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x1BC05F0", Offset = "0x1BBEBF0", VA = "0x181BC05F0", Slot = "6")]
	protected internal override bool TryDequeue(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x6001568")]
	[Address(RVA = "0x1BC0330", Offset = "0x1BBE930", VA = "0x181BC0330", Slot = "7")]
	internal override void NotifyWorkItemProgress()
	{
	}
}
