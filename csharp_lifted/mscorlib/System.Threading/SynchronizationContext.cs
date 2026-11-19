// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SynchronizationContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000206")]
public class SynchronizationContext
{
	[Token(Token = "0x400097C")]
	[FieldOffset(Offset = "0x10")]
	private System.Threading.SynchronizationContextProperties _props;

	[Token(Token = "0x170001C0")]
	public static SynchronizationContext Current
	{
		[Token(Token = "0x60012B8")]
		[Address(RVA = "0x552C1A0", Offset = "0x552B1A0", VA = "0x552C1A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	internal static SynchronizationContext CurrentNoFlow
	{
		[Token(Token = "0x60012B9")]
		[Address(RVA = "0x5537B20", Offset = "0x5536B20", VA = "0x5537B20")]
		[System.Runtime.CompilerServices.FriendAccessAllowed]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	internal static SynchronizationContext CurrentExplicit
	{
		[Token(Token = "0x60012BC")]
		[Address(RVA = "0x5537DE0", Offset = "0x5536DE0", VA = "0x5537DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x5537790", Offset = "0x5536790", VA = "0x5537790")]
	public SynchronizationContext()
	{
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x55377A0", Offset = "0x55367A0", VA = "0x55377A0")]
	public bool IsWaitNotificationRequired()
	{
		return default(bool);
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x55377B0", Offset = "0x55367B0", VA = "0x55377B0", Slot = "4")]
	public virtual void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x55377D0", Offset = "0x55367D0", VA = "0x55377D0", Slot = "5")]
	public virtual void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x5537840", Offset = "0x5536840", VA = "0x5537840", Slot = "6")]
	public virtual void OperationStarted()
	{
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x5537850", Offset = "0x5536850", VA = "0x5537850", Slot = "7")]
	public virtual void OperationCompleted()
	{
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x5537860", Offset = "0x5536860", VA = "0x5537860", Slot = "8")]
	[CLSCompliant(false)]
	[PrePrepareMethod]
	public virtual int Wait(IntPtr[] waitHandles, bool waitAll, int millisecondsTimeout)
	{
		return default(int);
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x5537930", Offset = "0x5536930", VA = "0x5537930")]
	[PrePrepareMethod]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	[CLSCompliant(false)]
	protected static int WaitHelper(IntPtr[] waitHandles, bool waitAll, int millisecondsTimeout)
	{
		return default(int);
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x55379B0", Offset = "0x55369B0", VA = "0x55379B0")]
	public static void SetSynchronizationContext(SynchronizationContext syncContext)
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x5537AC0", Offset = "0x5536AC0", VA = "0x5537AC0")]
	private static SynchronizationContext GetThreadLocalContext()
	{
		return null;
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x5537DA0", Offset = "0x5536DA0", VA = "0x5537DA0", Slot = "9")]
	public virtual SynchronizationContext CreateCopy()
	{
		return null;
	}
}
