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
		[Address(RVA = "0x46C5E00", Offset = "0x46C5E00", VA = "0x46C5E00", Slot = "14")]
		get
		{
			return ref *(AutoResetUniTaskCompletionSource*)null;
		}
	}

	[Token(Token = "0x17000051")]
	public UniTask Task
	{
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x46AEF30", Offset = "0x46AEF30", VA = "0x46AEF30")]
		[DebuggerHidden]
		get
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x46C5E10", Offset = "0x46C5E10", VA = "0x46C5E10")]
	static AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x46C5F10", Offset = "0x46C5F10", VA = "0x46C5F10")]
	private AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x46AEDD0", Offset = "0x46AEDD0", VA = "0x46AEDD0")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource Create()
	{
		return null;
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x46AF290", Offset = "0x46AF290", VA = "0x46AF290")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource CreateFromCanceled(CancellationToken cancellationToken, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x46C5F90", Offset = "0x46C5F90", VA = "0x46C5F90")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource CreateFromException(Exception exception, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x46C60F0", Offset = "0x46C60F0", VA = "0x46C60F0")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource CreateCompleted(out short token)
	{
		return null;
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x46B0790", Offset = "0x46B0790", VA = "0x46B0790", Slot = "15")]
	[DebuggerHidden]
	public bool TrySetResult()
	{
		return default(bool);
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x46C5F20", Offset = "0x46C5F20", VA = "0x46C5F20", Slot = "17")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x46C6080", Offset = "0x46C6080", VA = "0x46C6080", Slot = "16")]
	[DebuggerHidden]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x46C6220", Offset = "0x46C6220", VA = "0x46C6220", Slot = "13")]
	[DebuggerHidden]
	public void GetResult(short token)
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x46C63C0", Offset = "0x46C63C0", VA = "0x46C63C0", Slot = "4")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x46C6410", Offset = "0x46C6410", VA = "0x46C6410", Slot = "7")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x46C64C0", Offset = "0x46C64C0", VA = "0x46C64C0", Slot = "5")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x46C6520", Offset = "0x46C6520", VA = "0x46C6520")]
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
