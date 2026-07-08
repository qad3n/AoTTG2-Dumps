using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000254")]
internal class AwaitTaskContinuation : System.Threading.Tasks.TaskContinuation, System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x10")]
	private readonly ExecutionContext m_capturedContext;

	[Token(Token = "0x4000AF1")]
	[FieldOffset(Offset = "0x18")]
	protected readonly Action m_action;

	[Token(Token = "0x4000AF2")]
	[FieldOffset(Offset = "0x0")]
	private static ContextCallback s_invokeActionCallback;

	[Token(Token = "0x17000205")]
	internal static bool IsValidLocationForInlining
	{
		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x50665B0", Offset = "0x50665B0", VA = "0x50665B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x5065770", Offset = "0x5065770", VA = "0x5065770")]
	internal AwaitTaskContinuation(Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x5066310", Offset = "0x5066310", VA = "0x5066310")]
	protected Task CreateTask(Action<object> action, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014B9")]
	[Address(RVA = "0x50661A0", Offset = "0x50661A0", VA = "0x50661A0", Slot = "4")]
	internal override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x50666E0", Offset = "0x50666E0", VA = "0x50666E0", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x5066810", Offset = "0x5066810", VA = "0x5066810")]
	private static void InvokeAction(object state)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x5066860", Offset = "0x5066860", VA = "0x5066860")]
	protected static ContextCallback GetInvokeActionCallback()
	{
		return null;
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x5065960", Offset = "0x5065960", VA = "0x5065960")]
	protected void RunCallback(ContextCallback callback, object state, ref Task currentTask)
	{
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x5060F40", Offset = "0x5060F40", VA = "0x5060F40")]
	internal static void RunOrScheduleAction(Action action, bool allowInlining, ref Task currentTask)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x505FEE0", Offset = "0x505FEE0", VA = "0x505FEE0")]
	internal static void UnsafeScheduleAction(Action action)
	{
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x5066540", Offset = "0x5066540", VA = "0x5066540")]
	protected static void ThrowAsyncIfNecessary(Exception exc)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x5066910", Offset = "0x5066910", VA = "0x5066910", Slot = "6")]
	public void MarkAborted(ThreadAbortException e)
	{
	}
}
