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

[Token(Token = "0x2000123")]
public class UniTaskCompletionSource : IUniTaskSource, IValueTaskSource, IPromise, IResolvePromise, IRejectPromise, ICancelPromise
{
	[Token(Token = "0x4000444")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x4000445")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ExceptionHolder exception;

	[Token(Token = "0x4000446")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object gate;

	[Token(Token = "0x4000447")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Action<object> singleContinuation;

	[Token(Token = "0x4000448")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private object singleState;

	[Token(Token = "0x4000449")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<(Action<object>, object)> secondaryContinuationList;

	[Token(Token = "0x400044A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int intStatus;

	[Token(Token = "0x400044B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private bool handled;

	[Token(Token = "0x17000054")]
	public UniTask Task
	{
		[Token(Token = "0x6000709")]
		[Address(RVA = "0x62C14C0", Offset = "0x62C04C0", VA = "0x62C14C0")]
		[DebuggerHidden]
		get
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x62C1000", Offset = "0x62C0000", VA = "0x62C1000")]
	public UniTaskCompletionSource()
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x62DA850", Offset = "0x62D9850", VA = "0x62DA850")]
	[DebuggerHidden]
	internal void MarkHandled()
	{
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x62C1900", Offset = "0x62C0900", VA = "0x62C1900", Slot = "14")]
	[DebuggerHidden]
	public bool TrySetResult()
	{
		return default(bool);
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x62DACF0", Offset = "0x62D9CF0", VA = "0x62DACF0", Slot = "16")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x62C1910", Offset = "0x62C0910", VA = "0x62C1910", Slot = "15")]
	[DebuggerHidden]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x62DAD20", Offset = "0x62D9D20", VA = "0x62DAD20", Slot = "13")]
	[DebuggerHidden]
	public void GetResult(short token)
	{
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x62DAE50", Offset = "0x62D9E50", VA = "0x62DAE50", Slot = "4")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x62DAE60", Offset = "0x62D9E60", VA = "0x62DAE60", Slot = "7")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x62DAE70", Offset = "0x62D9E70", VA = "0x62DAE70", Slot = "5")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x62DA860", Offset = "0x62D9860", VA = "0x62DA860")]
	[DebuggerHidden]
	private bool TrySignalCompletion(UniTaskStatus status)
	{
		return default(bool);
	}
}
[Token(Token = "0x2000124")]
public class UniTaskCompletionSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, IPromise<T>, IResolvePromise<T>, IRejectPromise, ICancelPromise
{
	[Token(Token = "0x400044C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private CancellationToken cancellationToken;

	[Token(Token = "0x400044D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T result;

	[Token(Token = "0x400044E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private ExceptionHolder exception;

	[Token(Token = "0x400044F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private object gate;

	[Token(Token = "0x4000450")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Action<object> singleContinuation;

	[Token(Token = "0x4000451")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private object singleState;

	[Token(Token = "0x4000452")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private List<(Action<object>, object)> secondaryContinuationList;

	[Token(Token = "0x4000453")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int intStatus;

	[Token(Token = "0x4000454")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool handled;

	[Token(Token = "0x17000055")]
	public UniTask<T> Task
	{
		[Token(Token = "0x6000714")]
		[DebuggerHidden]
		get
		{
			return default(UniTask<T>);
		}
	}

	[Token(Token = "0x6000712")]
	public UniTaskCompletionSource()
	{
	}

	[Token(Token = "0x6000713")]
	[DebuggerHidden]
	internal void MarkHandled()
	{
	}

	[Token(Token = "0x6000715")]
	[DebuggerHidden]
	public bool TrySetResult(T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6000717")]
	[DebuggerHidden]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6000718")]
	[DebuggerHidden]
	public T GetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x6000719")]
	[DebuggerHidden]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x600071A")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x600071B")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x600071C")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x600071D")]
	[DebuggerHidden]
	private bool TrySignalCompletion(UniTaskStatus status)
	{
		return default(bool);
	}
}
