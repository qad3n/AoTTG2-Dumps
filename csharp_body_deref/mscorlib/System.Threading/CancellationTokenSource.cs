// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationTokenSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001E1")]
public class CancellationTokenSource : IDisposable
{
	[Token(Token = "0x20001E2")]
	private sealed class Linked1CancellationTokenSource : CancellationTokenSource
	{
		[Token(Token = "0x400096D")]
		[FieldOffset(Offset = "0x40")]
		private readonly CancellationTokenRegistration _reg1;

		[Token(Token = "0x60011D5")]
		[Address(RVA = "0x3D2D210", Offset = "0x3D2D210", VA = "0x3D2D210")]
		internal Linked1CancellationTokenSource(CancellationToken token1)
		{
		}

		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x3D2DB60", Offset = "0x3D2DB60", VA = "0x3D2DB60", Slot = "5")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x20001E3")]
	private sealed class Linked2CancellationTokenSource : CancellationTokenSource
	{
		[Token(Token = "0x400096E")]
		[FieldOffset(Offset = "0x40")]
		private readonly CancellationTokenRegistration _reg1;

		[Token(Token = "0x400096F")]
		[FieldOffset(Offset = "0x58")]
		private readonly CancellationTokenRegistration _reg2;

		[Token(Token = "0x60011D7")]
		[Address(RVA = "0x3D2D360", Offset = "0x3D2D360", VA = "0x3D2D360")]
		internal Linked2CancellationTokenSource(CancellationToken token1, CancellationToken token2)
		{
		}

		[Token(Token = "0x60011D8")]
		[Address(RVA = "0x3D2DB90", Offset = "0x3D2DB90", VA = "0x3D2DB90", Slot = "5")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x20001E4")]
	private sealed class LinkedNCancellationTokenSource : CancellationTokenSource
	{
		[Token(Token = "0x4000970")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly Action<object> s_linkedTokenCancelDelegate;

		[Token(Token = "0x4000971")]
		[FieldOffset(Offset = "0x40")]
		private CancellationTokenRegistration[] _linkingRegistrations;

		[Token(Token = "0x60011D9")]
		[Address(RVA = "0x3D2D760", Offset = "0x3D2D760", VA = "0x3D2D760")]
		internal LinkedNCancellationTokenSource(params CancellationToken[] tokens)
		{
		}

		[Token(Token = "0x60011DA")]
		[Address(RVA = "0x3D2DBD0", Offset = "0x3D2DBD0", VA = "0x3D2DBD0", Slot = "5")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x400095E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CancellationTokenSource s_canceledSource;

	[Token(Token = "0x400095F")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly CancellationTokenSource s_neverCanceledSource;

	[Token(Token = "0x4000960")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_nLists;

	[Token(Token = "0x4000961")]
	[FieldOffset(Offset = "0x10")]
	private ManualResetEvent _kernelEvent;

	[Token(Token = "0x4000962")]
	[FieldOffset(Offset = "0x18")]
	private System.Threading.SparselyPopulatedArray<System.Threading.CancellationCallbackInfo>[] _registeredCallbacksLists;

	[Token(Token = "0x4000963")]
	private const int CannotBeCanceled = 0;

	[Token(Token = "0x4000964")]
	private const int NotCanceledState = 1;

	[Token(Token = "0x4000965")]
	private const int NotifyingState = 2;

	[Token(Token = "0x4000966")]
	private const int NotifyingCompleteState = 3;

	[Token(Token = "0x4000967")]
	[FieldOffset(Offset = "0x20")]
	private int _state;

	[Token(Token = "0x4000968")]
	[FieldOffset(Offset = "0x24")]
	private int _threadIDExecutingCallbacks;

	[Token(Token = "0x4000969")]
	[FieldOffset(Offset = "0x28")]
	private bool _disposed;

	[Token(Token = "0x400096A")]
	[FieldOffset(Offset = "0x30")]
	private System.Threading.CancellationCallbackInfo _executingCallback;

	[Token(Token = "0x400096B")]
	[FieldOffset(Offset = "0x38")]
	private Timer _timer;

	[Token(Token = "0x400096C")]
	[FieldOffset(Offset = "0x18")]
	private static readonly TimerCallback s_timerCallback;

	[Token(Token = "0x170001A3")]
	public bool IsCancellationRequested
	{
		[Token(Token = "0x60011B9")]
		[Address(RVA = "0x3D287D0", Offset = "0x3D287D0", VA = "0x3D287D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A4")]
	internal bool IsCancellationCompleted
	{
		[Token(Token = "0x60011BA")]
		[Address(RVA = "0x3D2BB80", Offset = "0x3D2BB80", VA = "0x3D2BB80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A5")]
	internal bool IsDisposed
	{
		[Token(Token = "0x60011BB")]
		[Address(RVA = "0x3D2BE40", Offset = "0x3D2BE40", VA = "0x3D2BE40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	internal int ThreadIDExecutingCallbacks
	{
		[Token(Token = "0x60011BC")]
		[Address(RVA = "0x3D2BBA0", Offset = "0x3D2BBA0", VA = "0x3D2BBA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011BD")]
		[Address(RVA = "0x3D2BE50", Offset = "0x3D2BE50", VA = "0x3D2BE50")]
		set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public CancellationToken Token
	{
		[Token(Token = "0x60011BE")]
		[Address(RVA = "0x3D2BE70", Offset = "0x3D2BE70", VA = "0x3D2BE70")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x170001A8")]
	internal System.Threading.CancellationCallbackInfo ExecutingCallback
	{
		[Token(Token = "0x60011BF")]
		[Address(RVA = "0x3D2BF10", Offset = "0x3D2BF10", VA = "0x3D2BF10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x3D2BF20", Offset = "0x3D2BF20", VA = "0x3D2BF20")]
	public CancellationTokenSource()
	{
	}

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x3D2BF50", Offset = "0x3D2BF50", VA = "0x3D2BF50")]
	public CancellationTokenSource(int millisecondsDelay)
	{
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x3D2BFD0", Offset = "0x3D2BFD0", VA = "0x3D2BFD0")]
	private void InitializeWithTimer(int millisecondsDelay)
	{
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x3D2C090", Offset = "0x3D2C090", VA = "0x3D2C090")]
	public void Cancel()
	{
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x3D2C0E0", Offset = "0x3D2C0E0", VA = "0x3D2C0E0")]
	public void Cancel(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x3D2C210", Offset = "0x3D2C210", VA = "0x3D2C210")]
	public void CancelAfter(int millisecondsDelay)
	{
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x3D2C470", Offset = "0x3D2C470", VA = "0x3D2C470")]
	private static void TimerCallbackLogic(object obj)
	{
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x3D2C5B0", Offset = "0x3D2C5B0", VA = "0x3D2C5B0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x3D2C620", Offset = "0x3D2C620", VA = "0x3D2C620", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x3D2BED0", Offset = "0x3D2BED0", VA = "0x3D2BED0")]
	internal void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x3D2C6B0", Offset = "0x3D2C6B0", VA = "0x3D2C6B0")]
	private static void ThrowObjectDisposedException()
	{
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x3D28F00", Offset = "0x3D28F00", VA = "0x3D28F00")]
	internal CancellationTokenRegistration InternalRegister(Action<object> callback, object stateForCallback, SynchronizationContext targetSyncContext, ExecutionContext executionContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x3D2C130", Offset = "0x3D2C130", VA = "0x3D2C130")]
	private void NotifyCancellation(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x3D2C800", Offset = "0x3D2C800", VA = "0x3D2C800")]
	private void ExecuteCallbackHandlers(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x3D2CEE0", Offset = "0x3D2CEE0", VA = "0x3D2CEE0")]
	private void CancellationCallbackCoreWork_OnSyncContext(object obj)
	{
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x3D2CE30", Offset = "0x3D2CE30", VA = "0x3D2CE30")]
	private void CancellationCallbackCoreWork(System.Threading.CancellationCallbackCoreWorkArguments args)
	{
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x3D2D0E0", Offset = "0x3D2D0E0", VA = "0x3D2D0E0")]
	public static CancellationTokenSource CreateLinkedTokenSource(CancellationToken token1, CancellationToken token2)
	{
		return null;
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x3D2D540", Offset = "0x3D2D540", VA = "0x3D2D540")]
	internal static CancellationTokenSource CreateLinkedTokenSource(CancellationToken token)
	{
		return null;
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x3D2D610", Offset = "0x3D2D610", VA = "0x3D2D610")]
	public static CancellationTokenSource CreateLinkedTokenSource(params CancellationToken[] tokens)
	{
		return null;
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x3D2BBB0", Offset = "0x3D2BBB0", VA = "0x3D2BBB0")]
	internal void WaitForCallbackToComplete(System.Threading.CancellationCallbackInfo callbackInfo)
	{
	}
}
