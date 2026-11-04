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

[Token(Token = "0x20004B9")]
public readonly struct TaskAwaiter : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x400130D")]
	[FieldOffset(Offset = "0x0")]
	internal readonly Task m_task;

	[Token(Token = "0x1700047C")]
	public bool IsCompleted
	{
		[Token(Token = "0x6002320")]
		[Address(RVA = "0xD25160", Offset = "0xD23760", VA = "0x180D25160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600231F")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	internal TaskAwaiter(Task task)
	{
	}

	[Token(Token = "0x6002321")]
	[Address(RVA = "0x1A380B0", Offset = "0x1A366B0", VA = "0x181A380B0", Slot = "5")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x6002322")]
	[Address(RVA = "0x1A384B0", Offset = "0x1A36AB0", VA = "0x181A384B0", Slot = "4")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x6002323")]
	[Address(RVA = "0x1A29290", Offset = "0x1A27890", VA = "0x181A29290")]
	[System.Diagnostics.StackTraceHidden]
	public void GetResult()
	{
	}

	[Token(Token = "0x6002324")]
	[Address(RVA = "0x1A38560", Offset = "0x1A36B60", VA = "0x181A38560")]
	[System.Diagnostics.StackTraceHidden]
	internal static void ValidateEnd(Task task)
	{
	}

	[Token(Token = "0x6002325")]
	[Address(RVA = "0x1A37E60", Offset = "0x1A36460", VA = "0x181A37E60")]
	[System.Diagnostics.StackTraceHidden]
	private static void HandleNonSuccessAndDebuggerNotification(Task task)
	{
	}

	[Token(Token = "0x6002326")]
	[Address(RVA = "0x1A38350", Offset = "0x1A36950", VA = "0x181A38350")]
	[System.Diagnostics.StackTraceHidden]
	private static void ThrowForNonSuccess(Task task)
	{
	}

	[Token(Token = "0x6002327")]
	[Address(RVA = "0x1A37FF0", Offset = "0x1A365F0", VA = "0x181A37FF0")]
	internal static void OnCompletedInternal(Task task, Action continuation, bool continueOnCapturedContext, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x6002328")]
	[Address(RVA = "0x1A38160", Offset = "0x1A36760", VA = "0x181A38160")]
	private static Action OutputWaitEtwEvents(Task task, Action continuation)
	{
		return null;
	}
}
[Token(Token = "0x20004BB")]
public readonly struct TaskAwaiter<TResult> : ICriticalNotifyCompletion, INotifyCompletion
{
	[Token(Token = "0x4001310")]
	[FieldOffset(Offset = "0x0")]
	private readonly Task<TResult> m_task;

	[Token(Token = "0x1700047D")]
	public bool IsCompleted
	{
		[Token(Token = "0x600232C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600232B")]
	internal TaskAwaiter(Task<TResult> task)
	{
	}

	[Token(Token = "0x600232D")]
	public void OnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x600232E")]
	public void UnsafeOnCompleted(Action continuation)
	{
	}

	[Token(Token = "0x600232F")]
	[System.Diagnostics.StackTraceHidden]
	public TResult GetResult()
	{
		return (TResult)null;
	}
}
