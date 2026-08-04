// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskCompletionSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000225")]
public class TaskCompletionSource<TResult>
{
	[Token(Token = "0x4000A50")]
	[FieldOffset(Offset = "0x0")]
	private readonly Task<TResult> _task;

	[Token(Token = "0x170001D4")]
	public Task<TResult> Task
	{
		[Token(Token = "0x6001378")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001374")]
	public TaskCompletionSource()
	{
	}

	[Token(Token = "0x6001375")]
	public TaskCompletionSource(TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x6001376")]
	public TaskCompletionSource(object state)
	{
	}

	[Token(Token = "0x6001377")]
	public TaskCompletionSource(object state, TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x6001379")]
	private void SpinUntilCompleted()
	{
	}

	[Token(Token = "0x600137A")]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x600137B")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x600137C")]
	public bool TrySetResult(TResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600137D")]
	public void SetResult(TResult result)
	{
	}
}
