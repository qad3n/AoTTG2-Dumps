// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.UnwrapPromise
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000251")]
internal sealed class UnwrapPromise<TResult> : Task<TResult>, System.Threading.Tasks.ITaskCompletionAction
{
	[Token(Token = "0x4000A87")]
	[FieldOffset(Offset = "0x0")]
	private byte _state;

	[Token(Token = "0x4000A88")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _lookForOce;

	[Token(Token = "0x17000205")]
	public bool InvokeMayRunArbitraryCode
	{
		[Token(Token = "0x60014DE")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014D7")]
	public UnwrapPromise(Task outerTask, bool lookForOce)
	{
	}

	[Token(Token = "0x60014D8")]
	public void Invoke(Task completingTask)
	{
	}

	[Token(Token = "0x60014D9")]
	private void InvokeCore(Task completingTask)
	{
	}

	[Token(Token = "0x60014DA")]
	private void InvokeCoreAsync(Task completingTask)
	{
	}

	[Token(Token = "0x60014DB")]
	private void ProcessCompletedOuterTask(Task task)
	{
	}

	[Token(Token = "0x60014DC")]
	private bool TrySetFromTask(Task task, bool lookForOce)
	{
		return default(bool);
	}

	[Token(Token = "0x60014DD")]
	private void ProcessInnerTask(Task task)
	{
	}
}
