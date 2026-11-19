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

[Token(Token = "0x200025A")]
internal class ContextAwareResult : LazyAsyncResult
{
	[Token(Token = "0x200025B")]
	[Flags]
	private enum StateFlags : byte
	{
		[Token(Token = "0x4000866")]
		None = 0,
		[Token(Token = "0x4000867")]
		CaptureIdentity = 1,
		[Token(Token = "0x4000868")]
		CaptureContext = 2,
		[Token(Token = "0x4000869")]
		ThreadSafeContextCopy = 4,
		[Token(Token = "0x400086A")]
		PostBlockStarted = 8,
		[Token(Token = "0x400086B")]
		PostBlockFinished = 0x10
	}

	[Token(Token = "0x4000862")]
	[FieldOffset(Offset = "0x40")]
	private ExecutionContext _context;

	[Token(Token = "0x4000863")]
	[FieldOffset(Offset = "0x48")]
	private object _lock;

	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x50")]
	private StateFlags _flags;

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x628E980", Offset = "0x628D980", VA = "0x628E980")]
	private void SafeCaptureIdentity()
	{
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x628E990", Offset = "0x628D990", VA = "0x628E990")]
	private void CleanupInternal()
	{
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x628E9A0", Offset = "0x628D9A0", VA = "0x628E9A0")]
	internal ContextAwareResult(object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x628E9B0", Offset = "0x628D9B0", VA = "0x628E9B0")]
	internal ContextAwareResult(bool captureIdentity, bool forceCaptureContext, object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x628E9F0", Offset = "0x628D9F0", VA = "0x628E9F0")]
	internal ContextAwareResult(bool captureIdentity, bool forceCaptureContext, bool threadSafeContextCopy, object myObject, object myState, AsyncCallback myCallBack)
	{
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x628EA50", Offset = "0x628DA50", VA = "0x628EA50")]
	internal object StartPostingAsyncOp()
	{
		return null;
	}

	[Token(Token = "0x6001088")]
	[Address(RVA = "0x628EA60", Offset = "0x628DA60", VA = "0x628EA60")]
	internal object StartPostingAsyncOp(bool lockCapture)
	{
		return null;
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x628ECD0", Offset = "0x628DCD0", VA = "0x628ECD0")]
	internal bool FinishPostingAsyncOp()
	{
		return default(bool);
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x628F380", Offset = "0x628E380", VA = "0x628F380", Slot = "9")]
	protected override void Cleanup()
	{
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x628ED00", Offset = "0x628DD00", VA = "0x628ED00")]
	private bool CaptureOrComplete(ref ExecutionContext cachedContext, bool returnContext)
	{
		return default(bool);
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x628F830", Offset = "0x628E830", VA = "0x628F830", Slot = "8")]
	protected override void Complete(IntPtr userToken)
	{
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x628FBE0", Offset = "0x628EBE0", VA = "0x628FBE0")]
	private void CompleteCallback()
	{
	}
}
