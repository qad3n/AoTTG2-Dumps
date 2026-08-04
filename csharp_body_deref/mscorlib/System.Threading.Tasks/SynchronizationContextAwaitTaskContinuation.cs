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

[Token(Token = "0x2000250")]
internal sealed class SynchronizationContextAwaitTaskContinuation : System.Threading.Tasks.AwaitTaskContinuation
{
	[Token(Token = "0x4000AE9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SendOrPostCallback s_postCallback;

	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0x8")]
	private static ContextCallback s_postActionCallback;

	[Token(Token = "0x4000AEB")]
	[FieldOffset(Offset = "0x20")]
	private readonly SynchronizationContext m_syncContext;

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x3D456B0", Offset = "0x3D456B0", VA = "0x3D456B0")]
	internal SynchronizationContextAwaitTaskContinuation(SynchronizationContext context, Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x3D4B320", Offset = "0x3D4B320", VA = "0x3D4B320", Slot = "4")]
	internal sealed override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x3D4B640", Offset = "0x3D4B640", VA = "0x3D4B640")]
	private static void PostAction(object state)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x3D4B6D0", Offset = "0x3D4B6D0", VA = "0x3D4B6D0")]
	private static ContextCallback GetPostActionCallback()
	{
		return null;
	}
}
