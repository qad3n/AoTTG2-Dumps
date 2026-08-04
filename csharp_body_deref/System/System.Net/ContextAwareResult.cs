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

[Token(Token = "0x2000111")]
internal class ContextAwareResult : LazyAsyncResult
{
	[Token(Token = "0x2000112")]
	[Flags]
	private enum StateFlags : byte
	{
		[Token(Token = "0x400051F")]
		None = 0,
		[Token(Token = "0x4000520")]
		CaptureIdentity = 1,
		[Token(Token = "0x4000521")]
		CaptureContext = 2,
		[Token(Token = "0x4000522")]
		ThreadSafeContextCopy = 4,
		[Token(Token = "0x4000523")]
		PostBlockStarted = 8,
		[Token(Token = "0x4000524")]
		PostBlockFinished = 0x10
	}

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x40")]
	private ExecutionContext _context;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x48")]
	private object _lock;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x50")]
	private StateFlags _flags;

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x4945650", Offset = "0x4945650", VA = "0x4945650")]
	private void SafeCaptureIdentity()
	{
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x4945660", Offset = "0x4945660", VA = "0x4945660")]
	private void CleanupInternal()
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x4945670", Offset = "0x4945670", VA = "0x4945670")]
	internal ContextAwareResult(object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x4945680", Offset = "0x4945680", VA = "0x4945680")]
	internal ContextAwareResult(bool captureIdentity, bool forceCaptureContext, object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x49456C0", Offset = "0x49456C0", VA = "0x49456C0")]
	internal ContextAwareResult(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x4945720", Offset = "0x4945720", VA = "0x4945720")]
	internal object StartPostingAsyncOp()
	{
		return null;
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4945730", Offset = "0x4945730", VA = "0x4945730")]
	internal object StartPostingAsyncOp(bool lockCapture)
	{
		return null;
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x49459C0", Offset = "0x49459C0", VA = "0x49459C0")]
	internal bool FinishPostingAsyncOp()
	{
		return default(bool);
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x4946120", Offset = "0x4946120", VA = "0x4946120", Slot = "9")]
	protected override void Cleanup()
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x4945A00", Offset = "0x4945A00", VA = "0x4945A00")]
	private bool CaptureOrComplete(ref ExecutionContext cachedContext, bool returnContext)
	{
		return default(bool);
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x4946620", Offset = "0x4946620", VA = "0x4946620", Slot = "8")]
	protected override void Complete(IntPtr userToken)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x49469E0", Offset = "0x49469E0", VA = "0x49469E0")]
	private void CompleteCallback()
	{
	}
}
