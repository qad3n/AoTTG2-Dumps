// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Awaitable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Pool;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200014C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AsyncOperationAwaitable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/Awaitable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/DelayedCallAwaitable.h")]
[AsyncMethodBuilder(typeof(AwaitableAsyncMethodBuilder))]
public class Awaitable : IEnumerator
{
	[Token(Token = "0x200014D")]
	[ExcludeFromDocs]
	public struct AwaitableAsyncMethodBuilder
	{
		[Token(Token = "0x200014E")]
		private interface IStateMachineBox : IDisposable
		{
		}

		[Token(Token = "0x4000553")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IStateMachineBox _stateMachineBox;

		[Token(Token = "0x4000554")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Awaitable _resultingCoroutine;
	}

	[Token(Token = "0x200014F")]
	[ExcludeFromDocs]
	public struct AwaitableAsyncMethodBuilder<T>
	{
		[Token(Token = "0x2000150")]
		private interface IStateMachineBox : IDisposable
		{
		}

		[Token(Token = "0x4000555")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IStateMachineBox _stateMachineBox;

		[Token(Token = "0x4000556")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Awaitable<T> _resultingCoroutine;
	}

	[Token(Token = "0x2000151")]
	[ExcludeFromDocs]
	public struct Awaiter : INotifyCompletion
	{
		[Token(Token = "0x4000557")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Awaitable _awaited;

		[Token(Token = "0x170001BB")]
		public bool IsCompleted
		{
			[Token(Token = "0x60009B1")]
			[Address(RVA = "0x4DF6220", Offset = "0x4DF6220", VA = "0x4DF6220")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60009AF")]
		[Address(RVA = "0x4DF61F0", Offset = "0x4DF61F0", VA = "0x4DF61F0")]
		internal Awaiter(Awaitable awaited)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x4DF6200", Offset = "0x4DF6200", VA = "0x4DF6200", Slot = "4")]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009B2")]
		[Address(RVA = "0x4DF6240", Offset = "0x4DF6240", VA = "0x4DF6240")]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x2000152")]
	private class DoubleBufferedAwaitableList
	{
		[Token(Token = "0x4000558")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private List<Awaitable> _awaitables;

		[Token(Token = "0x4000559")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private List<Awaitable> _scratch;

		[Token(Token = "0x60009B3")]
		[Address(RVA = "0x4DF4930", Offset = "0x4DF4930", VA = "0x4DF4930")]
		public void SwapAndComplete()
		{
		}

		[Token(Token = "0x60009B4")]
		[Address(RVA = "0x4DF4680", Offset = "0x4DF4680", VA = "0x4DF4680")]
		public void Add(Awaitable item)
		{
		}

		[Token(Token = "0x60009B5")]
		[Address(RVA = "0x4DF4860", Offset = "0x4DF4860", VA = "0x4DF4860")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009B6")]
		[Address(RVA = "0x4DF6140", Offset = "0x4DF6140", VA = "0x4DF6140")]
		public DoubleBufferedAwaitableList()
		{
		}
	}

	[Token(Token = "0x2000153")]
	private struct ManagedLockWithSingleThreadBias
	{
		[Token(Token = "0x400055A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _taken;

		[Token(Token = "0x60009B7")]
		[Address(RVA = "0x4DF40D0", Offset = "0x4DF40D0", VA = "0x4DF40D0")]
		public void Acquire()
		{
		}

		[Token(Token = "0x60009B8")]
		[Address(RVA = "0x4DF6260", Offset = "0x4DF6260", VA = "0x4DF6260")]
		public void Release()
		{
		}
	}

	[Token(Token = "0x2000154")]
	internal struct ThreadSafeObjectPool<T> where T : class
	{
		[Token(Token = "0x400055B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ObjectPool<T> _objectPool;

		[Token(Token = "0x400055C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ManagedLockWithSingleThreadBias _spinLock;

		[Token(Token = "0x60009B9")]
		public ThreadSafeObjectPool(Func<T> factory, [Optional] Action<T> onDestroy)
		{
		}

		[Token(Token = "0x60009BA")]
		public T Get()
		{
			return null;
		}

		[Token(Token = "0x60009BB")]
		public void Release(T element)
		{
		}
	}

	[Token(Token = "0x2000155")]
	private readonly struct AwaitableHandle
	{
		[Token(Token = "0x400055D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IntPtr _handle;

		[Token(Token = "0x400055E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static AwaitableHandle ManagedHandle;

		[Token(Token = "0x400055F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static AwaitableHandle NullHandle;

		[Token(Token = "0x170001BC")]
		public bool IsNull
		{
			[Token(Token = "0x60009BC")]
			[Address(RVA = "0x4DF5720", Offset = "0x4DF5720", VA = "0x4DF5720")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001BD")]
		public bool IsManaged
		{
			[Token(Token = "0x60009BD")]
			[Address(RVA = "0x4DF56C0", Offset = "0x4DF56C0", VA = "0x4DF56C0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x4DF6280", Offset = "0x4DF6280", VA = "0x4DF6280")]
		public AwaitableHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x4DF6290", Offset = "0x4DF6290", VA = "0x4DF6290")]
		public static implicit operator IntPtr(AwaitableHandle handle)
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x4DF4E30", Offset = "0x4DF4E30", VA = "0x4DF4E30")]
		public static implicit operator AwaitableHandle(IntPtr handle)
		{
			return default(AwaitableHandle);
		}
	}

	[Token(Token = "0x4000547")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool _nextFrameAndEndOfFrameWiredUp;

	[Token(Token = "0x4000548")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static CancellationTokenRegistration _nextFrameAndEndOfFrameWiredUpCTRegistration;

	[Token(Token = "0x4000549")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly DoubleBufferedAwaitableList _nextFrameAwaitables;

	[Token(Token = "0x400054A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly DoubleBufferedAwaitableList _endOfFrameAwaitables;

	[Token(Token = "0x400054B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static SynchronizationContext _synchronizationContext;

	[Token(Token = "0x400054C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly ManagedLockWithSingleThreadBias _spinLock;

	[Token(Token = "0x400054D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static readonly ThreadSafeObjectPool<Awaitable> _pool;

	[Token(Token = "0x400054E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private AwaitableHandle _handle;

	[Token(Token = "0x400054F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ExceptionDispatchInfo _exceptionToRethrow;

	[Token(Token = "0x4000550")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool _managedAwaitableDone;

	[Token(Token = "0x4000551")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Action _continuation;

	[Token(Token = "0x4000552")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CancellationTokenRegistration? _cancelTokenRegistration;

	[Token(Token = "0x170001B7")]
	private bool IsCompletedNoLock
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x4DF5900", Offset = "0x4DF5900", VA = "0x4DF5900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B8")]
	public bool IsCompleted
	{
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x4DF5AC0", Offset = "0x4DF5AC0", VA = "0x4DF5AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B9")]
	internal bool IsDettachedOrCompleted
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x4DF5B70", Offset = "0x4DF5B70", VA = "0x4DF5B70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BA")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60009AD")]
		[Address(RVA = "0x4DF5FB0", Offset = "0x4DF5FB0", VA = "0x4DF5FB0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600098E")]
	[Address(RVA = "0x4DF3EE0", Offset = "0x4DF3EE0", VA = "0x4DF3EE0")]
	public static Awaitable FromAsyncOperation(AsyncOperation op, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600098F")]
	[Address(RVA = "0x4DF3FB0", Offset = "0x4DF3FB0", VA = "0x4DF3FB0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::FromAsyncOperation", ThrowsException = true)]
	private static extern IntPtr FromAsyncOperationInternal(IntPtr asyncOperation);

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x4DF3FE0", Offset = "0x4DF3FE0", VA = "0x4DF3FE0")]
	[ExcludeFromDocs]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x4DF4000", Offset = "0x4DF4000", VA = "0x4DF4000")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private void SetExceptionFromNative(Exception ex)
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x4DF4190", Offset = "0x4DF4190", VA = "0x4DF4190")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private void RunContinuation()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000993")]
	[Address(RVA = "0x4DF4260", Offset = "0x4DF4260", VA = "0x4DF4260")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::AttachManagedWrapper", IsThreadSafe = true)]
	private static extern void AttachManagedGCHandleToNativeAwaitable(IntPtr nativeAwaitable, UIntPtr gcHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000994")]
	[Address(RVA = "0x4DF42A0", Offset = "0x4DF42A0", VA = "0x4DF42A0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::Release", IsThreadSafe = true)]
	private static extern void ReleaseNativeAwaitable(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000995")]
	[Address(RVA = "0x4DF42D0", Offset = "0x4DF42D0", VA = "0x4DF42D0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::Cancel", IsThreadSafe = true)]
	private static extern void CancelNativeAwaitable(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000996")]
	[Address(RVA = "0x4DF4300", Offset = "0x4DF4300", VA = "0x4DF4300")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::IsCompleted", IsThreadSafe = true)]
	private static extern int IsNativeAwaitableCompleted(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000997")]
	[Address(RVA = "0x4DF4330", Offset = "0x4DF4330", VA = "0x4DF4330")]
	public static Awaitable EndOfFrameAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x4DF4410", Offset = "0x4DF4410", VA = "0x4DF4410")]
	private static void EnsureDelayedCallWiredUp()
	{
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x4DF4750", Offset = "0x4DF4750", VA = "0x4DF4750")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnDelayedCallManagerCleared()
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x4DF48B0", Offset = "0x4DF48B0", VA = "0x4DF48B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnUpdate()
	{
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x4DF4BC0", Offset = "0x4DF4BC0", VA = "0x4DF4BC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnEndOfFrame()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600099C")]
	[Address(RVA = "0x4DF4720", Offset = "0x4DF4720", VA = "0x4DF4720")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::WireupNextFrameAndEndOfFrameCallbacks")]
	private static extern void WireupNextFrameAndEndOfFrameCallbacks();

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x4DF4C40", Offset = "0x4DF4C40", VA = "0x4DF4C40")]
	internal static void SetSynchronizationContext(SynchronizationContext synchronizationContext)
	{
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x4DF4CA0", Offset = "0x4DF4CA0", VA = "0x4DF4CA0")]
	private Awaitable()
	{
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x4DF45C0", Offset = "0x4DF45C0", VA = "0x4DF45C0")]
	internal static Awaitable NewManagedAwaitable()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x4DF4CB0", Offset = "0x4DF4CB0", VA = "0x4DF4CB0")]
	private static Awaitable FromNativeAwaitableHandle(IntPtr nativeHandle, CancellationToken cancellationToken)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x4DF4E40", Offset = "0x4DF4E40", VA = "0x4DF4E40")]
	private static void WireupCancellation(Awaitable awaitable, CancellationToken cancellationToken)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x4DF5110", Offset = "0x4DF5110", VA = "0x4DF5110")]
	internal void RaiseManagedCompletion(Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x4DF5230", Offset = "0x4DF5230", VA = "0x4DF5230")]
	internal void RaiseManagedCompletion()
	{
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x4DF5310", Offset = "0x4DF5310", VA = "0x4DF5310")]
	internal void PropagateExceptionAndRelease()
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x4DF5730", Offset = "0x4DF5730", VA = "0x4DF5730")]
	public void Cancel()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x4DF5DF0", Offset = "0x4DF5DF0", VA = "0x4DF5DF0")]
	private AwaitableHandle CheckPointerValidity()
	{
		return default(AwaitableHandle);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x4DF5E80", Offset = "0x4DF5E80", VA = "0x4DF5E80")]
	internal void SetContinuation(Action continuation)
	{
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x4DF5F80", Offset = "0x4DF5F80", VA = "0x4DF5F80", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x4DF5FA0", Offset = "0x4DF5FA0", VA = "0x4DF5FA0", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}
[Token(Token = "0x2000158")]
[AsyncMethodBuilder(typeof(Awaitable.AwaitableAsyncMethodBuilder<>))]
public class Awaitable<T>
{
	[Token(Token = "0x2000159")]
	[ExcludeFromDocs]
	public struct Awaiter : INotifyCompletion
	{
		[Token(Token = "0x4000565")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Awaitable<T> _coroutine;

		[Token(Token = "0x170001BE")]
		public bool IsCompleted
		{
			[Token(Token = "0x60009CE")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60009CC")]
		public Awaiter(Awaitable<T> coroutine)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009CD")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60009CF")]
		public T GetResult()
		{
			return (T)null;
		}
	}

	[Token(Token = "0x4000562")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Awaitable.ThreadSafeObjectPool<Awaitable<T>> _pool;

	[Token(Token = "0x4000563")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Awaitable _awaitable;

	[Token(Token = "0x4000564")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T _result;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009C7")]
	private void ContinueWith(Action continuation)
	{
	}

	[Token(Token = "0x60009C8")]
	private T GetResult()
	{
		return (T)null;
	}

	[Token(Token = "0x60009C9")]
	private Awaitable()
	{
	}

	[Token(Token = "0x60009CA")]
	[ExcludeFromDocs]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
