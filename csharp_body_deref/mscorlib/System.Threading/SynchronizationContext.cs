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
		[Address(RVA = "0x3D28DE0", Offset = "0x3D28DE0", VA = "0x3D28DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BE")]
	internal static SynchronizationContext CurrentNoFlow
	{
		[Token(Token = "0x6001271")]
		[Address(RVA = "0x3D34D10", Offset = "0x3D34D10", VA = "0x3D34D10")]
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
		[Address(RVA = "0x3D34FD0", Offset = "0x3D34FD0", VA = "0x3D34FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x3D34A00", Offset = "0x3D34A00", VA = "0x3D34A00")]
	public SynchronizationContext()
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x3D34A10", Offset = "0x3D34A10", VA = "0x3D34A10")]
	public bool IsWaitNotificationRequired()
	{
		return default(bool);
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x3D34A20", Offset = "0x3D34A20", VA = "0x3D34A20", Slot = "4")]
	public virtual void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x3D34A40", Offset = "0x3D34A40", VA = "0x3D34A40", Slot = "5")]
	public virtual void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x3D34AB0", Offset = "0x3D34AB0", VA = "0x3D34AB0", Slot = "6")]
	public virtual void OperationStarted()
	{
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x3D34AC0", Offset = "0x3D34AC0", VA = "0x3D34AC0", Slot = "7")]
	public virtual void OperationCompleted()
	{
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x3D34AD0", Offset = "0x3D34AD0", VA = "0x3D34AD0", Slot = "8")]
	[PrePrepareMethod]
	[CLSCompliant(false)]
	public virtual int Wait(IntPtr[] waitHandles, bool waitAll, int millisecondsTimeout)
	{
		return default(int);
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x3D34B90", Offset = "0x3D34B90", VA = "0x3D34B90")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	[CLSCompliant(false)]
	[PrePrepareMethod]
	protected static int WaitHelper(IntPtr[] waitHandles, bool waitAll, int millisecondsTimeout)
	{
		return default(int);
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x3D34C10", Offset = "0x3D34C10", VA = "0x3D34C10")]
	public static void SetSynchronizationContext(SynchronizationContext syncContext)
	{
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x3D34CB0", Offset = "0x3D34CB0", VA = "0x3D34CB0")]
	private static SynchronizationContext GetThreadLocalContext()
	{
		return null;
	}

	[Token(Token = "0x6001273")]
	[Address(RVA = "0x3D34F90", Offset = "0x3D34F90", VA = "0x3D34F90", Slot = "9")]
	public virtual SynchronizationContext CreateCopy()
	{
		return null;
	}
}
