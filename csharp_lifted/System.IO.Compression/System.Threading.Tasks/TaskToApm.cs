using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000005")]
internal static class TaskToApm
{
	[Token(Token = "0x2000006")]
	private sealed class TaskWrapperAsyncResult : IAsyncResult
	{
		[Token(Token = "0x4000001")]
		[FieldOffset(Offset = "0x10")]
		internal readonly Task Task;

		[Token(Token = "0x4000002")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _state;

		[Token(Token = "0x4000003")]
		[FieldOffset(Offset = "0x20")]
		private readonly bool _completedSynchronously;

		[Token(Token = "0x17000001")]
		private object System_002EIAsyncResult_002EAsyncState
		{
			[Token(Token = "0x6000011")]
			[Address(RVA = "0x5F5F140", Offset = "0x5F5E140", VA = "0x5F5F140", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000002")]
		private bool System_002EIAsyncResult_002ECompletedSynchronously
		{
			[Token(Token = "0x6000012")]
			[Address(RVA = "0x5F5F150", Offset = "0x5F5E150", VA = "0x5F5F150", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000003")]
		private bool System_002EIAsyncResult_002EIsCompleted
		{
			[Token(Token = "0x6000013")]
			[Address(RVA = "0x5F5F160", Offset = "0x5F5E160", VA = "0x5F5F160", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000004")]
		private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
		{
			[Token(Token = "0x6000014")]
			[Address(RVA = "0x5F5F180", Offset = "0x5F5E180", VA = "0x5F5F180", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000010")]
		[Address(RVA = "0x5F5EF10", Offset = "0x5F5DF10", VA = "0x5F5EF10")]
		internal TaskWrapperAsyncResult(Task task, object state, bool completedSynchronously)
		{
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x5F5EE00", Offset = "0x5F5DE00", VA = "0x5F5EE00")]
	public static IAsyncResult Begin(Task task, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x5F5F060", Offset = "0x5F5E060", VA = "0x5F5F060")]
	public static void End(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600000E")]
	public static TResult End<TResult>(IAsyncResult asyncResult)
	{
		return (TResult)null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x5F5EF60", Offset = "0x5F5DF60", VA = "0x5F5EF60")]
	private static void InvokeCallbackWhenTaskCompletes(Task antecedent, AsyncCallback callback, IAsyncResult asyncResult)
	{
	}
}
