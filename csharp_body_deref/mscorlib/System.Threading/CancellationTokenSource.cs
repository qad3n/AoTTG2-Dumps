// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationTokenSource
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200020C")]
public class CancellationTokenSource : IDisposable
{
	[Token(Token = "0x200020D")]
	private sealed class Linked1CancellationTokenSource : CancellationTokenSource
	{
		[Token(Token = "0x40009C0")]
		[FieldOffset(Offset = "0x40")]
		private readonly CancellationTokenRegistration _reg1;

		[Token(Token = "0x6001230")]
		[Address(RVA = "0x1BA0D10", Offset = "0x1B9F310", VA = "0x181BA0D10")]
		internal Linked1CancellationTokenSource(CancellationToken token1)
		{
		}

		[Token(Token = "0x6001231")]
		[Address(RVA = "0x1BA0CD0", Offset = "0x1B9F2D0", VA = "0x181BA0CD0", Slot = "5")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x200020E")]
	private sealed class Linked2CancellationTokenSource : CancellationTokenSource
	{
		[Token(Token = "0x40009C1")]
		[FieldOffset(Offset = "0x40")]
		private readonly CancellationTokenRegistration _reg1;

		[Token(Token = "0x40009C2")]
		[FieldOffset(Offset = "0x58")]
		private readonly CancellationTokenRegistration _reg2;

		[Token(Token = "0x6001232")]
		[Address(RVA = "0x1BA0EA0", Offset = "0x1B9F4A0", VA = "0x181BA0EA0")]
		internal Linked2CancellationTokenSource(CancellationToken token1, CancellationToken token2)
		{
		}

		[Token(Token = "0x6001233")]
		[Address(RVA = "0x1BA0E50", Offset = "0x1B9F450", VA = "0x181BA0E50", Slot = "5")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x200020F")]
	private sealed class LinkedNCancellationTokenSource : CancellationTokenSource
	{
		[Token(Token = "0x40009C3")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly Action<object> s_linkedTokenCancelDelegate;

		[Token(Token = "0x40009C4")]
		[FieldOffset(Offset = "0x40")]
		private CancellationTokenRegistration[] _linkingRegistrations;

		[Token(Token = "0x6001234")]
		[Address(RVA = "0x1BA11E0", Offset = "0x1B9F7E0", VA = "0x181BA11E0")]
		internal LinkedNCancellationTokenSource(params CancellationToken[] tokens)
		{
		}

		[Token(Token = "0x6001235")]
		[Address(RVA = "0x1BA1070", Offset = "0x1B9F670", VA = "0x181BA1070", Slot = "5")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x40009B5")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CancellationTokenSource s_canceledSource;

	[Token(Token = "0x40009B6")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly CancellationTokenSource s_neverCanceledSource;

	[Token(Token = "0x40009B7")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_nLists;

	[Token(Token = "0x40009B8")]
	[FieldOffset(Offset = "0x10")]
	private ManualResetEvent _kernelEvent;

	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x18")]
	private System.Threading.SparselyPopulatedArray<System.Threading.CancellationCallbackInfo>[] _registeredCallbacksLists;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x20")]
	private int _state;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x24")]
	private int _threadIDExecutingCallbacks;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x28")]
	private bool _disposed;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x30")]
	private System.Threading.CancellationCallbackInfo _executingCallback;

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x38")]
	private Timer _timer;

	[Token(Token = "0x40009BF")]
	[FieldOffset(Offset = "0x18")]
	private static readonly TimerCallback s_timerCallback;

	[Token(Token = "0x170001A5")]
	public bool IsCancellationRequested
	{
		[Token(Token = "0x6001214")]
		[Address(RVA = "0x1B96600", Offset = "0x1B94C00", VA = "0x181B96600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	internal bool IsCancellationCompleted
	{
		[Token(Token = "0x6001215")]
		[Address(RVA = "0x1B965E0", Offset = "0x1B94BE0", VA = "0x181B965E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A7")]
	internal bool IsDisposed
	{
		[Token(Token = "0x6001216")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A8")]
	internal int ThreadIDExecutingCallbacks
	{
		[Token(Token = "0x6001217")]
		[Address(RVA = "0x1B96620", Offset = "0x1B94C20", VA = "0x181B96620")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001218")]
		[Address(RVA = "0x1B966A0", Offset = "0x1B94CA0", VA = "0x181B966A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	public CancellationToken Token
	{
		[Token(Token = "0x6001219")]
		[Address(RVA = "0x1B96640", Offset = "0x1B94C40", VA = "0x181B96640")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x170001AA")]
	internal System.Threading.CancellationCallbackInfo ExecutingCallback
	{
		[Token(Token = "0x600121A")]
		[Address(RVA = "0x1A98750", Offset = "0x1A96D50", VA = "0x181A98750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x1B96460", Offset = "0x1B94A60", VA = "0x181B96460")]
	public CancellationTokenSource()
	{
	}

	[Token(Token = "0x600121C")]
	[Address(RVA = "0x1B964A0", Offset = "0x1B94AA0", VA = "0x181B964A0")]
	public CancellationTokenSource(int millisecondsDelay)
	{
	}

	[Token(Token = "0x600121D")]
	[Address(RVA = "0x1B95B10", Offset = "0x1B94110", VA = "0x181B95B10")]
	private void InitializeWithTimer(int millisecondsDelay)
	{
	}

	[Token(Token = "0x600121E")]
	[Address(RVA = "0x1B94E60", Offset = "0x1B93460", VA = "0x181B94E60")]
	public void Cancel()
	{
	}

	[Token(Token = "0x600121F")]
	[Address(RVA = "0x1B94E00", Offset = "0x1B93400", VA = "0x181B94E00")]
	public void Cancel(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x6001220")]
	[Address(RVA = "0x1B94C50", Offset = "0x1B93250", VA = "0x181B94C50")]
	public void CancelAfter(int millisecondsDelay)
	{
	}

	[Token(Token = "0x6001221")]
	[Address(RVA = "0x1B960E0", Offset = "0x1B946E0", VA = "0x181B960E0")]
	private static void TimerCallbackLogic(object obj)
	{
	}

	[Token(Token = "0x6001222")]
	[Address(RVA = "0x1B955A0", Offset = "0x1B93BA0", VA = "0x181B955A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x1B95600", Offset = "0x1B93C00", VA = "0x181B95600", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x1B96030", Offset = "0x1B94630", VA = "0x181B96030")]
	internal void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x1B96080", Offset = "0x1B94680", VA = "0x181B96080")]
	private static void ThrowObjectDisposedException()
	{
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x1B95BD0", Offset = "0x1B941D0", VA = "0x181B95BD0")]
	internal CancellationTokenRegistration InternalRegister(Action<object> callback, object stateForCallback, SynchronizationContext targetSyncContext, ExecutionContext executionContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001227")]
	[Address(RVA = "0x1B95F80", Offset = "0x1B94580", VA = "0x181B95F80")]
	private void NotifyCancellation(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x1B956B0", Offset = "0x1B93CB0", VA = "0x181B956B0")]
	private void ExecuteCallbackHandlers(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x1B94EC0", Offset = "0x1B934C0", VA = "0x181B94EC0")]
	private void CancellationCallbackCoreWork_OnSyncContext(object obj)
	{
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x1B94FD0", Offset = "0x1B935D0", VA = "0x181B94FD0")]
	private void CancellationCallbackCoreWork(System.Threading.CancellationCallbackCoreWorkArguments args)
	{
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x1B95070", Offset = "0x1B93670", VA = "0x181B95070")]
	public static CancellationTokenSource CreateLinkedTokenSource(CancellationToken token1, CancellationToken token2)
	{
		return null;
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x1B954D0", Offset = "0x1B93AD0", VA = "0x181B954D0")]
	internal static CancellationTokenSource CreateLinkedTokenSource(CancellationToken token)
	{
		return null;
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x1B95330", Offset = "0x1B93930", VA = "0x181B95330")]
	public static CancellationTokenSource CreateLinkedTokenSource(params CancellationToken[] tokens)
	{
		return null;
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x1B961D0", Offset = "0x1B947D0", VA = "0x181B961D0")]
	internal void WaitForCallbackToComplete(System.Threading.CancellationCallbackInfo callbackInfo)
	{
	}
}
