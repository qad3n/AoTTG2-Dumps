using System.Diagnostics;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200048A")]
public readonly struct TaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x400130B")]
	[FieldOffset(Offset = "0x0")]
	internal readonly Task m_task;

	[Token(Token = "0x17000479")]
	public bool IsCompleted
	{
		[Token(Token = "0x60022A0")]
		[Address(RVA = "0x4EDC000", Offset = "0x4EDC000", VA = "0x4EDC000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600229F")]
	[Address(RVA = "0x4EDBFF0", Offset = "0x4EDBFF0", VA = "0x4EDBFF0")]
	internal TaskAwaiter(Task task)
	{
	}

	[Token(Token = "0x60022A1")]
	[Address(RVA = "0x4EDBCA0", Offset = "0x4EDBCA0", VA = "0x4EDBCA0", Slot = "5")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022A2")]
	[Address(RVA = "0x4EDBE50", Offset = "0x4EDBE50", VA = "0x4EDBE50", Slot = "4")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022A3")]
	[Address(RVA = "0x4EDC0D0", Offset = "0x4EDC0D0", VA = "0x4EDC0D0")]
	[System.Diagnostics.StackTraceHidden]
	public void GetResult()
	{
	}

	[Token(Token = "0x60022A4")]
	[Address(RVA = "0x4EDC0E0", Offset = "0x4EDC0E0", VA = "0x4EDC0E0")]
	[System.Diagnostics.StackTraceHidden]
	internal static void ValidateEnd(Task task)
	{
	}

	[Token(Token = "0x60022A5")]
	[Address(RVA = "0x4EDC150", Offset = "0x4EDC150", VA = "0x4EDC150")]
	[System.Diagnostics.StackTraceHidden]
	private static void HandleNonSuccessAndDebuggerNotification(Task task)
	{
	}

	[Token(Token = "0x60022A6")]
	[Address(RVA = "0x4EDC1A0", Offset = "0x4EDC1A0", VA = "0x4EDC1A0")]
	[System.Diagnostics.StackTraceHidden]
	private static void ThrowForNonSuccess(Task task)
	{
	}

	[Token(Token = "0x60022A7")]
	[Address(RVA = "0x4EDC020", Offset = "0x4EDC020", VA = "0x4EDC020")]
	internal static void OnCompletedInternal(Task task, Action continuation, bool continueOnCapturedContext, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60022A8")]
	[Address(RVA = "0x4EDC2E0", Offset = "0x4EDC2E0", VA = "0x4EDC2E0")]
	private static Action OutputWaitEtwEvents(Task task, Action continuation)
	{
		return null;
	}
}
[Token(Token = "0x200048C")]
public readonly struct TaskAwaiter<TResult> : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x400130E")]
	[FieldOffset(Offset = "0x0")]
	private readonly Task<TResult> m_task;

	[Token(Token = "0x1700047A")]
	public bool IsCompleted
	{
		[Token(Token = "0x60022AC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60022AB")]
	internal TaskAwaiter(Task<TResult> task)
	{
	}

	[Token(Token = "0x60022AD")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022AE")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022AF")]
	[System.Diagnostics.StackTraceHidden]
	public TResult GetResult()
	{
		return (TResult)null;
	}
}
