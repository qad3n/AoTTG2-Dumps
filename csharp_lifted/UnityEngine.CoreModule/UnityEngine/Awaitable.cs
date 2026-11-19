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

[Token(Token = "0x200017F")]
[AsyncMethodBuilder(typeof(AwaitableAsyncMethodBuilder))]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/DelayedCallAwaitable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/Awaitable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AsyncOperationAwaitable.h")]
public class Awaitable : IEnumerator
{
	[Token(Token = "0x2000180")]
	internal enum AwaiterCompletionThreadAffinity
	{
		[Token(Token = "0x40005E4")]
		None,
		[Token(Token = "0x40005E5")]
		MainThread,
		[Token(Token = "0x40005E6")]
		BackgroundThread
	}

	[Token(Token = "0x2000181")]
	[ExcludeFromDocs]
	public struct AwaitableAsyncMethodBuilder
	{
		[Token(Token = "0x2000182")]
		private interface IStateMachineBox : IDisposable
		{
		}

		[Token(Token = "0x40005E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IStateMachineBox _stateMachineBox;

		[Token(Token = "0x40005E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Awaitable _resultingCoroutine;
	}

	[Token(Token = "0x2000183")]
	[ExcludeFromDocs]
	public struct AwaitableAsyncMethodBuilder<T>
	{
		[Token(Token = "0x2000184")]
		private interface IStateMachineBox : IDisposable
		{
		}

		[Token(Token = "0x40005E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IStateMachineBox _stateMachineBox;

		[Token(Token = "0x40005EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Awaitable<T> _resultingCoroutine;
	}

	[Token(Token = "0x2000185")]
	[ExcludeFromDocs]
	public struct Awaiter : INotifyCompletion
	{
		[Token(Token = "0x40005EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Awaitable _awaited;

		[Token(Token = "0x1700022A")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000D01")]
			[Address(RVA = "0x6914430", Offset = "0x6913430", VA = "0x6914430")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000CFF")]
		[Address(RVA = "0x6914400", Offset = "0x6913400", VA = "0x6914400")]
		internal Awaiter(Awaitable awaited)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D00")]
		[Address(RVA = "0x6914410", Offset = "0x6913410", VA = "0x6914410", Slot = "4")]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x6914450", Offset = "0x6913450", VA = "0x6914450")]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x2000186")]
	private struct AwaitableAndFrameIndex
	{
		[Token(Token = "0x1700022B")]
		public readonly Awaitable Awaitable
		{
			[Token(Token = "0x6000D03")]
			[Address(RVA = "0x6914470", Offset = "0x6913470", VA = "0x6914470")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700022C")]
		public readonly int FrameIndex
		{
			[Token(Token = "0x6000D04")]
			[Address(RVA = "0x6914480", Offset = "0x6913480", VA = "0x6914480")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000D05")]
		[Address(RVA = "0x6914490", Offset = "0x6913490", VA = "0x6914490")]
		public AwaitableAndFrameIndex(Awaitable awaitable, int frameIndex)
		{
		}
	}

	[Token(Token = "0x2000187")]
	private class DoubleBufferedAwaitableList
	{
		[Token(Token = "0x40005EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private List<AwaitableAndFrameIndex> _awaitables;

		[Token(Token = "0x40005EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private List<AwaitableAndFrameIndex> _scratch;

		[Token(Token = "0x6000D06")]
		[Address(RVA = "0x69120B0", Offset = "0x69110B0", VA = "0x69120B0")]
		public void SwapAndComplete()
		{
		}

		[Token(Token = "0x6000D07")]
		[Address(RVA = "0x6911DD0", Offset = "0x6910DD0", VA = "0x6911DD0")]
		public void Add(Awaitable item, int frameIndex)
		{
		}

		[Token(Token = "0x6000D08")]
		[Address(RVA = "0x69136D0", Offset = "0x69126D0", VA = "0x69136D0")]
		public void Remove(Awaitable item)
		{
		}

		[Token(Token = "0x6000D09")]
		[Address(RVA = "0x6911FE0", Offset = "0x6910FE0", VA = "0x6911FE0")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x6914350", Offset = "0x6913350", VA = "0x6914350")]
		public DoubleBufferedAwaitableList()
		{
		}
	}

	[Token(Token = "0x2000189")]
	private readonly struct AwaitableHandle
	{
		[Token(Token = "0x40005F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IntPtr _handle;

		[Token(Token = "0x40005F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static AwaitableHandle ManagedHandle;

		[Token(Token = "0x40005F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static AwaitableHandle NullHandle;

		[Token(Token = "0x1700022D")]
		public bool IsNull
		{
			[Token(Token = "0x6000D0D")]
			[Address(RVA = "0x69134D0", Offset = "0x69124D0", VA = "0x69134D0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700022E")]
		public bool IsManaged
		{
			[Token(Token = "0x6000D0E")]
			[Address(RVA = "0x6913470", Offset = "0x6912470", VA = "0x6913470")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000D0F")]
		[Address(RVA = "0x69144D0", Offset = "0x69134D0", VA = "0x69144D0")]
		public AwaitableHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x6000D10")]
		[Address(RVA = "0x69144E0", Offset = "0x69134E0", VA = "0x69144E0")]
		public static implicit operator IntPtr(AwaitableHandle handle)
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x69126C0", Offset = "0x69116C0", VA = "0x69126C0")]
		public static implicit operator AwaitableHandle(IntPtr handle)
		{
			return default(AwaitableHandle);
		}
	}

	[Token(Token = "0x40005D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool _nextFrameAndEndOfFrameWiredUp;

	[Token(Token = "0x40005D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static CancellationTokenRegistration _nextFrameAndEndOfFrameWiredUpCTRegistration;

	[Token(Token = "0x40005D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly DoubleBufferedAwaitableList _nextFrameAwaitables;

	[Token(Token = "0x40005D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly DoubleBufferedAwaitableList _endOfFrameAwaitables;

	[Token(Token = "0x40005D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static SynchronizationContext _synchronizationContext;

	[Token(Token = "0x40005D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static int _mainThreadId;

	[Token(Token = "0x40005DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private SpinLock _spinLock;

	[Token(Token = "0x40005DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static readonly ThreadLocal<ObjectPool<Awaitable>> _pool;

	[Token(Token = "0x40005DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private AwaitableHandle _handle;

	[Token(Token = "0x40005DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ExceptionDispatchInfo _exceptionToRethrow;

	[Token(Token = "0x40005DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool _managedAwaitableDone;

	[Token(Token = "0x40005DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private AwaiterCompletionThreadAffinity _completionThreadAffinity;

	[Token(Token = "0x40005E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Action _continuation;

	[Token(Token = "0x40005E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CancellationTokenRegistration? _cancelTokenRegistration;

	[Token(Token = "0x40005E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private DoubleBufferedAwaitableList _managedCompletionQueue;

	[Token(Token = "0x17000225")]
	private bool IsCompletedNoLock
	{
		[Token(Token = "0x6000CF5")]
		[Address(RVA = "0x69137A0", Offset = "0x69127A0", VA = "0x69137A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000226")]
	private bool IsLogicallyCompletedNoLock
	{
		[Token(Token = "0x6000CF6")]
		[Address(RVA = "0x6913990", Offset = "0x6912990", VA = "0x6913990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000227")]
	public bool IsCompleted
	{
		[Token(Token = "0x6000CF7")]
		[Address(RVA = "0x6913B50", Offset = "0x6912B50", VA = "0x6913B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000228")]
	internal bool IsDettachedOrCompleted
	{
		[Token(Token = "0x6000CF8")]
		[Address(RVA = "0x6913C90", Offset = "0x6912C90", VA = "0x6913C90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000229")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000CFD")]
		[Address(RVA = "0x69141B0", Offset = "0x69131B0", VA = "0x69141B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x69114D0", Offset = "0x69104D0", VA = "0x69114D0")]
	public static Awaitable FromAsyncOperation(AsyncOperation op, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x69115A0", Offset = "0x69105A0", VA = "0x69115A0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::FromAsyncOperation", ThrowsException = true)]
	private static extern IntPtr FromAsyncOperationInternal(IntPtr asyncOperation);

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x69115D0", Offset = "0x69105D0", VA = "0x69115D0")]
	[ExcludeFromDocs]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x69115F0", Offset = "0x69105F0", VA = "0x69115F0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private void SetExceptionFromNative(Exception ex)
	{
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x6911730", Offset = "0x6910730", VA = "0x6911730")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private void RunContinuation()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x6911880", Offset = "0x6910880", VA = "0x6911880")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::AttachManagedWrapper", IsThreadSafe = true)]
	private static extern void AttachManagedGCHandleToNativeAwaitable(IntPtr nativeAwaitable, UIntPtr gcHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x69118C0", Offset = "0x69108C0", VA = "0x69118C0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::Release", IsThreadSafe = true)]
	private static extern void ReleaseNativeAwaitable(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x69118F0", Offset = "0x69108F0", VA = "0x69118F0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::Cancel", IsThreadSafe = true)]
	private static extern void CancelNativeAwaitable(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x6911920", Offset = "0x6910920", VA = "0x6911920")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::IsCompleted", IsThreadSafe = true)]
	private static extern int IsNativeAwaitableCompleted(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x6911950", Offset = "0x6910950", VA = "0x6911950")]
	private static void ThrowIfNotMainThread()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x6911A10", Offset = "0x6910A10", VA = "0x6911A10")]
	public static Awaitable EndOfFrameAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x6911B20", Offset = "0x6910B20", VA = "0x6911B20")]
	private static void EnsureDelayedCallWiredUp()
	{
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x6911ED0", Offset = "0x6910ED0", VA = "0x6911ED0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnDelayedCallManagerCleared()
	{
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x6912030", Offset = "0x6911030", VA = "0x6912030")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnUpdate()
	{
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x69123F0", Offset = "0x69113F0", VA = "0x69123F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnEndOfFrame()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x6911EA0", Offset = "0x6910EA0", VA = "0x6911EA0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::WireupNextFrameAndEndOfFrameCallbacks")]
	private static extern void WireupNextFrameAndEndOfFrameCallbacks();

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x6912470", Offset = "0x6911470", VA = "0x6912470")]
	internal static void SetSynchronizationContext(UnitySynchronizationContext synchronizationContext)
	{
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x69124F0", Offset = "0x69114F0", VA = "0x69124F0")]
	private Awaitable()
	{
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x6911CD0", Offset = "0x6910CD0", VA = "0x6911CD0")]
	internal static Awaitable NewManagedAwaitable()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x6912500", Offset = "0x6911500", VA = "0x6912500")]
	private static Awaitable FromNativeAwaitableHandle(IntPtr nativeHandle, CancellationToken cancellationToken)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x69126D0", Offset = "0x69116D0", VA = "0x69126D0")]
	private static void WireupCancellation(Awaitable awaitable, CancellationToken cancellationToken)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x6912AE0", Offset = "0x6911AE0", VA = "0x6912AE0")]
	private static bool MatchCompletionThreadAffinity(AwaiterCompletionThreadAffinity awaiterCompletionThreadAffinity)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x6912BB0", Offset = "0x6911BB0", VA = "0x6912BB0")]
	internal void RaiseManagedCompletion(Exception exception)
	{
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x6912D50", Offset = "0x6911D50", VA = "0x6912D50")]
	private void RunOrScheduleContinuation(AwaiterCompletionThreadAffinity awaiterCompletionThreadAffinity, Action continuation)
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x6912E90", Offset = "0x6911E90", VA = "0x6912E90")]
	private static void DoRunContinuationOnSynchonizationContext(object continuation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x6912EE0", Offset = "0x6911EE0", VA = "0x6912EE0")]
	internal void RaiseManagedCompletion()
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x6913060", Offset = "0x6912060", VA = "0x6913060")]
	internal void PropagateExceptionAndRelease()
	{
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x69134E0", Offset = "0x69124E0", VA = "0x69134E0")]
	public void Cancel()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x6913F70", Offset = "0x6912F70", VA = "0x6913F70")]
	private AwaitableHandle CheckPointerValidity()
	{
		return default(AwaitableHandle);
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x6914000", Offset = "0x6913000", VA = "0x6914000")]
	internal void SetContinuation(Action continuation)
	{
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x6914170", Offset = "0x6913170", VA = "0x6914170", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x69141A0", Offset = "0x69131A0", VA = "0x69141A0", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}
}
[Token(Token = "0x200018C")]
[AsyncMethodBuilder(typeof(Awaitable.AwaitableAsyncMethodBuilder<>))]
public class Awaitable<T>
{
	[Token(Token = "0x200018D")]
	[ExcludeFromDocs]
	public struct Awaiter : INotifyCompletion
	{
		[Token(Token = "0x40005FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Awaitable<T> _coroutine;

		[Token(Token = "0x1700022F")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000D20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000D1E")]
		public Awaiter(Awaitable<T> coroutine)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D1F")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000D21")]
		public T GetResult()
		{
			return (T)null;
		}
	}

	[Token(Token = "0x40005F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ThreadLocal<ObjectPool<Awaitable<T>>> _pool;

	[Token(Token = "0x40005F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Awaitable _awaitable;

	[Token(Token = "0x40005F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T _result;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D19")]
	private void ContinueWith(Action continuation)
	{
	}

	[Token(Token = "0x6000D1A")]
	private T GetResult()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D1B")]
	private Awaitable()
	{
	}

	[Token(Token = "0x6000D1C")]
	[ExcludeFromDocs]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
