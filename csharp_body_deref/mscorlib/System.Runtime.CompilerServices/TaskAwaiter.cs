// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.TaskAwaiter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3BC1B20", Offset = "0x3BC1B20", VA = "0x3BC1B20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600229F")]
	[Address(RVA = "0x3BC1B10", Offset = "0x3BC1B10", VA = "0x3BC1B10")]
	internal TaskAwaiter(Task task)
	{
	}

	[Token(Token = "0x60022A1")]
	[Address(RVA = "0x3BC17C0", Offset = "0x3BC17C0", VA = "0x3BC17C0", Slot = "5")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022A2")]
	[Address(RVA = "0x3BC1970", Offset = "0x3BC1970", VA = "0x3BC1970", Slot = "4")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022A3")]
	[Address(RVA = "0x3BC1BF0", Offset = "0x3BC1BF0", VA = "0x3BC1BF0")]
	[System.Diagnostics.StackTraceHidden]
	public void GetResult()
	{
	}

	[Token(Token = "0x60022A4")]
	[Address(RVA = "0x3BC1C00", Offset = "0x3BC1C00", VA = "0x3BC1C00")]
	[System.Diagnostics.StackTraceHidden]
	internal static void ValidateEnd(Task task)
	{
	}

	[Token(Token = "0x60022A5")]
	[Address(RVA = "0x3BC1C70", Offset = "0x3BC1C70", VA = "0x3BC1C70")]
	[System.Diagnostics.StackTraceHidden]
	private static void HandleNonSuccessAndDebuggerNotification(Task task)
	{
	}

	[Token(Token = "0x60022A6")]
	[Address(RVA = "0x3BC1CC0", Offset = "0x3BC1CC0", VA = "0x3BC1CC0")]
	[System.Diagnostics.StackTraceHidden]
	private static void ThrowForNonSuccess(Task task)
	{
	}

	[Token(Token = "0x60022A7")]
	[Address(RVA = "0x3BC1B40", Offset = "0x3BC1B40", VA = "0x3BC1B40")]
	internal static void OnCompletedInternal(Task task, Action continuation, bool continueOnCapturedContext, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60022A8")]
	[Address(RVA = "0x3BC1E00", Offset = "0x3BC1E00", VA = "0x3BC1E00")]
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
