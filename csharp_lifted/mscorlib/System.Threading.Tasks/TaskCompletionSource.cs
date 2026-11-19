// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskCompletionSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200022E")]
public class TaskCompletionSource<TResult>
{
	[Token(Token = "0x4000A0B")]
	[FieldOffset(Offset = "0x0")]
	private readonly Task<TResult> _task;

	[Token(Token = "0x170001D7")]
	public Task<TResult> Task
	{
		[Token(Token = "0x60013C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013BC")]
	public TaskCompletionSource()
	{
	}

	[Token(Token = "0x60013BD")]
	public TaskCompletionSource(TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x60013BE")]
	public TaskCompletionSource(object state)
	{
	}

	[Token(Token = "0x60013BF")]
	public TaskCompletionSource(object state, TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x60013C1")]
	private void SpinUntilCompleted()
	{
	}

	[Token(Token = "0x60013C2")]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60013C3")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x60013C4")]
	public bool TrySetResult(TResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60013C5")]
	public void SetResult(TResult result)
	{
	}
}
