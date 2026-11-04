// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationCallbackInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000212")]
internal class CancellationCallbackInfo
{
	[Token(Token = "0x2000213")]
	internal sealed class WithSyncContext : System.Threading.CancellationCallbackInfo
	{
		[Token(Token = "0x40009CD")]
		[FieldOffset(Offset = "0x30")]
		internal readonly SynchronizationContext TargetSyncContext;

		[Token(Token = "0x600123E")]
		[Address(RVA = "0x18CB310", Offset = "0x18C9910", VA = "0x1818CB310")]
		internal WithSyncContext(Action<object> callback, object stateForCallback, ExecutionContext targetExecutionContext, CancellationTokenSource cancellationTokenSource, SynchronizationContext targetSyncContext)
		{
		}
	}

	[Token(Token = "0x40009C8")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Action<object> Callback;

	[Token(Token = "0x40009C9")]
	[FieldOffset(Offset = "0x18")]
	internal readonly object StateForCallback;

	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0x20")]
	internal readonly ExecutionContext TargetExecutionContext;

	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0x28")]
	internal readonly CancellationTokenSource CancellationTokenSource;

	[Token(Token = "0x40009CC")]
	[FieldOffset(Offset = "0x0")]
	private static ContextCallback s_executionContextCallback;

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x1B947D0", Offset = "0x1B92DD0", VA = "0x181B947D0")]
	internal CancellationCallbackInfo(Action<object> callback, object stateForCallback, ExecutionContext targetExecutionContext, CancellationTokenSource cancellationTokenSource)
	{
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x1B943E0", Offset = "0x1B929E0", VA = "0x181B943E0")]
	internal void ExecuteCallback()
	{
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x1B94750", Offset = "0x1B92D50", VA = "0x181B94750")]
	private static void ExecutionContextCallback(object obj)
	{
	}
}
