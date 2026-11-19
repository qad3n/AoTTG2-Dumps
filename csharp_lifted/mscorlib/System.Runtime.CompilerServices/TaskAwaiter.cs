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

[Token(Token = "0x2000492")]
public readonly struct TaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x400126D")]
	[FieldOffset(Offset = "0x0")]
	internal readonly Task m_task;

	[Token(Token = "0x1700047B")]
	public bool IsCompleted
	{
		[Token(Token = "0x60022ED")]
		[Address(RVA = "0x53C9440", Offset = "0x53C8440", VA = "0x53C9440")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60022EC")]
	[Address(RVA = "0x53C9430", Offset = "0x53C8430", VA = "0x53C9430")]
	internal TaskAwaiter(Task task)
	{
	}

	[Token(Token = "0x60022EE")]
	[Address(RVA = "0x53C90E0", Offset = "0x53C80E0", VA = "0x53C90E0", Slot = "5")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022EF")]
	[Address(RVA = "0x53C9290", Offset = "0x53C8290", VA = "0x53C9290", Slot = "4")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022F0")]
	[Address(RVA = "0x53C9510", Offset = "0x53C8510", VA = "0x53C9510")]
	[System.Diagnostics.StackTraceHidden]
	public void GetResult()
	{
	}

	[Token(Token = "0x60022F1")]
	[Address(RVA = "0x53C9520", Offset = "0x53C8520", VA = "0x53C9520")]
	[System.Diagnostics.StackTraceHidden]
	internal static void ValidateEnd(Task task)
	{
	}

	[Token(Token = "0x60022F2")]
	[Address(RVA = "0x53C95A0", Offset = "0x53C85A0", VA = "0x53C95A0")]
	[System.Diagnostics.StackTraceHidden]
	private static void HandleNonSuccessAndDebuggerNotification(Task task)
	{
	}

	[Token(Token = "0x60022F3")]
	[Address(RVA = "0x53C95F0", Offset = "0x53C85F0", VA = "0x53C95F0")]
	[System.Diagnostics.StackTraceHidden]
	private static void ThrowForNonSuccess(Task task)
	{
	}

	[Token(Token = "0x60022F4")]
	[Address(RVA = "0x53C9460", Offset = "0x53C8460", VA = "0x53C9460")]
	internal static void OnCompletedInternal(Task task, Action continuation, bool continueOnCapturedContext, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60022F5")]
	[Address(RVA = "0x53C9740", Offset = "0x53C8740", VA = "0x53C9740")]
	private static Action OutputWaitEtwEvents(Task task, Action continuation)
	{
		return null;
	}
}
[Token(Token = "0x2000494")]
public readonly struct TaskAwaiter<TResult> : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x4001270")]
	[FieldOffset(Offset = "0x0")]
	private readonly Task<TResult> m_task;

	[Token(Token = "0x1700047C")]
	public bool IsCompleted
	{
		[Token(Token = "0x60022F9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60022F8")]
	internal TaskAwaiter(Task<TResult> task)
	{
	}

	[Token(Token = "0x60022FA")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022FB")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x60022FC")]
	[System.Diagnostics.StackTraceHidden]
	public TResult GetResult()
	{
		return (TResult)null;
	}
}
