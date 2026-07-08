using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x200011F")]
public struct UniTaskCompletionSourceCore<TResult>
{
	[Token(Token = "0x4000437")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TResult result;

	[Token(Token = "0x4000438")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private object error;

	[Token(Token = "0x4000439")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private short version;

	[Token(Token = "0x400043A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool hasUnhandledError;

	[Token(Token = "0x400043B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int completedCount;

	[Token(Token = "0x400043C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Action<object> continuation;

	[Token(Token = "0x400043D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private object continuationState;

	[Token(Token = "0x1700004F")]
	[DebuggerHidden]
	public short Version
	{
		[Token(Token = "0x60006DA")]
		get
		{
			return default(short);
		}
	}

	[Token(Token = "0x60006D4")]
	[DebuggerHidden]
	public void Reset()
	{
	}

	[Token(Token = "0x60006D5")]
	private void ReportUnhandledError()
	{
	}

	[Token(Token = "0x60006D6")]
	internal void MarkHandled()
	{
	}

	[Token(Token = "0x60006D7")]
	[DebuggerHidden]
	public bool TrySetResult(TResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D8")]
	[DebuggerHidden]
	public bool TrySetException(Exception error)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D9")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DB")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DC")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DD")]
	[DebuggerHidden]
	public TResult GetResult(short token)
	{
		return (TResult)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DE")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DF")]
	[DebuggerHidden]
	private void ValidateToken(short token)
	{
	}
}
