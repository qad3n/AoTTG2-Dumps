// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UniTaskCompletionSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000125")]
public class UniTaskCompletionSource : IUniTaskSource, IValueTaskSource, IPromise, IResolvePromise, IRejectPromise, ICancelPromise
{
	[Token(Token = "0x4000449")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x400044A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ExceptionHolder exception;

	[Token(Token = "0x400044B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object gate;

	[Token(Token = "0x400044C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Action<object> singleContinuation;

	[Token(Token = "0x400044D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object singleState;

	[Token(Token = "0x400044E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<(Action<object>, object)> secondaryContinuationList;

	[Token(Token = "0x400044F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int intStatus;

	[Token(Token = "0x4000450")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private bool handled;

	[Token(Token = "0x17000054")]
	public UniTask Task
	{
		[Token(Token = "0x600070B")]
		[Address(RVA = "0x49D16D0", Offset = "0x49D16D0", VA = "0x49D16D0")]
		[DebuggerHidden]
		get
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x49D11E0", Offset = "0x49D11E0", VA = "0x49D11E0")]
	public UniTaskCompletionSource()
	{
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x49EB7A0", Offset = "0x49EB7A0", VA = "0x49EB7A0")]
	[DebuggerHidden]
	internal void MarkHandled()
	{
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x49D1BC0", Offset = "0x49D1BC0", VA = "0x49D1BC0", Slot = "14")]
	[DebuggerHidden]
	public bool TrySetResult()
	{
		return default(bool);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x49EBC50", Offset = "0x49EBC50", VA = "0x49EBC50", Slot = "16")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x49D1BD0", Offset = "0x49D1BD0", VA = "0x49D1BD0", Slot = "15")]
	[DebuggerHidden]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x49EBC80", Offset = "0x49EBC80", VA = "0x49EBC80", Slot = "13")]
	[DebuggerHidden]
	public void GetResult(short token)
	{
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x49EBDB0", Offset = "0x49EBDB0", VA = "0x49EBDB0", Slot = "4")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x49EBDC0", Offset = "0x49EBDC0", VA = "0x49EBDC0", Slot = "7")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x49EBDD0", Offset = "0x49EBDD0", VA = "0x49EBDD0", Slot = "5")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x49EB7B0", Offset = "0x49EB7B0", VA = "0x49EB7B0")]
	[DebuggerHidden]
	private bool TrySignalCompletion(UniTaskStatus status)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000126")]
public class UniTaskCompletionSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, IPromise<T>, IResolvePromise<T>, IRejectPromise, ICancelPromise
{
	[Token(Token = "0x4000451")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x4000452")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T result;

	[Token(Token = "0x4000453")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private ExceptionHolder exception;

	[Token(Token = "0x4000454")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private object gate;

	[Token(Token = "0x4000455")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Action<object> singleContinuation;

	[Token(Token = "0x4000456")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private object singleState;

	[Token(Token = "0x4000457")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private List<(Action<object>, object)> secondaryContinuationList;

	[Token(Token = "0x4000458")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int intStatus;

	[Token(Token = "0x4000459")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool handled;

	[Token(Token = "0x17000055")]
	public UniTask<T> Task
	{
		[Token(Token = "0x6000716")]
		[DebuggerHidden]
		get
		{
			return default(UniTask<T>);
		}
	}

	[Token(Token = "0x6000714")]
	public UniTaskCompletionSource()
	{
	}

	[Token(Token = "0x6000715")]
	[DebuggerHidden]
	internal void MarkHandled()
	{
	}

	[Token(Token = "0x6000717")]
	[DebuggerHidden]
	public bool TrySetResult(T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000718")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6000719")]
	[DebuggerHidden]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x600071A")]
	[DebuggerHidden]
	public T GetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x600071B")]
	[DebuggerHidden]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x600071C")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x600071D")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x600071E")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x600071F")]
	[DebuggerHidden]
	private bool TrySignalCompletion(UniTaskStatus status)
	{
		return default(bool);
	}
}
