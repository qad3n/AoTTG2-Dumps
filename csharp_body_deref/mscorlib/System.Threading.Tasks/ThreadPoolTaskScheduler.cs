// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ThreadPoolTaskScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200025D")]
internal sealed class ThreadPoolTaskScheduler : TaskScheduler
{
	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ParameterizedThreadStart s_longRunningThreadWork;

	[Token(Token = "0x1700020D")]
	internal override bool RequiresAtomicStartTransition
	{
		[Token(Token = "0x60014FD")]
		[Address(RVA = "0x3D4E3E0", Offset = "0x3D4E3E0", VA = "0x3D4E3E0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x3D4DCD0", Offset = "0x3D4DCD0", VA = "0x3D4DCD0")]
	internal ThreadPoolTaskScheduler()
	{
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x3D4DFB0", Offset = "0x3D4DFB0", VA = "0x3D4DFB0", Slot = "4")]
	protected internal override void QueueTask(Task task)
	{
	}

	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x3D4E2E0", Offset = "0x3D4E2E0", VA = "0x3D4E2E0", Slot = "5")]
	protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x3D4E3C0", Offset = "0x3D4E3C0", VA = "0x3D4E3C0", Slot = "6")]
	protected internal override bool TryDequeue(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x3D4E3D0", Offset = "0x3D4E3D0", VA = "0x3D4E3D0", Slot = "7")]
	internal override void NotifyWorkItemProgress()
	{
	}
}
