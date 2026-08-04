// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationCallbackInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3D2C770", Offset = "0x3D2C770", VA = "0x3D2C770")]
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
	[Address(RVA = "0x3D2C700", Offset = "0x3D2C700", VA = "0x3D2C700")]
	internal CancellationCallbackInfo(Action<object> callback, object stateForCallback, ExecutionContext targetExecutionContext, CancellationTokenSource cancellationTokenSource)
	{
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x3D2CF50", Offset = "0x3D2CF50", VA = "0x3D2CF50")]
	internal void ExecuteCallback()
	{
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x3D2E040", Offset = "0x3D2E040", VA = "0x3D2E040")]
	private static void ExecutionContextCallback(object obj)
	{
	}
}
