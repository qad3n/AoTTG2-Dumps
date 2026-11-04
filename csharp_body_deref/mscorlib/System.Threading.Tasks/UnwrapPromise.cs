// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.UnwrapPromise
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000279")]
internal sealed class UnwrapPromise<TResult> : Task<TResult>, System.Threading.Tasks.ITaskCompletionAction
{
	[Token(Token = "0x4000B29")]
	[FieldOffset(Offset = "0x0")]
	private byte _state;

	[Token(Token = "0x4000B2A")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _lookForOce;

	[Token(Token = "0x17000206")]
	public bool InvokeMayRunArbitraryCode
	{
		[Token(Token = "0x6001507")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001500")]
	public UnwrapPromise(Task outerTask, bool lookForOce)
	{
	}

	[Token(Token = "0x6001501")]
	public void Invoke(Task completingTask)
	{
	}

	[Token(Token = "0x6001502")]
	private void InvokeCore(Task completingTask)
	{
	}

	[Token(Token = "0x6001503")]
	private void InvokeCoreAsync(Task completingTask)
	{
	}

	[Token(Token = "0x6001504")]
	private void ProcessCompletedOuterTask(Task task)
	{
	}

	[Token(Token = "0x6001505")]
	private bool TrySetFromTask(Task task, bool lookForOce)
	{
		return default(bool);
	}

	[Token(Token = "0x6001506")]
	private void ProcessInnerTask(Task task)
	{
	}
}
