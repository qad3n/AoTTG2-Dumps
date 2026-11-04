// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskToApm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000258")]
internal static class TaskToApm
{
	[Token(Token = "0x2000259")]
	private sealed class TaskWrapperAsyncResult : IAsyncResult
	{
		[Token(Token = "0x4000AAE")]
		[FieldOffset(Offset = "0x10")]
		internal readonly Task Task;

		[Token(Token = "0x4000AAF")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _state;

		[Token(Token = "0x4000AB0")]
		[FieldOffset(Offset = "0x20")]
		private readonly bool _completedSynchronously;

		[Token(Token = "0x170001D9")]
		private object System_002EIAsyncResult_002EAsyncState
		{
			[Token(Token = "0x60013F7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001DA")]
		private bool System_002EIAsyncResult_002ECompletedSynchronously
		{
			[Token(Token = "0x60013F8")]
			[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001DB")]
		private bool System_002EIAsyncResult_002EIsCompleted
		{
			[Token(Token = "0x60013F9")]
			[Address(RVA = "0x1BB75C0", Offset = "0x1BB5BC0", VA = "0x181BB75C0", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001DC")]
		private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
		{
			[Token(Token = "0x60013FA")]
			[Address(RVA = "0x1BB7500", Offset = "0x1BB5B00", VA = "0x181BB7500", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60013F6")]
		[Address(RVA = "0x1A1E5E0", Offset = "0x1A1CBE0", VA = "0x181A1E5E0")]
		internal TaskWrapperAsyncResult(Task task, object state, bool completedSynchronously)
		{
		}
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x1BB70C0", Offset = "0x1BB56C0", VA = "0x181BB70C0")]
	public static IAsyncResult Begin(Task task, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x1BB72F0", Offset = "0x1BB58F0", VA = "0x181BB72F0")]
	public static void End(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60013F4")]
	public static TResult End<TResult>(IAsyncResult asyncResult)
	{
		return (TResult)null;
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x1BB7400", Offset = "0x1BB5A00", VA = "0x181BB7400")]
	private static void InvokeCallbackWhenTaskCompletes(Task antecedent, AsyncCallback callback, IAsyncResult asyncResult)
	{
	}
}
