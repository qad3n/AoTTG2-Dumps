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

[Token(Token = "0x2000149")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AsyncOperationAwaitable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/Awaitable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/DelayedCallAwaitable.h")]
[AsyncMethodBuilder(typeof(AwaitableAsyncMethodBuilder))]
public class Awaitable : IEnumerator
{
	[Token(Token = "0x200014A")]
	[ExcludeFromDocs]
	public struct AwaitableAsyncMethodBuilder
	{
		[Token(Token = "0x200014B")]
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

	[Token(Token = "0x200014C")]
	[ExcludeFromDocs]
	public struct AwaitableAsyncMethodBuilder<T>
	{
		[Token(Token = "0x200014D")]
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

	[Token(Token = "0x200014E")]
	[ExcludeFromDocs]
	public struct Awaiter : INotifyCompletion
	{
		[Token(Token = "0x4000557")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Awaitable _awaited;

		[Token(Token = "0x170001BA")]
		public bool IsCompleted
		{
			[Token(Token = "0x60009AF")]
			[Address(RVA = "0x4ACE8F0", Offset = "0x4ACE8F0", VA = "0x4ACE8F0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60009AD")]
		[Address(RVA = "0x4ACE8C0", Offset = "0x4ACE8C0", VA = "0x4ACE8C0")]
		internal Awaiter(Awaitable awaited)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009AE")]
		[Address(RVA = "0x4ACE8D0", Offset = "0x4ACE8D0", VA = "0x4ACE8D0", Slot = "4")]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x4ACE910", Offset = "0x4ACE910", VA = "0x4ACE910")]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x200014F")]
	private class DoubleBufferedAwaitableList
	{
		[Token(Token = "0x4000558")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private List<Awaitable> _awaitables;

		[Token(Token = "0x4000559")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private List<Awaitable> _scratch;

		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x4ACD000", Offset = "0x4ACD000", VA = "0x4ACD000")]
		public void SwapAndComplete()
		{
		}

		[Token(Token = "0x60009B2")]
		[Address(RVA = "0x4ACCD50", Offset = "0x4ACCD50", VA = "0x4ACCD50")]
		public void Add(Awaitable item)
		{
		}

		[Token(Token = "0x60009B3")]
		[Address(RVA = "0x4ACCF30", Offset = "0x4ACCF30", VA = "0x4ACCF30")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009B4")]
		[Address(RVA = "0x4ACE810", Offset = "0x4ACE810", VA = "0x4ACE810")]
		public DoubleBufferedAwaitableList()
		{
		}
	}

	[Token(Token = "0x2000150")]
	private struct ManagedLockWithSingleThreadBias
	{
		[Token(Token = "0x400055A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _taken;

		[Token(Token = "0x60009B5")]
		[Address(RVA = "0x4ACC7A0", Offset = "0x4ACC7A0", VA = "0x4ACC7A0")]
		public void Acquire()
		{
		}

		[Token(Token = "0x60009B6")]
		[Address(RVA = "0x4ACE930", Offset = "0x4ACE930", VA = "0x4ACE930")]
		public void Release()
		{
		}
	}

	[Token(Token = "0x2000151")]
	internal struct ThreadSafeObjectPool<T> where T : class
	{
		[Token(Token = "0x400055B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly ObjectPool<T> _objectPool;

		[Token(Token = "0x400055C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ManagedLockWithSingleThreadBias _spinLock;

		[Token(Token = "0x60009B7")]
		public ThreadSafeObjectPool(Func<T> factory, [Optional] Action<T> onDestroy)
		{
		}

		[Token(Token = "0x60009B8")]
		public T Get()
		{
			return null;
		}

		[Token(Token = "0x60009B9")]
		public void Release(T element)
		{
		}
	}

	[Token(Token = "0x2000152")]
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

		[Token(Token = "0x170001BB")]
		public bool IsNull
		{
			[Token(Token = "0x60009BA")]
			[Address(RVA = "0x4ACDDF0", Offset = "0x4ACDDF0", VA = "0x4ACDDF0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170001BC")]
		public bool IsManaged
		{
			[Token(Token = "0x60009BB")]
			[Address(RVA = "0x4ACDD90", Offset = "0x4ACDD90", VA = "0x4ACDD90")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x4ACE950", Offset = "0x4ACE950", VA = "0x4ACE950")]
		public AwaitableHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x4ACE960", Offset = "0x4ACE960", VA = "0x4ACE960")]
		public static implicit operator IntPtr(AwaitableHandle handle)
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x4ACD500", Offset = "0x4ACD500", VA = "0x4ACD500")]
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

	[Token(Token = "0x170001B6")]
	private bool IsCompletedNoLock
	{
		[Token(Token = "0x60009A4")]
		[Address(RVA = "0x4ACDFD0", Offset = "0x4ACDFD0", VA = "0x4ACDFD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B7")]
	public bool IsCompleted
	{
		[Token(Token = "0x60009A5")]
		[Address(RVA = "0x4ACE190", Offset = "0x4ACE190", VA = "0x4ACE190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B8")]
	internal bool IsDettachedOrCompleted
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x4ACE240", Offset = "0x4ACE240", VA = "0x4ACE240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B9")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x4ACE680", Offset = "0x4ACE680", VA = "0x4ACE680", Slot = "5")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600098C")]
	[Address(RVA = "0x4ACC5B0", Offset = "0x4ACC5B0", VA = "0x4ACC5B0")]
	public static Awaitable FromAsyncOperation(AsyncOperation op, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600098D")]
	[Address(RVA = "0x4ACC680", Offset = "0x4ACC680", VA = "0x4ACC680")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::FromAsyncOperation", ThrowsException = true)]
	private static extern IntPtr FromAsyncOperationInternal(IntPtr asyncOperation);

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x4ACC6B0", Offset = "0x4ACC6B0", VA = "0x4ACC6B0")]
	[ExcludeFromDocs]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x4ACC6D0", Offset = "0x4ACC6D0", VA = "0x4ACC6D0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private void SetExceptionFromNative(Exception ex)
	{
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x4ACC860", Offset = "0x4ACC860", VA = "0x4ACC860")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private void RunContinuation()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000991")]
	[Address(RVA = "0x4ACC930", Offset = "0x4ACC930", VA = "0x4ACC930")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::AttachManagedWrapper", IsThreadSafe = true)]
	private static extern void AttachManagedGCHandleToNativeAwaitable(IntPtr nativeAwaitable, UIntPtr gcHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000992")]
	[Address(RVA = "0x4ACC970", Offset = "0x4ACC970", VA = "0x4ACC970")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::Release", IsThreadSafe = true)]
	private static extern void ReleaseNativeAwaitable(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000993")]
	[Address(RVA = "0x4ACC9A0", Offset = "0x4ACC9A0", VA = "0x4ACC9A0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::Cancel", IsThreadSafe = true)]
	private static extern void CancelNativeAwaitable(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000994")]
	[Address(RVA = "0x4ACC9D0", Offset = "0x4ACC9D0", VA = "0x4ACC9D0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::IsCompleted", IsThreadSafe = true)]
	private static extern int IsNativeAwaitableCompleted(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000995")]
	[Address(RVA = "0x4ACCA00", Offset = "0x4ACCA00", VA = "0x4ACCA00")]
	public static Awaitable EndOfFrameAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x4ACCAE0", Offset = "0x4ACCAE0", VA = "0x4ACCAE0")]
	private static void EnsureDelayedCallWiredUp()
	{
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x4ACCE20", Offset = "0x4ACCE20", VA = "0x4ACCE20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnDelayedCallManagerCleared()
	{
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x4ACCF80", Offset = "0x4ACCF80", VA = "0x4ACCF80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnUpdate()
	{
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x4ACD290", Offset = "0x4ACD290", VA = "0x4ACD290")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnEndOfFrame()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600099A")]
	[Address(RVA = "0x4ACCDF0", Offset = "0x4ACCDF0", VA = "0x4ACCDF0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::WireupNextFrameAndEndOfFrameCallbacks")]
	private static extern void WireupNextFrameAndEndOfFrameCallbacks();

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x4ACD310", Offset = "0x4ACD310", VA = "0x4ACD310")]
	internal static void SetSynchronizationContext(SynchronizationContext synchronizationContext)
	{
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x4ACD370", Offset = "0x4ACD370", VA = "0x4ACD370")]
	private Awaitable()
	{
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x4ACCC90", Offset = "0x4ACCC90", VA = "0x4ACCC90")]
	internal static Awaitable NewManagedAwaitable()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600099E")]
	[Address(RVA = "0x4ACD380", Offset = "0x4ACD380", VA = "0x4ACD380")]
	private static Awaitable FromNativeAwaitableHandle(IntPtr nativeHandle, CancellationToken cancellationToken)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600099F")]
	[Address(RVA = "0x4ACD510", Offset = "0x4ACD510", VA = "0x4ACD510")]
	private static void WireupCancellation(Awaitable awaitable, CancellationToken cancellationToken)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x4ACD7E0", Offset = "0x4ACD7E0", VA = "0x4ACD7E0")]
	internal void RaiseManagedCompletion(Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x4ACD900", Offset = "0x4ACD900", VA = "0x4ACD900")]
	internal void RaiseManagedCompletion()
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x4ACD9E0", Offset = "0x4ACD9E0", VA = "0x4ACD9E0")]
	internal void PropagateExceptionAndRelease()
	{
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x4ACDE00", Offset = "0x4ACDE00", VA = "0x4ACDE00")]
	public void Cancel()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x4ACE4C0", Offset = "0x4ACE4C0", VA = "0x4ACE4C0")]
	private AwaitableHandle CheckPointerValidity()
	{
		return default(AwaitableHandle);
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x4ACE550", Offset = "0x4ACE550", VA = "0x4ACE550")]
	internal void SetContinuation(Action continuation)
	{
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x4ACE650", Offset = "0x4ACE650", VA = "0x4ACE650", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x4ACE670", Offset = "0x4ACE670", VA = "0x4ACE670", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}
[Token(Token = "0x2000155")]
[AsyncMethodBuilder(typeof(Awaitable.AwaitableAsyncMethodBuilder<>))]
public class Awaitable<T>
{
	[Token(Token = "0x2000156")]
	[ExcludeFromDocs]
	public struct Awaiter : INotifyCompletion
	{
		[Token(Token = "0x4000565")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Awaitable<T> _coroutine;

		[Token(Token = "0x170001BD")]
		public bool IsCompleted
		{
			[Token(Token = "0x60009CC")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60009CA")]
		public Awaiter(Awaitable<T> coroutine)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009CB")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x60009CD")]
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
	[Token(Token = "0x60009C5")]
	private void ContinueWith(Action continuation)
	{
	}

	[Token(Token = "0x60009C6")]
	private T GetResult()
	{
		return (T)null;
	}

	[Token(Token = "0x60009C7")]
	private Awaitable()
	{
	}

	[Token(Token = "0x60009C8")]
	[ExcludeFromDocs]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
