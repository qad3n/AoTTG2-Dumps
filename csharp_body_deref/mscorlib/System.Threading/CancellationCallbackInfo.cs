// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationCallbackInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001EA")]
internal class CancellationCallbackInfo
{
	[Token(Token = "0x20001EB")]
	internal sealed class WithSyncContext : System.Threading.CancellationCallbackInfo
	{
		[Token(Token = "0x400092B")]
		[FieldOffset(Offset = "0x30")]
		internal readonly SynchronizationContext TargetSyncContext;

		[Token(Token = "0x6001215")]
		[Address(RVA = "0x552F930", Offset = "0x552E930", VA = "0x552F930")]
		internal WithSyncContext(Action<object> callback, object stateForCallback, ExecutionContext targetExecutionContext, CancellationTokenSource cancellationTokenSource, SynchronizationContext targetSyncContext)
		{
		}
	}

	[Token(Token = "0x4000926")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Action<object> Callback;

	[Token(Token = "0x4000927")]
	[FieldOffset(Offset = "0x18")]
	internal readonly object StateForCallback;

	[Token(Token = "0x4000928")]
	[FieldOffset(Offset = "0x20")]
	internal readonly ExecutionContext TargetExecutionContext;

	[Token(Token = "0x4000929")]
	[FieldOffset(Offset = "0x28")]
	internal readonly CancellationTokenSource CancellationTokenSource;

	[Token(Token = "0x400092A")]
	[FieldOffset(Offset = "0x0")]
	private static ContextCallback s_executionContextCallback;

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x552F8C0", Offset = "0x552E8C0", VA = "0x552F8C0")]
	internal CancellationCallbackInfo(Action<object> callback, object stateForCallback, ExecutionContext targetExecutionContext, CancellationTokenSource cancellationTokenSource)
	{
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x5530170", Offset = "0x552F170", VA = "0x5530170")]
	internal void ExecuteCallback()
	{
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x5531210", Offset = "0x5530210", VA = "0x5531210")]
	private static void ExecutionContextCallback(object obj)
	{
	}
}
