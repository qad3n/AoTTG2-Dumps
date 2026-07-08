using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001E7")]
internal class CancellationCallbackInfo
{
	[Token(Token = "0x20001E8")]
	internal sealed class WithSyncContext : System.Threading.CancellationCallbackInfo
	{
		[Token(Token = "0x400097A")]
		[FieldOffset(Offset = "0x30")]
		internal readonly SynchronizationContext TargetSyncContext;

		[Token(Token = "0x60011E3")]
		[Address(RVA = "0x5046C50", Offset = "0x5046C50", VA = "0x5046C50")]
		internal WithSyncContext(Action<object> callback, object stateForCallback, ExecutionContext targetExecutionContext, CancellationTokenSource cancellationTokenSource, SynchronizationContext targetSyncContext)
		{
		}
	}

	[Token(Token = "0x4000975")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Action<object> Callback;

	[Token(Token = "0x4000976")]
	[FieldOffset(Offset = "0x18")]
	internal readonly object StateForCallback;

	[Token(Token = "0x4000977")]
	[FieldOffset(Offset = "0x20")]
	internal readonly ExecutionContext TargetExecutionContext;

	[Token(Token = "0x4000978")]
	[FieldOffset(Offset = "0x28")]
	internal readonly CancellationTokenSource CancellationTokenSource;

	[Token(Token = "0x4000979")]
	[FieldOffset(Offset = "0x0")]
	private static ContextCallback s_executionContextCallback;

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x5046BE0", Offset = "0x5046BE0", VA = "0x5046BE0")]
	internal CancellationCallbackInfo(Action<object> callback, object stateForCallback, ExecutionContext targetExecutionContext, CancellationTokenSource cancellationTokenSource)
	{
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x5047430", Offset = "0x5047430", VA = "0x5047430")]
	internal void ExecuteCallback()
	{
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x5048520", Offset = "0x5048520", VA = "0x5048520")]
	private static void ExecutionContextCallback(object obj)
	{
	}
}
