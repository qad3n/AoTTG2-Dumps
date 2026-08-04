// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.AutoResetUniTaskCompletionSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000121")]
public class AutoResetUniTaskCompletionSource : IUniTaskSource, IValueTaskSource, ITaskPoolNode<AutoResetUniTaskCompletionSource>, IPromise, IResolvePromise, IRejectPromise, ICancelPromise
{
	[Token(Token = "0x400043F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static TaskPool<AutoResetUniTaskCompletionSource> pool;

	[Token(Token = "0x4000440")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private AutoResetUniTaskCompletionSource nextNode;

	[Token(Token = "0x4000441")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private UniTaskCompletionSourceCore<AsyncUnit> core;

	[Token(Token = "0x4000442")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private short version;

	[Token(Token = "0x17000050")]
	public unsafe ref AutoResetUniTaskCompletionSource NextNode
	{
		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x49EAF00", Offset = "0x49EAF00", VA = "0x49EAF00", Slot = "14")]
		get
		{
			return ref *(AutoResetUniTaskCompletionSource*)null;
		}
	}

	[Token(Token = "0x17000051")]
	public UniTask Task
	{
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x49D4030", Offset = "0x49D4030", VA = "0x49D4030")]
		[DebuggerHidden]
		get
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x49EAF10", Offset = "0x49EAF10", VA = "0x49EAF10")]
	static AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x49EB010", Offset = "0x49EB010", VA = "0x49EB010")]
	private AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x49D3ED0", Offset = "0x49D3ED0", VA = "0x49D3ED0")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource Create()
	{
		return null;
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x49D4390", Offset = "0x49D4390", VA = "0x49D4390")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource CreateFromCanceled(CancellationToken cancellationToken, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x49EB090", Offset = "0x49EB090", VA = "0x49EB090")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource CreateFromException(Exception exception, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x49EB1F0", Offset = "0x49EB1F0", VA = "0x49EB1F0")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource CreateCompleted(out short token)
	{
		return null;
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x49D5890", Offset = "0x49D5890", VA = "0x49D5890", Slot = "15")]
	[DebuggerHidden]
	public bool TrySetResult()
	{
		return default(bool);
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x49EB020", Offset = "0x49EB020", VA = "0x49EB020", Slot = "17")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x49EB180", Offset = "0x49EB180", VA = "0x49EB180", Slot = "16")]
	[DebuggerHidden]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x49EB320", Offset = "0x49EB320", VA = "0x49EB320", Slot = "13")]
	[DebuggerHidden]
	public void GetResult(short token)
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x49EB4C0", Offset = "0x49EB4C0", VA = "0x49EB4C0", Slot = "4")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x49EB510", Offset = "0x49EB510", VA = "0x49EB510", Slot = "7")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x49EB5C0", Offset = "0x49EB5C0", VA = "0x49EB5C0", Slot = "5")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x49EB620", Offset = "0x49EB620", VA = "0x49EB620")]
	[DebuggerHidden]
	private bool TryReturn()
	{
		return default(bool);
	}
}
[Token(Token = "0x2000123")]
public class AutoResetUniTaskCompletionSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, ITaskPoolNode<AutoResetUniTaskCompletionSource<T>>, IPromise<T>, IResolvePromise<T>, IRejectPromise, ICancelPromise
{
	[Token(Token = "0x4000444")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static TaskPool<AutoResetUniTaskCompletionSource<T>> pool;

	[Token(Token = "0x4000445")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private AutoResetUniTaskCompletionSource<T> nextNode;

	[Token(Token = "0x4000446")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSourceCore<T> core;

	[Token(Token = "0x4000447")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private short version;

	[Token(Token = "0x17000052")]
	public unsafe ref AutoResetUniTaskCompletionSource<T> NextNode
	{
		[Token(Token = "0x60006F5")]
		get
		{
			return ref *(AutoResetUniTaskCompletionSource<T>*)null;
		}
	}

	[Token(Token = "0x17000053")]
	public UniTask<T> Task
	{
		[Token(Token = "0x60006FC")]
		[DebuggerHidden]
		get
		{
			return default(UniTask<T>);
		}
	}

	[Token(Token = "0x60006F6")]
	static AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006F7")]
	private AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006F8")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource<T> Create()
	{
		return null;
	}

	[Token(Token = "0x60006F9")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource<T> CreateFromCanceled(CancellationToken cancellationToken, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006FA")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource<T> CreateFromException(Exception exception, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006FB")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource<T> CreateFromResult(T result, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006FD")]
	[DebuggerHidden]
	public bool TrySetResult(T result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FF")]
	[DebuggerHidden]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6000700")]
	[DebuggerHidden]
	public T GetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x6000701")]
	[DebuggerHidden]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000702")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000703")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000704")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000705")]
	[DebuggerHidden]
	private bool TryReturn()
	{
		return default(bool);
	}
}
