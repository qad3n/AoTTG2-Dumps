// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationTokenSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001E4")]
public class CancellationTokenSource : IDisposable
{
	[Token(Token = "0x20001E5")]
	private sealed class Linked1CancellationTokenSource : CancellationTokenSource
	{
		[Token(Token = "0x400091E")]
		[FieldOffset(Offset = "0x40")]
		private readonly CancellationTokenRegistration _reg1;

		[Token(Token = "0x6001207")]
		[Address(RVA = "0x5530430", Offset = "0x552F430", VA = "0x5530430")]
		internal Linked1CancellationTokenSource(CancellationToken token1)
		{
		}

		[Token(Token = "0x6001208")]
		[Address(RVA = "0x5530D40", Offset = "0x552FD40", VA = "0x5530D40", Slot = "5")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x20001E6")]
	private sealed class Linked2CancellationTokenSource : CancellationTokenSource
	{
		[Token(Token = "0x400091F")]
		[FieldOffset(Offset = "0x40")]
		private readonly CancellationTokenRegistration _reg1;

		[Token(Token = "0x4000920")]
		[FieldOffset(Offset = "0x58")]
		private readonly CancellationTokenRegistration _reg2;

		[Token(Token = "0x6001209")]
		[Address(RVA = "0x5530580", Offset = "0x552F580", VA = "0x5530580")]
		internal Linked2CancellationTokenSource(CancellationToken token1, CancellationToken token2)
		{
		}

		[Token(Token = "0x600120A")]
		[Address(RVA = "0x5530D70", Offset = "0x552FD70", VA = "0x5530D70", Slot = "5")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x20001E7")]
	private sealed class LinkedNCancellationTokenSource : CancellationTokenSource
	{
		[Token(Token = "0x4000921")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly Action<object> s_linkedTokenCancelDelegate;

		[Token(Token = "0x4000922")]
		[FieldOffset(Offset = "0x40")]
		private CancellationTokenRegistration[] _linkingRegistrations;

		[Token(Token = "0x600120B")]
		[Address(RVA = "0x5530980", Offset = "0x552F980", VA = "0x5530980")]
		internal LinkedNCancellationTokenSource(params CancellationToken[] tokens)
		{
		}

		[Token(Token = "0x600120C")]
		[Address(RVA = "0x5530DA0", Offset = "0x552FDA0", VA = "0x5530DA0", Slot = "5")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x4000913")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CancellationTokenSource s_canceledSource;

	[Token(Token = "0x4000914")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly CancellationTokenSource s_neverCanceledSource;

	[Token(Token = "0x4000915")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_nLists;

	[Token(Token = "0x4000916")]
	[FieldOffset(Offset = "0x10")]
	private ManualResetEvent _kernelEvent;

	[Token(Token = "0x4000917")]
	[FieldOffset(Offset = "0x18")]
	private System.Threading.SparselyPopulatedArray<System.Threading.CancellationCallbackInfo>[] _registeredCallbacksLists;

	[Token(Token = "0x4000918")]
	[FieldOffset(Offset = "0x20")]
	private int _state;

	[Token(Token = "0x4000919")]
	[FieldOffset(Offset = "0x24")]
	private int _threadIDExecutingCallbacks;

	[Token(Token = "0x400091A")]
	[FieldOffset(Offset = "0x28")]
	private bool _disposed;

	[Token(Token = "0x400091B")]
	[FieldOffset(Offset = "0x30")]
	private System.Threading.CancellationCallbackInfo _executingCallback;

	[Token(Token = "0x400091C")]
	[FieldOffset(Offset = "0x38")]
	private Timer _timer;

	[Token(Token = "0x400091D")]
	[FieldOffset(Offset = "0x18")]
	private static readonly TimerCallback s_timerCallback;

	[Token(Token = "0x170001A4")]
	public bool IsCancellationRequested
	{
		[Token(Token = "0x60011EB")]
		[Address(RVA = "0x552BB90", Offset = "0x552AB90", VA = "0x552BB90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A5")]
	internal bool IsCancellationCompleted
	{
		[Token(Token = "0x60011EC")]
		[Address(RVA = "0x552EDC0", Offset = "0x552DDC0", VA = "0x552EDC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	internal bool IsDisposed
	{
		[Token(Token = "0x60011ED")]
		[Address(RVA = "0x552F060", Offset = "0x552E060", VA = "0x552F060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A7")]
	internal int ThreadIDExecutingCallbacks
	{
		[Token(Token = "0x60011EE")]
		[Address(RVA = "0x552EDE0", Offset = "0x552DDE0", VA = "0x552EDE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011EF")]
		[Address(RVA = "0x552F070", Offset = "0x552E070", VA = "0x552F070")]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	public CancellationToken Token
	{
		[Token(Token = "0x60011F0")]
		[Address(RVA = "0x552F090", Offset = "0x552E090", VA = "0x552F090")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x170001A9")]
	internal System.Threading.CancellationCallbackInfo ExecutingCallback
	{
		[Token(Token = "0x60011F1")]
		[Address(RVA = "0x552F150", Offset = "0x552E150", VA = "0x552F150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x552F160", Offset = "0x552E160", VA = "0x552F160")]
	public CancellationTokenSource()
	{
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x552F190", Offset = "0x552E190", VA = "0x552F190")]
	public CancellationTokenSource(int millisecondsDelay)
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x552F210", Offset = "0x552E210", VA = "0x552F210")]
	private void InitializeWithTimer(int millisecondsDelay)
	{
	}

	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x552F2D0", Offset = "0x552E2D0", VA = "0x552F2D0")]
	public void Cancel()
	{
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x552F2F0", Offset = "0x552E2F0", VA = "0x552F2F0")]
	public void Cancel(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x552F3F0", Offset = "0x552E3F0", VA = "0x552F3F0")]
	public void CancelAfter(int millisecondsDelay)
	{
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x552F670", Offset = "0x552E670", VA = "0x552F670")]
	private static void TimerCallbackLogic(object obj)
	{
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x552F770", Offset = "0x552E770", VA = "0x552F770", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x552F7E0", Offset = "0x552E7E0", VA = "0x552F7E0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x552F0C0", Offset = "0x552E0C0", VA = "0x552F0C0")]
	internal void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x552F870", Offset = "0x552E870", VA = "0x552F870")]
	private static void ThrowObjectDisposedException()
	{
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x552C2C0", Offset = "0x552B2C0", VA = "0x552C2C0")]
	internal CancellationTokenRegistration InternalRegister(Action<object> callback, object stateForCallback, SynchronizationContext targetSyncContext, ExecutionContext executionContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x552F310", Offset = "0x552E310", VA = "0x552F310")]
	private void NotifyCancellation(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x552F9C0", Offset = "0x552E9C0", VA = "0x552F9C0")]
	private void ExecuteCallbackHandlers(bool throwOnFirstException)
	{
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x5530100", Offset = "0x552F100", VA = "0x5530100")]
	private void CancellationCallbackCoreWork_OnSyncContext(object obj)
	{
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x5530050", Offset = "0x552F050", VA = "0x5530050")]
	private void CancellationCallbackCoreWork(System.Threading.CancellationCallbackCoreWorkArguments args)
	{
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x5530300", Offset = "0x552F300", VA = "0x5530300")]
	public static CancellationTokenSource CreateLinkedTokenSource(CancellationToken token1, CancellationToken token2)
	{
		return null;
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x5530760", Offset = "0x552F760", VA = "0x5530760")]
	internal static CancellationTokenSource CreateLinkedTokenSource(CancellationToken token)
	{
		return null;
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x5530830", Offset = "0x552F830", VA = "0x5530830")]
	public static CancellationTokenSource CreateLinkedTokenSource(params CancellationToken[] tokens)
	{
		return null;
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x552EDF0", Offset = "0x552DDF0", VA = "0x552EDF0")]
	internal void WaitForCallbackToComplete(System.Threading.CancellationCallbackInfo callbackInfo)
	{
	}
}
