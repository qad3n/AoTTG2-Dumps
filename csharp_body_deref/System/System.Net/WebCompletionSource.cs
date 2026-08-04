// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebCompletionSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001B2")]
internal class WebCompletionSource<T>
{
	[Token(Token = "0x20001B3")]
	internal enum Status
	{
		[Token(Token = "0x40008C0")]
		Running,
		[Token(Token = "0x40008C1")]
		Completed,
		[Token(Token = "0x40008C2")]
		Canceled,
		[Token(Token = "0x40008C3")]
		Faulted
	}

	[Token(Token = "0x20001B4")]
	internal class Result
	{
		[Token(Token = "0x17000278")]
		public Status Status
		{
			[Token(Token = "0x6000AA9")]
			[CompilerGenerated]
			get
			{
				return default(Status);
			}
		}

		[Token(Token = "0x17000279")]
		public bool Success
		{
			[Token(Token = "0x6000AAA")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700027A")]
		public ExceptionDispatchInfo Error
		{
			[Token(Token = "0x6000AAB")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700027B")]
		public T Argument
		{
			[Token(Token = "0x6000AAC")]
			[CompilerGenerated]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x6000AAD")]
		public Result(T argument)
		{
		}

		[Token(Token = "0x6000AAE")]
		public Result(Status state, ExceptionDispatchInfo error)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001B5")]
	[CompilerGenerated]
	private struct _003CWaitForCompletion_003Ed__15 : IAsyncStateMachine
	{
		[Token(Token = "0x40008C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40008C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x40008C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public WebCompletionSource<T> _003C_003E4__this;

		[Token(Token = "0x40008CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable<Result>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000AAF")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000AB0")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40008BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TaskCompletionSource<Result> completion;

	[Token(Token = "0x40008BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Result currentResult;

	[Token(Token = "0x17000276")]
	internal Result CurrentResult
	{
		[Token(Token = "0x6000AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000277")]
	internal Task Task
	{
		[Token(Token = "0x6000AA1")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A9F")]
	public WebCompletionSource(bool runAsync = true)
	{
	}

	[Token(Token = "0x6000AA2")]
	public bool TrySetCompleted(T argument)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA3")]
	public bool TrySetCompleted()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA4")]
	public bool TrySetCanceled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA5")]
	public bool TrySetCanceled(OperationCanceledException error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA6")]
	public bool TrySetException(Exception error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA7")]
	public void ThrowOnError()
	{
	}

	[Token(Token = "0x6000AA8")]
	[AsyncStateMachine(typeof(WebCompletionSource<>._003CWaitForCompletion_003Ed__15))]
	public Task<T> WaitForCompletion()
	{
		return null;
	}
}
[Token(Token = "0x20001B6")]
internal class WebCompletionSource : WebCompletionSource<object>
{
	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x4988260", Offset = "0x4988260", VA = "0x4988260")]
	public WebCompletionSource()
	{
	}
}
