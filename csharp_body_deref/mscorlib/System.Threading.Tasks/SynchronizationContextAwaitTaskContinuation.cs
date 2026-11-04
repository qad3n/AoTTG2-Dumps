// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000280")]
internal sealed class SynchronizationContextAwaitTaskContinuation : System.Threading.Tasks.AwaitTaskContinuation
{
	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SendOrPostCallback s_postCallback;

	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x8")]
	private static ContextCallback s_postActionCallback;

	[Token(Token = "0x4000B35")]
	[FieldOffset(Offset = "0x20")]
	private readonly SynchronizationContext m_syncContext;

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x1BB4070", Offset = "0x1BB2670", VA = "0x181BB4070")]
	internal SynchronizationContextAwaitTaskContinuation(SynchronizationContext context, Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x1BB3DF0", Offset = "0x1BB23F0", VA = "0x181BB3DF0", Slot = "4")]
	internal sealed override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}

	[Token(Token = "0x6001518")]
	[Address(RVA = "0x1BB3D50", Offset = "0x1BB2350", VA = "0x181BB3D50")]
	private static void PostAction(object state)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001519")]
	[Address(RVA = "0x1BB3C70", Offset = "0x1BB2270", VA = "0x181BB3C70")]
	private static ContextCallback GetPostActionCallback()
	{
		return null;
	}
}
