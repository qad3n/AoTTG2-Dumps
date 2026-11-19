// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskToApm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000230")]
internal static class TaskToApm
{
	[Token(Token = "0x2000231")]
	private sealed class TaskWrapperAsyncResult : IAsyncResult
	{
		[Token(Token = "0x4000A0C")]
		[FieldOffset(Offset = "0x10")]
		internal readonly Task Task;

		[Token(Token = "0x4000A0D")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _state;

		[Token(Token = "0x4000A0E")]
		[FieldOffset(Offset = "0x20")]
		private readonly bool _completedSynchronously;

		[Token(Token = "0x170001D8")]
		private object System_002EIAsyncResult_002EAsyncState
		{
			[Token(Token = "0x60013CE")]
			[Address(RVA = "0x5540F80", Offset = "0x553FF80", VA = "0x5540F80", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001D9")]
		private bool System_002EIAsyncResult_002ECompletedSynchronously
		{
			[Token(Token = "0x60013CF")]
			[Address(RVA = "0x5540F90", Offset = "0x553FF90", VA = "0x5540F90", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001DA")]
		private bool System_002EIAsyncResult_002EIsCompleted
		{
			[Token(Token = "0x60013D0")]
			[Address(RVA = "0x5540FA0", Offset = "0x553FFA0", VA = "0x5540FA0", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001DB")]
		private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
		{
			[Token(Token = "0x60013D1")]
			[Address(RVA = "0x5541010", Offset = "0x5540010", VA = "0x5541010", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60013CD")]
		[Address(RVA = "0x5540CE0", Offset = "0x553FCE0", VA = "0x5540CE0")]
		internal TaskWrapperAsyncResult(Task task, object state, bool completedSynchronously)
		{
		}
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x5540B30", Offset = "0x553FB30", VA = "0x5540B30")]
	public static IAsyncResult Begin(Task task, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x5540E40", Offset = "0x553FE40", VA = "0x5540E40")]
	public static void End(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60013CB")]
	public static TResult End<TResult>(IAsyncResult asyncResult)
	{
		return (TResult)null;
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x5540D30", Offset = "0x553FD30", VA = "0x5540D30")]
	private static void InvokeCallbackWhenTaskCompletes(Task antecedent, AsyncCallback callback, IAsyncResult asyncResult)
	{
	}
}
