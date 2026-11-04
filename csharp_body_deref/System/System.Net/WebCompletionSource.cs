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

[Token(Token = "0x200033A")]
internal class WebCompletionSource<T>
{
	[Token(Token = "0x200033B")]
	internal enum Status
	{
		[Token(Token = "0x4000CD6")]
		Running,
		[Token(Token = "0x4000CD7")]
		Completed,
		[Token(Token = "0x4000CD8")]
		Canceled,
		[Token(Token = "0x4000CD9")]
		Faulted
	}

	[Token(Token = "0x200033C")]
	internal class Result
	{
		[Token(Token = "0x170004CE")]
		public Status Status
		{
			[Token(Token = "0x600166A")]
			[CompilerGenerated]
			get
			{
				return default(Status);
			}
		}

		[Token(Token = "0x170004CF")]
		public bool Success
		{
			[Token(Token = "0x600166B")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170004D0")]
		public ExceptionDispatchInfo Error
		{
			[Token(Token = "0x600166C")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004D1")]
		public T Argument
		{
			[Token(Token = "0x600166D")]
			[CompilerGenerated]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x600166E")]
		public Result(T argument)
		{
		}

		[Token(Token = "0x600166F")]
		public Result(Status state, ExceptionDispatchInfo error)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x200033D")]
	[CompilerGenerated]
	private struct _003CWaitForCompletion_003Ed__15 : IAsyncStateMachine
	{
		[Token(Token = "0x4000CDD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000CDE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x4000CDF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public WebCompletionSource<T> _003C_003E4__this;

		[Token(Token = "0x4000CE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable<Result>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001670")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001671")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000CD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TaskCompletionSource<Result> completion;

	[Token(Token = "0x4000CD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Result currentResult;

	[Token(Token = "0x170004CC")]
	internal Result CurrentResult
	{
		[Token(Token = "0x6001661")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CD")]
	internal Task Task
	{
		[Token(Token = "0x6001662")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001660")]
	public WebCompletionSource(bool runAsync = true)
	{
	}

	[Token(Token = "0x6001663")]
	public bool TrySetCompleted(T argument)
	{
		return default(bool);
	}

	[Token(Token = "0x6001664")]
	public bool TrySetCompleted()
	{
		return default(bool);
	}

	[Token(Token = "0x6001665")]
	public bool TrySetCanceled()
	{
		return default(bool);
	}

	[Token(Token = "0x6001666")]
	public bool TrySetCanceled(OperationCanceledException error)
	{
		return default(bool);
	}

	[Token(Token = "0x6001667")]
	public bool TrySetException(Exception error)
	{
		return default(bool);
	}

	[Token(Token = "0x6001668")]
	public void ThrowOnError()
	{
	}

	[Token(Token = "0x6001669")]
	[AsyncStateMachine(typeof(WebCompletionSource<>._003CWaitForCompletion_003Ed__15))]
	public Task<T> WaitForCompletion()
	{
		return null;
	}
}
[Token(Token = "0x200033E")]
internal class WebCompletionSource : WebCompletionSource<object>
{
	[Token(Token = "0x6001672")]
	[Address(RVA = "0x27F1220", Offset = "0x27EF820", VA = "0x1827F1220")]
	public WebCompletionSource()
	{
	}
}
