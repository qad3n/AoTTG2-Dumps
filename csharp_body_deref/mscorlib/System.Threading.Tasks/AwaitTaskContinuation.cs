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

[Token(Token = "0x2000284")]
internal class AwaitTaskContinuation : System.Threading.Tasks.TaskContinuation, System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000B3A")]
	[FieldOffset(Offset = "0x10")]
	private readonly ExecutionContext m_capturedContext;

	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x18")]
	protected readonly Action m_action;

	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x0")]
	private static ContextCallback s_invokeActionCallback;

	[Token(Token = "0x17000207")]
	internal static bool IsValidLocationForInlining
	{
		[Token(Token = "0x6001526")]
		[Address(RVA = "0x1BACF80", Offset = "0x1BAB580", VA = "0x181BACF80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001523")]
	[Address(RVA = "0x1BACEF0", Offset = "0x1BAB4F0", VA = "0x181BACEF0")]
	internal AwaitTaskContinuation(Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x6001524")]
	[Address(RVA = "0x1BAC8B0", Offset = "0x1BAAEB0", VA = "0x181BAC8B0")]
	protected Task CreateTask(Action<object> action, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001525")]
	[Address(RVA = "0x1BACCB0", Offset = "0x1BAB2B0", VA = "0x181BACCB0", Slot = "4")]
	internal override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}

	[Token(Token = "0x6001527")]
	[Address(RVA = "0x1BACD70", Offset = "0x1BAB370", VA = "0x181BACD70", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x6001528")]
	[Address(RVA = "0x1BACA30", Offset = "0x1BAB030", VA = "0x181BACA30")]
	private static void InvokeAction(object state)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001529")]
	[Address(RVA = "0x1BAC980", Offset = "0x1BAAF80", VA = "0x181BAC980")]
	protected static ContextCallback GetInvokeActionCallback()
	{
		return null;
	}

	[Token(Token = "0x600152A")]
	[Address(RVA = "0x1BACAA0", Offset = "0x1BAB0A0", VA = "0x181BACAA0")]
	protected void RunCallback(ContextCallback callback, object state, ref Task currentTask)
	{
	}

	[Token(Token = "0x600152B")]
	[Address(RVA = "0x1BACB90", Offset = "0x1BAB190", VA = "0x181BACB90")]
	internal static void RunOrScheduleAction(Action action, bool allowInlining, ref Task currentTask)
	{
	}

	[Token(Token = "0x600152C")]
	[Address(RVA = "0x1BACE60", Offset = "0x1BAB460", VA = "0x181BACE60")]
	internal static void UnsafeScheduleAction(Action action)
	{
	}

	[Token(Token = "0x600152D")]
	[Address(RVA = "0x1BACE10", Offset = "0x1BAB410", VA = "0x181BACE10")]
	protected static void ThrowAsyncIfNecessary(Exception exc)
	{
	}

	[Token(Token = "0x600152E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public void MarkAborted(ThreadAbortException e)
	{
	}
}
