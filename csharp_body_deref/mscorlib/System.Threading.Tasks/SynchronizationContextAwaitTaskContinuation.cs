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

[Token(Token = "0x2000258")]
internal sealed class SynchronizationContextAwaitTaskContinuation : System.Threading.Tasks.AwaitTaskContinuation
{
	[Token(Token = "0x4000A91")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SendOrPostCallback s_postCallback;

	[Token(Token = "0x4000A92")]
	[FieldOffset(Offset = "0x8")]
	private static ContextCallback s_postActionCallback;

	[Token(Token = "0x4000A93")]
	[FieldOffset(Offset = "0x20")]
	private readonly SynchronizationContext m_syncContext;

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x55477F0", Offset = "0x55467F0", VA = "0x55477F0")]
	internal SynchronizationContextAwaitTaskContinuation(SynchronizationContext context, Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x554C180", Offset = "0x554B180", VA = "0x554C180", Slot = "4")]
	internal sealed override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}

	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x554C460", Offset = "0x554B460", VA = "0x554C460")]
	private static void PostAction(object state)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x554C4F0", Offset = "0x554B4F0", VA = "0x554C4F0")]
	private static ContextCallback GetPostActionCallback()
	{
		return null;
	}
}
