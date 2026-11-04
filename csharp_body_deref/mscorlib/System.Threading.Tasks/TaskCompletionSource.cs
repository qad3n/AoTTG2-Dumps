// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskCompletionSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000256")]
public class TaskCompletionSource<TResult>
{
	[Token(Token = "0x4000AAD")]
	[FieldOffset(Offset = "0x0")]
	private readonly Task<TResult> _task;

	[Token(Token = "0x170001D8")]
	public Task<TResult> Task
	{
		[Token(Token = "0x60013E9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013E5")]
	public TaskCompletionSource()
	{
	}

	[Token(Token = "0x60013E6")]
	public TaskCompletionSource(TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x60013E7")]
	public TaskCompletionSource(object state)
	{
	}

	[Token(Token = "0x60013E8")]
	public TaskCompletionSource(object state, TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x60013EA")]
	private void SpinUntilCompleted()
	{
	}

	[Token(Token = "0x60013EB")]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60013EC")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x60013ED")]
	public bool TrySetResult(TResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60013EE")]
	public void SetResult(TResult result)
	{
	}
}
