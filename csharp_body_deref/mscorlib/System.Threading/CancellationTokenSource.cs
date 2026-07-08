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
		[Address(RVA = "0x50476F0", Offset = "0x50476F0", VA = "0x50476F0")]
		internal Linked1CancellationTokenSource(CancellationToken token1)
		{
		}

		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x5048040", Offset = "0x5048040", VA = "0x5048040", Slot = "5")]
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
		[Address(RVA = "0x5047840", Offset = "0x5047840", VA = "0x5047840")]
		internal Linked2CancellationTokenSource(CancellationToken token1, CancellationToken token2)
		{
		}

		[Token(Token = "0x60011D8")]
		[Address(RVA = "0x5048070", Offset = "0x5048070", VA = "0x5048070", Slot = "5")]
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
		[Address(RVA = "0x5047C40", Offset = "0x5047C40", VA = "0x5047C40")]
		internal LinkedNCancellationTokenSource(params CancellationToken[] tokens)
		{
		}

		[Token(Token = "0x60011DA")]
		[Address(RVA = "0x50480B0", Offset = "0x50480B0", VA = "0x50480B0", Slot = "5")]
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
		[Address(RVA = "0x5042CB0", Offset = "0x5042CB0", VA = "0x5042CB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A4")]
	internal bool IsCancellationCompleted
	{
		[Token(Token = "0x60011BA")]
		[Address(RVA = "0x5046060", Offset = "0x5046060", VA = "0x5046060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A5")]
	internal bool IsDisposed
	{
		[Token(Token = "0x60011BB")]
		[Address(RVA = "0x5046320", Offset = "0x5046320", VA = "0x5046320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	internal int ThreadIDExecutingCallbacks
	{
		[Token(Token = "0x60011BC")]
		[Address(RVA = "0x5046080", Offset = "0x5046080", VA = "0x5046080")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011BD")]
		[Address(RVA = "0x5046330", Offset = "0x5046330", VA = "0x5046330")]
		set
		{
		}
	}

	[Token(Token = "0x170001A7")]
	public CancellationToken Token
	{
		[Token(Token = "0x60011BE")]
		[Address(RVA = "0x5046350", Offset = "0x5046350", VA = "0x5046350")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x170001A8")]
	internal System.Threading.CancellationCallbackInfo ExecutingCallback
	{
		[Token(Token = "0x60011BF")]
		[Address(RVA = "0x50463F0", Offset = "0x50463F0", VA = "0x50463F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x5046400", Offset = "0x5046400", VA = "0x5046400")]
	public CancellationTokenSource()
	{
	}

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x5046430", Offset = "0x5046430", VA = "0x5046430")]
	public CancellationTokenSource(int millisecondsDelay)
	{
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x50464B0", Offset = "0x50464B0", VA = "0x50464B0")]
	private void InitializeWithTimer(int millisecondsDelay)
	{
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x5046570", Offset = "0x5046570", VA = "0x5046570")]
	public void Cancel()
	{
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x50465C0", Offset = "0x50465C0", VA = "0x50465C0")]
	public void Cancel(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x50466F0", Offset = "0x50466F0", VA = "0x50466F0")]
	public void CancelAfter(int millisecondsDelay)
	{
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x5046950", Offset = "0x5046950", VA = "0x5046950")]
	private static void TimerCallbackLogic(object obj)
	{
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x5046A90", Offset = "0x5046A90", VA = "0x5046A90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x5046B00", Offset = "0x5046B00", VA = "0x5046B00", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x50463B0", Offset = "0x50463B0", VA = "0x50463B0")]
	internal void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x5046B90", Offset = "0x5046B90", VA = "0x5046B90")]
	private static void ThrowObjectDisposedException()
	{
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x50433E0", Offset = "0x50433E0", VA = "0x50433E0")]
	internal CancellationTokenRegistration InternalRegister(Action<object> callback, object stateForCallback, SynchronizationContext targetSyncContext, ExecutionContext executionContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x5046610", Offset = "0x5046610", VA = "0x5046610")]
	private void NotifyCancellation(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x5046CE0", Offset = "0x5046CE0", VA = "0x5046CE0")]
	private void ExecuteCallbackHandlers(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x50473C0", Offset = "0x50473C0", VA = "0x50473C0")]
	private void CancellationCallbackCoreWork_OnSyncContext(object obj)
	{
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x5047310", Offset = "0x5047310", VA = "0x5047310")]
	private void CancellationCallbackCoreWork(System.Threading.CancellationCallbackCoreWorkArguments args)
	{
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x50475C0", Offset = "0x50475C0", VA = "0x50475C0")]
	public static CancellationTokenSource CreateLinkedTokenSource(CancellationToken token1, CancellationToken token2)
	{
		return null;
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x5047A20", Offset = "0x5047A20", VA = "0x5047A20")]
	internal static CancellationTokenSource CreateLinkedTokenSource(CancellationToken token)
	{
		return null;
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x5047AF0", Offset = "0x5047AF0", VA = "0x5047AF0")]
	public static CancellationTokenSource CreateLinkedTokenSource(params CancellationToken[] tokens)
	{
		return null;
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x5046090", Offset = "0x5046090", VA = "0x5046090")]
	internal void WaitForCallbackToComplete(System.Threading.CancellationCallbackInfo callbackInfo)
	{
	}
}
