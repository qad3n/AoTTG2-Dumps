// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ContextAwareResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000299")]
internal class ContextAwareResult : LazyAsyncResult
{
	[Token(Token = "0x200029A")]
	[Flags]
	private enum StateFlags : byte
	{
		[Token(Token = "0x4000935")]
		None = 0,
		[Token(Token = "0x4000936")]
		CaptureIdentity = 1,
		[Token(Token = "0x4000937")]
		CaptureContext = 2,
		[Token(Token = "0x4000938")]
		ThreadSafeContextCopy = 4,
		[Token(Token = "0x4000939")]
		PostBlockStarted = 8,
		[Token(Token = "0x400093A")]
		PostBlockFinished = 0x10
	}

	[Token(Token = "0x4000931")]
	[FieldOffset(Offset = "0x40")]
	private ExecutionContext _context;

	[Token(Token = "0x4000932")]
	[FieldOffset(Offset = "0x48")]
	private object _lock;

	[Token(Token = "0x4000933")]
	[FieldOffset(Offset = "0x50")]
	private StateFlags _flags;

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void SafeCaptureIdentity()
	{
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void CleanupInternal()
	{
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x28EDE30", Offset = "0x28EC430", VA = "0x1828EDE30")]
	internal ContextAwareResult(object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x28EDDD0", Offset = "0x28EC3D0", VA = "0x1828EDDD0")]
	internal ContextAwareResult(bool captureIdentity, bool forceCaptureContext, object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x28EDD70", Offset = "0x28EC370", VA = "0x1828EDD70")]
	internal ContextAwareResult(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x28EDCA0", Offset = "0x28EC2A0", VA = "0x1828EDCA0")]
	internal object StartPostingAsyncOp()
	{
		return null;
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x28EDBC0", Offset = "0x28EC1C0", VA = "0x1828EDBC0")]
	internal object StartPostingAsyncOp(bool lockCapture)
	{
		return null;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x28EDB80", Offset = "0x28EC180", VA = "0x1828EDB80")]
	internal bool FinishPostingAsyncOp()
	{
		return default(bool);
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x28ED650", Offset = "0x28EBC50", VA = "0x1828ED650", Slot = "9")]
	protected override void Cleanup()
	{
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x28ED160", Offset = "0x28EB760", VA = "0x1828ED160")]
	private bool CaptureOrComplete(ref ExecutionContext cachedContext, bool returnContext)
	{
		return default(bool);
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x28ED820", Offset = "0x28EBE20", VA = "0x1828ED820", Slot = "8")]
	protected override void Complete(IntPtr userToken)
	{
	}

	[Token(Token = "0x600124B")]
	[Address(RVA = "0x28ED730", Offset = "0x28EBD30", VA = "0x1828ED730")]
	private void CompleteCallback()
	{
	}
}
