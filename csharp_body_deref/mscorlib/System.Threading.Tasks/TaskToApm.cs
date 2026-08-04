// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskToApm
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000227")]
internal static class TaskToApm
{
	[Token(Token = "0x2000228")]
	private sealed class TaskWrapperAsyncResult : IAsyncResult
	{
		[Token(Token = "0x4000A51")]
		[FieldOffset(Offset = "0x10")]
		internal readonly Task Task;

		[Token(Token = "0x4000A52")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _state;

		[Token(Token = "0x4000A53")]
		[FieldOffset(Offset = "0x20")]
		private readonly bool _completedSynchronously;

		[Token(Token = "0x170001D5")]
		private object System_002EIAsyncResult_002EAsyncState
		{
			[Token(Token = "0x6001386")]
			[Address(RVA = "0x3D3E6E0", Offset = "0x3D3E6E0", VA = "0x3D3E6E0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001D6")]
		private bool System_002EIAsyncResult_002ECompletedSynchronously
		{
			[Token(Token = "0x6001387")]
			[Address(RVA = "0x3D3E6F0", Offset = "0x3D3E6F0", VA = "0x3D3E6F0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001D7")]
		private bool System_002EIAsyncResult_002EIsCompleted
		{
			[Token(Token = "0x6001388")]
			[Address(RVA = "0x3D3E700", Offset = "0x3D3E700", VA = "0x3D3E700", Slot = "4")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001D8")]
		private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
		{
			[Token(Token = "0x6001389")]
			[Address(RVA = "0x3D3E770", Offset = "0x3D3E770", VA = "0x3D3E770", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001385")]
		[Address(RVA = "0x3D3E430", Offset = "0x3D3E430", VA = "0x3D3E430")]
		internal TaskWrapperAsyncResult(Task task, object state, bool completedSynchronously)
		{
		}
	}

	[Token(Token = "0x6001381")]
	[Address(RVA = "0x3D3E270", Offset = "0x3D3E270", VA = "0x3D3E270")]
	public static IAsyncResult Begin(Task task, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x3D3E590", Offset = "0x3D3E590", VA = "0x3D3E590")]
	public static void End(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001383")]
	public static TResult End<TResult>(IAsyncResult asyncResult)
	{
		return (TResult)null;
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x3D3E480", Offset = "0x3D3E480", VA = "0x3D3E480")]
	private static void InvokeCallbackWhenTaskCompletes(Task antecedent, AsyncCallback callback, IAsyncResult asyncResult)
	{
	}
}
