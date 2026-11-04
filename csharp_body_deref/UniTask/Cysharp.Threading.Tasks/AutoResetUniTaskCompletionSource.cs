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

[Token(Token = "0x200011F")]
public class AutoResetUniTaskCompletionSource : IUniTaskSource, IValueTaskSource, ITaskPoolNode<AutoResetUniTaskCompletionSource>, IPromise, IResolvePromise, IRejectPromise, ICancelPromise
{
	[Token(Token = "0x400043A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static TaskPool<AutoResetUniTaskCompletionSource> pool;

	[Token(Token = "0x400043B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private AutoResetUniTaskCompletionSource nextNode;

	[Token(Token = "0x400043C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private UniTaskCompletionSourceCore<AsyncUnit> core;

	[Token(Token = "0x400043D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private short version;

	[Token(Token = "0x17000050")]
	public unsafe ref AutoResetUniTaskCompletionSource NextNode
	{
		[Token(Token = "0x60006E0")]
		[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0", Slot = "14")]
		get
		{
			return ref *(AutoResetUniTaskCompletionSource*)null;
		}
	}

	[Token(Token = "0x17000051")]
	public UniTask Task
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x2908200", Offset = "0x2906800", VA = "0x182908200")]
		[DebuggerHidden]
		get
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x2908100", Offset = "0x2906700", VA = "0x182908100")]
	static AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x2907CC0", Offset = "0x29062C0", VA = "0x182907CC0")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource Create()
	{
		return null;
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x2907B20", Offset = "0x2906120", VA = "0x182907B20")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource CreateFromCanceled(CancellationToken cancellationToken, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x2907BF0", Offset = "0x29061F0", VA = "0x182907BF0")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource CreateFromException(Exception exception, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x2907AA0", Offset = "0x29060A0", VA = "0x182907AA0")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource CreateCompleted(out short token)
	{
		return null;
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x2908030", Offset = "0x2906630", VA = "0x182908030", Slot = "15")]
	[DebuggerHidden]
	public bool TrySetResult()
	{
		return default(bool);
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x2907F50", Offset = "0x2906550", VA = "0x182907F50", Slot = "17")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x2907FC0", Offset = "0x29065C0", VA = "0x182907FC0", Slot = "16")]
	[DebuggerHidden]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x2907D80", Offset = "0x2906380", VA = "0x182907D80", Slot = "13")]
	[DebuggerHidden]
	public void GetResult(short token)
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x2907E10", Offset = "0x2906410", VA = "0x182907E10", Slot = "4")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x29080C0", Offset = "0x29066C0", VA = "0x1829080C0", Slot = "7")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x2907E60", Offset = "0x2906460", VA = "0x182907E60", Slot = "5")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x2907EC0", Offset = "0x29064C0", VA = "0x182907EC0")]
	[DebuggerHidden]
	private bool TryReturn()
	{
		return default(bool);
	}
}
[Token(Token = "0x2000121")]
public class AutoResetUniTaskCompletionSource<T> : IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, ITaskPoolNode<AutoResetUniTaskCompletionSource<T>>, IPromise<T>, IResolvePromise<T>, IRejectPromise, ICancelPromise
{
	[Token(Token = "0x400043F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static TaskPool<AutoResetUniTaskCompletionSource<T>> pool;

	[Token(Token = "0x4000440")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private AutoResetUniTaskCompletionSource<T> nextNode;

	[Token(Token = "0x4000441")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSourceCore<T> core;

	[Token(Token = "0x4000442")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private short version;

	[Token(Token = "0x17000052")]
	public unsafe ref AutoResetUniTaskCompletionSource<T> NextNode
	{
		[Token(Token = "0x60006F3")]
		get
		{
			return ref *(AutoResetUniTaskCompletionSource<T>*)null;
		}
	}

	[Token(Token = "0x17000053")]
	public UniTask<T> Task
	{
		[Token(Token = "0x60006FA")]
		[DebuggerHidden]
		get
		{
			return default(UniTask<T>);
		}
	}

	[Token(Token = "0x60006F4")]
	static AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006F5")]
	private AutoResetUniTaskCompletionSource()
	{
	}

	[Token(Token = "0x60006F6")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource<T> Create()
	{
		return null;
	}

	[Token(Token = "0x60006F7")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource<T> CreateFromCanceled(CancellationToken cancellationToken, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006F8")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource<T> CreateFromException(Exception exception, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006F9")]
	[DebuggerHidden]
	public static AutoResetUniTaskCompletionSource<T> CreateFromResult(T result, out short token)
	{
		return null;
	}

	[Token(Token = "0x60006FB")]
	[DebuggerHidden]
	public bool TrySetResult(T result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FC")]
	[DebuggerHidden]
	public bool TrySetCanceled([Optional] CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FD")]
	[DebuggerHidden]
	public bool TrySetException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[DebuggerHidden]
	public T GetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x60006FF")]
	[DebuggerHidden]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000700")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000701")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000702")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000703")]
	[DebuggerHidden]
	private bool TryReturn()
	{
		return default(bool);
	}
}
