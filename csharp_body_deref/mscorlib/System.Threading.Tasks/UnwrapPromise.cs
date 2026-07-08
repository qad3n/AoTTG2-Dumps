using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000249")]
internal sealed class UnwrapPromise<TResult> : Task<TResult>, System.Threading.Tasks.ITaskCompletionAction
{
	[Token(Token = "0x4000ADF")]
	[FieldOffset(Offset = "0x0")]
	private byte _state;

	[Token(Token = "0x4000AE0")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool _lookForOce;

	[Token(Token = "0x17000204")]
	public bool InvokeMayRunArbitraryCode
	{
		[Token(Token = "0x600149B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001494")]
	public UnwrapPromise(Task outerTask, bool lookForOce)
	{
	}

	[Token(Token = "0x6001495")]
	public void Invoke(Task completingTask)
	{
	}

	[Token(Token = "0x6001496")]
	private void InvokeCore(Task completingTask)
	{
	}

	[Token(Token = "0x6001497")]
	private void InvokeCoreAsync(Task completingTask)
	{
	}

	[Token(Token = "0x6001498")]
	private void ProcessCompletedOuterTask(Task task)
	{
	}

	[Token(Token = "0x6001499")]
	private bool TrySetFromTask(Task task, bool lookForOce)
	{
		return default(bool);
	}

	[Token(Token = "0x600149A")]
	private void ProcessInnerTask(Task task)
	{
	}
}
