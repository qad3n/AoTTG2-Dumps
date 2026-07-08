using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001FD")]
public class SynchronizationContext
{
	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x10")]
	private System.Threading.SynchronizationContextProperties _props;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x0")]
	private static Type s_cachedPreparedType1;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x8")]
	private static Type s_cachedPreparedType2;

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x10")]
	private static Type s_cachedPreparedType3;

	[Token(Token = "0x40009BF")]
	[FieldOffset(Offset = "0x18")]
	private static Type s_cachedPreparedType4;

	[Token(Token = "0x40009C0")]
	[FieldOffset(Offset = "0x20")]
	private static Type s_cachedPreparedType5;

	[Token(Token = "0x170001BD")]
	public static SynchronizationContext Current
	{
		[Token(Token = "0x6001270")]
		[Address(RVA = "0x50432C0", Offset = "0x50432C0", VA = "0x50432C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BE")]
	internal static SynchronizationContext CurrentNoFlow
	{
		[Token(Token = "0x6001271")]
		[Address(RVA = "0x504F1F0", Offset = "0x504F1F0", VA = "0x504F1F0")]
		[System.Runtime.CompilerServices.FriendAccessAllowed]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	internal static SynchronizationContext CurrentExplicit
	{
		[Token(Token = "0x6001274")]
		[Address(RVA = "0x504F4B0", Offset = "0x504F4B0", VA = "0x504F4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x504EEE0", Offset = "0x504EEE0", VA = "0x504EEE0")]
	public SynchronizationContext()
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x504EEF0", Offset = "0x504EEF0", VA = "0x504EEF0")]
	public bool IsWaitNotificationRequired()
	{
		return default(bool);
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x504EF00", Offset = "0x504EF00", VA = "0x504EF00", Slot = "4")]
	public virtual void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x504EF20", Offset = "0x504EF20", VA = "0x504EF20", Slot = "5")]
	public virtual void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x504EF90", Offset = "0x504EF90", VA = "0x504EF90", Slot = "6")]
	public virtual void OperationStarted()
	{
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x504EFA0", Offset = "0x504EFA0", VA = "0x504EFA0", Slot = "7")]
	public virtual void OperationCompleted()
	{
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x504EFB0", Offset = "0x504EFB0", VA = "0x504EFB0", Slot = "8")]
	[PrePrepareMethod]
	[CLSCompliant(false)]
	public virtual int Wait(IntPtr[] waitHandles, bool waitAll, int millisecondsTimeout)
	{
		return default(int);
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x504F070", Offset = "0x504F070", VA = "0x504F070")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	[CLSCompliant(false)]
	[PrePrepareMethod]
	protected static int WaitHelper(IntPtr[] waitHandles, bool waitAll, int millisecondsTimeout)
	{
		return default(int);
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x504F0F0", Offset = "0x504F0F0", VA = "0x504F0F0")]
	public static void SetSynchronizationContext(SynchronizationContext syncContext)
	{
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x504F190", Offset = "0x504F190", VA = "0x504F190")]
	private static SynchronizationContext GetThreadLocalContext()
	{
		return null;
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x504F470", Offset = "0x504F470", VA = "0x504F470", Slot = "9")]
	public virtual SynchronizationContext CreateCopy()
	{
		return null;
	}
}
