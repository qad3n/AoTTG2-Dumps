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
	[Address(RVA = "0x4620550", Offset = "0x4620550", VA = "0x4620550")]
	private void SafeCaptureIdentity()
	{
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x4620560", Offset = "0x4620560", VA = "0x4620560")]
	private void CleanupInternal()
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x4620570", Offset = "0x4620570", VA = "0x4620570")]
	internal ContextAwareResult(object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x4620580", Offset = "0x4620580", VA = "0x4620580")]
	internal ContextAwareResult(bool captureIdentity, bool forceCaptureContext, object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x46205C0", Offset = "0x46205C0", VA = "0x46205C0")]
	internal ContextAwareResult(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x4620620", Offset = "0x4620620", VA = "0x4620620")]
	internal object StartPostingAsyncOp()
	{
		return null;
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4620630", Offset = "0x4620630", VA = "0x4620630")]
	internal object StartPostingAsyncOp(bool lockCapture)
	{
		return null;
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x46208C0", Offset = "0x46208C0", VA = "0x46208C0")]
	internal bool FinishPostingAsyncOp()
	{
		return default(bool);
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x4621020", Offset = "0x4621020", VA = "0x4621020", Slot = "9")]
	protected override void Cleanup()
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x4620900", Offset = "0x4620900", VA = "0x4620900")]
	private bool CaptureOrComplete(ref ExecutionContext cachedContext, bool returnContext)
	{
		return default(bool);
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x4621520", Offset = "0x4621520", VA = "0x4621520", Slot = "8")]
	protected override void Complete(IntPtr userToken)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x46218E0", Offset = "0x46218E0", VA = "0x46218E0")]
	private void CompleteCallback()
	{
	}
}
