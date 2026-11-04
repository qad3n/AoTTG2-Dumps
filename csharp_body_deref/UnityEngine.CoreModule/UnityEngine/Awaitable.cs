// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Awaitable
// Update status: CHANGED in this game update
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

[Token(Token = "0x200017E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/DelayedCallAwaitable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/AsyncOperationAwaitable.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/Awaitable.h")]
[AsyncMethodBuilder(typeof(AwaitableAsyncMethodBuilder))]
public class Awaitable : IEnumerator
{
	[Token(Token = "0x200017F")]
	internal enum AwaiterCompletionThreadAffinity
	{
		[Token(Token = "0x40005DF")]
		None,
		[Token(Token = "0x40005E0")]
		MainThread,
		[Token(Token = "0x40005E1")]
		BackgroundThread
	}

	[Token(Token = "0x2000180")]
	[ExcludeFromDocs]
	public struct AwaitableAsyncMethodBuilder
	{
		[Token(Token = "0x2000181")]
		private interface IStateMachineBox : IDisposable
		{
		}

		[Token(Token = "0x40005E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IStateMachineBox _stateMachineBox;

		[Token(Token = "0x40005E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private Awaitable _resultingCoroutine;
	}

	[Token(Token = "0x2000182")]
	[ExcludeFromDocs]
	public struct AwaitableAsyncMethodBuilder<T>
	{
		[Token(Token = "0x2000183")]
		private interface IStateMachineBox : IDisposable
		{
		}

		[Token(Token = "0x40005E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IStateMachineBox _stateMachineBox;

		[Token(Token = "0x40005E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Awaitable<T> _resultingCoroutine;
	}

	[Token(Token = "0x2000184")]
	[ExcludeFromDocs]
	public struct Awaiter : INotifyCompletion
	{
		[Token(Token = "0x40005E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Awaitable _awaited;

		[Token(Token = "0x17000225")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000CEF")]
			[Address(RVA = "0x2F12940", Offset = "0x2F10F40", VA = "0x182F12940")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000CED")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal Awaiter(Awaitable awaited)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CEE")]
		[Address(RVA = "0x2F12920", Offset = "0x2F10F20", VA = "0x182F12920", Slot = "4")]
		public void OnCompleted(Action continuation)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CF0")]
		[Address(RVA = "0x2F12900", Offset = "0x2F10F00", VA = "0x182F12900")]
		public void GetResult()
		{
		}
	}

	[Token(Token = "0x2000185")]
	private readonly struct AwaitableHandle
	{
		[Token(Token = "0x40005E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IntPtr _handle;

		[Token(Token = "0x40005E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static AwaitableHandle ManagedHandle;

		[Token(Token = "0x40005E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static AwaitableHandle NullHandle;

		[Token(Token = "0x17000226")]
		public bool IsNull
		{
			[Token(Token = "0x6000CF1")]
			[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000227")]
		public bool IsManaged
		{
			[Token(Token = "0x6000CF2")]
			[Address(RVA = "0x2F0FE40", Offset = "0x2F0E440", VA = "0x182F0FE40")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000CF3")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		public AwaitableHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x6000CF4")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
		public static implicit operator IntPtr(AwaitableHandle handle)
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000CF5")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
		public static implicit operator AwaitableHandle(IntPtr handle)
		{
			return default(AwaitableHandle);
		}
	}

	[Token(Token = "0x2000186")]
	private struct AwaitableAndFrameIndex
	{
		[Token(Token = "0x17000228")]
		public readonly Awaitable Awaitable
		{
			[Token(Token = "0x6000CF7")]
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000229")]
		public readonly int FrameIndex
		{
			[Token(Token = "0x6000CF8")]
			[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000CF9")]
		[Address(RVA = "0xCFB160", Offset = "0xCF9760", VA = "0x180CFB160")]
		public AwaitableAndFrameIndex(Awaitable awaitable, int frameIndex)
		{
		}
	}

	[Token(Token = "0x2000187")]
	private class DoubleBufferedAwaitableList
	{
		[Token(Token = "0x40005EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private List<AwaitableAndFrameIndex> _awaitables;

		[Token(Token = "0x40005ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private List<AwaitableAndFrameIndex> _scratch;

		[Token(Token = "0x6000CFA")]
		[Address(RVA = "0x2F16BB0", Offset = "0x2F151B0", VA = "0x182F16BB0")]
		public void SwapAndComplete()
		{
		}

		[Token(Token = "0x6000CFB")]
		[Address(RVA = "0x2F16970", Offset = "0x2F14F70", VA = "0x182F16970")]
		public void Add(Awaitable item, int frameIndex)
		{
		}

		[Token(Token = "0x6000CFC")]
		[Address(RVA = "0x2F16AD0", Offset = "0x2F150D0", VA = "0x182F16AD0")]
		public void Remove(Awaitable item)
		{
		}

		[Token(Token = "0x6000CFD")]
		[Address(RVA = "0x2F16A70", Offset = "0x2F15070", VA = "0x182F16A70")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x2F16E30", Offset = "0x2F15430", VA = "0x182F16E30")]
		public DoubleBufferedAwaitableList()
		{
		}
	}

	[Token(Token = "0x40005CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private SpinLock _spinLock;

	[Token(Token = "0x40005D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ThreadLocal<ObjectPool<Awaitable>> _pool;

	[Token(Token = "0x40005D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private AwaitableHandle _handle;

	[Token(Token = "0x40005D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ExceptionDispatchInfo _exceptionToRethrow;

	[Token(Token = "0x40005D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool _managedAwaitableDone;

	[Token(Token = "0x40005D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private AwaiterCompletionThreadAffinity _completionThreadAffinity;

	[Token(Token = "0x40005D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Action _continuation;

	[Token(Token = "0x40005D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private CancellationTokenRegistration? _cancelTokenRegistration;

	[Token(Token = "0x40005D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private DoubleBufferedAwaitableList _managedCompletionQueue;

	[Token(Token = "0x40005D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static bool _nextFrameAndEndOfFrameWiredUp;

	[Token(Token = "0x40005D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static CancellationTokenRegistration _nextFrameAndEndOfFrameWiredUpCTRegistration;

	[Token(Token = "0x40005DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly DoubleBufferedAwaitableList _nextFrameAwaitables;

	[Token(Token = "0x40005DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly DoubleBufferedAwaitableList _endOfFrameAwaitables;

	[Token(Token = "0x40005DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static SynchronizationContext _synchronizationContext;

	[Token(Token = "0x40005DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static int _mainThreadId;

	[Token(Token = "0x17000220")]
	private bool IsCompletedNoLock
	{
		[Token(Token = "0x6000CDB")]
		[Address(RVA = "0x2F122C0", Offset = "0x2F108C0", VA = "0x182F122C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000221")]
	private bool IsLogicallyCompletedNoLock
	{
		[Token(Token = "0x6000CDC")]
		[Address(RVA = "0x2F127F0", Offset = "0x2F10DF0", VA = "0x182F127F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000222")]
	public bool IsCompleted
	{
		[Token(Token = "0x6000CDD")]
		[Address(RVA = "0x2F12400", Offset = "0x2F10A00", VA = "0x182F12400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000223")]
	internal bool IsDettachedOrCompleted
	{
		[Token(Token = "0x6000CDE")]
		[Address(RVA = "0x2F125F0", Offset = "0x2F10BF0", VA = "0x182F125F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000224")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x2F108B0", Offset = "0x2F0EEB0", VA = "0x182F108B0")]
	public static Awaitable FromAsyncOperation(AsyncOperation op, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x2F10870", Offset = "0x2F0EE70", VA = "0x182F10870")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::FromAsyncOperation", ThrowsException = true)]
	private static extern IntPtr FromAsyncOperationInternal(IntPtr asyncOperation);

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
	[ExcludeFromDocs]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x2F11AE0", Offset = "0x2F100E0", VA = "0x182F11AE0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private void SetExceptionFromNative(Exception ex)
	{
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x2F11650", Offset = "0x2F0FC50", VA = "0x182F11650")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private void RunContinuation()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x2F0FEA0", Offset = "0x2F0E4A0", VA = "0x182F0FEA0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::AttachManagedWrapper", IsThreadSafe = true)]
	private static extern void AttachManagedGCHandleToNativeAwaitable(IntPtr nativeAwaitable, UIntPtr gcHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x2F11610", Offset = "0x2F0FC10", VA = "0x182F11610")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::Release", IsThreadSafe = true)]
	private static extern void ReleaseNativeAwaitable(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x2F0FEF0", Offset = "0x2F0E4F0", VA = "0x182F0FEF0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::Cancel", IsThreadSafe = true)]
	private static extern void CancelNativeAwaitable(IntPtr nativeAwaitable);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x2F10B10", Offset = "0x2F0F110", VA = "0x182F10B10")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::IsCompleted", IsThreadSafe = true)]
	private static extern int IsNativeAwaitableCompleted(IntPtr nativeAwaitable);

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x2F122B0", Offset = "0x2F108B0", VA = "0x182F122B0")]
	private Awaitable()
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x2F10C20", Offset = "0x2F0F220", VA = "0x182F10C20")]
	internal static Awaitable NewManagedAwaitable()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x2F10970", Offset = "0x2F0EF70", VA = "0x182F10970")]
	private static Awaitable FromNativeAwaitableHandle(IntPtr nativeHandle, CancellationToken cancellationToken)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x2F11D50", Offset = "0x2F10350", VA = "0x182F11D50")]
	private static void WireupCancellation(Awaitable awaitable, CancellationToken cancellationToken)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x2F10B50", Offset = "0x2F0F150", VA = "0x182F10B50")]
	private static bool MatchCompletionThreadAffinity(AwaiterCompletionThreadAffinity awaiterCompletionThreadAffinity)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x2F114B0", Offset = "0x2F0FAB0", VA = "0x182F114B0")]
	internal void RaiseManagedCompletion(Exception exception)
	{
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x2F11750", Offset = "0x2F0FD50", VA = "0x182F11750")]
	private void RunOrScheduleContinuation(AwaiterCompletionThreadAffinity awaiterCompletionThreadAffinity, Action continuation)
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x2F101E0", Offset = "0x2F0E7E0", VA = "0x182F101E0")]
	private static void DoRunContinuationOnSynchonizationContext(object continuation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x2F11360", Offset = "0x2F0F960", VA = "0x182F11360")]
	internal void RaiseManagedCompletion()
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x2F10EF0", Offset = "0x2F0F4F0", VA = "0x182F10EF0")]
	internal void PropagateExceptionAndRelease()
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x2F0FF30", Offset = "0x2F0E530", VA = "0x182F0FF30")]
	public void Cancel()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x2F10140", Offset = "0x2F0E740", VA = "0x182F10140")]
	private AwaitableHandle CheckPointerValidity()
	{
		return default(AwaitableHandle);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x2F118B0", Offset = "0x2F0FEB0", VA = "0x182F118B0")]
	internal void SetContinuation(Action continuation)
	{
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x2F11C50", Offset = "0x2F10250", VA = "0x182F11C50", Slot = "4")]
	private bool System_002ECollections_002EIEnumerator_002EMoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	private void System_002ECollections_002EIEnumerator_002EReset()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x2F11C80", Offset = "0x2F10280", VA = "0x182F11C80")]
	private static void ThrowIfNotMainThread()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x2F10240", Offset = "0x2F0E840", VA = "0x182F10240")]
	public static Awaitable EndOfFrameAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x2F106F0", Offset = "0x2F0ECF0", VA = "0x182F106F0")]
	private static void EnsureDelayedCallWiredUp()
	{
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x2F10D00", Offset = "0x2F0F300", VA = "0x182F10D00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnDelayedCallManagerCleared()
	{
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x2F10E90", Offset = "0x2F0F490", VA = "0x182F10E90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnUpdate()
	{
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x2F10E30", Offset = "0x2F0F430", VA = "0x182F10E30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnEndOfFrame()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x2F120B0", Offset = "0x2F106B0", VA = "0x182F120B0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::Awaitables::WireupNextFrameAndEndOfFrameCallbacks")]
	private static extern void WireupNextFrameAndEndOfFrameCallbacks();

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x2F11BC0", Offset = "0x2F101C0", VA = "0x182F11BC0")]
	internal static void SetSynchronizationContext(UnitySynchronizationContext synchronizationContext)
	{
	}
}
[Token(Token = "0x200018B")]
[AsyncMethodBuilder(typeof(Awaitable.AwaitableAsyncMethodBuilder<>))]
public class Awaitable<T>
{
	[Token(Token = "0x200018C")]
	[ExcludeFromDocs]
	public struct Awaiter : INotifyCompletion
	{
		[Token(Token = "0x40005F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Awaitable<T> _coroutine;

		[Token(Token = "0x1700022A")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000D0E")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000D0C")]
		public Awaiter(Awaitable<T> coroutine)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D0D")]
		public void OnCompleted(Action continuation)
		{
		}

		[Token(Token = "0x6000D0F")]
		public T GetResult()
		{
			return (T)null;
		}
	}

	[Token(Token = "0x40005F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ThreadLocal<ObjectPool<Awaitable<T>>> _pool;

	[Token(Token = "0x40005F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Awaitable _awaitable;

	[Token(Token = "0x40005F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T _result;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D07")]
	private void ContinueWith(Action continuation)
	{
	}

	[Token(Token = "0x6000D08")]
	private T GetResult()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D09")]
	private Awaitable()
	{
	}

	[Token(Token = "0x6000D0A")]
	[ExcludeFromDocs]
	public Awaiter GetAwaiter()
	{
		return default(Awaiter);
	}
}
