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
	[Address(RVA = "0x505FB90", Offset = "0x505FB90", VA = "0x505FB90")]
	internal SynchronizationContextAwaitTaskContinuation(SynchronizationContext context, Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x5065800", Offset = "0x5065800", VA = "0x5065800", Slot = "4")]
	internal sealed override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x5065B20", Offset = "0x5065B20", VA = "0x5065B20")]
	private static void PostAction(object state)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x5065BB0", Offset = "0x5065BB0", VA = "0x5065BB0")]
	private static ContextCallback GetPostActionCallback()
	{
		return null;
	}
}
