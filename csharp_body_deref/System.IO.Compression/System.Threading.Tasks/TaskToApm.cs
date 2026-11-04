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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000002")]
		private bool System_002EIAsyncResult_002ECompletedSynchronously
		{
			[Token(Token = "0x6000012")]
			[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000003")]
		private bool System_002EIAsyncResult_002EIsCompleted
		{
			[Token(Token = "0x6000013")]
			[Address(RVA = "0x25B90F0", Offset = "0x25B76F0", VA = "0x1825B90F0", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000004")]
		private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
		{
			[Token(Token = "0x6000014")]
			[Address(RVA = "0x25B9030", Offset = "0x25B7630", VA = "0x1825B9030", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000010")]
		[Address(RVA = "0x1A1E5E0", Offset = "0x1A1CBE0", VA = "0x181A1E5E0")]
		internal TaskWrapperAsyncResult(Task task, object state, bool completedSynchronously)
		{
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x25B8C50", Offset = "0x25B7250", VA = "0x1825B8C50")]
	public static IAsyncResult Begin(Task task, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x25B8E40", Offset = "0x25B7440", VA = "0x1825B8E40")]
	public static void End(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600000E")]
	public static TResult End<TResult>(IAsyncResult asyncResult)
	{
		return (TResult)null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x25B8F40", Offset = "0x25B7540", VA = "0x1825B8F40")]
	private static void InvokeCallbackWhenTaskCompletes(Task antecedent, AsyncCallback callback, IAsyncResult asyncResult)
	{
	}
}
