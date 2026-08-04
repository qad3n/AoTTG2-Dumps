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
		[Address(RVA = "0x3D4C0D0", Offset = "0x3D4C0D0", VA = "0x3D4C0D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x3D4B290", Offset = "0x3D4B290", VA = "0x3D4B290")]
	internal AwaitTaskContinuation(Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x3D4BE30", Offset = "0x3D4BE30", VA = "0x3D4BE30")]
	protected Task CreateTask(Action<object> action, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014B9")]
	[Address(RVA = "0x3D4BCC0", Offset = "0x3D4BCC0", VA = "0x3D4BCC0", Slot = "4")]
	internal override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x3D4C200", Offset = "0x3D4C200", VA = "0x3D4C200", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x3D4C330", Offset = "0x3D4C330", VA = "0x3D4C330")]
	private static void InvokeAction(object state)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x3D4C380", Offset = "0x3D4C380", VA = "0x3D4C380")]
	protected static ContextCallback GetInvokeActionCallback()
	{
		return null;
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x3D4B480", Offset = "0x3D4B480", VA = "0x3D4B480")]
	protected void RunCallback(ContextCallback callback, object state, ref Task currentTask)
	{
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x3D46A60", Offset = "0x3D46A60", VA = "0x3D46A60")]
	internal static void RunOrScheduleAction(Action action, bool allowInlining, ref Task currentTask)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x3D45A00", Offset = "0x3D45A00", VA = "0x3D45A00")]
	internal static void UnsafeScheduleAction(Action action)
	{
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x3D4C060", Offset = "0x3D4C060", VA = "0x3D4C060")]
	protected static void ThrowAsyncIfNecessary(Exception exc)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x3D4C430", Offset = "0x3D4C430", VA = "0x3D4C430", Slot = "6")]
	public void MarkAborted(ThreadAbortException e)
	{
	}
}
