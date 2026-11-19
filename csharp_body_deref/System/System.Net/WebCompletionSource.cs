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

[Token(Token = "0x20002FB")]
internal class WebCompletionSource<T>
{
	[Token(Token = "0x20002FC")]
	internal enum Status
	{
		[Token(Token = "0x4000C07")]
		Running,
		[Token(Token = "0x4000C08")]
		Completed,
		[Token(Token = "0x4000C09")]
		Canceled,
		[Token(Token = "0x4000C0A")]
		Faulted
	}

	[Token(Token = "0x20002FD")]
	internal class Result
	{
		[Token(Token = "0x1700049F")]
		public Status Status
		{
			[Token(Token = "0x60014AC")]
			[CompilerGenerated]
			get
			{
				return default(Status);
			}
		}

		[Token(Token = "0x170004A0")]
		public bool Success
		{
			[Token(Token = "0x60014AD")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170004A1")]
		public ExceptionDispatchInfo Error
		{
			[Token(Token = "0x60014AE")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170004A2")]
		public T Argument
		{
			[Token(Token = "0x60014AF")]
			[CompilerGenerated]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x60014B0")]
		public Result(T argument)
		{
		}

		[Token(Token = "0x60014B1")]
		public Result(Status state, ExceptionDispatchInfo error)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002FE")]
	[CompilerGenerated]
	private struct _003CWaitForCompletion_003Ed__15 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x4000C10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public WebCompletionSource<T> _003C_003E4__this;

		[Token(Token = "0x4000C11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable<Result>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60014B2")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60014B3")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000C04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TaskCompletionSource<Result> completion;

	[Token(Token = "0x4000C05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Result currentResult;

	[Token(Token = "0x1700049D")]
	internal Result CurrentResult
	{
		[Token(Token = "0x60014A3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049E")]
	internal Task Task
	{
		[Token(Token = "0x60014A4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014A2")]
	public WebCompletionSource(bool runAsync = true)
	{
	}

	[Token(Token = "0x60014A5")]
	public bool TrySetCompleted(T argument)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A6")]
	public bool TrySetCompleted()
	{
		return default(bool);
	}

	[Token(Token = "0x60014A7")]
	public bool TrySetCanceled()
	{
		return default(bool);
	}

	[Token(Token = "0x60014A8")]
	public bool TrySetCanceled(OperationCanceledException error)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A9")]
	public bool TrySetException(Exception error)
	{
		return default(bool);
	}

	[Token(Token = "0x60014AA")]
	public void ThrowOnError()
	{
	}

	[Token(Token = "0x60014AB")]
	[AsyncStateMachine(typeof(WebCompletionSource<>._003CWaitForCompletion_003Ed__15))]
	public Task<T> WaitForCompletion()
	{
		return null;
	}
}
[Token(Token = "0x20002FF")]
internal class WebCompletionSource : WebCompletionSource<object>
{
	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x618A7F0", Offset = "0x61897F0", VA = "0x618A7F0")]
	public WebCompletionSource()
	{
	}
}
