using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200000E")]
internal static class TaskToApm
{
	[Token(Token = "0x200000F")]
	private sealed class TaskWrapperAsyncResult : IAsyncResult
	{
		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x10")]
		internal readonly Task Task;

		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _state;

		[Token(Token = "0x4000030")]
		[FieldOffset(Offset = "0x20")]
		private readonly bool _completedSynchronously;

		[Token(Token = "0x17000007")]
		private object System_002EIAsyncResult_002EAsyncState
		{
			[Token(Token = "0x600004C")]
			[Address(RVA = "0x4664870", Offset = "0x4664870", VA = "0x4664870", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000008")]
		private bool System_002EIAsyncResult_002ECompletedSynchronously
		{
			[Token(Token = "0x600004D")]
			[Address(RVA = "0x4664880", Offset = "0x4664880", VA = "0x4664880", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000009")]
		private bool System_002EIAsyncResult_002EIsCompleted
		{
			[Token(Token = "0x600004E")]
			[Address(RVA = "0x4664890", Offset = "0x4664890", VA = "0x4664890", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700000A")]
		private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
		{
			[Token(Token = "0x600004F")]
			[Address(RVA = "0x46648B0", Offset = "0x46648B0", VA = "0x46648B0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600004B")]
		[Address(RVA = "0x4664710", Offset = "0x4664710", VA = "0x4664710")]
		internal TaskWrapperAsyncResult(Task task, object state, bool completedSynchronously)
		{
		}
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4660D60", Offset = "0x4660D60", VA = "0x4660D60")]
	public static IAsyncResult Begin(Task task, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4661770", Offset = "0x4661770", VA = "0x4661770")]
	public static void End(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000049")]
	public static TResult End<TResult>(IAsyncResult asyncResult)
	{
		return (TResult)null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4664760", Offset = "0x4664760", VA = "0x4664760")]
	private static void InvokeCallbackWhenTaskCompletes(Task antecedent, AsyncCallback callback, IAsyncResult asyncResult)
	{
	}
}
