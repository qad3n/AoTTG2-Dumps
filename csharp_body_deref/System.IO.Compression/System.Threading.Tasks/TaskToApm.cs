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
			[Address(RVA = "0x4327110", Offset = "0x4327110", VA = "0x4327110", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000008")]
		private bool System_002EIAsyncResult_002ECompletedSynchronously
		{
			[Token(Token = "0x600004D")]
			[Address(RVA = "0x4327120", Offset = "0x4327120", VA = "0x4327120", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000009")]
		private bool System_002EIAsyncResult_002EIsCompleted
		{
			[Token(Token = "0x600004E")]
			[Address(RVA = "0x4327130", Offset = "0x4327130", VA = "0x4327130", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700000A")]
		private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
		{
			[Token(Token = "0x600004F")]
			[Address(RVA = "0x4327150", Offset = "0x4327150", VA = "0x4327150", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600004B")]
		[Address(RVA = "0x4326FB0", Offset = "0x4326FB0", VA = "0x4326FB0")]
		internal TaskWrapperAsyncResult(Task task, object state, bool completedSynchronously)
		{
		}
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4323600", Offset = "0x4323600", VA = "0x4323600")]
	public static IAsyncResult Begin(Task task, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4324010", Offset = "0x4324010", VA = "0x4324010")]
	public static void End(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000049")]
	public static TResult End<TResult>(IAsyncResult asyncResult)
	{
		return (TResult)null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4327000", Offset = "0x4327000", VA = "0x4327000")]
	private static void InvokeCallbackWhenTaskCompletes(Task antecedent, AsyncCallback callback, IAsyncResult asyncResult)
	{
	}
}
