// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.AwaitTaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200025C")]
internal class AwaitTaskContinuation : System.Threading.Tasks.TaskContinuation, System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000A98")]
	[FieldOffset(Offset = "0x10")]
	private readonly ExecutionContext m_capturedContext;

	[Token(Token = "0x4000A99")]
	[FieldOffset(Offset = "0x18")]
	protected readonly Action m_action;

	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x0")]
	private static ContextCallback s_invokeActionCallback;

	[Token(Token = "0x17000206")]
	internal static bool IsValidLocationForInlining
	{
		[Token(Token = "0x60014FD")]
		[Address(RVA = "0x554CE80", Offset = "0x554BE80", VA = "0x554CE80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x554C0F0", Offset = "0x554B0F0", VA = "0x554C0F0")]
	internal AwaitTaskContinuation(Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x554CC40", Offset = "0x554BC40", VA = "0x554CC40")]
	protected Task CreateTask(Action<object> action, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x554CAD0", Offset = "0x554BAD0", VA = "0x554CAD0", Slot = "4")]
	internal override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x554CFB0", Offset = "0x554BFB0", VA = "0x554CFB0", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x554D0E0", Offset = "0x554C0E0", VA = "0x554D0E0")]
	private static void InvokeAction(object state)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001500")]
	[Address(RVA = "0x554D130", Offset = "0x554C130", VA = "0x554D130")]
	protected static ContextCallback GetInvokeActionCallback()
	{
		return null;
	}

	[Token(Token = "0x6001501")]
	[Address(RVA = "0x554C2E0", Offset = "0x554B2E0", VA = "0x554C2E0")]
	protected void RunCallback(ContextCallback callback, object state, ref Task currentTask)
	{
	}

	[Token(Token = "0x6001502")]
	[Address(RVA = "0x5548AF0", Offset = "0x5547AF0", VA = "0x5548AF0")]
	internal static void RunOrScheduleAction(Action action, bool allowInlining, ref Task currentTask)
	{
	}

	[Token(Token = "0x6001503")]
	[Address(RVA = "0x5547B10", Offset = "0x5546B10", VA = "0x5547B10")]
	internal static void UnsafeScheduleAction(Action action)
	{
	}

	[Token(Token = "0x6001504")]
	[Address(RVA = "0x554CE10", Offset = "0x554BE10", VA = "0x554CE10")]
	protected static void ThrowAsyncIfNecessary(Exception exc)
	{
	}

	[Token(Token = "0x6001505")]
	[Address(RVA = "0x554D1E0", Offset = "0x554C1E0", VA = "0x554D1E0", Slot = "6")]
	public void MarkAborted(ThreadAbortException e)
	{
	}
}
